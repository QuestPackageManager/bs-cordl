#pragma once
// IWYU pragma private; include "System\Xml\Schema\XsdBuilder.hpp"
#include "System/Xml/Schema/zzzz__SchemaBuilder_impl.hpp"
#include "System/Xml/Schema/zzzz__SchemaNames_impl.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_impl.hpp"
#include "System/Xml/zzzz__XmlNode_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__XsdBuilder_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__Stack_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaNames_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventHandler_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAll_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotation_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnyAttribute_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAny_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAppInfo_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAttributeGroupRef_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAttributeGroup_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAttribute_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaChoice_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaComplexContentExtension_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaComplexContentRestriction_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaComplexContent_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaComplexType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDocumentation_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaElement_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaException_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaFacet_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaGroupRef_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaGroup_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaIdentityConstraint_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaImport_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaInclude_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaNotation_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObject_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaRedefine_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSequence_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleContentExtension_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleContentRestriction_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleContent_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleTypeList_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleTypeRestriction_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleTypeUnion_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaXPath_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSeverityType_def.hpp"
#include "System/Xml/Schema/zzzz__XsdBuilder_def.hpp"
#include "System/Xml/zzzz__HWStack_def.hpp"
#include "System/Xml/zzzz__PositionInfo_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XsdBuilder_State::XsdBuilder_State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XsdBuilder_State::XsdBuilder_State() {}
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::Root{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::Schema{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::Annotation{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::Include{ static_cast<int32_t>(0x3) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::Import{ static_cast<int32_t>(0x4) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::Element{ static_cast<int32_t>(0x5) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::Attribute{ static_cast<int32_t>(0x6) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::AttributeGroup{ static_cast<int32_t>(0x7) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::AttributeGroupRef{ static_cast<int32_t>(0x8) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::AnyAttribute{ static_cast<int32_t>(0x9) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::Group{ static_cast<int32_t>(0xa) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::GroupRef{ static_cast<int32_t>(0xb) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::All{ static_cast<int32_t>(0xc) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::Choice{ static_cast<int32_t>(0xd) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::Sequence{ static_cast<int32_t>(0xe) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::Any{ static_cast<int32_t>(0xf) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::Notation{ static_cast<int32_t>(0x10) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::SimpleType{ static_cast<int32_t>(0x11) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::ComplexType{ static_cast<int32_t>(0x12) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::ComplexContent{ static_cast<int32_t>(0x13) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::ComplexContentRestriction{ static_cast<int32_t>(0x14) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::ComplexContentExtension{ static_cast<int32_t>(0x15) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::SimpleContent{ static_cast<int32_t>(0x16) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::SimpleContentExtension{ static_cast<int32_t>(0x17) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::SimpleContentRestriction{ static_cast<int32_t>(0x18) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::SimpleTypeUnion{ static_cast<int32_t>(0x19) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::SimpleTypeList{ static_cast<int32_t>(0x1a) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::SimpleTypeRestriction{ static_cast<int32_t>(0x1b) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::Unique{ static_cast<int32_t>(0x1c) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::Key{ static_cast<int32_t>(0x1d) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::KeyRef{ static_cast<int32_t>(0x1e) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::Selector{ static_cast<int32_t>(0x1f) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::Field{ static_cast<int32_t>(0x20) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::MinExclusive{ static_cast<int32_t>(0x21) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::MinInclusive{ static_cast<int32_t>(0x22) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::MaxExclusive{ static_cast<int32_t>(0x23) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::MaxInclusive{ static_cast<int32_t>(0x24) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::TotalDigits{ static_cast<int32_t>(0x25) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::FractionDigits{ static_cast<int32_t>(0x26) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::Length{ static_cast<int32_t>(0x27) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::MinLength{ static_cast<int32_t>(0x28) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::MaxLength{ static_cast<int32_t>(0x29) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::Enumeration{ static_cast<int32_t>(0x2a) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::Pattern{ static_cast<int32_t>(0x2b) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::WhiteSpace{ static_cast<int32_t>(0x2c) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::AppInfo{ static_cast<int32_t>(0x2d) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::Documentation{ static_cast<int32_t>(0x2e) };
constexpr ::System::Xml::Schema::XsdBuilder_State System::Xml::Schema::XsdBuilder_State::Redefine{ static_cast<int32_t>(0x2f) };
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder_XsdBuildFunction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdBuilder_XsdBuildFunction::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Xml::Schema::XsdBuilder_XsdBuildFunction::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x626c6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder_XsdBuildFunction*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder_XsdBuildFunction.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdBuilder_XsdBuildFunction::*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder_XsdBuildFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x626c72c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder_XsdBuildFunction*>(), { ::i2c::class_of<::System::Xml::Schema::XsdBuilder_XsdBuildFunction*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XsdBuilder_XsdBuildFunction::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder_XsdBuildFunction*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Xml::Schema::XsdBuilder_XsdBuildFunction::Invoke(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XsdBuilder_XsdBuildFunction*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, builder, value);
}
inline ::System::Xml::Schema::XsdBuilder_XsdBuildFunction* System::Xml::Schema::XsdBuilder_XsdBuildFunction::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XsdBuilder_XsdBuildFunction*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XsdBuilder_XsdBuildFunction::XsdBuilder_XsdBuildFunction() {}
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder_XsdInitFunction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdBuilder_XsdInitFunction::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Xml::Schema::XsdBuilder_XsdInitFunction::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x626c740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder_XsdInitFunction*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder_XsdInitFunction.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdBuilder_XsdInitFunction::*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder_XsdInitFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x626c7c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder_XsdInitFunction*>(), { ::i2c::class_of<::System::Xml::Schema::XsdBuilder_XsdInitFunction*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XsdBuilder_XsdInitFunction::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder_XsdInitFunction*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Xml::Schema::XsdBuilder_XsdInitFunction::Invoke(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XsdBuilder_XsdInitFunction*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, builder, value);
}
inline ::System::Xml::Schema::XsdBuilder_XsdInitFunction* System::Xml::Schema::XsdBuilder_XsdInitFunction::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XsdBuilder_XsdInitFunction*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XsdBuilder_XsdInitFunction::XsdBuilder_XsdInitFunction() {}
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder_XsdEndChildFunction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdBuilder_XsdEndChildFunction::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Xml::Schema::XsdBuilder_XsdEndChildFunction::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x626c7d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder_XsdEndChildFunction*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder_XsdEndChildFunction.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdBuilder_XsdEndChildFunction::*)(::System::Xml::Schema::XsdBuilder*)>(
    &::System::Xml::Schema::XsdBuilder_XsdEndChildFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x626c850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder_XsdEndChildFunction*>(),
                                                                                          { ::i2c::class_of<::System::Xml::Schema::XsdBuilder_XsdEndChildFunction*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XsdBuilder_XsdEndChildFunction::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder_XsdEndChildFunction*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Xml::Schema::XsdBuilder_XsdEndChildFunction::Invoke(::System::Xml::Schema::XsdBuilder* builder) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XsdBuilder_XsdEndChildFunction*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, builder);
}
inline ::System::Xml::Schema::XsdBuilder_XsdEndChildFunction* System::Xml::Schema::XsdBuilder_XsdEndChildFunction::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XsdBuilder_XsdEndChildFunction*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XsdBuilder_XsdEndChildFunction::XsdBuilder_XsdEndChildFunction() {}
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder_XsdAttributeEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdBuilder_XsdAttributeEntry::*)(
    ::System::Xml::Schema::SchemaNames_Token, ::System::Xml::Schema::XsdBuilder_XsdBuildFunction*)>(&::System::Xml::Schema::XsdBuilder_XsdAttributeEntry::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x626c864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaNames_Token>(), ::i2c::type_of<::System::Xml::Schema::XsdBuilder_XsdBuildFunction*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::SchemaNames_Token& System::Xml::Schema::XsdBuilder_XsdAttributeEntry::__cordl_internal_get_Attribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Attribute;
}
constexpr ::System::Xml::Schema::SchemaNames_Token const& System::Xml::Schema::XsdBuilder_XsdAttributeEntry::__cordl_internal_get_Attribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Attribute;
}
constexpr void System::Xml::Schema::XsdBuilder_XsdAttributeEntry::__cordl_internal_set_Attribute(::System::Xml::Schema::SchemaNames_Token value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Attribute = value;
}
constexpr ::System::Xml::Schema::XsdBuilder_XsdBuildFunction*& System::Xml::Schema::XsdBuilder_XsdAttributeEntry::__cordl_internal_get_BuildFunc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BuildFunc;
}
constexpr ::System::Xml::Schema::XsdBuilder_XsdBuildFunction* const& System::Xml::Schema::XsdBuilder_XsdAttributeEntry::__cordl_internal_get_BuildFunc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BuildFunc;
}
constexpr void System::Xml::Schema::XsdBuilder_XsdAttributeEntry::__cordl_internal_set_BuildFunc(::System::Xml::Schema::XsdBuilder_XsdBuildFunction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___BuildFunc = value;
}
inline void System::Xml::Schema::XsdBuilder_XsdAttributeEntry::_ctor(::System::Xml::Schema::SchemaNames_Token a, ::System::Xml::Schema::XsdBuilder_XsdBuildFunction* build) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaNames_Token>(), ::i2c::type_of<::System::Xml::Schema::XsdBuilder_XsdBuildFunction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, build);
}
inline ::System::Xml::Schema::XsdBuilder_XsdAttributeEntry* System::Xml::Schema::XsdBuilder_XsdAttributeEntry::New_ctor(::System::Xml::Schema::SchemaNames_Token a,
                                                                                                                        ::System::Xml::Schema::XsdBuilder_XsdBuildFunction* build) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>(a, build));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XsdBuilder_XsdAttributeEntry::XsdBuilder_XsdAttributeEntry() {}
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder_XsdEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdBuilder_XsdEntry::*)(
    ::System::Xml::Schema::SchemaNames_Token, ::System::Xml::Schema::XsdBuilder_State, ::ArrayW<::System::Xml::Schema::XsdBuilder_State>,
    ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, ::System::Xml::Schema::XsdBuilder_XsdInitFunction*, ::System::Xml::Schema::XsdBuilder_XsdEndChildFunction*, bool)>(
    &::System::Xml::Schema::XsdBuilder_XsdEntry::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x626c870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder_XsdEntry*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::System::Xml::Schema::SchemaNames_Token>(), ::i2c::type_of<::System::Xml::Schema::XsdBuilder_State>(),
                                             ::i2c::type_of<::ArrayW<::System::Xml::Schema::XsdBuilder_State>>(), ::i2c::type_of<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(),
                                             ::i2c::type_of<::System::Xml::Schema::XsdBuilder_XsdInitFunction*>(), ::i2c::type_of<::System::Xml::Schema::XsdBuilder_XsdEndChildFunction*>(),
                                             ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::SchemaNames_Token& System::Xml::Schema::XsdBuilder_XsdEntry::__cordl_internal_get_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr ::System::Xml::Schema::SchemaNames_Token const& System::Xml::Schema::XsdBuilder_XsdEntry::__cordl_internal_get_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr void System::Xml::Schema::XsdBuilder_XsdEntry::__cordl_internal_set_Name(::System::Xml::Schema::SchemaNames_Token value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Name = value;
}
constexpr ::System::Xml::Schema::XsdBuilder_State& System::Xml::Schema::XsdBuilder_XsdEntry::__cordl_internal_get_CurrentState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurrentState;
}
constexpr ::System::Xml::Schema::XsdBuilder_State const& System::Xml::Schema::XsdBuilder_XsdEntry::__cordl_internal_get_CurrentState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurrentState;
}
constexpr void System::Xml::Schema::XsdBuilder_XsdEntry::__cordl_internal_set_CurrentState(::System::Xml::Schema::XsdBuilder_State value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CurrentState = value;
}
constexpr ::ArrayW<::System::Xml::Schema::XsdBuilder_State>& System::Xml::Schema::XsdBuilder_XsdEntry::__cordl_internal_get_NextStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NextStates;
}
constexpr ::ArrayW<::System::Xml::Schema::XsdBuilder_State> const& System::Xml::Schema::XsdBuilder_XsdEntry::__cordl_internal_get_NextStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NextStates;
}
constexpr void System::Xml::Schema::XsdBuilder_XsdEntry::__cordl_internal_set_NextStates(::ArrayW<::System::Xml::Schema::XsdBuilder_State> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NextStates = value;
}
constexpr ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>& System::Xml::Schema::XsdBuilder_XsdEntry::__cordl_internal_get_Attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Attributes;
}
constexpr ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> const& System::Xml::Schema::XsdBuilder_XsdEntry::__cordl_internal_get_Attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Attributes;
}
constexpr void System::Xml::Schema::XsdBuilder_XsdEntry::__cordl_internal_set_Attributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Attributes = value;
}
constexpr ::System::Xml::Schema::XsdBuilder_XsdInitFunction*& System::Xml::Schema::XsdBuilder_XsdEntry::__cordl_internal_get_InitFunc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InitFunc;
}
constexpr ::System::Xml::Schema::XsdBuilder_XsdInitFunction* const& System::Xml::Schema::XsdBuilder_XsdEntry::__cordl_internal_get_InitFunc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InitFunc;
}
constexpr void System::Xml::Schema::XsdBuilder_XsdEntry::__cordl_internal_set_InitFunc(::System::Xml::Schema::XsdBuilder_XsdInitFunction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InitFunc = value;
}
constexpr ::System::Xml::Schema::XsdBuilder_XsdEndChildFunction*& System::Xml::Schema::XsdBuilder_XsdEntry::__cordl_internal_get_EndChildFunc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EndChildFunc;
}
constexpr ::System::Xml::Schema::XsdBuilder_XsdEndChildFunction* const& System::Xml::Schema::XsdBuilder_XsdEntry::__cordl_internal_get_EndChildFunc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EndChildFunc;
}
constexpr void System::Xml::Schema::XsdBuilder_XsdEntry::__cordl_internal_set_EndChildFunc(::System::Xml::Schema::XsdBuilder_XsdEndChildFunction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EndChildFunc = value;
}
constexpr bool& System::Xml::Schema::XsdBuilder_XsdEntry::__cordl_internal_get_ParseContent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ParseContent;
}
constexpr bool const& System::Xml::Schema::XsdBuilder_XsdEntry::__cordl_internal_get_ParseContent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ParseContent;
}
constexpr void System::Xml::Schema::XsdBuilder_XsdEntry::__cordl_internal_set_ParseContent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ParseContent = value;
}
inline void System::Xml::Schema::XsdBuilder_XsdEntry::_ctor(::System::Xml::Schema::SchemaNames_Token n, ::System::Xml::Schema::XsdBuilder_State state,
                                                            ::ArrayW<::System::Xml::Schema::XsdBuilder_State> nextStates, ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> attributes,
                                                            ::System::Xml::Schema::XsdBuilder_XsdInitFunction* init, ::System::Xml::Schema::XsdBuilder_XsdEndChildFunction* end, bool parseContent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder_XsdEntry*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::System::Xml::Schema::SchemaNames_Token>(), ::i2c::type_of<::System::Xml::Schema::XsdBuilder_State>(),
                                                  ::i2c::type_of<::ArrayW<::System::Xml::Schema::XsdBuilder_State>>(), ::i2c::type_of<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(),
                                                  ::i2c::type_of<::System::Xml::Schema::XsdBuilder_XsdInitFunction*>(), ::i2c::type_of<::System::Xml::Schema::XsdBuilder_XsdEndChildFunction*>(),
                                                  ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n, state, nextStates, attributes, init, end, parseContent);
}
inline ::System::Xml::Schema::XsdBuilder_XsdEntry* System::Xml::Schema::XsdBuilder_XsdEntry::New_ctor(::System::Xml::Schema::SchemaNames_Token n, ::System::Xml::Schema::XsdBuilder_State state,
                                                                                                      ::ArrayW<::System::Xml::Schema::XsdBuilder_State> nextStates,
                                                                                                      ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> attributes,
                                                                                                      ::System::Xml::Schema::XsdBuilder_XsdInitFunction* init,
                                                                                                      ::System::Xml::Schema::XsdBuilder_XsdEndChildFunction* end, bool parseContent) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XsdBuilder_XsdEntry*>(n, state, nextStates, attributes, init, end, parseContent));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XsdBuilder_XsdEntry::XsdBuilder_XsdEntry() {}
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder_BuilderNamespaceManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdBuilder_BuilderNamespaceManager::*)(::System::Xml::XmlNamespaceManager*, ::System::Xml::XmlReader*)>(
    &::System::Xml::Schema::XsdBuilder_BuilderNamespaceManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x626c884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder_BuilderNamespaceManager*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(), ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder_BuilderNamespaceManager.LookupNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XsdBuilder_BuilderNamespaceManager::*)(::StringW)>(
    &::System::Xml::Schema::XsdBuilder_BuilderNamespaceManager::LookupNamespace)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x626c88c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder_BuilderNamespaceManager*>(),
                                                                                          { ::i2c::class_of<::System::Xml::Schema::XsdBuilder_BuilderNamespaceManager*>(), 16 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlNamespaceManager*& System::Xml::Schema::XsdBuilder_BuilderNamespaceManager::__cordl_internal_get_nsMgr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsMgr;
}
constexpr ::System::Xml::XmlNamespaceManager* const& System::Xml::Schema::XsdBuilder_BuilderNamespaceManager::__cordl_internal_get_nsMgr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsMgr;
}
constexpr void System::Xml::Schema::XsdBuilder_BuilderNamespaceManager::__cordl_internal_set_nsMgr(::System::Xml::XmlNamespaceManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nsMgr = value;
}
constexpr ::System::Xml::XmlReader*& System::Xml::Schema::XsdBuilder_BuilderNamespaceManager::__cordl_internal_get_reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr ::System::Xml::XmlReader* const& System::Xml::Schema::XsdBuilder_BuilderNamespaceManager::__cordl_internal_get_reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr void System::Xml::Schema::XsdBuilder_BuilderNamespaceManager::__cordl_internal_set_reader(::System::Xml::XmlReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reader = value;
}
inline void System::Xml::Schema::XsdBuilder_BuilderNamespaceManager::_ctor(::System::Xml::XmlNamespaceManager* nsMgr, ::System::Xml::XmlReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder_BuilderNamespaceManager*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(), ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nsMgr, reader);
}
inline ::StringW System::Xml::Schema::XsdBuilder_BuilderNamespaceManager::LookupNamespace(::StringW prefix) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XsdBuilder_BuilderNamespaceManager*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, prefix);
}
inline ::System::Xml::Schema::XsdBuilder_BuilderNamespaceManager* System::Xml::Schema::XsdBuilder_BuilderNamespaceManager::New_ctor(::System::Xml::XmlNamespaceManager* nsMgr,
                                                                                                                                    ::System::Xml::XmlReader* reader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XsdBuilder_BuilderNamespaceManager*>(nsMgr, reader));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XsdBuilder_BuilderNamespaceManager::XsdBuilder_BuilderNamespaceManager() {}
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::System::Xml::Schema::XsdBuilder::*)(::System::Xml::XmlReader*, ::System::Xml::XmlNamespaceManager*, ::System::Xml::Schema::XmlSchema*, ::System::Xml::XmlNameTable*,
                                                            ::System::Xml::Schema::SchemaNames*, ::System::Xml::Schema::ValidationEventHandler*)>(&::System::Xml::Schema::XsdBuilder::_ctor)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6261fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(),
                                                                 ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<::System::Xml::XmlNameTable*>(),
                                                                 ::i2c::type_of<::System::Xml::Schema::SchemaNames*>(), ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.ProcessElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XsdBuilder::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::Schema::XsdBuilder::ProcessElement)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6262168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { ::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.ProcessAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::System::Xml::Schema::XsdBuilder::ProcessAttribute)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x6262630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { ::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.IsContentParsed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XsdBuilder::*)()>(&::System::Xml::Schema::XsdBuilder::IsContentParsed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6262b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { ::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.ProcessMarkup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)(::ArrayW<::System::Xml::XmlNode*>)>(&::System::Xml::Schema::XsdBuilder::ProcessMarkup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6262bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { ::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.ProcessCData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)(::StringW)>(&::System::Xml::Schema::XsdBuilder::ProcessCData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6262bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { ::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.StartChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)()>(&::System::Xml::Schema::XsdBuilder::StartChildren)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6262c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { ::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.EndChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)()>(&::System::Xml::Schema::XsdBuilder::EndChildren)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6262d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { ::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.Push
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)()>(&::System::Xml::Schema::XsdBuilder::Push)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x62623e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "Push", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.Pop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)()>(&::System::Xml::Schema::XsdBuilder::Pop)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6262dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "Pop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.get_CurrentElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaNames_Token (::System::Xml::Schema::XsdBuilder::*)()>(&::System::Xml::Schema::XsdBuilder::get_CurrentElement)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6263b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "get_CurrentElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.get_ParentElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaNames_Token (::System::Xml::Schema::XsdBuilder::*)()>(&::System::Xml::Schema::XsdBuilder::get_ParentElement)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6263b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "get_ParentElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.get_ParentContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaObject* (::System::Xml::Schema::XsdBuilder::*)()>(&::System::Xml::Schema::XsdBuilder::get_ParentContainer)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6263be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "get_ParentContainer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.GetContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaObject* (::System::Xml::Schema::XsdBuilder::*)(::System::Xml::Schema::XsdBuilder_State)>(
    &::System::Xml::Schema::XsdBuilder::GetContainer)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6262e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "GetContainer", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder_State>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.SetContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)(::System::Xml::Schema::XsdBuilder_State, ::System::Object*)>(
    &::System::Xml::Schema::XsdBuilder::SetContainer)> {
  constexpr static std::size_t size = 0xb88;
  constexpr static std::size_t addrs = 0x6262fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "SetContainer", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder_State>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAnnotated_Id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildAnnotated_Id)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6263c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildAnnotated_Id", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildSchema_AttributeFormDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildSchema_AttributeFormDefault)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6263c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildSchema_AttributeFormDefault", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildSchema_ElementFormDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildSchema_ElementFormDefault)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6263e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildSchema_ElementFormDefault", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildSchema_TargetNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildSchema_TargetNamespace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6263ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildSchema_TargetNamespace", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildSchema_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildSchema_Version)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6263eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildSchema_Version", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildSchema_FinalDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildSchema_FinalDefault)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6263f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildSchema_FinalDefault", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildSchema_BlockDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildSchema_BlockDefault)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x62641d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildSchema_BlockDefault", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitSchema)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x626424c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitSchema", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitInclude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitInclude)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x626426c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitInclude", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildInclude_SchemaLocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildInclude_SchemaLocation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6264318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildInclude_SchemaLocation", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitImport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitImport)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6264338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitImport", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildImport_Namespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildImport_Namespace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62643e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildImport_Namespace", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildImport_SchemaLocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildImport_SchemaLocation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6264404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildImport_SchemaLocation", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitRedefine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitRedefine)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6264424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitRedefine", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildRedefine_SchemaLocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildRedefine_SchemaLocation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62644d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildRedefine_SchemaLocation", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.EndRedefine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*)>(&::System::Xml::Schema::XsdBuilder::EndRedefine)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x62644f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "EndRedefine", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitAttribute)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x626450c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAttribute_Default
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildAttribute_Default)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62647ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildAttribute_Default", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAttribute_Fixed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildAttribute_Fixed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x626480c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildAttribute_Fixed", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAttribute_Form
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildAttribute_Form)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x626482c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildAttribute_Form", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAttribute_Use
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildAttribute_Use)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x62648d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildAttribute_Use", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAttribute_Ref
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildAttribute_Ref)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x626497c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildAttribute_Ref", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAttribute_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildAttribute_Name)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6264b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildAttribute_Name", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAttribute_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildAttribute_Type)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6264b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildAttribute_Type", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitElement)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6264c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitElement", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildElement_Abstract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildElement_Abstract)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6264d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildElement_Abstract", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildElement_Block
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildElement_Block)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6264e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildElement_Block", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildElement_Default
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildElement_Default)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6264f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildElement_Default", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildElement_Form
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildElement_Form)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6264f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildElement_Form", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildElement_SubstitutionGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildElement_SubstitutionGroup)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6264fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildElement_SubstitutionGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildElement_Final
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildElement_Final)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6265050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildElement_Final", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildElement_Fixed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildElement_Fixed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62650c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildElement_Fixed", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildElement_MaxOccurs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildElement_MaxOccurs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x62650e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildElement_MaxOccurs", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildElement_MinOccurs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildElement_MinOccurs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x62651c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildElement_MinOccurs", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildElement_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildElement_Name)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62652a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildElement_Name", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildElement_Nillable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildElement_Nillable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x62652c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildElement_Nillable", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildElement_Ref
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildElement_Ref)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6265344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "BuildElement_Ref", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildElement_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildElement_Type)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x62653c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildElement_Type", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitSimpleType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitSimpleType)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x626543c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitSimpleType", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildSimpleType_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildSimpleType_Name)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6265768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildSimpleType_Name", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildSimpleType_Final
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildSimpleType_Final)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6265788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildSimpleType_Final", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitSimpleTypeUnion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitSimpleTypeUnion)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x62657fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "InitSimpleTypeUnion", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildSimpleTypeUnion_MemberTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildSimpleTypeUnion_MemberTypes)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x62658a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildSimpleTypeUnion_MemberTypes", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitSimpleTypeList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitSimpleTypeList)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6265a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "InitSimpleTypeList", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildSimpleTypeList_ItemType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildSimpleTypeList_ItemType)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6265b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildSimpleTypeList_ItemType", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitSimpleTypeRestriction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitSimpleTypeRestriction)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6265bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "InitSimpleTypeRestriction", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildSimpleTypeRestriction_Base
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildSimpleTypeRestriction_Base)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6265c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildSimpleTypeRestriction_Base", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitComplexType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitComplexType)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6265cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitComplexType", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildComplexType_Abstract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildComplexType_Abstract)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6265e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildComplexType_Abstract", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildComplexType_Block
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildComplexType_Block)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6265ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildComplexType_Block", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildComplexType_Final
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildComplexType_Final)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6265f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildComplexType_Final", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildComplexType_Mixed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildComplexType_Mixed)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6265fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildComplexType_Mixed", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildComplexType_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildComplexType_Name)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x626604c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildComplexType_Name", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitComplexContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitComplexContent)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x626606c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "InitComplexContent", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildComplexContent_Mixed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildComplexContent_Mixed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6266164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildComplexContent_Mixed", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitComplexContentExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitComplexContentExtension)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x62661e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "InitComplexContentExtension", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildComplexContentExtension_Base
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildComplexContentExtension_Base)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x62662c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildComplexContentExtension_Base", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitComplexContentRestriction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitComplexContentRestriction)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x626633c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "InitComplexContentRestriction", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildComplexContentRestriction_Base
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildComplexContentRestriction_Base)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x62663bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildComplexContentRestriction_Base", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitSimpleContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitSimpleContent)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6266438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "InitSimpleContent", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitSimpleContentExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitSimpleContentExtension)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6266530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "InitSimpleContentExtension", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildSimpleContentExtension_Base
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildSimpleContentExtension_Base)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x626660c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildSimpleContentExtension_Base", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitSimpleContentRestriction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitSimpleContentRestriction)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6266688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "InitSimpleContentRestriction", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildSimpleContentRestriction_Base
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildSimpleContentRestriction_Base)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6266764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildSimpleContentRestriction_Base", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitAttributeGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitAttributeGroup)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x62667e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "InitAttributeGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAttributeGroup_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildAttributeGroup_Name)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x626689c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildAttributeGroup_Name", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitAttributeGroupRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitAttributeGroupRef)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x62668bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "InitAttributeGroupRef", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAttributeGroupRef_Ref
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildAttributeGroupRef_Ref)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x626692c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildAttributeGroupRef_Ref", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitAnyAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitAnyAttribute)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x62669a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitAnyAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAnyAttribute_Namespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildAnyAttribute_Namespace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6266bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildAnyAttribute_Namespace", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAnyAttribute_ProcessContents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildAnyAttribute_ProcessContents)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6266c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildAnyAttribute_ProcessContents", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitGroup)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6266cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildGroup_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildGroup_Name)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6266d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "BuildGroup_Name", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitGroupRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitGroupRef)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6266da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitGroupRef", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildParticle_MaxOccurs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildParticle_MaxOccurs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6267138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildParticle_MaxOccurs", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildParticle_MinOccurs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildParticle_MinOccurs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6267150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildParticle_MinOccurs", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildGroupRef_Ref
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildGroupRef_Ref)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6267168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildGroupRef_Ref", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitAll)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x62671e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                                                           { "InitAll", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitChoice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitChoice)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6267258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitChoice", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitSequence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitSequence)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x62672cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitSequence", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitAny)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x626733c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                                                           { "InitAny", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAny_Namespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildAny_Namespace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62673b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildAny_Namespace", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAny_ProcessContents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildAny_ProcessContents)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x62673d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildAny_ProcessContents", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitNotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitNotation)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6267478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitNotation", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildNotation_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildNotation_Name)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62674fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildNotation_Name", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildNotation_Public
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildNotation_Public)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x626751c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildNotation_Public", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildNotation_System
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildNotation_System)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x626753c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildNotation_System", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitFacet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitFacet)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x626755c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitFacet", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildFacet_Fixed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildFacet_Fixed)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x626789c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "BuildFacet_Fixed", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildFacet_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildFacet_Value)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6267920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "BuildFacet_Value", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitIdentityConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitIdentityConstraint)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6267940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "InitIdentityConstraint", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildIdentityConstraint_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildIdentityConstraint_Name)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6267a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildIdentityConstraint_Name", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildIdentityConstraint_Refer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildIdentityConstraint_Refer)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6267a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildIdentityConstraint_Refer", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitSelector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitSelector)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6267bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitSelector", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildSelector_XPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildSelector_XPath)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6267c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildSelector_XPath", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitField)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6267c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitField", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildField_XPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildField_XPath)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6267d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "BuildField_XPath", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitAnnotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitAnnotation)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6267d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitAnnotation", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitAppinfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitAppinfo)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6267e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitAppinfo", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAppinfo_Source
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildAppinfo_Source)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6267ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildAppinfo_Source", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.EndAppinfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*)>(&::System::Xml::Schema::XsdBuilder::EndAppinfo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6267f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "EndAppinfo", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitDocumentation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitDocumentation)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6267f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "InitDocumentation", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildDocumentation_Source
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildDocumentation_Source)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6268000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildDocumentation_Source", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildDocumentation_XmlLang
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildDocumentation_XmlLang)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6268074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "BuildDocumentation_XmlLang", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.EndDocumentation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*)>(&::System::Xml::Schema::XsdBuilder::EndDocumentation)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x62681ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "EndDocumentation", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.AddAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)(::System::Xml::Schema::XmlSchemaObject*)>(&::System::Xml::Schema::XsdBuilder::AddAttribute)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x62645b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "AddAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.AddParticle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)(::System::Xml::Schema::XmlSchemaParticle*)>(&::System::Xml::Schema::XsdBuilder::AddParticle)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x6266e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "AddParticle", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.GetNextState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XsdBuilder::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::XsdBuilder::GetNextState)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6262288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "GetNextState", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.IsSkipableElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XsdBuilder::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::XsdBuilder::IsSkipableElement)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6262520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "IsSkipableElement", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.SetMinOccurs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)(::System::Xml::Schema::XmlSchemaParticle*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::SetMinOccurs)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x62651dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "SetMinOccurs", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.SetMaxOccurs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)(::System::Xml::Schema::XmlSchemaParticle*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::SetMaxOccurs)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x62650fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "SetMaxOccurs", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.ParseBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XsdBuilder::*)(::StringW, ::StringW)>(&::System::Xml::Schema::XsdBuilder::ParseBoolean)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6264d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "ParseBoolean", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.ParseEnum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XsdBuilder::*)(::StringW, ::StringW, ::ArrayW<::StringW>)>(&::System::Xml::Schema::XsdBuilder::ParseEnum)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6263d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                             { "ParseEnum", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.ParseQName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::Schema::XsdBuilder::*)(::StringW, ::StringW)>(&::System::Xml::Schema::XsdBuilder::ParseQName)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x62649f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "ParseQName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.ParseBlockFinalEnum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XsdBuilder::*)(::StringW, ::StringW)>(&::System::Xml::Schema::XsdBuilder::ParseBlockFinalEnum)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x6263f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "ParseBlockFinalEnum", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.ParseUriReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Xml::Schema::XsdBuilder::ParseUriReference)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6267f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "ParseUriReference", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)(::StringW, ::StringW, ::StringW, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::SendValidationEvent)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x62681d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                         { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)(::StringW, ::StringW)>(&::System::Xml::Schema::XsdBuilder::SendValidationEvent)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6262544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)(::StringW, ::ArrayW<::StringW>, ::System::Xml::Schema::XmlSeverityType)>(
    &::System::Xml::Schema::XsdBuilder::SendValidationEvent)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6262a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                            { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)(::System::Xml::Schema::XmlSchemaException*, ::System::Xml::Schema::XmlSeverityType)>(
    &::System::Xml::Schema::XsdBuilder::SendValidationEvent)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6268338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                         { "SendValidationEvent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaException*>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)(::System::Xml::Schema::XmlSchemaException*)>(
    &::System::Xml::Schema::XsdBuilder::SendValidationEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6265a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "SendValidationEvent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaException*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.RecordPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)()>(&::System::Xml::Schema::XsdBuilder::RecordPosition)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x626247c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "RecordPosition", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlReader*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr ::System::Xml::XmlReader* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_reader(::System::Xml::XmlReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reader = value;
}
constexpr ::System::Xml::PositionInfo*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_positionInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionInfo;
}
constexpr ::System::Xml::PositionInfo* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_positionInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionInfo;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_positionInfo(::System::Xml::PositionInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___positionInfo = value;
}
constexpr ::System::Xml::Schema::XsdBuilder_XsdEntry*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_currentEntry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentEntry;
}
constexpr ::System::Xml::Schema::XsdBuilder_XsdEntry* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_currentEntry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentEntry;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_currentEntry(::System::Xml::Schema::XsdBuilder_XsdEntry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentEntry = value;
}
constexpr ::System::Xml::Schema::XsdBuilder_XsdEntry*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_nextEntry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextEntry;
}
constexpr ::System::Xml::Schema::XsdBuilder_XsdEntry* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_nextEntry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextEntry;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_nextEntry(::System::Xml::Schema::XsdBuilder_XsdEntry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextEntry = value;
}
constexpr bool& System::Xml::Schema::XsdBuilder::__cordl_internal_get_hasChild() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasChild;
}
constexpr bool const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_hasChild() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasChild;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_hasChild(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasChild = value;
}
constexpr ::System::Xml::HWStack*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_stateHistory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stateHistory;
}
constexpr ::System::Xml::HWStack* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_stateHistory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stateHistory;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_stateHistory(::System::Xml::HWStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stateHistory = value;
}
constexpr ::System::Collections::Stack*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_containerStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___containerStack;
}
constexpr ::System::Collections::Stack* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_containerStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___containerStack;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_containerStack(::System::Collections::Stack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___containerStack = value;
}
constexpr ::System::Xml::XmlNameTable*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_nameTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr ::System::Xml::XmlNameTable* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_nameTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nameTable = value;
}
constexpr ::System::Xml::Schema::SchemaNames*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_schemaNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaNames;
}
constexpr ::System::Xml::Schema::SchemaNames* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_schemaNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaNames;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_schemaNames(::System::Xml::Schema::SchemaNames* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemaNames = value;
}
constexpr ::System::Xml::XmlNamespaceManager*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_namespaceManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaceManager;
}
constexpr ::System::Xml::XmlNamespaceManager* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_namespaceManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaceManager;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_namespaceManager(::System::Xml::XmlNamespaceManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___namespaceManager = value;
}
constexpr bool& System::Xml::Schema::XsdBuilder::__cordl_internal_get_canIncludeImport() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canIncludeImport;
}
constexpr bool const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_canIncludeImport() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canIncludeImport;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_canIncludeImport(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___canIncludeImport = value;
}
constexpr ::System::Xml::Schema::XmlSchema*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_schema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schema;
}
constexpr ::System::Xml::Schema::XmlSchema* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_schema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schema;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_schema(::System::Xml::Schema::XmlSchema* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schema = value;
}
constexpr ::System::Xml::Schema::XmlSchemaObject*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_xso() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xso;
}
constexpr ::System::Xml::Schema::XmlSchemaObject* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_xso() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xso;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_xso(::System::Xml::Schema::XmlSchemaObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xso = value;
}
constexpr ::System::Xml::Schema::XmlSchemaElement*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_element() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___element;
}
constexpr ::System::Xml::Schema::XmlSchemaElement* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_element() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___element;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_element(::System::Xml::Schema::XmlSchemaElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___element = value;
}
constexpr ::System::Xml::Schema::XmlSchemaAny*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_anyElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anyElement;
}
constexpr ::System::Xml::Schema::XmlSchemaAny* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_anyElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anyElement;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_anyElement(::System::Xml::Schema::XmlSchemaAny* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___anyElement = value;
}
constexpr ::System::Xml::Schema::XmlSchemaAttribute*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_attribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attribute;
}
constexpr ::System::Xml::Schema::XmlSchemaAttribute* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_attribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attribute;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_attribute(::System::Xml::Schema::XmlSchemaAttribute* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attribute = value;
}
constexpr ::System::Xml::Schema::XmlSchemaAnyAttribute*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_anyAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anyAttribute;
}
constexpr ::System::Xml::Schema::XmlSchemaAnyAttribute* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_anyAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anyAttribute;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_anyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___anyAttribute = value;
}
constexpr ::System::Xml::Schema::XmlSchemaComplexType*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_complexType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complexType;
}
constexpr ::System::Xml::Schema::XmlSchemaComplexType* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_complexType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complexType;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_complexType(::System::Xml::Schema::XmlSchemaComplexType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___complexType = value;
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleType*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_simpleType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleType;
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleType* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_simpleType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleType;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_simpleType(::System::Xml::Schema::XmlSchemaSimpleType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___simpleType = value;
}
constexpr ::System::Xml::Schema::XmlSchemaComplexContent*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_complexContent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complexContent;
}
constexpr ::System::Xml::Schema::XmlSchemaComplexContent* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_complexContent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complexContent;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_complexContent(::System::Xml::Schema::XmlSchemaComplexContent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___complexContent = value;
}
constexpr ::System::Xml::Schema::XmlSchemaComplexContentExtension*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_complexContentExtension() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complexContentExtension;
}
constexpr ::System::Xml::Schema::XmlSchemaComplexContentExtension* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_complexContentExtension() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complexContentExtension;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_complexContentExtension(::System::Xml::Schema::XmlSchemaComplexContentExtension* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___complexContentExtension = value;
}
constexpr ::System::Xml::Schema::XmlSchemaComplexContentRestriction*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_complexContentRestriction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complexContentRestriction;
}
constexpr ::System::Xml::Schema::XmlSchemaComplexContentRestriction* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_complexContentRestriction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complexContentRestriction;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_complexContentRestriction(::System::Xml::Schema::XmlSchemaComplexContentRestriction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___complexContentRestriction = value;
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleContent*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_simpleContent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleContent;
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleContent* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_simpleContent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleContent;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_simpleContent(::System::Xml::Schema::XmlSchemaSimpleContent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___simpleContent = value;
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleContentExtension*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_simpleContentExtension() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleContentExtension;
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleContentExtension* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_simpleContentExtension() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleContentExtension;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_simpleContentExtension(::System::Xml::Schema::XmlSchemaSimpleContentExtension* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___simpleContentExtension = value;
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleContentRestriction*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_simpleContentRestriction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleContentRestriction;
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleContentRestriction* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_simpleContentRestriction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleContentRestriction;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_simpleContentRestriction(::System::Xml::Schema::XmlSchemaSimpleContentRestriction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___simpleContentRestriction = value;
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleTypeUnion*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_simpleTypeUnion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleTypeUnion;
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleTypeUnion* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_simpleTypeUnion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleTypeUnion;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_simpleTypeUnion(::System::Xml::Schema::XmlSchemaSimpleTypeUnion* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___simpleTypeUnion = value;
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleTypeList*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_simpleTypeList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleTypeList;
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleTypeList* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_simpleTypeList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleTypeList;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_simpleTypeList(::System::Xml::Schema::XmlSchemaSimpleTypeList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___simpleTypeList = value;
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleTypeRestriction*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_simpleTypeRestriction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleTypeRestriction;
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleTypeRestriction* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_simpleTypeRestriction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleTypeRestriction;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_simpleTypeRestriction(::System::Xml::Schema::XmlSchemaSimpleTypeRestriction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___simpleTypeRestriction = value;
}
constexpr ::System::Xml::Schema::XmlSchemaGroup*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_group() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___group;
}
constexpr ::System::Xml::Schema::XmlSchemaGroup* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_group() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___group;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_group(::System::Xml::Schema::XmlSchemaGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___group = value;
}
constexpr ::System::Xml::Schema::XmlSchemaGroupRef*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_groupRef() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupRef;
}
constexpr ::System::Xml::Schema::XmlSchemaGroupRef* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_groupRef() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupRef;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_groupRef(::System::Xml::Schema::XmlSchemaGroupRef* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___groupRef = value;
}
constexpr ::System::Xml::Schema::XmlSchemaAll*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_all() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___all;
}
constexpr ::System::Xml::Schema::XmlSchemaAll* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_all() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___all;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_all(::System::Xml::Schema::XmlSchemaAll* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___all = value;
}
constexpr ::System::Xml::Schema::XmlSchemaChoice*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_choice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___choice;
}
constexpr ::System::Xml::Schema::XmlSchemaChoice* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_choice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___choice;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_choice(::System::Xml::Schema::XmlSchemaChoice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___choice = value;
}
constexpr ::System::Xml::Schema::XmlSchemaSequence*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_sequence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sequence;
}
constexpr ::System::Xml::Schema::XmlSchemaSequence* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_sequence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sequence;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_sequence(::System::Xml::Schema::XmlSchemaSequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sequence = value;
}
constexpr ::System::Xml::Schema::XmlSchemaParticle*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_particle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___particle;
}
constexpr ::System::Xml::Schema::XmlSchemaParticle* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_particle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___particle;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_particle(::System::Xml::Schema::XmlSchemaParticle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___particle = value;
}
constexpr ::System::Xml::Schema::XmlSchemaAttributeGroup*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_attributeGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeGroup;
}
constexpr ::System::Xml::Schema::XmlSchemaAttributeGroup* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_attributeGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeGroup;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_attributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeGroup = value;
}
constexpr ::System::Xml::Schema::XmlSchemaAttributeGroupRef*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_attributeGroupRef() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeGroupRef;
}
constexpr ::System::Xml::Schema::XmlSchemaAttributeGroupRef* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_attributeGroupRef() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeGroupRef;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_attributeGroupRef(::System::Xml::Schema::XmlSchemaAttributeGroupRef* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeGroupRef = value;
}
constexpr ::System::Xml::Schema::XmlSchemaNotation*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_notation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notation;
}
constexpr ::System::Xml::Schema::XmlSchemaNotation* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_notation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notation;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_notation(::System::Xml::Schema::XmlSchemaNotation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___notation = value;
}
constexpr ::System::Xml::Schema::XmlSchemaIdentityConstraint*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_identityConstraint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identityConstraint;
}
constexpr ::System::Xml::Schema::XmlSchemaIdentityConstraint* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_identityConstraint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identityConstraint;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_identityConstraint(::System::Xml::Schema::XmlSchemaIdentityConstraint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___identityConstraint = value;
}
constexpr ::System::Xml::Schema::XmlSchemaXPath*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_xpath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xpath;
}
constexpr ::System::Xml::Schema::XmlSchemaXPath* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_xpath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xpath;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_xpath(::System::Xml::Schema::XmlSchemaXPath* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xpath = value;
}
constexpr ::System::Xml::Schema::XmlSchemaInclude*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_include() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___include;
}
constexpr ::System::Xml::Schema::XmlSchemaInclude* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_include() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___include;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_include(::System::Xml::Schema::XmlSchemaInclude* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___include = value;
}
constexpr ::System::Xml::Schema::XmlSchemaImport*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_import() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___import;
}
constexpr ::System::Xml::Schema::XmlSchemaImport* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_import() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___import;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_import(::System::Xml::Schema::XmlSchemaImport* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___import = value;
}
constexpr ::System::Xml::Schema::XmlSchemaAnnotation*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_annotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___annotation;
}
constexpr ::System::Xml::Schema::XmlSchemaAnnotation* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_annotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___annotation;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_annotation(::System::Xml::Schema::XmlSchemaAnnotation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___annotation = value;
}
constexpr ::System::Xml::Schema::XmlSchemaAppInfo*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_appInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appInfo;
}
constexpr ::System::Xml::Schema::XmlSchemaAppInfo* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_appInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appInfo;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_appInfo(::System::Xml::Schema::XmlSchemaAppInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___appInfo = value;
}
constexpr ::System::Xml::Schema::XmlSchemaDocumentation*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_documentation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___documentation;
}
constexpr ::System::Xml::Schema::XmlSchemaDocumentation* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_documentation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___documentation;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_documentation(::System::Xml::Schema::XmlSchemaDocumentation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___documentation = value;
}
constexpr ::System::Xml::Schema::XmlSchemaFacet*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_facet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___facet;
}
constexpr ::System::Xml::Schema::XmlSchemaFacet* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_facet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___facet;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_facet(::System::Xml::Schema::XmlSchemaFacet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___facet = value;
}
constexpr ::ArrayW<::System::Xml::XmlNode*>& System::Xml::Schema::XsdBuilder::__cordl_internal_get_markup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___markup;
}
constexpr ::ArrayW<::System::Xml::XmlNode*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_markup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___markup;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_markup(::ArrayW<::System::Xml::XmlNode*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___markup = value;
}
constexpr ::System::Xml::Schema::XmlSchemaRedefine*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_redefine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redefine;
}
constexpr ::System::Xml::Schema::XmlSchemaRedefine* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_redefine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redefine;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_redefine(::System::Xml::Schema::XmlSchemaRedefine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___redefine = value;
}
constexpr ::System::Xml::Schema::ValidationEventHandler*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_validationEventHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationEventHandler;
}
constexpr ::System::Xml::Schema::ValidationEventHandler* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_validationEventHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationEventHandler;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_validationEventHandler(::System::Xml::Schema::ValidationEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validationEventHandler = value;
}
constexpr ::System::Collections::ArrayList*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_unhandledAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unhandledAttributes;
}
constexpr ::System::Collections::ArrayList* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_unhandledAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unhandledAttributes;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_unhandledAttributes(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unhandledAttributes = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_namespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaces;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_namespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaces;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_namespaces(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___namespaces = value;
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SchemaElement(::ArrayW<::System::Xml::Schema::XsdBuilder_State> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "SchemaElement", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_State>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State> System::Xml::Schema::XsdBuilder::getStaticF_SchemaElement() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "SchemaElement", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SchemaSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "SchemaSubelements", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_State>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State> System::Xml::Schema::XsdBuilder::getStaticF_SchemaSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "SchemaSubelements", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_AttributeSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "AttributeSubelements", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_State>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State> System::Xml::Schema::XsdBuilder::getStaticF_AttributeSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "AttributeSubelements", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_ElementSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "ElementSubelements", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_State>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State> System::Xml::Schema::XsdBuilder::getStaticF_ElementSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "ElementSubelements", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_ComplexTypeSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "ComplexTypeSubelements", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_State>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State> System::Xml::Schema::XsdBuilder::getStaticF_ComplexTypeSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "ComplexTypeSubelements", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SimpleContentSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "SimpleContentSubelements", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_State>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State> System::Xml::Schema::XsdBuilder::getStaticF_SimpleContentSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "SimpleContentSubelements", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SimpleContentExtensionSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "SimpleContentExtensionSubelements", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_State>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State> System::Xml::Schema::XsdBuilder::getStaticF_SimpleContentExtensionSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "SimpleContentExtensionSubelements", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SimpleContentRestrictionSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "SimpleContentRestrictionSubelements", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_State>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State> System::Xml::Schema::XsdBuilder::getStaticF_SimpleContentRestrictionSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "SimpleContentRestrictionSubelements", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_ComplexContentSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "ComplexContentSubelements", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_State>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State> System::Xml::Schema::XsdBuilder::getStaticF_ComplexContentSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "ComplexContentSubelements", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_ComplexContentExtensionSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "ComplexContentExtensionSubelements", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_State>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State> System::Xml::Schema::XsdBuilder::getStaticF_ComplexContentExtensionSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "ComplexContentExtensionSubelements", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_ComplexContentRestrictionSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "ComplexContentRestrictionSubelements", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_State>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State> System::Xml::Schema::XsdBuilder::getStaticF_ComplexContentRestrictionSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "ComplexContentRestrictionSubelements", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SimpleTypeSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "SimpleTypeSubelements", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_State>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State> System::Xml::Schema::XsdBuilder::getStaticF_SimpleTypeSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "SimpleTypeSubelements", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SimpleTypeRestrictionSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "SimpleTypeRestrictionSubelements", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_State>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State> System::Xml::Schema::XsdBuilder::getStaticF_SimpleTypeRestrictionSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "SimpleTypeRestrictionSubelements", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SimpleTypeListSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "SimpleTypeListSubelements", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_State>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State> System::Xml::Schema::XsdBuilder::getStaticF_SimpleTypeListSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "SimpleTypeListSubelements", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SimpleTypeUnionSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "SimpleTypeUnionSubelements", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_State>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State> System::Xml::Schema::XsdBuilder::getStaticF_SimpleTypeUnionSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "SimpleTypeUnionSubelements", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_RedefineSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "RedefineSubelements", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_State>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State> System::Xml::Schema::XsdBuilder::getStaticF_RedefineSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "RedefineSubelements", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_AttributeGroupSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "AttributeGroupSubelements", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_State>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State> System::Xml::Schema::XsdBuilder::getStaticF_AttributeGroupSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "AttributeGroupSubelements", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_GroupSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "GroupSubelements", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_State>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State> System::Xml::Schema::XsdBuilder::getStaticF_GroupSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "GroupSubelements", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_AllSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "AllSubelements", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_State>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State> System::Xml::Schema::XsdBuilder::getStaticF_AllSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "AllSubelements", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_ChoiceSequenceSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "ChoiceSequenceSubelements", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_State>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State> System::Xml::Schema::XsdBuilder::getStaticF_ChoiceSequenceSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "ChoiceSequenceSubelements", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_IdentityConstraintSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "IdentityConstraintSubelements", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_State>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State> System::Xml::Schema::XsdBuilder::getStaticF_IdentityConstraintSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "IdentityConstraintSubelements", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_AnnotationSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "AnnotationSubelements", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_State>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State> System::Xml::Schema::XsdBuilder::getStaticF_AnnotationSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "AnnotationSubelements", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_AnnotatedSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "AnnotatedSubelements", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_State>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State> System::Xml::Schema::XsdBuilder::getStaticF_AnnotatedSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_State>, "AnnotatedSubelements", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SchemaAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "SchemaAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_SchemaAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "SchemaAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_AttributeAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "AttributeAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_AttributeAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "AttributeAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_ElementAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "ElementAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_ElementAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "ElementAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_ComplexTypeAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "ComplexTypeAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_ComplexTypeAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "ComplexTypeAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SimpleContentAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "SimpleContentAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_SimpleContentAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "SimpleContentAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SimpleContentExtensionAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "SimpleContentExtensionAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_SimpleContentExtensionAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "SimpleContentExtensionAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SimpleContentRestrictionAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "SimpleContentRestrictionAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_SimpleContentRestrictionAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "SimpleContentRestrictionAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_ComplexContentAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "ComplexContentAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_ComplexContentAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "ComplexContentAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_ComplexContentExtensionAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "ComplexContentExtensionAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_ComplexContentExtensionAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "ComplexContentExtensionAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_ComplexContentRestrictionAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "ComplexContentRestrictionAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_ComplexContentRestrictionAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "ComplexContentRestrictionAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SimpleTypeAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "SimpleTypeAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_SimpleTypeAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "SimpleTypeAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SimpleTypeRestrictionAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "SimpleTypeRestrictionAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_SimpleTypeRestrictionAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "SimpleTypeRestrictionAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SimpleTypeUnionAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "SimpleTypeUnionAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_SimpleTypeUnionAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "SimpleTypeUnionAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SimpleTypeListAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "SimpleTypeListAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_SimpleTypeListAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "SimpleTypeListAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_AttributeGroupAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "AttributeGroupAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_AttributeGroupAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "AttributeGroupAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_AttributeGroupRefAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "AttributeGroupRefAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_AttributeGroupRefAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "AttributeGroupRefAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_GroupAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "GroupAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_GroupAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "GroupAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_GroupRefAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "GroupRefAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_GroupRefAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "GroupRefAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_ParticleAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "ParticleAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_ParticleAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "ParticleAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_AnyAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "AnyAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_AnyAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "AnyAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_IdentityConstraintAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "IdentityConstraintAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_IdentityConstraintAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "IdentityConstraintAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SelectorAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "SelectorAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_SelectorAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "SelectorAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_FieldAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "FieldAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_FieldAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "FieldAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_NotationAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "NotationAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_NotationAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "NotationAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_IncludeAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "IncludeAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_IncludeAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "IncludeAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_ImportAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "ImportAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_ImportAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "ImportAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_FacetAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "FacetAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_FacetAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "FacetAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_AnyAttributeAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "AnyAttributeAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_AnyAttributeAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "AnyAttributeAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_DocumentationAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "DocumentationAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_DocumentationAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "DocumentationAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_AppinfoAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "AppinfoAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_AppinfoAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "AppinfoAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_RedefineAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "RedefineAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_RedefineAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "RedefineAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_AnnotationAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "AnnotationAttributes", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*> System::Xml::Schema::XsdBuilder::getStaticF_AnnotationAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>, "AnnotationAttributes", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SchemaEntries(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdEntry*>, "SchemaEntries", ::System::Xml::Schema::XsdBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdEntry*> System::Xml::Schema::XsdBuilder::getStaticF_SchemaEntries() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XsdBuilder_XsdEntry*>, "SchemaEntries", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_DerivationMethodValues(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "DerivationMethodValues", ::System::Xml::Schema::XsdBuilder*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> System::Xml::Schema::XsdBuilder::getStaticF_DerivationMethodValues() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "DerivationMethodValues", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_DerivationMethodStrings(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "DerivationMethodStrings", ::System::Xml::Schema::XsdBuilder*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Xml::Schema::XsdBuilder::getStaticF_DerivationMethodStrings() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "DerivationMethodStrings", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_FormStringValues(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "FormStringValues", ::System::Xml::Schema::XsdBuilder*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Xml::Schema::XsdBuilder::getStaticF_FormStringValues() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "FormStringValues", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_UseStringValues(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "UseStringValues", ::System::Xml::Schema::XsdBuilder*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Xml::Schema::XsdBuilder::getStaticF_UseStringValues() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "UseStringValues", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_ProcessContentsStringValues(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "ProcessContentsStringValues", ::System::Xml::Schema::XsdBuilder*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Xml::Schema::XsdBuilder::getStaticF_ProcessContentsStringValues() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "ProcessContentsStringValues", ::System::Xml::Schema::XsdBuilder*>();
}
inline void System::Xml::Schema::XsdBuilder::_ctor(::System::Xml::XmlReader* reader, ::System::Xml::XmlNamespaceManager* curmgr, ::System::Xml::Schema::XmlSchema* schema,
                                                   ::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames,
                                                   ::System::Xml::Schema::ValidationEventHandler* eventhandler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(),
                                                               ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<::System::Xml::XmlNameTable*>(),
                                                               ::i2c::type_of<::System::Xml::Schema::SchemaNames*>(), ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, curmgr, schema, nameTable, schemaNames, eventhandler);
}
inline bool System::Xml::Schema::XsdBuilder::ProcessElement(::StringW prefix, ::StringW name, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, prefix, name, ns);
}
inline void System::Xml::Schema::XsdBuilder::ProcessAttribute(::StringW prefix, ::StringW name, ::StringW ns, ::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, name, ns, value);
}
inline bool System::Xml::Schema::XsdBuilder::IsContentParsed() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::XsdBuilder::ProcessMarkup(::ArrayW<::System::Xml::XmlNode*> markup) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markup);
}
inline void System::Xml::Schema::XsdBuilder::ProcessCData(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XsdBuilder::StartChildren() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XsdBuilder::EndChildren() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XsdBuilder::Push() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "Push", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XsdBuilder::Pop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "Pop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::XsdBuilder::get_CurrentElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "get_CurrentElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaNames_Token>(this, ___internal_method);
}
inline ::System::Xml::Schema::SchemaNames_Token System::Xml::Schema::XsdBuilder::get_ParentElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "get_ParentElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaNames_Token>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaObject* System::Xml::Schema::XsdBuilder::get_ParentContainer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "get_ParentContainer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObject*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaObject* System::Xml::Schema::XsdBuilder::GetContainer(::System::Xml::Schema::XsdBuilder_State state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "GetContainer", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder_State>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObject*>(this, ___internal_method, state);
}
inline void System::Xml::Schema::XsdBuilder::SetContainer(::System::Xml::Schema::XsdBuilder_State state, ::System::Object* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "SetContainer", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder_State>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, container);
}
inline void System::Xml::Schema::XsdBuilder::BuildAnnotated_Id(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "BuildAnnotated_Id", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildSchema_AttributeFormDefault(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildSchema_AttributeFormDefault", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildSchema_ElementFormDefault(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildSchema_ElementFormDefault", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildSchema_TargetNamespace(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildSchema_TargetNamespace", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildSchema_Version(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildSchema_Version", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildSchema_FinalDefault(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildSchema_FinalDefault", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildSchema_BlockDefault(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildSchema_BlockDefault", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitSchema(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                                                         { "InitSchema", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitInclude(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitInclude", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildInclude_SchemaLocation(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildInclude_SchemaLocation", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitImport(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                                                         { "InitImport", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildImport_Namespace(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildImport_Namespace", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildImport_SchemaLocation(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildImport_SchemaLocation", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitRedefine(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitRedefine", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildRedefine_SchemaLocation(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildRedefine_SchemaLocation", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::EndRedefine(::System::Xml::Schema::XsdBuilder* builder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "EndRedefine", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder);
}
inline void System::Xml::Schema::XsdBuilder::InitAttribute(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildAttribute_Default(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildAttribute_Default", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildAttribute_Fixed(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildAttribute_Fixed", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildAttribute_Form(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildAttribute_Form", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildAttribute_Use(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "BuildAttribute_Use", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildAttribute_Ref(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "BuildAttribute_Ref", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildAttribute_Name(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildAttribute_Name", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildAttribute_Type(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildAttribute_Type", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitElement(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitElement", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildElement_Abstract(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildElement_Abstract", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildElement_Block(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "BuildElement_Block", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildElement_Default(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildElement_Default", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildElement_Form(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "BuildElement_Form", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildElement_SubstitutionGroup(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildElement_SubstitutionGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildElement_Final(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "BuildElement_Final", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildElement_Fixed(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "BuildElement_Fixed", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildElement_MaxOccurs(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildElement_MaxOccurs", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildElement_MinOccurs(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildElement_MinOccurs", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildElement_Name(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "BuildElement_Name", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildElement_Nillable(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildElement_Nillable", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildElement_Ref(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "BuildElement_Ref", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildElement_Type(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "BuildElement_Type", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitSimpleType(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitSimpleType", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildSimpleType_Name(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildSimpleType_Name", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildSimpleType_Final(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildSimpleType_Final", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitSimpleTypeUnion(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "InitSimpleTypeUnion", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildSimpleTypeUnion_MemberTypes(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildSimpleTypeUnion_MemberTypes", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitSimpleTypeList(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitSimpleTypeList", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildSimpleTypeList_ItemType(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildSimpleTypeList_ItemType", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitSimpleTypeRestriction(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "InitSimpleTypeRestriction", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildSimpleTypeRestriction_Base(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildSimpleTypeRestriction_Base", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitComplexType(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitComplexType", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildComplexType_Abstract(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildComplexType_Abstract", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildComplexType_Block(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildComplexType_Block", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildComplexType_Final(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildComplexType_Final", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildComplexType_Mixed(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildComplexType_Mixed", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildComplexType_Name(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildComplexType_Name", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitComplexContent(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitComplexContent", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildComplexContent_Mixed(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildComplexContent_Mixed", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitComplexContentExtension(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "InitComplexContentExtension", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildComplexContentExtension_Base(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildComplexContentExtension_Base", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitComplexContentRestriction(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "InitComplexContentRestriction", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildComplexContentRestriction_Base(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildComplexContentRestriction_Base", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitSimpleContent(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitSimpleContent", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitSimpleContentExtension(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "InitSimpleContentExtension", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildSimpleContentExtension_Base(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildSimpleContentExtension_Base", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitSimpleContentRestriction(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "InitSimpleContentRestriction", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildSimpleContentRestriction_Base(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildSimpleContentRestriction_Base", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitAttributeGroup(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitAttributeGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildAttributeGroup_Name(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildAttributeGroup_Name", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitAttributeGroupRef(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "InitAttributeGroupRef", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildAttributeGroupRef_Ref(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildAttributeGroupRef_Ref", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitAnyAttribute(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitAnyAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildAnyAttribute_Namespace(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildAnyAttribute_Namespace", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildAnyAttribute_ProcessContents(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildAnyAttribute_ProcessContents", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitGroup(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                                                         { "InitGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildGroup_Name(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "BuildGroup_Name", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitGroupRef(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitGroupRef", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildParticle_MaxOccurs(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildParticle_MaxOccurs", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildParticle_MinOccurs(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildParticle_MinOccurs", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildGroupRef_Ref(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "BuildGroupRef_Ref", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitAll(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                                                         { "InitAll", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitChoice(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                                                         { "InitChoice", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitSequence(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitSequence", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitAny(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                                                         { "InitAny", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildAny_Namespace(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "BuildAny_Namespace", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildAny_ProcessContents(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildAny_ProcessContents", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitNotation(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitNotation", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildNotation_Name(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "BuildNotation_Name", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildNotation_Public(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildNotation_Public", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildNotation_System(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildNotation_System", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitFacet(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                                                         { "InitFacet", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildFacet_Fixed(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "BuildFacet_Fixed", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildFacet_Value(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "BuildFacet_Value", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitIdentityConstraint(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "InitIdentityConstraint", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildIdentityConstraint_Name(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildIdentityConstraint_Name", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildIdentityConstraint_Refer(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildIdentityConstraint_Refer", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitSelector(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitSelector", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildSelector_XPath(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildSelector_XPath", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitField(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                                                         { "InitField", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildField_XPath(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "BuildField_XPath", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitAnnotation(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitAnnotation", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitAppinfo(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitAppinfo", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildAppinfo_Source(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildAppinfo_Source", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::EndAppinfo(::System::Xml::Schema::XsdBuilder* builder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "EndAppinfo", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder);
}
inline void System::Xml::Schema::XsdBuilder::InitDocumentation(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "InitDocumentation", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildDocumentation_Source(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildDocumentation_Source", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildDocumentation_XmlLang(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "BuildDocumentation_XmlLang", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::EndDocumentation(::System::Xml::Schema::XsdBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "EndDocumentation", {}, { ::i2c::type_of<::System::Xml::Schema::XsdBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder);
}
inline void System::Xml::Schema::XsdBuilder::AddAttribute(::System::Xml::Schema::XmlSchemaObject* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "AddAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XsdBuilder::AddParticle(::System::Xml::Schema::XmlSchemaParticle* particle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "AddParticle", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particle);
}
inline bool System::Xml::Schema::XsdBuilder::GetNextState(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "GetNextState", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, qname);
}
inline bool System::Xml::Schema::XsdBuilder::IsSkipableElement(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "IsSkipableElement", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, qname);
}
inline void System::Xml::Schema::XsdBuilder::SetMinOccurs(::System::Xml::Schema::XmlSchemaParticle* particle, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "SetMinOccurs", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particle, value);
}
inline void System::Xml::Schema::XsdBuilder::SetMaxOccurs(::System::Xml::Schema::XmlSchemaParticle* particle, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "SetMaxOccurs", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particle, value);
}
inline bool System::Xml::Schema::XsdBuilder::ParseBoolean(::StringW value, ::StringW attributeName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "ParseBoolean", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, attributeName);
}
inline int32_t System::Xml::Schema::XsdBuilder::ParseEnum(::StringW value, ::StringW attributeName, ::ArrayW<::StringW> values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                                           { "ParseEnum", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, attributeName, values);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XsdBuilder::ParseQName(::StringW value, ::StringW attributeName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "ParseQName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(this, ___internal_method, value, attributeName);
}
inline int32_t System::Xml::Schema::XsdBuilder::ParseBlockFinalEnum(::StringW value, ::StringW attributeName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "ParseBlockFinalEnum", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, attributeName);
}
inline ::StringW System::Xml::Schema::XsdBuilder::ParseUriReference(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "ParseUriReference", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s);
}
inline void System::Xml::Schema::XsdBuilder::SendValidationEvent(::StringW code, ::StringW arg0, ::StringW arg1, ::StringW arg2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                              { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, arg0, arg1, arg2);
}
inline void System::Xml::Schema::XsdBuilder::SendValidationEvent(::StringW code, ::StringW msg) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, msg);
}
inline void System::Xml::Schema::XsdBuilder::SendValidationEvent(::StringW code, ::ArrayW<::StringW> args, ::System::Xml::Schema::XmlSeverityType severity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                          { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, args, severity);
}
inline void System::Xml::Schema::XsdBuilder::SendValidationEvent(::System::Xml::Schema::XmlSchemaException* e, ::System::Xml::Schema::XmlSeverityType severity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(),
                                       { "SendValidationEvent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaException*>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, severity);
}
inline void System::Xml::Schema::XsdBuilder::SendValidationEvent(::System::Xml::Schema::XmlSchemaException* e) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "SendValidationEvent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaException*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Xml::Schema::XsdBuilder::RecordPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdBuilder*>(), { "RecordPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XsdBuilder* System::Xml::Schema::XsdBuilder::New_ctor(::System::Xml::XmlReader* reader, ::System::Xml::XmlNamespaceManager* curmgr,
                                                                                    ::System::Xml::Schema::XmlSchema* schema, ::System::Xml::XmlNameTable* nameTable,
                                                                                    ::System::Xml::Schema::SchemaNames* schemaNames, ::System::Xml::Schema::ValidationEventHandler* eventhandler) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XsdBuilder*>(reader, curmgr, schema, nameTable, schemaNames, eventhandler));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XsdBuilder::XsdBuilder() {}
