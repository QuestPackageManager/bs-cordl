#pragma once
// IWYU pragma private; include "System\Xml\Schema\XmlSchemaValidator.hpp"
#include "System/Xml/Schema/zzzz__ValidatorState_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAttribute_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentProcessing_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaValidationFlags_impl.hpp"
#include "System/Xml/zzzz__XmlCharType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaValidator_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Xml/Schema/zzzz__IdRefNode_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaAttDef_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaDeclBase_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaElementDecl_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaInfo_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventHandler_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationState_def.hpp"
#include "System/Xml/Schema/zzzz__ValidatorState_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDatatype_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaElement_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaException_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaInfo_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObject_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaValidationException_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaValidationFlags_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSeverityType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlValueGetter_def.hpp"
#include "System/Xml/zzzz__HWStack_def.hpp"
#include "System/Xml/zzzz__IDtdInfo_def.hpp"
#include "System/Xml/zzzz__IXmlLineInfo_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlResolver_def.hpp"
#include "System/Xml/zzzz__XmlTokenizedType_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Xml::XmlNameTable*, ::System::Xml::Schema::XmlSchemaSet*,
                                                                                                           ::System::Xml::IXmlNamespaceResolver*, ::System::Xml::Schema::XmlSchemaValidationFlags)>(
    &::System::Xml::Schema::XmlSchemaValidator::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x623ce90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>(),
                                                                 ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaValidationFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)()>(&::System::Xml::Schema::XmlSchemaValidator::Init)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x623d060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)()>(&::System::Xml::Schema::XmlSchemaValidator::Reset)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x623d490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.set_XmlResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Xml::XmlResolver*)>(&::System::Xml::Schema::XmlSchemaValidator::set_XmlResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x623d5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "set_XmlResolver", {}, { ::i2c::type_of<::System::Xml::XmlResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.set_LineInfoProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Xml::IXmlLineInfo*)>(
    &::System::Xml::Schema::XmlSchemaValidator::set_LineInfoProvider)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x623d5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "set_LineInfoProvider", {}, { ::i2c::type_of<::System::Xml::IXmlLineInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.set_SourceUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Uri*)>(&::System::Xml::Schema::XmlSchemaValidator::set_SourceUri)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x623d608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "set_SourceUri", {}, { ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.set_ValidationEventSender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Object*)>(&::System::Xml::Schema::XmlSchemaValidator::set_ValidationEventSender)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x623d63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "set_ValidationEventSender", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.add_ValidationEventHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Xml::Schema::ValidationEventHandler*)>(
    &::System::Xml::Schema::XmlSchemaValidator::add_ValidationEventHandler)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x623d644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                             { "add_ValidationEventHandler", {}, { ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.remove_ValidationEventHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Xml::Schema::ValidationEventHandler*)>(
    &::System::Xml::Schema::XmlSchemaValidator::remove_ValidationEventHandler)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x623d6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                             { "remove_ValidationEventHandler", {}, { ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.AddSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Xml::Schema::XmlSchema*)>(&::System::Xml::Schema::XmlSchemaValidator::AddSchema)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x623d75c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "AddSchema", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)()>(&::System::Xml::Schema::XmlSchemaValidator::Initialize)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x623dec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::XmlSchemaValidator::Initialize)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x623dff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "Initialize", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.ValidateElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::StringW, ::StringW, ::System::Xml::Schema::XmlSchemaInfo*, ::StringW, ::StringW, ::StringW,
                                                                                                           ::StringW)>(&::System::Xml::Schema::XmlSchemaValidator::ValidateElement)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x623e280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                             { "ValidateElement",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaInfo*>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.ValidateAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Xml::Schema::XmlSchemaValidator::*)(::StringW, ::StringW, ::System::Xml::Schema::XmlValueGetter*, ::System::Xml::Schema::XmlSchemaInfo*)>(
        &::System::Xml::Schema::XmlSchemaValidator::ValidateAttribute)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x623fae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                             { "ValidateAttribute",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlValueGetter*>(),
                                                                 ::i2c::type_of<::System::Xml::Schema::XmlSchemaInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.ValidateAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Xml::Schema::XmlSchemaValidator::*)(::StringW, ::StringW, ::System::Xml::Schema::XmlValueGetter*, ::StringW, ::System::Xml::Schema::XmlSchemaInfo*)>(
        &::System::Xml::Schema::XmlSchemaValidator::ValidateAttribute)> {
  constexpr static std::size_t size = 0x928;
  constexpr static std::size_t addrs = 0x623fb44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                             { "ValidateAttribute",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlValueGetter*>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.ValidateEndOfAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Xml::Schema::XmlSchemaInfo*)>(
    &::System::Xml::Schema::XmlSchemaValidator::ValidateEndOfAttributes)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6240e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                                                           { "ValidateEndOfAttributes", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.ValidateText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Xml::Schema::XmlValueGetter*)>(
    &::System::Xml::Schema::XmlSchemaValidator::ValidateText)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6241120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "ValidateText", {}, { ::i2c::type_of<::System::Xml::Schema::XmlValueGetter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.ValidateText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::StringW, ::System::Xml::Schema::XmlValueGetter*)>(
    &::System::Xml::Schema::XmlSchemaValidator::ValidateText)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x624117c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                             { "ValidateText", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlValueGetter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.ValidateWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Xml::Schema::XmlValueGetter*)>(
    &::System::Xml::Schema::XmlSchemaValidator::ValidateWhitespace)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6241abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "ValidateWhitespace", {}, { ::i2c::type_of<::System::Xml::Schema::XmlValueGetter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.ValidateWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::StringW, ::System::Xml::Schema::XmlValueGetter*)>(
    &::System::Xml::Schema::XmlSchemaValidator::ValidateWhitespace)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6241b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                             { "ValidateWhitespace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlValueGetter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.ValidateEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Xml::Schema::XmlSchemaInfo*)>(
    &::System::Xml::Schema::XmlSchemaValidator::ValidateEndElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6241ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "ValidateEndElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.SkipToEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Xml::Schema::XmlSchemaInfo*)>(
    &::System::Xml::Schema::XmlSchemaValidator::SkipToEndElement)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x62421c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "SkipToEndElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.EndValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)()>(&::System::Xml::Schema::XmlSchemaValidator::EndValidation)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6242510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "EndValidation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.GetUnspecifiedDefaultAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Collections::ArrayList*, bool)>(
    &::System::Xml::Schema::XmlSchemaValidator::GetUnspecifiedDefaultAttributes)> {
  constexpr static std::size_t size = 0x574;
  constexpr static std::size_t addrs = 0x62426e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                             { "GetUnspecifiedDefaultAttributes", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.get_SchemaSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaSet* (::System::Xml::Schema::XmlSchemaValidator::*)()>(
    &::System::Xml::Schema::XmlSchemaValidator::get_SchemaSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6242ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "get_SchemaSet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.get_ValidationFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaValidationFlags (::System::Xml::Schema::XmlSchemaValidator::*)()>(
    &::System::Xml::Schema::XmlSchemaValidator::get_ValidationFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6243004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "get_ValidationFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.get_CurrentContentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaContentType (::System::Xml::Schema::XmlSchemaValidator::*)()>(
    &::System::Xml::Schema::XmlSchemaValidator::get_CurrentContentType)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x624300c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "get_CurrentContentType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.SetDtdSchemaInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Xml::IDtdInfo*)>(&::System::Xml::Schema::XmlSchemaValidator::SetDtdSchemaInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6243040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "SetDtdSchemaInfo", {}, { ::i2c::type_of<::System::Xml::IDtdInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.get_StrictlyAssessed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaValidator::*)()>(&::System::Xml::Schema::XmlSchemaValidator::get_StrictlyAssessed)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6243050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "get_StrictlyAssessed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.get_HasSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaValidator::*)()>(&::System::Xml::Schema::XmlSchemaValidator::get_HasSchema)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6243090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "get_HasSchema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.GetConcatenatedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlSchemaValidator::*)()>(&::System::Xml::Schema::XmlSchemaValidator::GetConcatenatedValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x62430d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "GetConcatenatedValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.InternalValidateEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Xml::Schema::XmlSchemaInfo*, ::System::Object*)>(
    &::System::Xml::Schema::XmlSchemaValidator::InternalValidateEndElement)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x6241ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                             { "InternalValidateEndElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaInfo*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.ProcessSchemaLocations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::StringW, ::StringW)>(&::System::Xml::Schema::XmlSchemaValidator::ProcessSchemaLocations)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x623eedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                                                           { "ProcessSchemaLocations", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.ValidateElementContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Xml::XmlQualifiedName*, ::by_ref<bool>)>(
    &::System::Xml::Schema::XmlSchemaValidator::ValidateElementContext)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x623e834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                             { "ValidateElementContext", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.GetSubstitutionGroupHead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaElement* (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::XmlSchemaValidator::GetSubstitutionGroupHead)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6244bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "GetSubstitutionGroupHead", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.ValidateAtomicValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlSchemaValidator::*)(::StringW, ::by_ref<::System::Xml::Schema::XmlSchemaSimpleType*>)>(
    &::System::Xml::Schema::XmlSchemaValidator::ValidateAtomicValue)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x62430f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                             { "ValidateAtomicValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Xml::Schema::XmlSchemaSimpleType*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.ValidateAtomicValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Object*, ::by_ref<::System::Xml::Schema::XmlSchemaSimpleType*>)>(
    &::System::Xml::Schema::XmlSchemaValidator::ValidateAtomicValue)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x6243368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                { "ValidateAtomicValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::System::Xml::Schema::XmlSchemaSimpleType*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.GetTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Xml::Schema::SchemaDeclBase*)>(
    &::System::Xml::Schema::XmlSchemaValidator::GetTypeName)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x62457f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "GetTypeName", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaDeclBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.SaveTextValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Object*)>(&::System::Xml::Schema::XmlSchemaValidator::SaveTextValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6241548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "SaveTextValue", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.Push
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::XmlSchemaValidator::Push)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x623d398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "Push", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.Pop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)()>(&::System::Xml::Schema::XmlSchemaValidator::Pop)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x62423d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "Pop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.FastGetElementDecl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaElementDecl* (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Xml::XmlQualifiedName*, ::System::Object*)>(
    &::System::Xml::Schema::XmlSchemaValidator::FastGetElementDecl)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x623ec84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                             { "FastGetElementDecl", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.CheckXsiTypeAndNil
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaElementDecl* (
    ::System::Xml::Schema::XmlSchemaValidator::*)(::System::Xml::Schema::SchemaElementDecl*, ::StringW, ::StringW, ::by_ref<bool>)>(&::System::Xml::Schema::XmlSchemaValidator::CheckXsiTypeAndNil)> {
  constexpr static std::size_t size = 0x5a8;
  constexpr static std::size_t addrs = 0x623f1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                            { "CheckXsiTypeAndNil",
                              {},
                              { ::i2c::type_of<::System::Xml::Schema::SchemaElementDecl*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.ThrowDeclNotFoundWarningOrError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(bool)>(&::System::Xml::Schema::XmlSchemaValidator::ThrowDeclNotFoundWarningOrError)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x623f774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "ThrowDeclNotFoundWarningOrError", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.CheckElementProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)()>(&::System::Xml::Schema::XmlSchemaValidator::CheckElementProperties)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x623f8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "CheckElementProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.ValidateStartElementIdentityConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)()>(&::System::Xml::Schema::XmlSchemaValidator::ValidateStartElementIdentityConstraints)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x623f97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "ValidateStartElementIdentityConstraints", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.CheckIsXmlAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaAttDef* (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::XmlSchemaValidator::CheckIsXmlAttribute)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x62405ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "CheckIsXmlAttribute", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.AddXmlNamespaceSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)()>(&::System::Xml::Schema::XmlSchemaValidator::AddXmlNamespaceSchema)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6246018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "AddXmlNamespaceSchema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.CheckMixedValueConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlSchemaValidator::*)(::StringW)>(
    &::System::Xml::Schema::XmlSchemaValidator::CheckMixedValueConstraint)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6243624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "CheckMixedValueConstraint", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.LoadSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::StringW, ::StringW)>(&::System::Xml::Schema::XmlSchemaValidator::LoadSchema)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x62446d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "LoadSchema", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.RecompileSchemaSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)()>(&::System::Xml::Schema::XmlSchemaValidator::RecompileSchemaSet)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x623d51c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "RecompileSchemaSet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.ProcessTokenizedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Xml::XmlTokenizedType, ::StringW, bool)>(
    &::System::Xml::Schema::XmlSchemaValidator::ProcessTokenizedType)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x6246280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                { "ProcessTokenizedType", {}, { ::i2c::type_of<::System::Xml::XmlTokenizedType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.CheckAttributeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Object*, ::System::Xml::Schema::SchemaAttDef*)>(
    &::System::Xml::Schema::XmlSchemaValidator::CheckAttributeValue)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x624084c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                             { "CheckAttributeValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Schema::SchemaAttDef*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.CheckElementValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlSchemaValidator::*)(::StringW)>(&::System::Xml::Schema::XmlSchemaValidator::CheckElementValue)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x6245608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "CheckElementValue", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.CheckTokenizedTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Xml::Schema::XmlSchemaDatatype*, ::System::Object*, bool)>(
    &::System::Xml::Schema::XmlSchemaValidator::CheckTokenizedTypes)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6240a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                         { "CheckTokenizedTypes", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.FindId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlSchemaValidator::*)(::StringW)>(&::System::Xml::Schema::XmlSchemaValidator::FindId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6246524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "FindId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.CheckForwardRefs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)()>(&::System::Xml::Schema::XmlSchemaValidator::CheckForwardRefs)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x62425f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "CheckForwardRefs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.get_HasIdentityConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaValidator::*)()>(&::System::Xml::Schema::XmlSchemaValidator::get_HasIdentityConstraints)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6240bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "get_HasIdentityConstraints", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.get_ProcessIdentityConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaValidator::*)()>(&::System::Xml::Schema::XmlSchemaValidator::get_ProcessIdentityConstraints)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6245864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "get_ProcessIdentityConstraints", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.get_ReportValidationWarnings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaValidator::*)()>(&::System::Xml::Schema::XmlSchemaValidator::get_ReportValidationWarnings)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62467f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "get_ReportValidationWarnings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.get_ProcessSchemaHints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaValidator::*)()>(&::System::Xml::Schema::XmlSchemaValidator::get_ProcessSchemaHints)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x623d5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "get_ProcessSchemaHints", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.CheckStateTransition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Xml::Schema::ValidatorState, ::StringW)>(
    &::System::Xml::Schema::XmlSchemaValidator::CheckStateTransition)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x623e5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                             { "CheckStateTransition", {}, { ::i2c::type_of<::System::Xml::Schema::ValidatorState>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.ClearPSVI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)()>(&::System::Xml::Schema::XmlSchemaValidator::ClearPSVI)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x623e7f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "ClearPSVI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.CheckRequiredAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Xml::Schema::SchemaElementDecl*)>(
    &::System::Xml::Schema::XmlSchemaValidator::CheckRequiredAttributes)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6240f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                                                           { "CheckRequiredAttributes", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaElementDecl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.GetSchemaElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaElement* (::System::Xml::Schema::XmlSchemaValidator::*)()>(
    &::System::Xml::Schema::XmlSchemaValidator::GetSchemaElement)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x623f9d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "GetSchemaElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.GetDefaultAttributePrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlSchemaValidator::*)(::StringW)>(&::System::Xml::Schema::XmlSchemaValidator::GetDefaultAttributePrefix)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x6242c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "GetDefaultAttributePrefix", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.AddIdentityConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)()>(&::System::Xml::Schema::XmlSchemaValidator::AddIdentityConstraints)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x6245870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "AddIdentityConstraints", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.ElementIdentityConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)()>(&::System::Xml::Schema::XmlSchemaValidator::ElementIdentityConstraints)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x6245c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "ElementIdentityConstraints", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.AttributeIdentityConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(
    ::StringW, ::StringW, ::System::Object*, ::StringW, ::System::Xml::Schema::XmlSchemaDatatype*)>(&::System::Xml::Schema::XmlSchemaValidator::AttributeIdentityConstraints)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x6240bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                                                           { "AttributeIdentityConstraints",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(),
                                                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.EndElementIdentityConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Object*, ::StringW, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::XmlSchemaValidator::EndElementIdentityConstraints)> {
  constexpr static std::size_t size = 0xbb4;
  constexpr static std::size_t addrs = 0x6243b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                         { "EndElementIdentityConstraints", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.ElementValidationError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::ValidationState*, ::System::Xml::Schema::ValidationEventHandler*,
                                                                ::System::Object*, ::StringW, int32_t, int32_t, ::System::Xml::Schema::XmlSchemaSet*)>(
    &::System::Xml::Schema::XmlSchemaValidator::ElementValidationError)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x6245008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                             { "ElementValidationError",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Xml::Schema::ValidationState*>(),
                                                                 ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.CompleteValidationError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::ValidationState*, ::System::Xml::Schema::ValidationEventHandler*, ::System::Object*, ::StringW, int32_t, int32_t,
                                                                ::System::Xml::Schema::XmlSchemaSet*)>(&::System::Xml::Schema::XmlSchemaValidator::CompleteValidationError)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x6243714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                            { "CompleteValidationError",
                              {},
                              { ::i2c::type_of<::System::Xml::Schema::ValidationState*>(), ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>(), ::i2c::type_of<::System::Object*>(),
                                ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.PrintExpectedElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::ArrayList*, bool)>(&::System::Xml::Schema::XmlSchemaValidator::PrintExpectedElements)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x62416d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                             { "PrintExpectedElements", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.PrintNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::ArrayList*)>(&::System::Xml::Schema::XmlSchemaValidator::PrintNames)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6246d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "PrintNames", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.PrintNamesWithNS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::ArrayList*, ::System::Text::StringBuilder*)>(&::System::Xml::Schema::XmlSchemaValidator::PrintNamesWithNS)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x62468cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                             { "PrintNamesWithNS", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.EnumerateAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::StringW)>(&::System::Xml::Schema::XmlSchemaValidator::EnumerateAny)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x6246edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                                                           { "EnumerateAny", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.QNameString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::System::Xml::Schema::XmlSchemaValidator::QNameString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x62414c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "QNameString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.BuildElementName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::XmlSchemaValidator::BuildElementName)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6244db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "BuildElementName", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.BuildElementName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::System::Xml::Schema::XmlSchemaValidator::BuildElementName)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6241588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "BuildElementName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.ProcessEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::StringW)>(&::System::Xml::Schema::XmlSchemaValidator::ProcessEntity)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x6246540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "ProcessEntity", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::StringW)>(&::System::Xml::Schema::XmlSchemaValidator::SendValidationEvent)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6245850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::StringW, ::ArrayW<::StringW>)>(
    &::System::Xml::Schema::XmlSchemaValidator::SendValidationEvent)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x62406a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                                                           { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::StringW, ::StringW)>(&::System::Xml::Schema::XmlSchemaValidator::SendValidationEvent)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x624046c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::Schema::XmlSchemaValidator::SendValidationEvent)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x6244e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                             { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(
    ::StringW, ::ArrayW<::StringW>, ::System::Exception*, ::System::Xml::Schema::XmlSeverityType)>(&::System::Xml::Schema::XmlSchemaValidator::SendValidationEvent)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x62460a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                                                           { "SendValidationEvent",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(),
                                                                                               ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::StringW, ::ArrayW<::StringW>, ::System::Exception*)>(
    &::System::Xml::Schema::XmlSchemaValidator::SendValidationEvent)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x623dd14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Xml::Schema::XmlSchemaValidationException*)>(
    &::System::Xml::Schema::XmlSchemaValidator::SendValidationEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6246800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                                                           { "SendValidationEvent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaValidationException*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::System::Xml::Schema::XmlSchemaException*)>(
    &::System::Xml::Schema::XmlSchemaValidator::SendValidationEvent)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6244b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                                                           { "SendValidationEvent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaException*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(::StringW, ::StringW, ::System::Xml::Schema::XmlSeverityType)>(
    &::System::Xml::Schema::XmlSchemaValidator::SendValidationEvent)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x623db60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                         { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaValidator::*)(
    ::System::Xml::Schema::XmlSchemaValidationException*, ::System::Xml::Schema::XmlSeverityType)>(&::System::Xml::Schema::XmlSchemaValidator::SendValidationEvent)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x62466d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                            { "SendValidationEvent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaValidationException*>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaValidator.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::ValidationEventHandler*, ::System::Object*, ::System::Xml::Schema::XmlSchemaValidationException*,
                                                                ::System::Xml::Schema::XmlSeverityType)>(&::System::Xml::Schema::XmlSchemaValidator::SendValidationEvent)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6246808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                { "SendValidationEvent",
                                                  {},
                                                  { ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>(), ::i2c::type_of<::System::Object*>(),
                                                    ::i2c::type_of<::System::Xml::Schema::XmlSchemaValidationException*>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchemaSet*& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_schemaSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaSet;
}
constexpr ::System::Xml::Schema::XmlSchemaSet* const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_schemaSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaSet;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_schemaSet(::System::Xml::Schema::XmlSchemaSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemaSet = value;
}
constexpr ::System::Xml::Schema::XmlSchemaValidationFlags& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_validationFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationFlags;
}
constexpr ::System::Xml::Schema::XmlSchemaValidationFlags const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_validationFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationFlags;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_validationFlags(::System::Xml::Schema::XmlSchemaValidationFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validationFlags = value;
}
constexpr int32_t& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_startIDConstraint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startIDConstraint;
}
constexpr int32_t const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_startIDConstraint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startIDConstraint;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_startIDConstraint(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startIDConstraint = value;
}
constexpr bool& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_isRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRoot;
}
constexpr bool const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_isRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRoot;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_isRoot(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isRoot = value;
}
constexpr bool& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_rootHasSchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootHasSchema;
}
constexpr bool const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_rootHasSchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootHasSchema;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_rootHasSchema(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rootHasSchema = value;
}
constexpr bool& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_attrValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrValid;
}
constexpr bool const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_attrValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrValid;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_attrValid(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attrValid = value;
}
constexpr bool& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_checkEntity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkEntity;
}
constexpr bool const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_checkEntity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkEntity;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_checkEntity(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___checkEntity = value;
}
constexpr ::System::Xml::Schema::SchemaInfo*& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_compiledSchemaInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compiledSchemaInfo;
}
constexpr ::System::Xml::Schema::SchemaInfo* const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_compiledSchemaInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compiledSchemaInfo;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_compiledSchemaInfo(::System::Xml::Schema::SchemaInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compiledSchemaInfo = value;
}
constexpr ::System::Xml::IDtdInfo*& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_dtdSchemaInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dtdSchemaInfo;
}
constexpr ::System::Xml::IDtdInfo* const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_dtdSchemaInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dtdSchemaInfo;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_dtdSchemaInfo(::System::Xml::IDtdInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dtdSchemaInfo = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_validatedNamespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validatedNamespaces;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_validatedNamespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validatedNamespaces;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_validatedNamespaces(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validatedNamespaces = value;
}
constexpr ::System::Xml::HWStack*& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_validationStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationStack;
}
constexpr ::System::Xml::HWStack* const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_validationStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationStack;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_validationStack(::System::Xml::HWStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validationStack = value;
}
constexpr ::System::Xml::Schema::ValidationState*& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::System::Xml::Schema::ValidationState* const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_context(::System::Xml::Schema::ValidationState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___context = value;
}
constexpr ::System::Xml::Schema::ValidatorState& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_currentState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentState;
}
constexpr ::System::Xml::Schema::ValidatorState const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_currentState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentState;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_currentState(::System::Xml::Schema::ValidatorState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentState = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_attPresence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attPresence;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_attPresence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attPresence;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_attPresence(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attPresence = value;
}
constexpr ::System::Xml::Schema::SchemaAttDef*& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_wildID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wildID;
}
constexpr ::System::Xml::Schema::SchemaAttDef* const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_wildID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wildID;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_wildID(::System::Xml::Schema::SchemaAttDef* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wildID = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_IDs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IDs;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_IDs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IDs;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_IDs(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IDs = value;
}
constexpr ::System::Xml::Schema::IdRefNode*& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_idRefListHead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idRefListHead;
}
constexpr ::System::Xml::Schema::IdRefNode* const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_idRefListHead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idRefListHead;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_idRefListHead(::System::Xml::Schema::IdRefNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___idRefListHead = value;
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_contextQName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contextQName;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_contextQName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contextQName;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_contextQName(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contextQName = value;
}
constexpr ::StringW& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_NsXs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXs;
}
constexpr ::StringW const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_NsXs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXs;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_NsXs(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NsXs = value;
}
constexpr ::StringW& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_NsXsi() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXsi;
}
constexpr ::StringW const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_NsXsi() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXsi;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_NsXsi(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NsXsi = value;
}
constexpr ::StringW& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_NsXmlNs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXmlNs;
}
constexpr ::StringW const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_NsXmlNs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXmlNs;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_NsXmlNs(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NsXmlNs = value;
}
constexpr ::StringW& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_NsXml() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXml;
}
constexpr ::StringW const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_NsXml() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXml;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_NsXml(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NsXml = value;
}
constexpr ::System::Xml::Schema::XmlSchemaObject*& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_partialValidationType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partialValidationType;
}
constexpr ::System::Xml::Schema::XmlSchemaObject* const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_partialValidationType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partialValidationType;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_partialValidationType(::System::Xml::Schema::XmlSchemaObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___partialValidationType = value;
}
constexpr ::System::Text::StringBuilder*& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_textValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textValue;
}
constexpr ::System::Text::StringBuilder* const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_textValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textValue;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_textValue(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textValue = value;
}
constexpr ::System::Xml::Schema::ValidationEventHandler*& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_eventHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventHandler;
}
constexpr ::System::Xml::Schema::ValidationEventHandler* const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_eventHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventHandler;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_eventHandler(::System::Xml::Schema::ValidationEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eventHandler = value;
}
constexpr ::System::Object*& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_validationEventSender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationEventSender;
}
constexpr ::System::Object* const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_validationEventSender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationEventSender;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_validationEventSender(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validationEventSender = value;
}
constexpr ::System::Xml::XmlNameTable*& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_nameTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr ::System::Xml::XmlNameTable* const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_nameTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nameTable = value;
}
constexpr ::System::Xml::IXmlLineInfo*& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_positionInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionInfo;
}
constexpr ::System::Xml::IXmlLineInfo* const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_positionInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionInfo;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_positionInfo(::System::Xml::IXmlLineInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___positionInfo = value;
}
constexpr ::System::Xml::IXmlLineInfo*& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_dummyPositionInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dummyPositionInfo;
}
constexpr ::System::Xml::IXmlLineInfo* const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_dummyPositionInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dummyPositionInfo;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_dummyPositionInfo(::System::Xml::IXmlLineInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dummyPositionInfo = value;
}
constexpr ::System::Xml::XmlResolver*& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_xmlResolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlResolver;
}
constexpr ::System::Xml::XmlResolver* const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_xmlResolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlResolver;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_xmlResolver(::System::Xml::XmlResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlResolver = value;
}
constexpr ::System::Uri*& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_sourceUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceUri;
}
constexpr ::System::Uri* const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_sourceUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceUri;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_sourceUri(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceUri = value;
}
constexpr ::StringW& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_sourceUriString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceUriString;
}
constexpr ::StringW const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_sourceUriString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceUriString;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_sourceUriString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceUriString = value;
}
constexpr ::System::Xml::IXmlNamespaceResolver*& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_nsResolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsResolver;
}
constexpr ::System::Xml::IXmlNamespaceResolver* const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_nsResolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsResolver;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_nsResolver(::System::Xml::IXmlNamespaceResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nsResolver = value;
}
constexpr ::System::Xml::Schema::XmlSchemaContentProcessing& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_processContents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processContents;
}
constexpr ::System::Xml::Schema::XmlSchemaContentProcessing const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_processContents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processContents;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_processContents(::System::Xml::Schema::XmlSchemaContentProcessing value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___processContents = value;
}
constexpr ::StringW& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_xsiTypeString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xsiTypeString;
}
constexpr ::StringW const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_xsiTypeString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xsiTypeString;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_xsiTypeString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xsiTypeString = value;
}
constexpr ::StringW& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_xsiNilString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xsiNilString;
}
constexpr ::StringW const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_xsiNilString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xsiNilString;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_xsiNilString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xsiNilString = value;
}
constexpr ::StringW& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_xsiSchemaLocationString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xsiSchemaLocationString;
}
constexpr ::StringW const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_xsiSchemaLocationString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xsiSchemaLocationString;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_xsiSchemaLocationString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xsiSchemaLocationString = value;
}
constexpr ::StringW& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_xsiNoNamespaceSchemaLocationString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xsiNoNamespaceSchemaLocationString;
}
constexpr ::StringW const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_xsiNoNamespaceSchemaLocationString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xsiNoNamespaceSchemaLocationString;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_xsiNoNamespaceSchemaLocationString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xsiNoNamespaceSchemaLocationString = value;
}
constexpr ::System::Xml::XmlCharType& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_xmlCharType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlCharType;
}
constexpr ::System::Xml::XmlCharType const& System::Xml::Schema::XmlSchemaValidator::__cordl_internal_get_xmlCharType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlCharType;
}
constexpr void System::Xml::Schema::XmlSchemaValidator::__cordl_internal_set_xmlCharType(::System::Xml::XmlCharType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlCharType = value;
}
inline void System::Xml::Schema::XmlSchemaValidator::setStaticF_dtQName(::System::Xml::Schema::XmlSchemaDatatype* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::XmlSchemaDatatype*, "dtQName", ::System::Xml::Schema::XmlSchemaValidator*>(std::forward<::System::Xml::Schema::XmlSchemaDatatype*>(value));
}
inline ::System::Xml::Schema::XmlSchemaDatatype* System::Xml::Schema::XmlSchemaValidator::getStaticF_dtQName() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::XmlSchemaDatatype*, "dtQName", ::System::Xml::Schema::XmlSchemaValidator*>();
}
inline void System::Xml::Schema::XmlSchemaValidator::setStaticF_dtCDATA(::System::Xml::Schema::XmlSchemaDatatype* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::XmlSchemaDatatype*, "dtCDATA", ::System::Xml::Schema::XmlSchemaValidator*>(std::forward<::System::Xml::Schema::XmlSchemaDatatype*>(value));
}
inline ::System::Xml::Schema::XmlSchemaDatatype* System::Xml::Schema::XmlSchemaValidator::getStaticF_dtCDATA() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::XmlSchemaDatatype*, "dtCDATA", ::System::Xml::Schema::XmlSchemaValidator*>();
}
inline void System::Xml::Schema::XmlSchemaValidator::setStaticF_dtStringArray(::System::Xml::Schema::XmlSchemaDatatype* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::XmlSchemaDatatype*, "dtStringArray", ::System::Xml::Schema::XmlSchemaValidator*>(
      std::forward<::System::Xml::Schema::XmlSchemaDatatype*>(value));
}
inline ::System::Xml::Schema::XmlSchemaDatatype* System::Xml::Schema::XmlSchemaValidator::getStaticF_dtStringArray() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::XmlSchemaDatatype*, "dtStringArray", ::System::Xml::Schema::XmlSchemaValidator*>();
}
inline void System::Xml::Schema::XmlSchemaValidator::setStaticF_EmptyParticleArray(::ArrayW<::System::Xml::Schema::XmlSchemaParticle*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XmlSchemaParticle*>, "EmptyParticleArray", ::System::Xml::Schema::XmlSchemaValidator*>(
      std::forward<::ArrayW<::System::Xml::Schema::XmlSchemaParticle*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XmlSchemaParticle*> System::Xml::Schema::XmlSchemaValidator::getStaticF_EmptyParticleArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XmlSchemaParticle*>, "EmptyParticleArray", ::System::Xml::Schema::XmlSchemaValidator*>();
}
inline void System::Xml::Schema::XmlSchemaValidator::setStaticF_EmptyAttributeArray(::ArrayW<::System::Xml::Schema::XmlSchemaAttribute*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XmlSchemaAttribute*>, "EmptyAttributeArray", ::System::Xml::Schema::XmlSchemaValidator*>(
      std::forward<::ArrayW<::System::Xml::Schema::XmlSchemaAttribute*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XmlSchemaAttribute*> System::Xml::Schema::XmlSchemaValidator::getStaticF_EmptyAttributeArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XmlSchemaAttribute*>, "EmptyAttributeArray", ::System::Xml::Schema::XmlSchemaValidator*>();
}
inline void System::Xml::Schema::XmlSchemaValidator::setStaticF_ValidStates(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "ValidStates", ::System::Xml::Schema::XmlSchemaValidator*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Xml::Schema::XmlSchemaValidator::getStaticF_ValidStates() {
  return ::cordl_internals::getStaticField<::System::Object*, "ValidStates", ::System::Xml::Schema::XmlSchemaValidator*>();
}
inline void System::Xml::Schema::XmlSchemaValidator::setStaticF_MethodNames(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "MethodNames", ::System::Xml::Schema::XmlSchemaValidator*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Xml::Schema::XmlSchemaValidator::getStaticF_MethodNames() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "MethodNames", ::System::Xml::Schema::XmlSchemaValidator*>();
}
inline void System::Xml::Schema::XmlSchemaValidator::_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::XmlSchemaSet* schemas,
                                                           ::System::Xml::IXmlNamespaceResolver* namespaceResolver, ::System::Xml::Schema::XmlSchemaValidationFlags validationFlags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>(),
                                                               ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaValidationFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameTable, schemas, namespaceResolver, validationFlags);
}
inline void System::Xml::Schema::XmlSchemaValidator::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaValidator::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaValidator::set_XmlResolver(::System::Xml::XmlResolver* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "set_XmlResolver", {}, { ::i2c::type_of<::System::Xml::XmlResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaValidator::set_LineInfoProvider(::System::Xml::IXmlLineInfo* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "set_LineInfoProvider", {}, { ::i2c::type_of<::System::Xml::IXmlLineInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaValidator::set_SourceUri(::System::Uri* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "set_SourceUri", {}, { ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaValidator::set_ValidationEventSender(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "set_ValidationEventSender", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaValidator::add_ValidationEventHandler(::System::Xml::Schema::ValidationEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                                                         { "add_ValidationEventHandler", {}, { ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaValidator::remove_ValidationEventHandler(::System::Xml::Schema::ValidationEventHandler* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                           { "remove_ValidationEventHandler", {}, { ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaValidator::AddSchema(::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "AddSchema", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schema);
}
inline void System::Xml::Schema::XmlSchemaValidator::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaValidator::Initialize(::System::Xml::Schema::XmlSchemaObject* partialValidationType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "Initialize", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, partialValidationType);
}
inline void System::Xml::Schema::XmlSchemaValidator::ValidateElement(::StringW localName, ::StringW namespaceUri, ::System::Xml::Schema::XmlSchemaInfo* schemaInfo, ::StringW xsiType, ::StringW xsiNil,
                                                                     ::StringW xsiSchemaLocation, ::StringW xsiNoNamespaceSchemaLocation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                           { "ValidateElement",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaInfo*>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localName, namespaceUri, schemaInfo, xsiType, xsiNil, xsiSchemaLocation, xsiNoNamespaceSchemaLocation);
}
inline ::System::Object* System::Xml::Schema::XmlSchemaValidator::ValidateAttribute(::StringW localName, ::StringW namespaceUri, ::System::Xml::Schema::XmlValueGetter* attributeValue,
                                                                                    ::System::Xml::Schema::XmlSchemaInfo* schemaInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                           { "ValidateAttribute",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlValueGetter*>(),
                                                               ::i2c::type_of<::System::Xml::Schema::XmlSchemaInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, localName, namespaceUri, attributeValue, schemaInfo);
}
inline ::System::Object* System::Xml::Schema::XmlSchemaValidator::ValidateAttribute(::StringW lName, ::StringW ns, ::System::Xml::Schema::XmlValueGetter* attributeValueGetter,
                                                                                    ::StringW attributeStringValue, ::System::Xml::Schema::XmlSchemaInfo* schemaInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                           { "ValidateAttribute",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlValueGetter*>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, lName, ns, attributeValueGetter, attributeStringValue, schemaInfo);
}
inline void System::Xml::Schema::XmlSchemaValidator::ValidateEndOfAttributes(::System::Xml::Schema::XmlSchemaInfo* schemaInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "ValidateEndOfAttributes", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schemaInfo);
}
inline void System::Xml::Schema::XmlSchemaValidator::ValidateText(::System::Xml::Schema::XmlValueGetter* elementValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "ValidateText", {}, { ::i2c::type_of<::System::Xml::Schema::XmlValueGetter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementValue);
}
inline void System::Xml::Schema::XmlSchemaValidator::ValidateText(::StringW elementStringValue, ::System::Xml::Schema::XmlValueGetter* elementValueGetter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                           { "ValidateText", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlValueGetter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementStringValue, elementValueGetter);
}
inline void System::Xml::Schema::XmlSchemaValidator::ValidateWhitespace(::System::Xml::Schema::XmlValueGetter* elementValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "ValidateWhitespace", {}, { ::i2c::type_of<::System::Xml::Schema::XmlValueGetter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementValue);
}
inline void System::Xml::Schema::XmlSchemaValidator::ValidateWhitespace(::StringW elementStringValue, ::System::Xml::Schema::XmlValueGetter* elementValueGetter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                           { "ValidateWhitespace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlValueGetter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementStringValue, elementValueGetter);
}
inline ::System::Object* System::Xml::Schema::XmlSchemaValidator::ValidateEndElement(::System::Xml::Schema::XmlSchemaInfo* schemaInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "ValidateEndElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, schemaInfo);
}
inline void System::Xml::Schema::XmlSchemaValidator::SkipToEndElement(::System::Xml::Schema::XmlSchemaInfo* schemaInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "SkipToEndElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schemaInfo);
}
inline void System::Xml::Schema::XmlSchemaValidator::EndValidation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "EndValidation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaValidator::GetUnspecifiedDefaultAttributes(::System::Collections::ArrayList* defaultAttributes, bool createNodeData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                           { "GetUnspecifiedDefaultAttributes", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, defaultAttributes, createNodeData);
}
inline ::System::Xml::Schema::XmlSchemaSet* System::Xml::Schema::XmlSchemaValidator::get_SchemaSet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "get_SchemaSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaSet*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaValidationFlags System::Xml::Schema::XmlSchemaValidator::get_ValidationFlags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "get_ValidationFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaValidationFlags>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaContentType System::Xml::Schema::XmlSchemaValidator::get_CurrentContentType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "get_CurrentContentType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaContentType>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaValidator::SetDtdSchemaInfo(::System::Xml::IDtdInfo* dtdSchemaInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "SetDtdSchemaInfo", {}, { ::i2c::type_of<::System::Xml::IDtdInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dtdSchemaInfo);
}
inline bool System::Xml::Schema::XmlSchemaValidator::get_StrictlyAssessed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "get_StrictlyAssessed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::Schema::XmlSchemaValidator::get_HasSchema() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "get_HasSchema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Xml::Schema::XmlSchemaValidator::GetConcatenatedValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "GetConcatenatedValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Schema::XmlSchemaValidator::InternalValidateEndElement(::System::Xml::Schema::XmlSchemaInfo* schemaInfo, ::System::Object* typedValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                           { "InternalValidateEndElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaInfo*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, schemaInfo, typedValue);
}
inline void System::Xml::Schema::XmlSchemaValidator::ProcessSchemaLocations(::StringW xsiSchemaLocation, ::StringW xsiNoNamespaceSchemaLocation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "ProcessSchemaLocations", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xsiSchemaLocation, xsiNoNamespaceSchemaLocation);
}
inline ::System::Object* System::Xml::Schema::XmlSchemaValidator::ValidateElementContext(::System::Xml::XmlQualifiedName* elementName, ::by_ref<bool> invalidElementInContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                           { "ValidateElementContext", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, elementName, invalidElementInContext);
}
inline ::System::Xml::Schema::XmlSchemaElement* System::Xml::Schema::XmlSchemaValidator::GetSubstitutionGroupHead(::System::Xml::XmlQualifiedName* member) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "GetSubstitutionGroupHead", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaElement*>(this, ___internal_method, member);
}
inline ::System::Object* System::Xml::Schema::XmlSchemaValidator::ValidateAtomicValue(::StringW stringValue, ::by_ref<::System::Xml::Schema::XmlSchemaSimpleType*> memberType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                           { "ValidateAtomicValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Xml::Schema::XmlSchemaSimpleType*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, stringValue, memberType);
}
inline ::System::Object* System::Xml::Schema::XmlSchemaValidator::ValidateAtomicValue(::System::Object* parsedValue, ::by_ref<::System::Xml::Schema::XmlSchemaSimpleType*> memberType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                              { "ValidateAtomicValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::System::Xml::Schema::XmlSchemaSimpleType*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, parsedValue, memberType);
}
inline ::StringW System::Xml::Schema::XmlSchemaValidator::GetTypeName(::System::Xml::Schema::SchemaDeclBase* decl) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "GetTypeName", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaDeclBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, decl);
}
inline void System::Xml::Schema::XmlSchemaValidator::SaveTextValue(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "SaveTextValue", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaValidator::Push(::System::Xml::XmlQualifiedName* elementName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "Push", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementName);
}
inline void System::Xml::Schema::XmlSchemaValidator::Pop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "Pop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::SchemaElementDecl* System::Xml::Schema::XmlSchemaValidator::FastGetElementDecl(::System::Xml::XmlQualifiedName* elementName, ::System::Object* particle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                           { "FastGetElementDecl", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaElementDecl*>(this, ___internal_method, elementName, particle);
}
inline ::System::Xml::Schema::SchemaElementDecl* System::Xml::Schema::XmlSchemaValidator::CheckXsiTypeAndNil(::System::Xml::Schema::SchemaElementDecl* elementDecl, ::StringW xsiType, ::StringW xsiNil,
                                                                                                             ::by_ref<bool> declFound) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
          { "CheckXsiTypeAndNil", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaElementDecl*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaElementDecl*>(this, ___internal_method, elementDecl, xsiType, xsiNil, declFound);
}
inline void System::Xml::Schema::XmlSchemaValidator::ThrowDeclNotFoundWarningOrError(bool declFound) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "ThrowDeclNotFoundWarningOrError", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, declFound);
}
inline void System::Xml::Schema::XmlSchemaValidator::CheckElementProperties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "CheckElementProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaValidator::ValidateStartElementIdentityConstraints() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "ValidateStartElementIdentityConstraints", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::SchemaAttDef* System::Xml::Schema::XmlSchemaValidator::CheckIsXmlAttribute(::System::Xml::XmlQualifiedName* attQName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "CheckIsXmlAttribute", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaAttDef*>(this, ___internal_method, attQName);
}
inline void System::Xml::Schema::XmlSchemaValidator::AddXmlNamespaceSchema() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "AddXmlNamespaceSchema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Schema::XmlSchemaValidator::CheckMixedValueConstraint(::StringW elementValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "CheckMixedValueConstraint", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, elementValue);
}
inline void System::Xml::Schema::XmlSchemaValidator::LoadSchema(::StringW uri, ::StringW url) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "LoadSchema", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri, url);
}
inline void System::Xml::Schema::XmlSchemaValidator::RecompileSchemaSet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "RecompileSchemaSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaValidator::ProcessTokenizedType(::System::Xml::XmlTokenizedType ttype, ::StringW name, bool attrValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                              { "ProcessTokenizedType", {}, { ::i2c::type_of<::System::Xml::XmlTokenizedType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ttype, name, attrValue);
}
inline ::System::Object* System::Xml::Schema::XmlSchemaValidator::CheckAttributeValue(::System::Object* value, ::System::Xml::Schema::SchemaAttDef* attdef) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                           { "CheckAttributeValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Schema::SchemaAttDef*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, attdef);
}
inline ::System::Object* System::Xml::Schema::XmlSchemaValidator::CheckElementValue(::StringW stringValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "CheckElementValue", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, stringValue);
}
inline void System::Xml::Schema::XmlSchemaValidator::CheckTokenizedTypes(::System::Xml::Schema::XmlSchemaDatatype* dtype, ::System::Object* typedValue, bool attrValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                       { "CheckTokenizedTypes", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dtype, typedValue, attrValue);
}
inline ::System::Object* System::Xml::Schema::XmlSchemaValidator::FindId(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "FindId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name);
}
inline void System::Xml::Schema::XmlSchemaValidator::CheckForwardRefs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "CheckForwardRefs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::Schema::XmlSchemaValidator::get_HasIdentityConstraints() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "get_HasIdentityConstraints", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::Schema::XmlSchemaValidator::get_ProcessIdentityConstraints() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "get_ProcessIdentityConstraints", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::Schema::XmlSchemaValidator::get_ReportValidationWarnings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "get_ReportValidationWarnings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::Schema::XmlSchemaValidator::get_ProcessSchemaHints() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "get_ProcessSchemaHints", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaValidator::CheckStateTransition(::System::Xml::Schema::ValidatorState toState, ::StringW methodName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                           { "CheckStateTransition", {}, { ::i2c::type_of<::System::Xml::Schema::ValidatorState>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toState, methodName);
}
inline void System::Xml::Schema::XmlSchemaValidator::ClearPSVI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "ClearPSVI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaValidator::CheckRequiredAttributes(::System::Xml::Schema::SchemaElementDecl* currentElementDecl) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                                                         { "CheckRequiredAttributes", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaElementDecl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentElementDecl);
}
inline ::System::Xml::Schema::XmlSchemaElement* System::Xml::Schema::XmlSchemaValidator::GetSchemaElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "GetSchemaElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaElement*>(this, ___internal_method);
}
inline ::StringW System::Xml::Schema::XmlSchemaValidator::GetDefaultAttributePrefix(::StringW attributeNS) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "GetDefaultAttributePrefix", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, attributeNS);
}
inline void System::Xml::Schema::XmlSchemaValidator::AddIdentityConstraints() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "AddIdentityConstraints", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaValidator::ElementIdentityConstraints() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "ElementIdentityConstraints", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaValidator::AttributeIdentityConstraints(::StringW name, ::StringW ns, ::System::Object* obj, ::StringW sobj,
                                                                                  ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                                                         { "AttributeIdentityConstraints",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(),
                                                                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, ns, obj, sobj, datatype);
}
inline void System::Xml::Schema::XmlSchemaValidator::EndElementIdentityConstraints(::System::Object* typedValue, ::StringW stringValue, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                          { "EndElementIdentityConstraints", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typedValue, stringValue, datatype);
}
inline void System::Xml::Schema::XmlSchemaValidator::ElementValidationError(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::ValidationState* context,
                                                                            ::System::Xml::Schema::ValidationEventHandler* eventHandler, ::System::Object* sender, ::StringW sourceUri, int32_t lineNo,
                                                                            int32_t linePos, ::System::Xml::Schema::XmlSchemaSet* schemaSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                           { "ElementValidationError",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Xml::Schema::ValidationState*>(),
                                                               ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, context, eventHandler, sender, sourceUri, lineNo, linePos, schemaSet);
}
inline void System::Xml::Schema::XmlSchemaValidator::CompleteValidationError(::System::Xml::Schema::ValidationState* context, ::System::Xml::Schema::ValidationEventHandler* eventHandler,
                                                                             ::System::Object* sender, ::StringW sourceUri, int32_t lineNo, int32_t linePos,
                                                                             ::System::Xml::Schema::XmlSchemaSet* schemaSet) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                          { "CompleteValidationError",
                            {},
                            { ::i2c::type_of<::System::Xml::Schema::ValidationState*>(), ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>(), ::i2c::type_of<::System::Object*>(),
                              ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, eventHandler, sender, sourceUri, lineNo, linePos, schemaSet);
}
inline ::StringW System::Xml::Schema::XmlSchemaValidator::PrintExpectedElements(::System::Collections::ArrayList* expected, bool getParticles) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                           { "PrintExpectedElements", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, expected, getParticles);
}
inline ::StringW System::Xml::Schema::XmlSchemaValidator::PrintNames(::System::Collections::ArrayList* expected) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "PrintNames", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, expected);
}
inline void System::Xml::Schema::XmlSchemaValidator::PrintNamesWithNS(::System::Collections::ArrayList* expected, ::System::Text::StringBuilder* builder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                           { "PrintNamesWithNS", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, expected, builder);
}
inline void System::Xml::Schema::XmlSchemaValidator::EnumerateAny(::System::Text::StringBuilder* builder, ::StringW namespaces) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                                                         { "EnumerateAny", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, namespaces);
}
inline ::StringW System::Xml::Schema::XmlSchemaValidator::QNameString(::StringW localName, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "QNameString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, localName, ns);
}
inline ::StringW System::Xml::Schema::XmlSchemaValidator::BuildElementName(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "BuildElementName", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, qname);
}
inline ::StringW System::Xml::Schema::XmlSchemaValidator::BuildElementName(::StringW localName, ::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "BuildElementName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, localName, ns);
}
inline void System::Xml::Schema::XmlSchemaValidator::ProcessEntity(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "ProcessEntity", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Xml::Schema::XmlSchemaValidator::SendValidationEvent(::StringW code) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code);
}
inline void System::Xml::Schema::XmlSchemaValidator::SendValidationEvent(::StringW code, ::ArrayW<::StringW> args) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                                                         { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, args);
}
inline void System::Xml::Schema::XmlSchemaValidator::SendValidationEvent(::StringW code, ::StringW arg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(), { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, arg);
}
inline void System::Xml::Schema::XmlSchemaValidator::SendValidationEvent(::StringW code, ::StringW arg1, ::StringW arg2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                           { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, arg1, arg2);
}
inline void System::Xml::Schema::XmlSchemaValidator::SendValidationEvent(::StringW code, ::ArrayW<::StringW> args, ::System::Exception* innerException,
                                                                         ::System::Xml::Schema::XmlSeverityType severity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                                                         { "SendValidationEvent",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Exception*>(),
                                                                                             ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, args, innerException, severity);
}
inline void System::Xml::Schema::XmlSchemaValidator::SendValidationEvent(::StringW code, ::ArrayW<::StringW> args, ::System::Exception* innerException) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                              { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, args, innerException);
}
inline void System::Xml::Schema::XmlSchemaValidator::SendValidationEvent(::System::Xml::Schema::XmlSchemaValidationException* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                                                         { "SendValidationEvent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaValidationException*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Xml::Schema::XmlSchemaValidator::SendValidationEvent(::System::Xml::Schema::XmlSchemaException* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                                                         { "SendValidationEvent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaException*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Xml::Schema::XmlSchemaValidator::SendValidationEvent(::StringW code, ::StringW msg, ::System::Xml::Schema::XmlSeverityType severity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                              { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, msg, severity);
}
inline void System::Xml::Schema::XmlSchemaValidator::SendValidationEvent(::System::Xml::Schema::XmlSchemaValidationException* e, ::System::Xml::Schema::XmlSeverityType severity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                          { "SendValidationEvent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaValidationException*>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, severity);
}
inline void System::Xml::Schema::XmlSchemaValidator::SendValidationEvent(::System::Xml::Schema::ValidationEventHandler* eventHandler, ::System::Object* sender,
                                                                         ::System::Xml::Schema::XmlSchemaValidationException* e, ::System::Xml::Schema::XmlSeverityType severity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaValidator*>(),
                                                           { "SendValidationEvent",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>(), ::i2c::type_of<::System::Object*>(),
                                                               ::i2c::type_of<::System::Xml::Schema::XmlSchemaValidationException*>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventHandler, sender, e, severity);
}
inline ::System::Xml::Schema::XmlSchemaValidator* System::Xml::Schema::XmlSchemaValidator::New_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::XmlSchemaSet* schemas,
                                                                                                    ::System::Xml::IXmlNamespaceResolver* namespaceResolver,
                                                                                                    ::System::Xml::Schema::XmlSchemaValidationFlags validationFlags) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaValidator*>(nameTable, schemas, namespaceResolver, validationFlags));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaValidator::XmlSchemaValidator() {}
