#pragma once
// IWYU pragma private; include "System/Xml/Schema/BaseProcessor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__BaseProcessor_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaNames_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventHandler_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaCompilationSettings_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaException_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectTable_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObject_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSeverityType_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::BaseProcessor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseProcessor::*)(::System::Xml::XmlNameTable*, ::System::Xml::Schema::SchemaNames*,
                                                                                                      ::System::Xml::Schema::ValidationEventHandler*)>(&::System::Xml::Schema::BaseProcessor::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x631330c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Xml::Schema::SchemaNames*>(),
                                                                                               ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseProcessor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseProcessor::*)(
    ::System::Xml::XmlNameTable*, ::System::Xml::Schema::SchemaNames*, ::System::Xml::Schema::ValidationEventHandler*, ::System::Xml::Schema::XmlSchemaCompilationSettings*)>(
    &::System::Xml::Schema::BaseProcessor::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6313390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Xml::Schema::SchemaNames*>(),
                                                    ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaCompilationSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseProcessor.get_NameTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::Schema::BaseProcessor::*)()>(&::System::Xml::Schema::BaseProcessor::get_NameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x631341c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(), { "get_NameTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseProcessor.get_SchemaNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaNames* (::System::Xml::Schema::BaseProcessor::*)()>(&::System::Xml::Schema::BaseProcessor::get_SchemaNames)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6313424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(), { "get_SchemaNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseProcessor.get_EventHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::ValidationEventHandler* (::System::Xml::Schema::BaseProcessor::*)()>(
    &::System::Xml::Schema::BaseProcessor::get_EventHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6313494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(), { "get_EventHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseProcessor.get_CompilationSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaCompilationSettings* (::System::Xml::Schema::BaseProcessor::*)()>(
    &::System::Xml::Schema::BaseProcessor::get_CompilationSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x631349c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(), { "get_CompilationSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseProcessor.get_HasErrors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::BaseProcessor::*)()>(&::System::Xml::Schema::BaseProcessor::get_HasErrors)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x63134a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(), { "get_HasErrors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseProcessor.AddToTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseProcessor::*)(::System::Xml::Schema::XmlSchemaObjectTable*, ::System::Xml::XmlQualifiedName*,
                                                                                                      ::System::Xml::Schema::XmlSchemaObject*)>(&::System::Xml::Schema::BaseProcessor::AddToTable)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x63134b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(),
                                                             { "AddToTable",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectTable*>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>(),
                                                                 ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseProcessor.IsValidAttributeGroupRedefine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (::System::Xml::Schema::BaseProcessor::*)(::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObjectTable*)>(
        &::System::Xml::Schema::BaseProcessor::IsValidAttributeGroupRedefine)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6313960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(),
                                                             { "IsValidAttributeGroupRedefine",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>(),
                                                                 ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseProcessor.IsValidGroupRedefine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::BaseProcessor::*)(
    ::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObjectTable*)>(&::System::Xml::Schema::BaseProcessor::IsValidGroupRedefine)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6313bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(),
                                                             { "IsValidGroupRedefine",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>(),
                                                                 ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseProcessor.IsValidTypeRedefine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::BaseProcessor::*)(
    ::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObjectTable*)>(&::System::Xml::Schema::BaseProcessor::IsValidTypeRedefine)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6313a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(),
                                                             { "IsValidTypeRedefine",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>(),
                                                                 ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseProcessor.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseProcessor::*)(::StringW, ::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::BaseProcessor::SendValidationEvent)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6313d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(),
                                                             { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseProcessor.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseProcessor::*)(::StringW, ::StringW, ::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::BaseProcessor::SendValidationEvent)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6313cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(),
                                         { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseProcessor.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseProcessor::*)(::StringW, ::StringW, ::StringW, ::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::BaseProcessor::SendValidationEvent)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6313ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(),
            { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseProcessor.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseProcessor::*)(::StringW, ::ArrayW<::StringW>, ::System::Exception*, ::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::BaseProcessor::SendValidationEvent)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6313f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(),
                                                                                           { "SendValidationEvent",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(),
                                                                                               ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseProcessor.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseProcessor::*)(::StringW, ::StringW, ::StringW, ::StringW, int32_t, int32_t)>(
    &::System::Xml::Schema::BaseProcessor::SendValidationEvent)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6314050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(), { "SendValidationEvent",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                                                              ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseProcessor.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseProcessor::*)(::StringW, ::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSeverityType)>(
    &::System::Xml::Schema::BaseProcessor::SendValidationEvent)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6314164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(),
            { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseProcessor.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseProcessor::*)(::System::Xml::Schema::XmlSchemaException*)>(
    &::System::Xml::Schema::BaseProcessor::SendValidationEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63141ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(), { "SendValidationEvent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaException*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseProcessor.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseProcessor::*)(
    ::StringW, ::StringW, ::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSeverityType)>(&::System::Xml::Schema::BaseProcessor::SendValidationEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x63141f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(),
                                                             { "SendValidationEvent",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>(),
                                                                 ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseProcessor.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseProcessor::*)(::System::Xml::Schema::XmlSchemaException*, ::System::Xml::Schema::XmlSeverityType)>(
    &::System::Xml::Schema::BaseProcessor::SendValidationEvent)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6313dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(),
                                         { "SendValidationEvent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaException*>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseProcessor.SendValidationEventNoThrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseProcessor::*)(::System::Xml::Schema::XmlSchemaException*, ::System::Xml::Schema::XmlSeverityType)>(
    &::System::Xml::Schema::BaseProcessor::SendValidationEventNoThrow)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6314284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(),
                            { "SendValidationEventNoThrow", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaException*>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlNameTable*& System::Xml::Schema::BaseProcessor::__cordl_internal_get_nameTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr ::System::Xml::XmlNameTable* const& System::Xml::Schema::BaseProcessor::__cordl_internal_get_nameTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr void System::Xml::Schema::BaseProcessor::__cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nameTable = value;
}
constexpr ::System::Xml::Schema::SchemaNames*& System::Xml::Schema::BaseProcessor::__cordl_internal_get_schemaNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaNames;
}
constexpr ::System::Xml::Schema::SchemaNames* const& System::Xml::Schema::BaseProcessor::__cordl_internal_get_schemaNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaNames;
}
constexpr void System::Xml::Schema::BaseProcessor::__cordl_internal_set_schemaNames(::System::Xml::Schema::SchemaNames* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemaNames = value;
}
constexpr ::System::Xml::Schema::ValidationEventHandler*& System::Xml::Schema::BaseProcessor::__cordl_internal_get_eventHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventHandler;
}
constexpr ::System::Xml::Schema::ValidationEventHandler* const& System::Xml::Schema::BaseProcessor::__cordl_internal_get_eventHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventHandler;
}
constexpr void System::Xml::Schema::BaseProcessor::__cordl_internal_set_eventHandler(::System::Xml::Schema::ValidationEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eventHandler = value;
}
constexpr ::System::Xml::Schema::XmlSchemaCompilationSettings*& System::Xml::Schema::BaseProcessor::__cordl_internal_get_compilationSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compilationSettings;
}
constexpr ::System::Xml::Schema::XmlSchemaCompilationSettings* const& System::Xml::Schema::BaseProcessor::__cordl_internal_get_compilationSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compilationSettings;
}
constexpr void System::Xml::Schema::BaseProcessor::__cordl_internal_set_compilationSettings(::System::Xml::Schema::XmlSchemaCompilationSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compilationSettings = value;
}
constexpr int32_t& System::Xml::Schema::BaseProcessor::__cordl_internal_get_errorCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorCount;
}
constexpr int32_t const& System::Xml::Schema::BaseProcessor::__cordl_internal_get_errorCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorCount;
}
constexpr void System::Xml::Schema::BaseProcessor::__cordl_internal_set_errorCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___errorCount = value;
}
constexpr ::StringW& System::Xml::Schema::BaseProcessor::__cordl_internal_get_NsXml() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXml;
}
constexpr ::StringW const& System::Xml::Schema::BaseProcessor::__cordl_internal_get_NsXml() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXml;
}
constexpr void System::Xml::Schema::BaseProcessor::__cordl_internal_set_NsXml(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NsXml = value;
}
inline void System::Xml::Schema::BaseProcessor::_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames,
                                                      ::System::Xml::Schema::ValidationEventHandler* eventHandler) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Xml::Schema::SchemaNames*>(),
                                                                                             ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameTable, schemaNames, eventHandler);
}
inline void System::Xml::Schema::BaseProcessor::_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames,
                                                      ::System::Xml::Schema::ValidationEventHandler* eventHandler, ::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Xml::Schema::SchemaNames*>(),
                                                  ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaCompilationSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameTable, schemaNames, eventHandler, compilationSettings);
}
inline ::System::Xml::XmlNameTable* System::Xml::Schema::BaseProcessor::get_NameTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(), { "get_NameTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*>(this, ___internal_method);
}
inline ::System::Xml::Schema::SchemaNames* System::Xml::Schema::BaseProcessor::get_SchemaNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(), { "get_SchemaNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaNames*>(this, ___internal_method);
}
inline ::System::Xml::Schema::ValidationEventHandler* System::Xml::Schema::BaseProcessor::get_EventHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(), { "get_EventHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::ValidationEventHandler*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaCompilationSettings* System::Xml::Schema::BaseProcessor::get_CompilationSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(), { "get_CompilationSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaCompilationSettings*>(this, ___internal_method);
}
inline bool System::Xml::Schema::BaseProcessor::get_HasErrors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(), { "get_HasErrors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::BaseProcessor::AddToTable(::System::Xml::Schema::XmlSchemaObjectTable* table, ::System::Xml::XmlQualifiedName* qname, ::System::Xml::Schema::XmlSchemaObject* item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(),
                                                           { "AddToTable",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectTable*>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>(),
                                                               ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, qname, item);
}
inline bool System::Xml::Schema::BaseProcessor::IsValidAttributeGroupRedefine(::System::Xml::Schema::XmlSchemaObject* existingObject, ::System::Xml::Schema::XmlSchemaObject* item,
                                                                              ::System::Xml::Schema::XmlSchemaObjectTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(),
                                                           { "IsValidAttributeGroupRedefine",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>(),
                                                               ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, existingObject, item, table);
}
inline bool System::Xml::Schema::BaseProcessor::IsValidGroupRedefine(::System::Xml::Schema::XmlSchemaObject* existingObject, ::System::Xml::Schema::XmlSchemaObject* item,
                                                                     ::System::Xml::Schema::XmlSchemaObjectTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(),
                                                           { "IsValidGroupRedefine",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>(),
                                                               ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, existingObject, item, table);
}
inline bool System::Xml::Schema::BaseProcessor::IsValidTypeRedefine(::System::Xml::Schema::XmlSchemaObject* existingObject, ::System::Xml::Schema::XmlSchemaObject* item,
                                                                    ::System::Xml::Schema::XmlSchemaObjectTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(),
                                                           { "IsValidTypeRedefine",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>(),
                                                               ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, existingObject, item, table);
}
inline void System::Xml::Schema::BaseProcessor::SendValidationEvent(::StringW code, ::System::Xml::Schema::XmlSchemaObject* source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(),
                                                           { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, source);
}
inline void System::Xml::Schema::BaseProcessor::SendValidationEvent(::StringW code, ::StringW msg, ::System::Xml::Schema::XmlSchemaObject* source) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(),
                                              { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, msg, source);
}
inline void System::Xml::Schema::BaseProcessor::SendValidationEvent(::StringW code, ::StringW msg1, ::StringW msg2, ::System::Xml::Schema::XmlSchemaObject* source) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(),
          { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, msg1, msg2, source);
}
inline void System::Xml::Schema::BaseProcessor::SendValidationEvent(::StringW code, ::ArrayW<::StringW> args, ::System::Exception* innerException, ::System::Xml::Schema::XmlSchemaObject* source) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(),
                                                                                         { "SendValidationEvent",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Exception*>(),
                                                                                             ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, args, innerException, source);
}
inline void System::Xml::Schema::BaseProcessor::SendValidationEvent(::StringW code, ::StringW msg1, ::StringW msg2, ::StringW sourceUri, int32_t lineNumber, int32_t linePosition) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(), { "SendValidationEvent",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                                                            ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, msg1, msg2, sourceUri, lineNumber, linePosition);
}
inline void System::Xml::Schema::BaseProcessor::SendValidationEvent(::StringW code, ::System::Xml::Schema::XmlSchemaObject* source, ::System::Xml::Schema::XmlSeverityType severity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(),
          { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, source, severity);
}
inline void System::Xml::Schema::BaseProcessor::SendValidationEvent(::System::Xml::Schema::XmlSchemaException* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(), { "SendValidationEvent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaException*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Xml::Schema::BaseProcessor::SendValidationEvent(::StringW code, ::StringW msg, ::System::Xml::Schema::XmlSchemaObject* source, ::System::Xml::Schema::XmlSeverityType severity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(),
                                                           { "SendValidationEvent",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>(),
                                                               ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, msg, source, severity);
}
inline void System::Xml::Schema::BaseProcessor::SendValidationEvent(::System::Xml::Schema::XmlSchemaException* e, ::System::Xml::Schema::XmlSeverityType severity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(),
                                       { "SendValidationEvent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaException*>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, severity);
}
inline void System::Xml::Schema::BaseProcessor::SendValidationEventNoThrow(::System::Xml::Schema::XmlSchemaException* e, ::System::Xml::Schema::XmlSeverityType severity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseProcessor*>(),
                          { "SendValidationEventNoThrow", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaException*>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, severity);
}
inline ::System::Xml::Schema::BaseProcessor* System::Xml::Schema::BaseProcessor::New_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames,
                                                                                          ::System::Xml::Schema::ValidationEventHandler* eventHandler) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::BaseProcessor*>(nameTable, schemaNames, eventHandler));
}
inline ::System::Xml::Schema::BaseProcessor* System::Xml::Schema::BaseProcessor::New_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames,
                                                                                          ::System::Xml::Schema::ValidationEventHandler* eventHandler,
                                                                                          ::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::BaseProcessor*>(nameTable, schemaNames, eventHandler, compilationSettings));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::BaseProcessor::BaseProcessor() {}
