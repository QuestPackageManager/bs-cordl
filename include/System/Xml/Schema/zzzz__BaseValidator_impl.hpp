#pragma once
// IWYU pragma private; include "System/Xml/Schema/BaseValidator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__BaseValidator_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaInfo_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaNames_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventHandler_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationState_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaCollection_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaException_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSeverityType_def.hpp"
#include "System/Xml/zzzz__IDtdInfo_def.hpp"
#include "System/Xml/zzzz__IValidationEventHandling_def.hpp"
#include "System/Xml/zzzz__PositionInfo_def.hpp"
#include "System/Xml/zzzz__ValidationType_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlResolver_def.hpp"
#include "System/Xml/zzzz__XmlValidatingReaderImpl_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseValidator::*)(::System::Xml::Schema::BaseValidator*)>(&::System::Xml::Schema::BaseValidator::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6314330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::BaseValidator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseValidator::*)(::System::Xml::XmlValidatingReaderImpl*, ::System::Xml::Schema::XmlSchemaCollection*,
                                                                                                      ::System::Xml::IValidationEventHandling*)>(&::System::Xml::Schema::BaseValidator::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6312d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::XmlValidatingReaderImpl*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaCollection*>(),
                                                                 ::i2c::type_of<::System::Xml::IValidationEventHandling*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator.get_Reader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlValidatingReaderImpl* (::System::Xml::Schema::BaseValidator::*)()>(&::System::Xml::Schema::BaseValidator::get_Reader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6314370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "get_Reader", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator.get_SchemaCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaCollection* (::System::Xml::Schema::BaseValidator::*)()>(
    &::System::Xml::Schema::BaseValidator::get_SchemaCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6314378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "get_SchemaCollection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator.get_NameTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::Schema::BaseValidator::*)()>(&::System::Xml::Schema::BaseValidator::get_NameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6314380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "get_NameTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator.get_SchemaNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaNames* (::System::Xml::Schema::BaseValidator::*)()>(&::System::Xml::Schema::BaseValidator::get_SchemaNames)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6313280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "get_SchemaNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator.get_PositionInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::PositionInfo* (::System::Xml::Schema::BaseValidator::*)()>(&::System::Xml::Schema::BaseValidator::get_PositionInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6314388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "get_PositionInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator.get_XmlResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlResolver* (::System::Xml::Schema::BaseValidator::*)()>(&::System::Xml::Schema::BaseValidator::get_XmlResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6314390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "get_XmlResolver", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator.set_XmlResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseValidator::*)(::System::Xml::XmlResolver*)>(&::System::Xml::Schema::BaseValidator::set_XmlResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6314398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "set_XmlResolver", {}, { ::i2c::type_of<::System::Xml::XmlResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator.get_BaseUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Xml::Schema::BaseValidator::*)()>(&::System::Xml::Schema::BaseValidator::get_BaseUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63143a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "get_BaseUri", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator.set_BaseUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseValidator::*)(::System::Uri*)>(&::System::Xml::Schema::BaseValidator::set_BaseUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63143a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "set_BaseUri", {}, { ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator.get_EventHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::ValidationEventHandler* (::System::Xml::Schema::BaseValidator::*)()>(
    &::System::Xml::Schema::BaseValidator::get_EventHandler)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x63143b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "get_EventHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator.get_SchemaInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaInfo* (::System::Xml::Schema::BaseValidator::*)()>(&::System::Xml::Schema::BaseValidator::get_SchemaInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6314488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "get_SchemaInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator.set_DtdInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseValidator::*)(::System::Xml::IDtdInfo*)>(&::System::Xml::Schema::BaseValidator::set_DtdInfo)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6314490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "set_DtdInfo", {}, { ::i2c::type_of<::System::Xml::IDtdInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator.get_PreserveWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::BaseValidator::*)()>(&::System::Xml::Schema::BaseValidator::get_PreserveWhitespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6314570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { ::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator.Validate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseValidator::*)()>(&::System::Xml::Schema::BaseValidator::Validate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6314578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { ::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator.CompleteValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseValidator::*)()>(&::System::Xml::Schema::BaseValidator::CompleteValidation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x631457c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { ::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator.FindId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::BaseValidator::*)(::StringW)>(&::System::Xml::Schema::BaseValidator::FindId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6314580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { ::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator.ValidateText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseValidator::*)()>(&::System::Xml::Schema::BaseValidator::ValidateText)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x6314588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "ValidateText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator.ValidateWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseValidator::*)()>(&::System::Xml::Schema::BaseValidator::ValidateWhitespace)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6314a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "ValidateWhitespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator.SaveTextValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseValidator::*)(::StringW)>(&::System::Xml::Schema::BaseValidator::SaveTextValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x63149f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "SaveTextValue", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseValidator::*)(::StringW)>(&::System::Xml::Schema::BaseValidator::SendValidationEvent)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6314b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseValidator::*)(::StringW, ::ArrayW<::StringW>)>(&::System::Xml::Schema::BaseValidator::SendValidationEvent)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x63148e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(),
                                                                                           { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseValidator::*)(::StringW, ::StringW)>(&::System::Xml::Schema::BaseValidator::SendValidationEvent)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x63147f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseValidator::*)(::System::Xml::Schema::XmlSchemaException*)>(
    &::System::Xml::Schema::BaseValidator::SendValidationEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6314bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "SendValidationEvent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaException*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseValidator::*)(::StringW, ::StringW, ::System::Xml::Schema::XmlSeverityType)>(
    &::System::Xml::Schema::BaseValidator::SendValidationEvent)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6314ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(),
                                         { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseValidator::*)(::StringW, ::ArrayW<::StringW>, ::System::Xml::Schema::XmlSeverityType)>(
    &::System::Xml::Schema::BaseValidator::SendValidationEvent)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6314d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(),
                            { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::BaseValidator::*)(::System::Xml::Schema::XmlSchemaException*, ::System::Xml::Schema::XmlSeverityType)>(
    &::System::Xml::Schema::BaseValidator::SendValidationEvent)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6314bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(),
                                         { "SendValidationEvent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaException*>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator.ProcessEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::SchemaInfo*, ::StringW, ::System::Object*, ::System::Xml::Schema::ValidationEventHandler*, ::StringW, int32_t,
                                                                int32_t)>(&::System::Xml::Schema::BaseValidator::ProcessEntity)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x6314eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(),
                                         { "ProcessEntity",
                                           {},
                                           { ::i2c::type_of<::System::Xml::Schema::SchemaInfo*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(),
                                             ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator.ProcessEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::SchemaInfo*, ::StringW, ::System::Xml::IValidationEventHandling*, ::StringW, int32_t, int32_t)>(
    &::System::Xml::Schema::BaseValidator::ProcessEntity)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x63150bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(),
                                                { "ProcessEntity",
                                                  {},
                                                  { ::i2c::type_of<::System::Xml::Schema::SchemaInfo*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::IValidationEventHandling*>(),
                                                    ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::BaseValidator.CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::BaseValidator* (*)(::System::Xml::ValidationType, ::System::Xml::XmlValidatingReaderImpl*,
                                                                                                 ::System::Xml::Schema::XmlSchemaCollection*, ::System::Xml::IValidationEventHandling*, bool)>(
    &::System::Xml::Schema::BaseValidator::CreateInstance)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x63152f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(),
                                         { "CreateInstance",
                                           {},
                                           { ::i2c::type_of<::System::Xml::ValidationType>(), ::i2c::type_of<::System::Xml::XmlValidatingReaderImpl*>(),
                                             ::i2c::type_of<::System::Xml::Schema::XmlSchemaCollection*>(), ::i2c::type_of<::System::Xml::IValidationEventHandling*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchemaCollection*& System::Xml::Schema::BaseValidator::__cordl_internal_get_schemaCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaCollection;
}
constexpr ::System::Xml::Schema::XmlSchemaCollection* const& System::Xml::Schema::BaseValidator::__cordl_internal_get_schemaCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaCollection;
}
constexpr void System::Xml::Schema::BaseValidator::__cordl_internal_set_schemaCollection(::System::Xml::Schema::XmlSchemaCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemaCollection = value;
}
constexpr ::System::Xml::IValidationEventHandling*& System::Xml::Schema::BaseValidator::__cordl_internal_get_eventHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventHandling;
}
constexpr ::System::Xml::IValidationEventHandling* const& System::Xml::Schema::BaseValidator::__cordl_internal_get_eventHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventHandling;
}
constexpr void System::Xml::Schema::BaseValidator::__cordl_internal_set_eventHandling(::System::Xml::IValidationEventHandling* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eventHandling = value;
}
constexpr ::System::Xml::XmlNameTable*& System::Xml::Schema::BaseValidator::__cordl_internal_get_nameTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr ::System::Xml::XmlNameTable* const& System::Xml::Schema::BaseValidator::__cordl_internal_get_nameTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr void System::Xml::Schema::BaseValidator::__cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nameTable = value;
}
constexpr ::System::Xml::Schema::SchemaNames*& System::Xml::Schema::BaseValidator::__cordl_internal_get_schemaNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaNames;
}
constexpr ::System::Xml::Schema::SchemaNames* const& System::Xml::Schema::BaseValidator::__cordl_internal_get_schemaNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaNames;
}
constexpr void System::Xml::Schema::BaseValidator::__cordl_internal_set_schemaNames(::System::Xml::Schema::SchemaNames* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemaNames = value;
}
constexpr ::System::Xml::PositionInfo*& System::Xml::Schema::BaseValidator::__cordl_internal_get_positionInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionInfo;
}
constexpr ::System::Xml::PositionInfo* const& System::Xml::Schema::BaseValidator::__cordl_internal_get_positionInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionInfo;
}
constexpr void System::Xml::Schema::BaseValidator::__cordl_internal_set_positionInfo(::System::Xml::PositionInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___positionInfo = value;
}
constexpr ::System::Xml::XmlResolver*& System::Xml::Schema::BaseValidator::__cordl_internal_get_xmlResolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlResolver;
}
constexpr ::System::Xml::XmlResolver* const& System::Xml::Schema::BaseValidator::__cordl_internal_get_xmlResolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlResolver;
}
constexpr void System::Xml::Schema::BaseValidator::__cordl_internal_set_xmlResolver(::System::Xml::XmlResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlResolver = value;
}
constexpr ::System::Uri*& System::Xml::Schema::BaseValidator::__cordl_internal_get_baseUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseUri;
}
constexpr ::System::Uri* const& System::Xml::Schema::BaseValidator::__cordl_internal_get_baseUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseUri;
}
constexpr void System::Xml::Schema::BaseValidator::__cordl_internal_set_baseUri(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___baseUri = value;
}
constexpr ::System::Xml::Schema::SchemaInfo*& System::Xml::Schema::BaseValidator::__cordl_internal_get_schemaInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaInfo;
}
constexpr ::System::Xml::Schema::SchemaInfo* const& System::Xml::Schema::BaseValidator::__cordl_internal_get_schemaInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaInfo;
}
constexpr void System::Xml::Schema::BaseValidator::__cordl_internal_set_schemaInfo(::System::Xml::Schema::SchemaInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemaInfo = value;
}
constexpr ::System::Xml::XmlValidatingReaderImpl*& System::Xml::Schema::BaseValidator::__cordl_internal_get_reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr ::System::Xml::XmlValidatingReaderImpl* const& System::Xml::Schema::BaseValidator::__cordl_internal_get_reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr void System::Xml::Schema::BaseValidator::__cordl_internal_set_reader(::System::Xml::XmlValidatingReaderImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reader = value;
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::BaseValidator::__cordl_internal_get_elementName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementName;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::BaseValidator::__cordl_internal_get_elementName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementName;
}
constexpr void System::Xml::Schema::BaseValidator::__cordl_internal_set_elementName(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementName = value;
}
constexpr ::System::Xml::Schema::ValidationState*& System::Xml::Schema::BaseValidator::__cordl_internal_get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::System::Xml::Schema::ValidationState* const& System::Xml::Schema::BaseValidator::__cordl_internal_get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void System::Xml::Schema::BaseValidator::__cordl_internal_set_context(::System::Xml::Schema::ValidationState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___context = value;
}
constexpr ::System::Text::StringBuilder*& System::Xml::Schema::BaseValidator::__cordl_internal_get_textValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textValue;
}
constexpr ::System::Text::StringBuilder* const& System::Xml::Schema::BaseValidator::__cordl_internal_get_textValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textValue;
}
constexpr void System::Xml::Schema::BaseValidator::__cordl_internal_set_textValue(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textValue = value;
}
constexpr ::StringW& System::Xml::Schema::BaseValidator::__cordl_internal_get_textString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textString;
}
constexpr ::StringW const& System::Xml::Schema::BaseValidator::__cordl_internal_get_textString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textString;
}
constexpr void System::Xml::Schema::BaseValidator::__cordl_internal_set_textString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textString = value;
}
constexpr bool& System::Xml::Schema::BaseValidator::__cordl_internal_get_hasSibling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasSibling;
}
constexpr bool const& System::Xml::Schema::BaseValidator::__cordl_internal_get_hasSibling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasSibling;
}
constexpr void System::Xml::Schema::BaseValidator::__cordl_internal_set_hasSibling(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasSibling = value;
}
constexpr bool& System::Xml::Schema::BaseValidator::__cordl_internal_get_checkDatatype() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkDatatype;
}
constexpr bool const& System::Xml::Schema::BaseValidator::__cordl_internal_get_checkDatatype() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkDatatype;
}
constexpr void System::Xml::Schema::BaseValidator::__cordl_internal_set_checkDatatype(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___checkDatatype = value;
}
inline void System::Xml::Schema::BaseValidator::_ctor(::System::Xml::Schema::BaseValidator* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::BaseValidator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void System::Xml::Schema::BaseValidator::_ctor(::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::Schema::XmlSchemaCollection* schemaCollection,
                                                      ::System::Xml::IValidationEventHandling* eventHandling) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::XmlValidatingReaderImpl*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaCollection*>(),
                                                               ::i2c::type_of<::System::Xml::IValidationEventHandling*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, schemaCollection, eventHandling);
}
inline ::System::Xml::XmlValidatingReaderImpl* System::Xml::Schema::BaseValidator::get_Reader() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "get_Reader", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlValidatingReaderImpl*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaCollection* System::Xml::Schema::BaseValidator::get_SchemaCollection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "get_SchemaCollection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaCollection*>(this, ___internal_method);
}
inline ::System::Xml::XmlNameTable* System::Xml::Schema::BaseValidator::get_NameTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "get_NameTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*>(this, ___internal_method);
}
inline ::System::Xml::Schema::SchemaNames* System::Xml::Schema::BaseValidator::get_SchemaNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "get_SchemaNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaNames*>(this, ___internal_method);
}
inline ::System::Xml::PositionInfo* System::Xml::Schema::BaseValidator::get_PositionInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "get_PositionInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::PositionInfo*>(this, ___internal_method);
}
inline ::System::Xml::XmlResolver* System::Xml::Schema::BaseValidator::get_XmlResolver() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "get_XmlResolver", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlResolver*>(this, ___internal_method);
}
inline void System::Xml::Schema::BaseValidator::set_XmlResolver(::System::Xml::XmlResolver* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "set_XmlResolver", {}, { ::i2c::type_of<::System::Xml::XmlResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Uri* System::Xml::Schema::BaseValidator::get_BaseUri() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "get_BaseUri", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline void System::Xml::Schema::BaseValidator::set_BaseUri(::System::Uri* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "set_BaseUri", {}, { ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::ValidationEventHandler* System::Xml::Schema::BaseValidator::get_EventHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "get_EventHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::ValidationEventHandler*>(this, ___internal_method);
}
inline ::System::Xml::Schema::SchemaInfo* System::Xml::Schema::BaseValidator::get_SchemaInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "get_SchemaInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaInfo*>(this, ___internal_method);
}
inline void System::Xml::Schema::BaseValidator::set_DtdInfo(::System::Xml::IDtdInfo* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "set_DtdInfo", {}, { ::i2c::type_of<::System::Xml::IDtdInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::Schema::BaseValidator::get_PreserveWhitespace() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::BaseValidator::Validate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::BaseValidator::CompleteValidation() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Schema::BaseValidator::FindId(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name);
}
inline void System::Xml::Schema::BaseValidator::ValidateText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "ValidateText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::BaseValidator::ValidateWhitespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "ValidateWhitespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::BaseValidator::SaveTextValue(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "SaveTextValue", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::BaseValidator::SendValidationEvent(::StringW code) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code);
}
inline void System::Xml::Schema::BaseValidator::SendValidationEvent(::StringW code, ::ArrayW<::StringW> args) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(),
                                                                                         { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, args);
}
inline void System::Xml::Schema::BaseValidator::SendValidationEvent(::StringW code, ::StringW arg) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, arg);
}
inline void System::Xml::Schema::BaseValidator::SendValidationEvent(::System::Xml::Schema::XmlSchemaException* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(), { "SendValidationEvent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaException*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Xml::Schema::BaseValidator::SendValidationEvent(::StringW code, ::StringW msg, ::System::Xml::Schema::XmlSeverityType severity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(),
                                              { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, msg, severity);
}
inline void System::Xml::Schema::BaseValidator::SendValidationEvent(::StringW code, ::ArrayW<::StringW> args, ::System::Xml::Schema::XmlSeverityType severity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(),
                          { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, args, severity);
}
inline void System::Xml::Schema::BaseValidator::SendValidationEvent(::System::Xml::Schema::XmlSchemaException* e, ::System::Xml::Schema::XmlSeverityType severity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(),
                                       { "SendValidationEvent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaException*>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, severity);
}
inline void System::Xml::Schema::BaseValidator::ProcessEntity(::System::Xml::Schema::SchemaInfo* sinfo, ::StringW name, ::System::Object* sender,
                                                              ::System::Xml::Schema::ValidationEventHandler* eventhandler, ::StringW baseUri, int32_t lineNumber, int32_t linePosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(),
                                       { "ProcessEntity",
                                         {},
                                         { ::i2c::type_of<::System::Xml::Schema::SchemaInfo*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(),
                                           ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sinfo, name, sender, eventhandler, baseUri, lineNumber, linePosition);
}
inline void System::Xml::Schema::BaseValidator::ProcessEntity(::System::Xml::Schema::SchemaInfo* sinfo, ::StringW name, ::System::Xml::IValidationEventHandling* eventHandling, ::StringW baseUriStr,
                                                              int32_t lineNumber, int32_t linePosition) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(),
                                              { "ProcessEntity",
                                                {},
                                                { ::i2c::type_of<::System::Xml::Schema::SchemaInfo*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::IValidationEventHandling*>(),
                                                  ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sinfo, name, eventHandling, baseUriStr, lineNumber, linePosition);
}
inline ::System::Xml::Schema::BaseValidator* System::Xml::Schema::BaseValidator::CreateInstance(::System::Xml::ValidationType valType, ::System::Xml::XmlValidatingReaderImpl* reader,
                                                                                                ::System::Xml::Schema::XmlSchemaCollection* schemaCollection,
                                                                                                ::System::Xml::IValidationEventHandling* eventHandling, bool processIdentityConstraints) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::BaseValidator*>(),
                                       { "CreateInstance",
                                         {},
                                         { ::i2c::type_of<::System::Xml::ValidationType>(), ::i2c::type_of<::System::Xml::XmlValidatingReaderImpl*>(),
                                           ::i2c::type_of<::System::Xml::Schema::XmlSchemaCollection*>(), ::i2c::type_of<::System::Xml::IValidationEventHandling*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::BaseValidator*>(nullptr, ___internal_method, valType, reader, schemaCollection, eventHandling, processIdentityConstraints);
}
inline ::System::Xml::Schema::BaseValidator* System::Xml::Schema::BaseValidator::New_ctor(::System::Xml::Schema::BaseValidator* other) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::BaseValidator*>(other));
}
inline ::System::Xml::Schema::BaseValidator* System::Xml::Schema::BaseValidator::New_ctor(::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::Schema::XmlSchemaCollection* schemaCollection,
                                                                                          ::System::Xml::IValidationEventHandling* eventHandling) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::BaseValidator*>(reader, schemaCollection, eventHandling));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::BaseValidator::BaseValidator() {}
