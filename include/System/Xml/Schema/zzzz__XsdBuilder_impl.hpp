#pragma once
#include "System/Xml/Schema/zzzz__SchemaBuilder_impl.hpp"
#include "System/Xml/Schema/zzzz__SchemaNames_impl.hpp"
#include "System/Xml/Schema/zzzz__XsdBuilder_impl.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_impl.hpp"
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
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::__XsdBuilder__State::__XsdBuilder__State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::__XsdBuilder__State::__XsdBuilder__State() {}
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::Root{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::Schema{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::Annotation{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::Include{ static_cast<int32_t>(0x3) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::Import{ static_cast<int32_t>(0x4) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::Element{ static_cast<int32_t>(0x5) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::Attribute{ static_cast<int32_t>(0x6) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::AttributeGroup{ static_cast<int32_t>(0x7) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::AttributeGroupRef{ static_cast<int32_t>(0x8) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::AnyAttribute{ static_cast<int32_t>(0x9) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::Group{ static_cast<int32_t>(0xa) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::GroupRef{ static_cast<int32_t>(0xb) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::All{ static_cast<int32_t>(0xc) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::Choice{ static_cast<int32_t>(0xd) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::Sequence{ static_cast<int32_t>(0xe) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::Any{ static_cast<int32_t>(0xf) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::Notation{ static_cast<int32_t>(0x10) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::SimpleType{ static_cast<int32_t>(0x11) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::ComplexType{ static_cast<int32_t>(0x12) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::ComplexContent{ static_cast<int32_t>(0x13) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::ComplexContentRestriction{ static_cast<int32_t>(0x14) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::ComplexContentExtension{ static_cast<int32_t>(0x15) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::SimpleContent{ static_cast<int32_t>(0x16) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::SimpleContentExtension{ static_cast<int32_t>(0x17) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::SimpleContentRestriction{ static_cast<int32_t>(0x18) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::SimpleTypeUnion{ static_cast<int32_t>(0x19) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::SimpleTypeList{ static_cast<int32_t>(0x1a) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::SimpleTypeRestriction{ static_cast<int32_t>(0x1b) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::Unique{ static_cast<int32_t>(0x1c) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::Key{ static_cast<int32_t>(0x1d) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::KeyRef{ static_cast<int32_t>(0x1e) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::Selector{ static_cast<int32_t>(0x1f) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::Field{ static_cast<int32_t>(0x20) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::MinExclusive{ static_cast<int32_t>(0x21) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::MinInclusive{ static_cast<int32_t>(0x22) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::MaxExclusive{ static_cast<int32_t>(0x23) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::MaxInclusive{ static_cast<int32_t>(0x24) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::TotalDigits{ static_cast<int32_t>(0x25) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::FractionDigits{ static_cast<int32_t>(0x26) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::Length{ static_cast<int32_t>(0x27) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::MinLength{ static_cast<int32_t>(0x28) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::MaxLength{ static_cast<int32_t>(0x29) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::Enumeration{ static_cast<int32_t>(0x2a) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::Pattern{ static_cast<int32_t>(0x2b) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::WhiteSpace{ static_cast<int32_t>(0x2c) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::AppInfo{ static_cast<int32_t>(0x2d) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::Documentation{ static_cast<int32_t>(0x2e) };
constexpr ::System::Xml::Schema::__XsdBuilder__State System::Xml::Schema::__XsdBuilder__State::Redefine{ static_cast<int32_t>(0x2f) };
//  Writing Method size for method: ::System::Xml::Schema::__XsdBuilder__XsdBuildFunction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::__XsdBuilder__XsdBuildFunction::*)(::System::Object*, void*)>(
    &::System::Xml::Schema::__XsdBuilder__XsdBuildFunction::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2d5804c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XsdBuilder__XsdBuildFunction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::__XsdBuilder__XsdBuildFunction.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::__XsdBuilder__XsdBuildFunction::*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::__XsdBuilder__XsdBuildFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d58124;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XsdBuilder__XsdBuildFunction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XsdBuilder__XsdBuildFunction*>::get(), 13));
    return ___internal_method;
  }
};
inline ::System::Xml::Schema::__XsdBuilder__XsdBuildFunction* System::Xml::Schema::__XsdBuilder__XsdBuildFunction::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::__XsdBuilder__XsdBuildFunction*>(object, method));
}
inline void System::Xml::Schema::__XsdBuilder__XsdBuildFunction::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XsdBuilder__XsdBuildFunction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void System::Xml::Schema::__XsdBuilder__XsdBuildFunction::Invoke(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XsdBuilder__XsdBuildFunction*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, builder, value);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::__XsdBuilder__XsdBuildFunction::__XsdBuilder__XsdBuildFunction() {}
//  Writing Method size for method: ::System::Xml::Schema::__XsdBuilder__XsdInitFunction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::__XsdBuilder__XsdInitFunction::*)(::System::Object*, void*)>(
    &::System::Xml::Schema::__XsdBuilder__XsdInitFunction::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2d58138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XsdBuilder__XsdInitFunction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::__XsdBuilder__XsdInitFunction.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::__XsdBuilder__XsdInitFunction::*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::__XsdBuilder__XsdInitFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d58210;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XsdBuilder__XsdInitFunction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XsdBuilder__XsdInitFunction*>::get(), 13));
    return ___internal_method;
  }
};
inline ::System::Xml::Schema::__XsdBuilder__XsdInitFunction* System::Xml::Schema::__XsdBuilder__XsdInitFunction::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::__XsdBuilder__XsdInitFunction*>(object, method));
}
inline void System::Xml::Schema::__XsdBuilder__XsdInitFunction::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XsdBuilder__XsdInitFunction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void System::Xml::Schema::__XsdBuilder__XsdInitFunction::Invoke(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XsdBuilder__XsdInitFunction*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, builder, value);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::__XsdBuilder__XsdInitFunction::__XsdBuilder__XsdInitFunction() {}
//  Writing Method size for method: ::System::Xml::Schema::__XsdBuilder__XsdEndChildFunction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::__XsdBuilder__XsdEndChildFunction::*)(::System::Object*, void*)>(
    &::System::Xml::Schema::__XsdBuilder__XsdEndChildFunction::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2d58224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XsdBuilder__XsdEndChildFunction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::__XsdBuilder__XsdEndChildFunction.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::__XsdBuilder__XsdEndChildFunction::*)(::System::Xml::Schema::XsdBuilder*)>(
    &::System::Xml::Schema::__XsdBuilder__XsdEndChildFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d582f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XsdBuilder__XsdEndChildFunction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XsdBuilder__XsdEndChildFunction*>::get(), 13));
    return ___internal_method;
  }
};
inline ::System::Xml::Schema::__XsdBuilder__XsdEndChildFunction* System::Xml::Schema::__XsdBuilder__XsdEndChildFunction::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::__XsdBuilder__XsdEndChildFunction*>(object, method));
}
inline void System::Xml::Schema::__XsdBuilder__XsdEndChildFunction::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XsdBuilder__XsdEndChildFunction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void System::Xml::Schema::__XsdBuilder__XsdEndChildFunction::Invoke(::System::Xml::Schema::XsdBuilder* builder) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XsdBuilder__XsdEndChildFunction*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, builder);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::__XsdBuilder__XsdEndChildFunction::__XsdBuilder__XsdEndChildFunction() {}
//  Writing Method size for method: ::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry::*)(
    ::System::Xml::Schema::__SchemaNames__Token, ::System::Xml::Schema::__XsdBuilder__XsdBuildFunction*)>(&::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2d5830c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::__SchemaNames__Token>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::__XsdBuilder__XsdBuildFunction*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::__SchemaNames__Token& System::Xml::Schema::__XsdBuilder__XsdAttributeEntry::__cordl_internal_get_Attribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Attribute;
}
constexpr ::System::Xml::Schema::__SchemaNames__Token const& System::Xml::Schema::__XsdBuilder__XsdAttributeEntry::__cordl_internal_get_Attribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Attribute;
}
constexpr void System::Xml::Schema::__XsdBuilder__XsdAttributeEntry::__cordl_internal_set_Attribute(::System::Xml::Schema::__SchemaNames__Token value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Attribute = value;
}
constexpr ::System::Xml::Schema::__XsdBuilder__XsdBuildFunction*& System::Xml::Schema::__XsdBuilder__XsdAttributeEntry::__cordl_internal_get_BuildFunc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BuildFunc;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::__XsdBuilder__XsdBuildFunction*> const&
System::Xml::Schema::__XsdBuilder__XsdAttributeEntry::__cordl_internal_get_BuildFunc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BuildFunc;
}
constexpr void System::Xml::Schema::__XsdBuilder__XsdAttributeEntry::__cordl_internal_set_BuildFunc(::System::Xml::Schema::__XsdBuilder__XsdBuildFunction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___BuildFunc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry* System::Xml::Schema::__XsdBuilder__XsdAttributeEntry::New_ctor(::System::Xml::Schema::__SchemaNames__Token a,
                                                                                                                              ::System::Xml::Schema::__XsdBuilder__XsdBuildFunction* build) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>(a, build));
}
inline void System::Xml::Schema::__XsdBuilder__XsdAttributeEntry::_ctor(::System::Xml::Schema::__SchemaNames__Token a, ::System::Xml::Schema::__XsdBuilder__XsdBuildFunction* build) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::__SchemaNames__Token>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::__XsdBuilder__XsdBuildFunction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, a, build);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry::__XsdBuilder__XsdAttributeEntry() {}
//  Writing Method size for method: ::System::Xml::Schema::__XsdBuilder__XsdEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::__XsdBuilder__XsdEntry::*)(
    ::System::Xml::Schema::__SchemaNames__Token, ::System::Xml::Schema::__XsdBuilder__State, ::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>,
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, ::System::Xml::Schema::__XsdBuilder__XsdInitFunction*,
    ::System::Xml::Schema::__XsdBuilder__XsdEndChildFunction*, bool)>(&::System::Xml::Schema::__XsdBuilder__XsdEntry::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2d5833c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XsdBuilder__XsdEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::__SchemaNames__Token>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::__XsdBuilder__State>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::__XsdBuilder__XsdInitFunction*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::__XsdBuilder__XsdEndChildFunction*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::__SchemaNames__Token& System::Xml::Schema::__XsdBuilder__XsdEntry::__cordl_internal_get_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr ::System::Xml::Schema::__SchemaNames__Token const& System::Xml::Schema::__XsdBuilder__XsdEntry::__cordl_internal_get_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr void System::Xml::Schema::__XsdBuilder__XsdEntry::__cordl_internal_set_Name(::System::Xml::Schema::__SchemaNames__Token value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Name = value;
}
constexpr ::System::Xml::Schema::__XsdBuilder__State& System::Xml::Schema::__XsdBuilder__XsdEntry::__cordl_internal_get_CurrentState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurrentState;
}
constexpr ::System::Xml::Schema::__XsdBuilder__State const& System::Xml::Schema::__XsdBuilder__XsdEntry::__cordl_internal_get_CurrentState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurrentState;
}
constexpr void System::Xml::Schema::__XsdBuilder__XsdEntry::__cordl_internal_set_CurrentState(::System::Xml::Schema::__XsdBuilder__State value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CurrentState = value;
}
constexpr ::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>& System::Xml::Schema::__XsdBuilder__XsdEntry::__cordl_internal_get_NextStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NextStates;
}
constexpr ::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> const&
System::Xml::Schema::__XsdBuilder__XsdEntry::__cordl_internal_get_NextStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NextStates;
}
constexpr void
System::Xml::Schema::__XsdBuilder__XsdEntry::__cordl_internal_set_NextStates(::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NextStates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>&
System::Xml::Schema::__XsdBuilder__XsdEntry::__cordl_internal_get_Attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Attributes;
}
constexpr ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> const&
System::Xml::Schema::__XsdBuilder__XsdEntry::__cordl_internal_get_Attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Attributes;
}
constexpr void System::Xml::Schema::__XsdBuilder__XsdEntry::__cordl_internal_set_Attributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Attributes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::__XsdBuilder__XsdInitFunction*& System::Xml::Schema::__XsdBuilder__XsdEntry::__cordl_internal_get_InitFunc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InitFunc;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::__XsdBuilder__XsdInitFunction*> const& System::Xml::Schema::__XsdBuilder__XsdEntry::__cordl_internal_get_InitFunc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InitFunc;
}
constexpr void System::Xml::Schema::__XsdBuilder__XsdEntry::__cordl_internal_set_InitFunc(::System::Xml::Schema::__XsdBuilder__XsdInitFunction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InitFunc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::__XsdBuilder__XsdEndChildFunction*& System::Xml::Schema::__XsdBuilder__XsdEntry::__cordl_internal_get_EndChildFunc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EndChildFunc;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::__XsdBuilder__XsdEndChildFunction*> const& System::Xml::Schema::__XsdBuilder__XsdEntry::__cordl_internal_get_EndChildFunc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EndChildFunc;
}
constexpr void System::Xml::Schema::__XsdBuilder__XsdEntry::__cordl_internal_set_EndChildFunc(::System::Xml::Schema::__XsdBuilder__XsdEndChildFunction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___EndChildFunc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::Schema::__XsdBuilder__XsdEntry::__cordl_internal_get_ParseContent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ParseContent;
}
constexpr bool const& System::Xml::Schema::__XsdBuilder__XsdEntry::__cordl_internal_get_ParseContent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ParseContent;
}
constexpr void System::Xml::Schema::__XsdBuilder__XsdEntry::__cordl_internal_set_ParseContent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ParseContent = value;
}
inline ::System::Xml::Schema::__XsdBuilder__XsdEntry*
System::Xml::Schema::__XsdBuilder__XsdEntry::New_ctor(::System::Xml::Schema::__SchemaNames__Token n, ::System::Xml::Schema::__XsdBuilder__State state,
                                                      ::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> nextStates,
                                                      ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> attributes,
                                                      ::System::Xml::Schema::__XsdBuilder__XsdInitFunction* init, ::System::Xml::Schema::__XsdBuilder__XsdEndChildFunction* end, bool parseContent) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::__XsdBuilder__XsdEntry*>(n, state, nextStates, attributes, init, end, parseContent));
}
inline void
System::Xml::Schema::__XsdBuilder__XsdEntry::_ctor(::System::Xml::Schema::__SchemaNames__Token n, ::System::Xml::Schema::__XsdBuilder__State state,
                                                   ::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> nextStates,
                                                   ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> attributes,
                                                   ::System::Xml::Schema::__XsdBuilder__XsdInitFunction* init, ::System::Xml::Schema::__XsdBuilder__XsdEndChildFunction* end, bool parseContent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XsdBuilder__XsdEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::__SchemaNames__Token>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::__XsdBuilder__State>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::__XsdBuilder__XsdInitFunction*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::__XsdBuilder__XsdEndChildFunction*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, n, state, nextStates, attributes, init, end, parseContent);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::__XsdBuilder__XsdEntry::__XsdBuilder__XsdEntry() {}
//  Writing Method size for method: ::System::Xml::Schema::__XsdBuilder__BuilderNamespaceManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::__XsdBuilder__BuilderNamespaceManager::*)(
    ::System::Xml::XmlNamespaceManager*, ::System::Xml::XmlReader*)>(&::System::Xml::Schema::__XsdBuilder__BuilderNamespaceManager::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2d583a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XsdBuilder__BuilderNamespaceManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNamespaceManager*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::__XsdBuilder__BuilderNamespaceManager.LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::__XsdBuilder__BuilderNamespaceManager::*)(::StringW)>(
    &::System::Xml::Schema::__XsdBuilder__BuilderNamespaceManager::LookupNamespace)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2d583cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XsdBuilder__BuilderNamespaceManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XsdBuilder__BuilderNamespaceManager*>::get(), 16));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlNamespaceManager*& System::Xml::Schema::__XsdBuilder__BuilderNamespaceManager::__cordl_internal_get_nsMgr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsMgr;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNamespaceManager*> const& System::Xml::Schema::__XsdBuilder__BuilderNamespaceManager::__cordl_internal_get_nsMgr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsMgr;
}
constexpr void System::Xml::Schema::__XsdBuilder__BuilderNamespaceManager::__cordl_internal_set_nsMgr(::System::Xml::XmlNamespaceManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nsMgr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlReader*& System::Xml::Schema::__XsdBuilder__BuilderNamespaceManager::__cordl_internal_get_reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlReader*> const& System::Xml::Schema::__XsdBuilder__BuilderNamespaceManager::__cordl_internal_get_reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr void System::Xml::Schema::__XsdBuilder__BuilderNamespaceManager::__cordl_internal_set_reader(::System::Xml::XmlReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___reader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::Schema::__XsdBuilder__BuilderNamespaceManager* System::Xml::Schema::__XsdBuilder__BuilderNamespaceManager::New_ctor(::System::Xml::XmlNamespaceManager* nsMgr,
                                                                                                                                          ::System::Xml::XmlReader* reader) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::__XsdBuilder__BuilderNamespaceManager*>(nsMgr, reader));
}
inline void System::Xml::Schema::__XsdBuilder__BuilderNamespaceManager::_ctor(::System::Xml::XmlNamespaceManager* nsMgr, ::System::Xml::XmlReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XsdBuilder__BuilderNamespaceManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNamespaceManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nsMgr, reader);
}
inline ::StringW System::Xml::Schema::__XsdBuilder__BuilderNamespaceManager::LookupNamespace(::StringW prefix) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XsdBuilder__BuilderNamespaceManager*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, prefix);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::__XsdBuilder__BuilderNamespaceManager::__XsdBuilder__BuilderNamespaceManager() {}
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::Schema::XsdBuilder::*)(::System::Xml::XmlReader*, ::System::Xml::XmlNamespaceManager*, ::System::Xml::Schema::XmlSchema*, ::System::Xml::XmlNameTable*,
                                                            ::System::Xml::Schema::SchemaNames*, ::System::Xml::Schema::ValidationEventHandler*)>(&::System::Xml::Schema::XsdBuilder::_ctor)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x2d4b6f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNamespaceManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaNames*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ValidationEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.ProcessElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XsdBuilder::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::ProcessElement)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2d4b8bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.ProcessAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)(::StringW, ::StringW, ::StringW, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::ProcessAttribute)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x2d4bd78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.IsContentParsed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XsdBuilder::*)()>(&::System::Xml::Schema::XsdBuilder::IsContentParsed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d4c314;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.ProcessMarkup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)(::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*>)>(
    &::System::Xml::Schema::XsdBuilder::ProcessMarkup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d4c330;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.ProcessCData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)(::StringW)>(&::System::Xml::Schema::XsdBuilder::ProcessCData)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d4c338;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.StartChildren
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)()>(&::System::Xml::Schema::XsdBuilder::StartChildren)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2d4c390;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.EndChildren
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)()>(&::System::Xml::Schema::XsdBuilder::EndChildren)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d4c514;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.Push
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)()>(&::System::Xml::Schema::XsdBuilder::Push)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2d4bb30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "Push",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.Pop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)()>(&::System::Xml::Schema::XsdBuilder::Pop)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2d4c550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "Pop",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.get_CurrentElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::__SchemaNames__Token (::System::Xml::Schema::XsdBuilder::*)()>(
    &::System::Xml::Schema::XsdBuilder::get_CurrentElement)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d4d248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "get_CurrentElement",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.get_ParentElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::__SchemaNames__Token (::System::Xml::Schema::XsdBuilder::*)()>(
    &::System::Xml::Schema::XsdBuilder::get_ParentElement)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2d4d264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "get_ParentElement",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.get_ParentContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaObject* (::System::Xml::Schema::XsdBuilder::*)()>(
    &::System::Xml::Schema::XsdBuilder::get_ParentContainer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2d4d2dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "get_ParentContainer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.GetContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::Schema::XmlSchemaObject* (::System::Xml::Schema::XsdBuilder::*)(::System::Xml::Schema::__XsdBuilder__State)>(&::System::Xml::Schema::XsdBuilder::GetContainer)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2d4c60c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "GetContainer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::__XsdBuilder__State>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.SetContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)(::System::Xml::Schema::__XsdBuilder__State, ::System::Object*)>(
    &::System::Xml::Schema::XsdBuilder::SetContainer)> {
  constexpr static std::size_t size = 0xb04;
  constexpr static std::size_t addrs = 0x2d4c744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "SetContainer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::__XsdBuilder__State>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAnnotated_Id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildAnnotated_Id)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d4d36c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAnnotated_Id", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildSchema_AttributeFormDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildSchema_AttributeFormDefault)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2d4d390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildSchema_AttributeFormDefault", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildSchema_ElementFormDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildSchema_ElementFormDefault)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2d4d504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildSchema_ElementFormDefault", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildSchema_TargetNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildSchema_TargetNamespace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d4d5a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildSchema_TargetNamespace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildSchema_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildSchema_Version)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d4d5c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildSchema_Version", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildSchema_FinalDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildSchema_FinalDefault)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2d4d5e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildSchema_FinalDefault", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildSchema_BlockDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildSchema_BlockDefault)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2d4d8a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildSchema_BlockDefault", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitSchema)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d4d908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitSchema", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitInclude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitInclude)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2d4d92c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitInclude", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildInclude_SchemaLocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildInclude_SchemaLocation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d4d9d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildInclude_SchemaLocation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitImport
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitImport)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2d4d9f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitImport", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildImport_Namespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildImport_Namespace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d4daa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildImport_Namespace", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildImport_SchemaLocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildImport_SchemaLocation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d4dac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildImport_SchemaLocation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitRedefine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitRedefine)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2d4dae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitRedefine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildRedefine_SchemaLocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildRedefine_SchemaLocation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d4db90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildRedefine_SchemaLocation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.EndRedefine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*)>(&::System::Xml::Schema::XsdBuilder::EndRedefine)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d4dbb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "EndRedefine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitAttribute)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2d4dbcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitAttribute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAttribute_Default
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildAttribute_Default)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d4de7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAttribute_Default", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAttribute_Fixed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildAttribute_Fixed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d4de9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAttribute_Fixed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAttribute_Form
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildAttribute_Form)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2d4debc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAttribute_Form", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAttribute_Use
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildAttribute_Use)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2d4df5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAttribute_Use", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAttribute_Ref
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildAttribute_Ref)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d4dffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAttribute_Ref", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAttribute_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildAttribute_Name)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d4e1d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAttribute_Name", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAttribute_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildAttribute_Type)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d4e1f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAttribute_Type", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitElement)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2d4e260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitElement", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildElement_Abstract
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildElement_Abstract)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d4e354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildElement_Abstract", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildElement_Block
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildElement_Block)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2d4e4d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildElement_Block", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildElement_Default
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildElement_Default)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d4e538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildElement_Default", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildElement_Form
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildElement_Form)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2d4e558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildElement_Form", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildElement_SubstitutionGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildElement_SubstitutionGroup)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d4e5f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildElement_SubstitutionGroup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildElement_Final
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildElement_Final)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2d4e668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildElement_Final", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildElement_Fixed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildElement_Fixed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d4e6d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildElement_Fixed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildElement_MaxOccurs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildElement_MaxOccurs)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d4e6f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildElement_MaxOccurs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildElement_MinOccurs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildElement_MinOccurs)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d4e7cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildElement_MinOccurs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildElement_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildElement_Name)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d4e8a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildElement_Name", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildElement_Nillable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildElement_Nillable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d4e8c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildElement_Nillable", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildElement_Ref
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildElement_Ref)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d4e938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildElement_Ref", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildElement_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildElement_Type)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d4e9a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildElement_Type", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitSimpleType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitSimpleType)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x2d4ea18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitSimpleType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildSimpleType_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildSimpleType_Name)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d4ece8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildSimpleType_Name", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildSimpleType_Final
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildSimpleType_Final)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2d4ed08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildSimpleType_Final", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitSimpleTypeUnion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitSimpleTypeUnion)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2d4ed70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitSimpleTypeUnion", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildSimpleTypeUnion_MemberTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildSimpleTypeUnion_MemberTypes)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2d4ee18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildSimpleTypeUnion_MemberTypes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitSimpleTypeList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitSimpleTypeList)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2d4effc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitSimpleTypeList", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildSimpleTypeList_ItemType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildSimpleTypeList_ItemType)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d4f0a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildSimpleTypeList_ItemType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitSimpleTypeRestriction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::InitSimpleTypeRestriction)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2d4f114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitSimpleTypeRestriction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildSimpleTypeRestriction_Base
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildSimpleTypeRestriction_Base)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d4f1bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildSimpleTypeRestriction_Base", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitComplexType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitComplexType)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2d4f22c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitComplexType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildComplexType_Abstract
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildComplexType_Abstract)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d4f38c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildComplexType_Abstract", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildComplexType_Block
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildComplexType_Block)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2d4f3fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildComplexType_Block", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildComplexType_Final
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildComplexType_Final)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2d4f464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildComplexType_Final", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildComplexType_Mixed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildComplexType_Mixed)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2d4f4cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildComplexType_Mixed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildComplexType_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildComplexType_Name)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d4f544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildComplexType_Name", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitComplexContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitComplexContent)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2d4f564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitComplexContent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildComplexContent_Mixed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildComplexContent_Mixed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d4f650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildComplexContent_Mixed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitComplexContentExtension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::InitComplexContentExtension)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2d4f6c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitComplexContentExtension", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildComplexContentExtension_Base
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildComplexContentExtension_Base)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d4f794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildComplexContentExtension_Base", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitComplexContentRestriction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::InitComplexContentRestriction)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d4f804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitComplexContentRestriction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildComplexContentRestriction_Base
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildComplexContentRestriction_Base)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d4f884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildComplexContentRestriction_Base", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitSimpleContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitSimpleContent)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2d4f8f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitSimpleContent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitSimpleContentExtension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::InitSimpleContentExtension)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2d4f9e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitSimpleContentExtension", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildSimpleContentExtension_Base
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildSimpleContentExtension_Base)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d4fab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildSimpleContentExtension_Base", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitSimpleContentRestriction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::InitSimpleContentRestriction)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2d4fb24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitSimpleContentRestriction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildSimpleContentRestriction_Base
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildSimpleContentRestriction_Base)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d4fbf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildSimpleContentRestriction_Base", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitAttributeGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitAttributeGroup)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2d4fc68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitAttributeGroup", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAttributeGroup_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildAttributeGroup_Name)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d4fd24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAttributeGroup_Name", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitAttributeGroupRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitAttributeGroupRef)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d4fd44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitAttributeGroupRef", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAttributeGroupRef_Ref
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildAttributeGroupRef_Ref)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d4fdb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAttributeGroupRef_Ref", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitAnyAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitAnyAttribute)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2d4fe24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitAnyAttribute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAnyAttribute_Namespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildAnyAttribute_Namespace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d50048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAnyAttribute_Namespace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAnyAttribute_ProcessContents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildAnyAttribute_ProcessContents)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2d50068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAnyAttribute_ProcessContents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitGroup)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2d50108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitGroup", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildGroup_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildGroup_Name)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d501c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildGroup_Name", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitGroupRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitGroupRef)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2d501e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitGroupRef", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildParticle_MaxOccurs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildParticle_MaxOccurs)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d5054c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildParticle_MaxOccurs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildParticle_MinOccurs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildParticle_MinOccurs)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d50568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildParticle_MinOccurs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildGroupRef_Ref
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildGroupRef_Ref)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d50584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildGroupRef_Ref", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitAll)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2d505f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitAll", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitChoice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitChoice)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2d50668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitChoice", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitSequence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitSequence)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d506dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitSequence", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitAny
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitAny)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2d5074c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitAny", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAny_Namespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildAny_Namespace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d507c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAny_Namespace", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAny_ProcessContents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildAny_ProcessContents)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2d507e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAny_ProcessContents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitNotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitNotation)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2d50880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitNotation", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildNotation_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildNotation_Name)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d50904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildNotation_Name", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildNotation_Public
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildNotation_Public)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d50924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildNotation_Public", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildNotation_System
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildNotation_System)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d50944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildNotation_System", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitFacet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitFacet)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x2d50964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitFacet", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildFacet_Fixed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildFacet_Fixed)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2d50c98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildFacet_Fixed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildFacet_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildFacet_Value)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d50d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildFacet_Value", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitIdentityConstraint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::InitIdentityConstraint)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2d50d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitIdentityConstraint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildIdentityConstraint_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildIdentityConstraint_Name)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d50e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildIdentityConstraint_Name", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildIdentityConstraint_Refer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildIdentityConstraint_Refer)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2d50e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildIdentityConstraint_Refer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitSelector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitSelector)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2d50fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitSelector", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildSelector_XPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildSelector_XPath)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d51060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildSelector_XPath", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitField)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2d51080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitField", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildField_XPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildField_XPath)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d51134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildField_XPath", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitAnnotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitAnnotation)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2d51154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitAnnotation", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitAppinfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitAppinfo)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2d51220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitAppinfo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildAppinfo_Source
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::BuildAppinfo_Source)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2d512c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAppinfo_Source", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.EndAppinfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*)>(&::System::Xml::Schema::XsdBuilder::EndAppinfo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d51334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "EndAppinfo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.InitDocumentation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&::System::Xml::Schema::XsdBuilder::InitDocumentation)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2d51358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitDocumentation", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildDocumentation_Source
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildDocumentation_Source)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2d51400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildDocumentation_Source", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.BuildDocumentation_XmlLang
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::BuildDocumentation_XmlLang)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2d51468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildDocumentation_XmlLang", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.EndDocumentation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XsdBuilder*)>(&::System::Xml::Schema::XsdBuilder::EndDocumentation)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d515a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "EndDocumentation", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.AddAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)(::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::XsdBuilder::AddAttribute)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x2d4dc74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "AddAttribute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.AddParticle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)(::System::Xml::Schema::XmlSchemaParticle*)>(
    &::System::Xml::Schema::XsdBuilder::AddParticle)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x2d50258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "AddParticle", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.GetNextState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XsdBuilder::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::XsdBuilder::GetNextState)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2d4b9d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "GetNextState", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.IsSkipableElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XsdBuilder::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::XsdBuilder::IsSkipableElement)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d4bc64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "IsSkipableElement", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.SetMinOccurs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)(::System::Xml::Schema::XmlSchemaParticle*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::SetMinOccurs)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2d4e7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "SetMinOccurs", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.SetMaxOccurs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)(::System::Xml::Schema::XmlSchemaParticle*, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::SetMaxOccurs)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2d4e70c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "SetMaxOccurs", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.ParseBoolean
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XsdBuilder::*)(::StringW, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::ParseBoolean)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2d4e3c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "ParseBoolean", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.ParseEnum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XsdBuilder::*)(::StringW, ::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::System::Xml::Schema::XsdBuilder::ParseEnum)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2d4d430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "ParseEnum", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.ParseQName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::Schema::XsdBuilder::*)(::StringW, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::ParseQName)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2d4e06c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "ParseQName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.ParseBlockFinalEnum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XsdBuilder::*)(::StringW, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::ParseBlockFinalEnum)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2d4d64c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "ParseBlockFinalEnum", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.ParseUriReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Xml::Schema::XsdBuilder::ParseUriReference)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d51330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "ParseUriReference", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.SendValidationEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)(::StringW, ::StringW, ::StringW, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::SendValidationEvent)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2d515cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "SendValidationEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.SendValidationEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)(::StringW, ::StringW)>(
    &::System::Xml::Schema::XsdBuilder::SendValidationEvent)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2d4bc8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "SendValidationEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.SendValidationEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)(
    ::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>, ::System::Xml::Schema::XmlSeverityType)>(&::System::Xml::Schema::XsdBuilder::SendValidationEvent)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2d4c21c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "SendValidationEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSeverityType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.SendValidationEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)(
    ::System::Xml::Schema::XmlSchemaException*, ::System::Xml::Schema::XmlSeverityType)>(&::System::Xml::Schema::XsdBuilder::SendValidationEvent)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2d5176c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "SendValidationEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaException*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSeverityType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.SendValidationEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)(::System::Xml::Schema::XmlSchemaException*)>(
    &::System::Xml::Schema::XsdBuilder::SendValidationEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d4eff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "SendValidationEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaException*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdBuilder.RecordPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdBuilder::*)()>(&::System::Xml::Schema::XsdBuilder::RecordPosition)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2d4bbc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "RecordPosition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlReader*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlReader*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_reader(::System::Xml::XmlReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___reader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::PositionInfo*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_positionInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::PositionInfo*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_positionInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionInfo;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_positionInfo(::System::Xml::PositionInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___positionInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::__XsdBuilder__XsdEntry*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_currentEntry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentEntry;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::__XsdBuilder__XsdEntry*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_currentEntry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentEntry;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_currentEntry(::System::Xml::Schema::__XsdBuilder__XsdEntry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentEntry)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::__XsdBuilder__XsdEntry*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_nextEntry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextEntry;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::__XsdBuilder__XsdEntry*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_nextEntry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextEntry;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_nextEntry(::System::Xml::Schema::__XsdBuilder__XsdEntry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nextEntry)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::System::Xml::HWStack*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_stateHistory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stateHistory;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_stateHistory(::System::Xml::HWStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stateHistory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Stack*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_containerStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___containerStack;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Stack*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_containerStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___containerStack;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_containerStack(::System::Collections::Stack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___containerStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlNameTable*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_nameTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_nameTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nameTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::SchemaNames*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_schemaNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaNames;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SchemaNames*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_schemaNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaNames;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_schemaNames(::System::Xml::Schema::SchemaNames* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___schemaNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlNamespaceManager*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_namespaceManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaceManager;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNamespaceManager*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_namespaceManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaceManager;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_namespaceManager(::System::Xml::XmlNamespaceManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___namespaceManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchema*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_schema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schema;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_schema(::System::Xml::Schema::XmlSchema* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___schema)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaObject*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_xso() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xso;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObject*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_xso() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xso;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_xso(::System::Xml::Schema::XmlSchemaObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xso)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaElement*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_element() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___element;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaElement*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_element() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___element;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_element(::System::Xml::Schema::XmlSchemaElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___element)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaAny*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_anyElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anyElement;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaAny*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_anyElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anyElement;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_anyElement(::System::Xml::Schema::XmlSchemaAny* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___anyElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaAttribute*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_attribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attribute;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaAttribute*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_attribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attribute;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_attribute(::System::Xml::Schema::XmlSchemaAttribute* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attribute)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaAnyAttribute*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_anyAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anyAttribute;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaAnyAttribute*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_anyAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anyAttribute;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_anyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___anyAttribute)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaComplexType*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_complexType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complexType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaComplexType*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_complexType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complexType;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_complexType(::System::Xml::Schema::XmlSchemaComplexType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___complexType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleType*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_simpleType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaSimpleType*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_simpleType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleType;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_simpleType(::System::Xml::Schema::XmlSchemaSimpleType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___simpleType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaComplexContent*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_complexContent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complexContent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaComplexContent*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_complexContent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complexContent;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_complexContent(::System::Xml::Schema::XmlSchemaComplexContent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___complexContent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaComplexContentExtension*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_complexContentExtension() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complexContentExtension;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaComplexContentExtension*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_complexContentExtension() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complexContentExtension;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_complexContentExtension(::System::Xml::Schema::XmlSchemaComplexContentExtension* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___complexContentExtension)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaComplexContentRestriction*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_complexContentRestriction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complexContentRestriction;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaComplexContentRestriction*> const&
System::Xml::Schema::XsdBuilder::__cordl_internal_get_complexContentRestriction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complexContentRestriction;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_complexContentRestriction(::System::Xml::Schema::XmlSchemaComplexContentRestriction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___complexContentRestriction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleContent*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_simpleContent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleContent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaSimpleContent*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_simpleContent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleContent;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_simpleContent(::System::Xml::Schema::XmlSchemaSimpleContent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___simpleContent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleContentExtension*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_simpleContentExtension() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleContentExtension;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaSimpleContentExtension*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_simpleContentExtension() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleContentExtension;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_simpleContentExtension(::System::Xml::Schema::XmlSchemaSimpleContentExtension* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___simpleContentExtension)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleContentRestriction*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_simpleContentRestriction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleContentRestriction;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaSimpleContentRestriction*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_simpleContentRestriction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleContentRestriction;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_simpleContentRestriction(::System::Xml::Schema::XmlSchemaSimpleContentRestriction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___simpleContentRestriction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleTypeUnion*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_simpleTypeUnion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleTypeUnion;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaSimpleTypeUnion*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_simpleTypeUnion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleTypeUnion;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_simpleTypeUnion(::System::Xml::Schema::XmlSchemaSimpleTypeUnion* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___simpleTypeUnion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleTypeList*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_simpleTypeList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleTypeList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaSimpleTypeList*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_simpleTypeList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleTypeList;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_simpleTypeList(::System::Xml::Schema::XmlSchemaSimpleTypeList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___simpleTypeList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleTypeRestriction*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_simpleTypeRestriction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleTypeRestriction;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaSimpleTypeRestriction*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_simpleTypeRestriction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleTypeRestriction;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_simpleTypeRestriction(::System::Xml::Schema::XmlSchemaSimpleTypeRestriction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___simpleTypeRestriction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaGroup*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_group() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___group;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaGroup*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_group() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___group;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_group(::System::Xml::Schema::XmlSchemaGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___group)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaGroupRef*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_groupRef() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupRef;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaGroupRef*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_groupRef() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupRef;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_groupRef(::System::Xml::Schema::XmlSchemaGroupRef* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___groupRef)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaAll*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_all() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___all;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaAll*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_all() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___all;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_all(::System::Xml::Schema::XmlSchemaAll* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___all)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaChoice*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_choice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___choice;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaChoice*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_choice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___choice;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_choice(::System::Xml::Schema::XmlSchemaChoice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___choice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaSequence*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_sequence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sequence;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaSequence*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_sequence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sequence;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_sequence(::System::Xml::Schema::XmlSchemaSequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sequence)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaParticle*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_particle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___particle;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaParticle*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_particle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___particle;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_particle(::System::Xml::Schema::XmlSchemaParticle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___particle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaAttributeGroup*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_attributeGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeGroup;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaAttributeGroup*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_attributeGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeGroup;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_attributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributeGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaAttributeGroupRef*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_attributeGroupRef() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeGroupRef;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaAttributeGroupRef*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_attributeGroupRef() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeGroupRef;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_attributeGroupRef(::System::Xml::Schema::XmlSchemaAttributeGroupRef* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributeGroupRef)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaNotation*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_notation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notation;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaNotation*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_notation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notation;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_notation(::System::Xml::Schema::XmlSchemaNotation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___notation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaIdentityConstraint*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_identityConstraint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identityConstraint;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaIdentityConstraint*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_identityConstraint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identityConstraint;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_identityConstraint(::System::Xml::Schema::XmlSchemaIdentityConstraint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___identityConstraint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaXPath*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_xpath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xpath;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaXPath*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_xpath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xpath;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_xpath(::System::Xml::Schema::XmlSchemaXPath* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xpath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaInclude*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_include() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___include;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaInclude*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_include() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___include;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_include(::System::Xml::Schema::XmlSchemaInclude* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___include)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaImport*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_import() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___import;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaImport*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_import() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___import;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_import(::System::Xml::Schema::XmlSchemaImport* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___import)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaAnnotation*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_annotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___annotation;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaAnnotation*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_annotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___annotation;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_annotation(::System::Xml::Schema::XmlSchemaAnnotation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___annotation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaAppInfo*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_appInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaAppInfo*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_appInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appInfo;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_appInfo(::System::Xml::Schema::XmlSchemaAppInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___appInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaDocumentation*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_documentation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___documentation;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaDocumentation*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_documentation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___documentation;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_documentation(::System::Xml::Schema::XmlSchemaDocumentation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___documentation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaFacet*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_facet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___facet;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaFacet*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_facet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___facet;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_facet(::System::Xml::Schema::XmlSchemaFacet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___facet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*>& System::Xml::Schema::XsdBuilder::__cordl_internal_get_markup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___markup;
}
constexpr ::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_markup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___markup;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_markup(::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___markup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaRedefine*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_redefine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redefine;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaRedefine*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_redefine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redefine;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_redefine(::System::Xml::Schema::XmlSchemaRedefine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___redefine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::ValidationEventHandler*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_validationEventHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationEventHandler;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::ValidationEventHandler*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_validationEventHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationEventHandler;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_validationEventHandler(::System::Xml::Schema::ValidationEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___validationEventHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_unhandledAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unhandledAttributes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_unhandledAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unhandledAttributes;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_unhandledAttributes(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unhandledAttributes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::XsdBuilder::__cordl_internal_get_namespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaces;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Xml::Schema::XsdBuilder::__cordl_internal_get_namespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaces;
}
constexpr void System::Xml::Schema::XsdBuilder::__cordl_internal_set_namespaces(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___namespaces)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SchemaElement(::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "SchemaElement",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> System::Xml::Schema::XsdBuilder::getStaticF_SchemaElement() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "SchemaElement",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SchemaSubelements(::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "SchemaSubelements",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> System::Xml::Schema::XsdBuilder::getStaticF_SchemaSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "SchemaSubelements",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_AttributeSubelements(::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "AttributeSubelements",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> System::Xml::Schema::XsdBuilder::getStaticF_AttributeSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "AttributeSubelements",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_ElementSubelements(::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "ElementSubelements",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> System::Xml::Schema::XsdBuilder::getStaticF_ElementSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "ElementSubelements",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_ComplexTypeSubelements(::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "ComplexTypeSubelements",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> System::Xml::Schema::XsdBuilder::getStaticF_ComplexTypeSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "ComplexTypeSubelements",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SimpleContentSubelements(::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "SimpleContentSubelements",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> System::Xml::Schema::XsdBuilder::getStaticF_SimpleContentSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "SimpleContentSubelements",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void
System::Xml::Schema::XsdBuilder::setStaticF_SimpleContentExtensionSubelements(::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "SimpleContentExtensionSubelements",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> System::Xml::Schema::XsdBuilder::getStaticF_SimpleContentExtensionSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "SimpleContentExtensionSubelements",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void
System::Xml::Schema::XsdBuilder::setStaticF_SimpleContentRestrictionSubelements(::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "SimpleContentRestrictionSubelements",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> System::Xml::Schema::XsdBuilder::getStaticF_SimpleContentRestrictionSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "SimpleContentRestrictionSubelements",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_ComplexContentSubelements(::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "ComplexContentSubelements",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> System::Xml::Schema::XsdBuilder::getStaticF_ComplexContentSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "ComplexContentSubelements",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void
System::Xml::Schema::XsdBuilder::setStaticF_ComplexContentExtensionSubelements(::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "ComplexContentExtensionSubelements",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> System::Xml::Schema::XsdBuilder::getStaticF_ComplexContentExtensionSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "ComplexContentExtensionSubelements",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void
System::Xml::Schema::XsdBuilder::setStaticF_ComplexContentRestrictionSubelements(::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "ComplexContentRestrictionSubelements",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> System::Xml::Schema::XsdBuilder::getStaticF_ComplexContentRestrictionSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "ComplexContentRestrictionSubelements",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SimpleTypeSubelements(::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "SimpleTypeSubelements",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> System::Xml::Schema::XsdBuilder::getStaticF_SimpleTypeSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "SimpleTypeSubelements",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void
System::Xml::Schema::XsdBuilder::setStaticF_SimpleTypeRestrictionSubelements(::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "SimpleTypeRestrictionSubelements",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> System::Xml::Schema::XsdBuilder::getStaticF_SimpleTypeRestrictionSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "SimpleTypeRestrictionSubelements",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SimpleTypeListSubelements(::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "SimpleTypeListSubelements",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> System::Xml::Schema::XsdBuilder::getStaticF_SimpleTypeListSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "SimpleTypeListSubelements",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SimpleTypeUnionSubelements(::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "SimpleTypeUnionSubelements",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> System::Xml::Schema::XsdBuilder::getStaticF_SimpleTypeUnionSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "SimpleTypeUnionSubelements",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_RedefineSubelements(::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "RedefineSubelements",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> System::Xml::Schema::XsdBuilder::getStaticF_RedefineSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "RedefineSubelements",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_AttributeGroupSubelements(::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "AttributeGroupSubelements",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> System::Xml::Schema::XsdBuilder::getStaticF_AttributeGroupSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "AttributeGroupSubelements",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_GroupSubelements(::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "GroupSubelements",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> System::Xml::Schema::XsdBuilder::getStaticF_GroupSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "GroupSubelements",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_AllSubelements(::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "AllSubelements",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> System::Xml::Schema::XsdBuilder::getStaticF_AllSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "AllSubelements",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_ChoiceSequenceSubelements(::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "ChoiceSequenceSubelements",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> System::Xml::Schema::XsdBuilder::getStaticF_ChoiceSequenceSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "ChoiceSequenceSubelements",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void
System::Xml::Schema::XsdBuilder::setStaticF_IdentityConstraintSubelements(::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "IdentityConstraintSubelements",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> System::Xml::Schema::XsdBuilder::getStaticF_IdentityConstraintSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "IdentityConstraintSubelements",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_AnnotationSubelements(::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "AnnotationSubelements",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> System::Xml::Schema::XsdBuilder::getStaticF_AnnotationSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "AnnotationSubelements",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_AnnotatedSubelements(::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "AnnotatedSubelements",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*> System::Xml::Schema::XsdBuilder::getStaticF_AnnotatedSubelements() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__State, ::Array<::System::Xml::Schema::__XsdBuilder__State>*>, "AnnotatedSubelements",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SchemaAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "SchemaAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_SchemaAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "SchemaAttributes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_AttributeAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "AttributeAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_AttributeAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "AttributeAttributes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_ElementAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "ElementAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_ElementAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "ElementAttributes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_ComplexTypeAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "ComplexTypeAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_ComplexTypeAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>,
                                           "ComplexTypeAttributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SimpleContentAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "SimpleContentAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_SimpleContentAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>,
                                           "SimpleContentAttributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SimpleContentExtensionAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>,
                                    "SimpleContentExtensionAttributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_SimpleContentExtensionAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>,
                                           "SimpleContentExtensionAttributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SimpleContentRestrictionAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>,
                                    "SimpleContentRestrictionAttributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_SimpleContentRestrictionAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>,
                                           "SimpleContentRestrictionAttributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_ComplexContentAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "ComplexContentAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_ComplexContentAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>,
                                           "ComplexContentAttributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_ComplexContentExtensionAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>,
                                    "ComplexContentExtensionAttributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_ComplexContentExtensionAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>,
                                           "ComplexContentExtensionAttributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_ComplexContentRestrictionAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>,
                                    "ComplexContentRestrictionAttributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_ComplexContentRestrictionAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>,
                                           "ComplexContentRestrictionAttributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SimpleTypeAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "SimpleTypeAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_SimpleTypeAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "SimpleTypeAttributes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SimpleTypeRestrictionAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>,
                                    "SimpleTypeRestrictionAttributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_SimpleTypeRestrictionAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>,
                                           "SimpleTypeRestrictionAttributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SimpleTypeUnionAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "SimpleTypeUnionAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_SimpleTypeUnionAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>,
                                           "SimpleTypeUnionAttributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SimpleTypeListAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "SimpleTypeListAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_SimpleTypeListAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>,
                                           "SimpleTypeListAttributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_AttributeGroupAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "AttributeGroupAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_AttributeGroupAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>,
                                           "AttributeGroupAttributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_AttributeGroupRefAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "AttributeGroupRefAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_AttributeGroupRefAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>,
                                           "AttributeGroupRefAttributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_GroupAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "GroupAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_GroupAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "GroupAttributes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_GroupRefAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "GroupRefAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_GroupRefAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "GroupRefAttributes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_ParticleAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "ParticleAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_ParticleAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "ParticleAttributes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void
System::Xml::Schema::XsdBuilder::setStaticF_AnyAttributes(::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "AnyAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_AnyAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "AnyAttributes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_IdentityConstraintAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>,
                                    "IdentityConstraintAttributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_IdentityConstraintAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>,
                                           "IdentityConstraintAttributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SelectorAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "SelectorAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_SelectorAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "SelectorAttributes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_FieldAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "FieldAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_FieldAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "FieldAttributes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_NotationAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "NotationAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_NotationAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "NotationAttributes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_IncludeAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "IncludeAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_IncludeAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "IncludeAttributes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_ImportAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "ImportAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_ImportAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "ImportAttributes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_FacetAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "FacetAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_FacetAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "FacetAttributes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_AnyAttributeAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "AnyAttributeAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_AnyAttributeAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>,
                                           "AnyAttributeAttributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_DocumentationAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "DocumentationAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_DocumentationAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>,
                                           "DocumentationAttributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_AppinfoAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "AppinfoAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_AppinfoAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "AppinfoAttributes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_RedefineAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "RedefineAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_RedefineAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "RedefineAttributes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_AnnotationAttributes(
    ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "AnnotationAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>
System::Xml::Schema::XsdBuilder::getStaticF_AnnotationAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdAttributeEntry*>*>, "AnnotationAttributes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_SchemaEntries(::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdEntry*>*>, "SchemaEntries",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdEntry*>*> System::Xml::Schema::XsdBuilder::getStaticF_SchemaEntries() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::__XsdBuilder__XsdEntry*, ::Array<::System::Xml::Schema::__XsdBuilder__XsdEntry*>*>, "SchemaEntries",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_DerivationMethodValues(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "DerivationMethodValues", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> System::Xml::Schema::XsdBuilder::getStaticF_DerivationMethodValues() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "DerivationMethodValues",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_DerivationMethodStrings(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "DerivationMethodStrings",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Xml::Schema::XsdBuilder::getStaticF_DerivationMethodStrings() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "DerivationMethodStrings",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_FormStringValues(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "FormStringValues", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Xml::Schema::XsdBuilder::getStaticF_FormStringValues() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "FormStringValues",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_UseStringValues(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "UseStringValues", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Xml::Schema::XsdBuilder::getStaticF_UseStringValues() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "UseStringValues",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline void System::Xml::Schema::XsdBuilder::setStaticF_ProcessContentsStringValues(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "ProcessContentsStringValues",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>(std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Xml::Schema::XsdBuilder::getStaticF_ProcessContentsStringValues() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "ProcessContentsStringValues",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get>();
}
inline ::System::Xml::Schema::XsdBuilder* System::Xml::Schema::XsdBuilder::New_ctor(::System::Xml::XmlReader* reader, ::System::Xml::XmlNamespaceManager* curmgr,
                                                                                    ::System::Xml::Schema::XmlSchema* schema, ::System::Xml::XmlNameTable* nameTable,
                                                                                    ::System::Xml::Schema::SchemaNames* schemaNames, ::System::Xml::Schema::ValidationEventHandler* eventhandler) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XsdBuilder*>(reader, curmgr, schema, nameTable, schemaNames, eventhandler));
}
inline void System::Xml::Schema::XsdBuilder::_ctor(::System::Xml::XmlReader* reader, ::System::Xml::XmlNamespaceManager* curmgr, ::System::Xml::Schema::XmlSchema* schema,
                                                   ::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames,
                                                   ::System::Xml::Schema::ValidationEventHandler* eventhandler) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNamespaceManager*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaNames*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ValidationEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, curmgr, schema, nameTable, schemaNames, eventhandler);
}
inline bool System::Xml::Schema::XsdBuilder::ProcessElement(::StringW prefix, ::StringW name, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, prefix, name, ns);
}
inline void System::Xml::Schema::XsdBuilder::ProcessAttribute(::StringW prefix, ::StringW name, ::StringW ns, ::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, name, ns, value);
}
inline bool System::Xml::Schema::XsdBuilder::IsContentParsed() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XsdBuilder::ProcessMarkup(::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> markup) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markup);
}
inline void System::Xml::Schema::XsdBuilder::ProcessCData(::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XsdBuilder::StartChildren() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XsdBuilder::EndChildren() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XsdBuilder::Push() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "Push",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XsdBuilder::Pop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "Pop",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::__SchemaNames__Token System::Xml::Schema::XsdBuilder::get_CurrentElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "get_CurrentElement",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::__SchemaNames__Token, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::__SchemaNames__Token System::Xml::Schema::XsdBuilder::get_ParentElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "get_ParentElement",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::__SchemaNames__Token, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaObject* System::Xml::Schema::XsdBuilder::get_ParentContainer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "get_ParentContainer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObject*, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaObject* System::Xml::Schema::XsdBuilder::GetContainer(::System::Xml::Schema::__XsdBuilder__State state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "GetContainer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::__XsdBuilder__State>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObject*, false>(this, ___internal_method, state);
}
inline void System::Xml::Schema::XsdBuilder::SetContainer(::System::Xml::Schema::__XsdBuilder__State state, ::System::Object* container) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "SetContainer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::__XsdBuilder__State>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, container);
}
inline void System::Xml::Schema::XsdBuilder::BuildAnnotated_Id(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAnnotated_Id", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildSchema_AttributeFormDefault(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildSchema_AttributeFormDefault", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildSchema_ElementFormDefault(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildSchema_ElementFormDefault", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildSchema_TargetNamespace(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildSchema_TargetNamespace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildSchema_Version(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildSchema_Version", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildSchema_FinalDefault(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildSchema_FinalDefault", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildSchema_BlockDefault(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildSchema_BlockDefault", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitSchema(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitSchema", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitInclude(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitInclude", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildInclude_SchemaLocation(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildInclude_SchemaLocation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitImport(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitImport", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildImport_Namespace(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildImport_Namespace", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildImport_SchemaLocation(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildImport_SchemaLocation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitRedefine(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitRedefine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildRedefine_SchemaLocation(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildRedefine_SchemaLocation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::EndRedefine(::System::Xml::Schema::XsdBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "EndRedefine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder);
}
inline void System::Xml::Schema::XsdBuilder::InitAttribute(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildAttribute_Default(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAttribute_Default", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildAttribute_Fixed(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAttribute_Fixed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildAttribute_Form(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAttribute_Form", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildAttribute_Use(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAttribute_Use", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildAttribute_Ref(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAttribute_Ref", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildAttribute_Name(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAttribute_Name", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildAttribute_Type(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAttribute_Type", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitElement(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitElement", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildElement_Abstract(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildElement_Abstract", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildElement_Block(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildElement_Block", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildElement_Default(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildElement_Default", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildElement_Form(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildElement_Form", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildElement_SubstitutionGroup(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildElement_SubstitutionGroup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildElement_Final(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildElement_Final", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildElement_Fixed(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildElement_Fixed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildElement_MaxOccurs(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildElement_MaxOccurs", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildElement_MinOccurs(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildElement_MinOccurs", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildElement_Name(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildElement_Name", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildElement_Nillable(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildElement_Nillable", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildElement_Ref(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildElement_Ref", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildElement_Type(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildElement_Type", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitSimpleType(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitSimpleType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildSimpleType_Name(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildSimpleType_Name", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildSimpleType_Final(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildSimpleType_Final", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitSimpleTypeUnion(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitSimpleTypeUnion", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildSimpleTypeUnion_MemberTypes(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildSimpleTypeUnion_MemberTypes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitSimpleTypeList(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitSimpleTypeList", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildSimpleTypeList_ItemType(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildSimpleTypeList_ItemType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitSimpleTypeRestriction(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitSimpleTypeRestriction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildSimpleTypeRestriction_Base(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildSimpleTypeRestriction_Base", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitComplexType(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitComplexType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildComplexType_Abstract(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildComplexType_Abstract", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildComplexType_Block(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildComplexType_Block", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildComplexType_Final(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildComplexType_Final", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildComplexType_Mixed(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildComplexType_Mixed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildComplexType_Name(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildComplexType_Name", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitComplexContent(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitComplexContent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildComplexContent_Mixed(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildComplexContent_Mixed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitComplexContentExtension(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitComplexContentExtension", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildComplexContentExtension_Base(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildComplexContentExtension_Base", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitComplexContentRestriction(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitComplexContentRestriction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildComplexContentRestriction_Base(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildComplexContentRestriction_Base", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitSimpleContent(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitSimpleContent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitSimpleContentExtension(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitSimpleContentExtension", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildSimpleContentExtension_Base(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildSimpleContentExtension_Base", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitSimpleContentRestriction(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitSimpleContentRestriction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildSimpleContentRestriction_Base(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildSimpleContentRestriction_Base", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitAttributeGroup(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitAttributeGroup", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildAttributeGroup_Name(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAttributeGroup_Name", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitAttributeGroupRef(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitAttributeGroupRef", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildAttributeGroupRef_Ref(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAttributeGroupRef_Ref", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitAnyAttribute(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitAnyAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildAnyAttribute_Namespace(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAnyAttribute_Namespace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildAnyAttribute_ProcessContents(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAnyAttribute_ProcessContents", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitGroup(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitGroup", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildGroup_Name(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildGroup_Name", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitGroupRef(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitGroupRef", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildParticle_MaxOccurs(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildParticle_MaxOccurs", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildParticle_MinOccurs(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildParticle_MinOccurs", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildGroupRef_Ref(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildGroupRef_Ref", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitAll(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitAll", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitChoice(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitChoice", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitSequence(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitSequence", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitAny(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitAny", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildAny_Namespace(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAny_Namespace", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildAny_ProcessContents(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAny_ProcessContents", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitNotation(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitNotation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildNotation_Name(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildNotation_Name", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildNotation_Public(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildNotation_Public", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildNotation_System(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildNotation_System", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitFacet(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitFacet", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildFacet_Fixed(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildFacet_Fixed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildFacet_Value(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildFacet_Value", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitIdentityConstraint(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitIdentityConstraint", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildIdentityConstraint_Name(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildIdentityConstraint_Name", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildIdentityConstraint_Refer(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildIdentityConstraint_Refer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitSelector(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitSelector", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildSelector_XPath(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildSelector_XPath", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitField(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitField", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildField_XPath(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildField_XPath", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitAnnotation(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitAnnotation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::InitAppinfo(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitAppinfo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildAppinfo_Source(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildAppinfo_Source", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::EndAppinfo(::System::Xml::Schema::XsdBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "EndAppinfo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder);
}
inline void System::Xml::Schema::XsdBuilder::InitDocumentation(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "InitDocumentation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildDocumentation_Source(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildDocumentation_Source", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::BuildDocumentation_XmlLang(::System::Xml::Schema::XsdBuilder* builder, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "BuildDocumentation_XmlLang", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, value);
}
inline void System::Xml::Schema::XsdBuilder::EndDocumentation(::System::Xml::Schema::XsdBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "EndDocumentation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder);
}
inline void System::Xml::Schema::XsdBuilder::AddAttribute(::System::Xml::Schema::XmlSchemaObject* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "AddAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XsdBuilder::AddParticle(::System::Xml::Schema::XmlSchemaParticle* particle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "AddParticle", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particle);
}
inline bool System::Xml::Schema::XsdBuilder::GetNextState(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "GetNextState", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, qname);
}
inline bool System::Xml::Schema::XsdBuilder::IsSkipableElement(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "IsSkipableElement", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, qname);
}
inline void System::Xml::Schema::XsdBuilder::SetMinOccurs(::System::Xml::Schema::XmlSchemaParticle* particle, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "SetMinOccurs", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particle, value);
}
inline void System::Xml::Schema::XsdBuilder::SetMaxOccurs(::System::Xml::Schema::XmlSchemaParticle* particle, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "SetMaxOccurs", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particle, value);
}
inline bool System::Xml::Schema::XsdBuilder::ParseBoolean(::StringW value, ::StringW attributeName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "ParseBoolean", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, attributeName);
}
inline int32_t System::Xml::Schema::XsdBuilder::ParseEnum(::StringW value, ::StringW attributeName, ::ArrayW<::StringW, ::Array<::StringW>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "ParseEnum", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value, attributeName, values);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XsdBuilder::ParseQName(::StringW value, ::StringW attributeName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "ParseQName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*, false>(this, ___internal_method, value, attributeName);
}
inline int32_t System::Xml::Schema::XsdBuilder::ParseBlockFinalEnum(::StringW value, ::StringW attributeName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "ParseBlockFinalEnum", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value, attributeName);
}
inline ::StringW System::Xml::Schema::XsdBuilder::ParseUriReference(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "ParseUriReference", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, s);
}
inline void System::Xml::Schema::XsdBuilder::SendValidationEvent(::StringW code, ::StringW arg0, ::StringW arg1, ::StringW arg2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "SendValidationEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, code, arg0, arg1, arg2);
}
inline void System::Xml::Schema::XsdBuilder::SendValidationEvent(::StringW code, ::StringW msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "SendValidationEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, code, msg);
}
inline void System::Xml::Schema::XsdBuilder::SendValidationEvent(::StringW code, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Xml::Schema::XmlSeverityType severity) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "SendValidationEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSeverityType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, code, args, severity);
}
inline void System::Xml::Schema::XsdBuilder::SendValidationEvent(::System::Xml::Schema::XmlSchemaException* e, ::System::Xml::Schema::XmlSeverityType severity) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "SendValidationEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaException*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSeverityType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e, severity);
}
inline void System::Xml::Schema::XsdBuilder::SendValidationEvent(::System::Xml::Schema::XmlSchemaException* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "SendValidationEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaException*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void System::Xml::Schema::XsdBuilder::RecordPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdBuilder*>::get(), "RecordPosition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XsdBuilder::XsdBuilder() {}
