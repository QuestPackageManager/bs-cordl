#pragma once
// IWYU pragma private; include "System/Xml/Schema/XsdValidator.hpp"
#include "System/Xml/Schema/zzzz__BaseValidator_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentProcessing_impl.hpp"
#include "System/Xml/Schema/zzzz__XsdValidator_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Xml/Schema/zzzz__BaseValidator_def.hpp"
#include "System/Xml/Schema/zzzz__IdRefNode_def.hpp"
#include "System/Xml/Schema/zzzz__Parser_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaAttDef_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaElementDecl_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaCollection_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDatatype_def.hpp"
#include "System/Xml/zzzz__HWStack_def.hpp"
#include "System/Xml/zzzz__IValidationEventHandling_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlTokenizedType_def.hpp"
#include "System/Xml/zzzz__XmlValidatingReaderImpl_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdValidator::*)(::System::Xml::Schema::BaseValidator*)>(&::System::Xml::Schema::XsdValidator::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x626c22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::BaseValidator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdValidator::*)(::System::Xml::XmlValidatingReaderImpl*, ::System::Xml::Schema::XmlSchemaCollection*,
                                                                                                     ::System::Xml::IValidationEventHandling*)>(&::System::Xml::Schema::XsdValidator::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x626c5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::XmlValidatingReaderImpl*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaCollection*>(),
                                                                 ::i2c::type_of<::System::Xml::IValidationEventHandling*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdValidator::*)()>(&::System::Xml::Schema::XsdValidator::Init)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x626c250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.Validate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdValidator::*)()>(&::System::Xml::Schema::XsdValidator::Validate)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x626c6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { ::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.CompleteValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdValidator::*)()>(&::System::Xml::Schema::XsdValidator::CompleteValidation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x626cd50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { ::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.get_IsInlineSchemaStarted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XsdValidator::*)()>(&::System::Xml::Schema::XsdValidator::get_IsInlineSchemaStarted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x626c778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "get_IsInlineSchemaStarted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.ProcessInlineSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdValidator::*)()>(&::System::Xml::Schema::XsdValidator::ProcessInlineSchema)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x626c788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "ProcessInlineSchema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.ValidateElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdValidator::*)()>(&::System::Xml::Schema::XsdValidator::ValidateElement)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x626ca08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "ValidateElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.ValidateChildElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XsdValidator::*)()>(&::System::Xml::Schema::XsdValidator::ValidateChildElement)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x626ce60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "ValidateChildElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.ProcessElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdValidator::*)(::System::Object*)>(&::System::Xml::Schema::XsdValidator::ProcessElement)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x626d07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "ProcessElement", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.ProcessXsiAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdValidator::*)(::by_ref<::System::Xml::XmlQualifiedName*>, ::by_ref<::StringW>)>(
    &::System::Xml::Schema::XsdValidator::ProcessXsiAttributes)> {
  constexpr static std::size_t size = 0x78c;
  constexpr static std::size_t addrs = 0x626d3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(),
                                                             { "ProcessXsiAttributes", {}, { ::i2c::type_of<::by_ref<::System::Xml::XmlQualifiedName*>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.ValidateEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdValidator::*)()>(&::System::Xml::Schema::XsdValidator::ValidateEndElement)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x626cb6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "ValidateEndElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.FastGetElementDecl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaElementDecl* (::System::Xml::Schema::XsdValidator::*)(::System::Object*)>(
    &::System::Xml::Schema::XsdValidator::FastGetElementDecl)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x626d2cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "FastGetElementDecl", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.ThoroughGetElementDecl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaElementDecl* (
    ::System::Xml::Schema::XsdValidator::*)(::System::Xml::Schema::SchemaElementDecl*, ::System::Xml::XmlQualifiedName*, ::StringW)>(&::System::Xml::Schema::XsdValidator::ThoroughGetElementDecl)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x626db44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::Schema::XsdValidator*>(),
            { "ThoroughGetElementDecl", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaElementDecl*>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.ValidateStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdValidator::*)()>(&::System::Xml::Schema::XsdValidator::ValidateStartElement)> {
  constexpr static std::size_t size = 0x6e4;
  constexpr static std::size_t addrs = 0x626dfcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "ValidateStartElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.ValidateEndStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdValidator::*)()>(&::System::Xml::Schema::XsdValidator::ValidateEndStartElement)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x626e6b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "ValidateEndStartElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.LoadSchemaFromLocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdValidator::*)(::StringW, ::StringW)>(&::System::Xml::Schema::XsdValidator::LoadSchemaFromLocation)> {
  constexpr static std::size_t size = 0x558;
  constexpr static std::size_t addrs = 0x6270178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "LoadSchemaFromLocation", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.LoadSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdValidator::*)(::StringW, ::StringW)>(&::System::Xml::Schema::XsdValidator::LoadSchema)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x626ea78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "LoadSchema", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.get_HasSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XsdValidator::*)()>(&::System::Xml::Schema::XsdValidator::get_HasSchema)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x626df60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "get_HasSchema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.get_PreserveWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XsdValidator::*)()>(&::System::Xml::Schema::XsdValidator::get_PreserveWhitespace)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x62706d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { ::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.ProcessTokenizedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdValidator::*)(::System::Xml::XmlTokenizedType, ::StringW)>(
    &::System::Xml::Schema::XsdValidator::ProcessTokenizedType)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x6270710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(),
                                                             { "ProcessTokenizedType", {}, { ::i2c::type_of<::System::Xml::XmlTokenizedType>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.CheckValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdValidator::*)(::StringW, ::System::Xml::Schema::SchemaAttDef*)>(
    &::System::Xml::Schema::XsdValidator::CheckValue)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x626ec44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "CheckValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::SchemaAttDef*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.AddID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdValidator::*)(::StringW, ::System::Object*)>(&::System::Xml::Schema::XsdValidator::AddID)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x627090c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "AddID", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.FindId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XsdValidator::*)(::StringW)>(&::System::Xml::Schema::XsdValidator::FindId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x62709a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { ::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.IsXSDRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XsdValidator::*)(::StringW, ::StringW)>(&::System::Xml::Schema::XsdValidator::IsXSDRoot)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x626d058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "IsXSDRoot", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.Push
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdValidator::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::XsdValidator::Push)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x626c5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "Push", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.Pop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdValidator::*)()>(&::System::Xml::Schema::XsdValidator::Pop)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x626fd60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "Pop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.CheckForwardRefs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdValidator::*)()>(&::System::Xml::Schema::XsdValidator::CheckForwardRefs)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x626cd54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "CheckForwardRefs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.ValidateStartElementIdentityConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdValidator::*)()>(&::System::Xml::Schema::XsdValidator::ValidateStartElementIdentityConstraints)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x626df80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "ValidateStartElementIdentityConstraints", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.get_HasIdentityConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XsdValidator::*)()>(&::System::Xml::Schema::XsdValidator::get_HasIdentityConstraints)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x626f0a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "get_HasIdentityConstraints", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.AddIdentityConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdValidator::*)()>(&::System::Xml::Schema::XsdValidator::AddIdentityConstraints)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x62709c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "AddIdentityConstraints", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.ElementIdentityConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdValidator::*)()>(&::System::Xml::Schema::XsdValidator::ElementIdentityConstraints)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x6270dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "ElementIdentityConstraints", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.AttributeIdentityConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdValidator::*)(::StringW, ::StringW, ::System::Object*, ::StringW, ::System::Xml::Schema::SchemaAttDef*)>(
    &::System::Xml::Schema::XsdValidator::AttributeIdentityConstraints)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x626fea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "AttributeIdentityConstraints",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(),
                                                                                                      ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::SchemaAttDef*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.UnWrapUnion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XsdValidator::*)(::System::Object*)>(&::System::Xml::Schema::XsdValidator::UnWrapUnion)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x626fe24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "UnWrapUnion", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdValidator.EndElementIdentityConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdValidator::*)()>(&::System::Xml::Schema::XsdValidator::EndElementIdentityConstraints)> {
  constexpr static std::size_t size = 0xca8;
  constexpr static std::size_t addrs = 0x626f0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "EndElementIdentityConstraints", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Xml::Schema::XsdValidator::__cordl_internal_get_startIDConstraint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startIDConstraint;
}
constexpr int32_t const& System::Xml::Schema::XsdValidator::__cordl_internal_get_startIDConstraint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startIDConstraint;
}
constexpr void System::Xml::Schema::XsdValidator::__cordl_internal_set_startIDConstraint(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startIDConstraint = value;
}
constexpr ::System::Xml::HWStack*& System::Xml::Schema::XsdValidator::__cordl_internal_get_validationStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationStack;
}
constexpr ::System::Xml::HWStack* const& System::Xml::Schema::XsdValidator::__cordl_internal_get_validationStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationStack;
}
constexpr void System::Xml::Schema::XsdValidator::__cordl_internal_set_validationStack(::System::Xml::HWStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validationStack = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::XsdValidator::__cordl_internal_get_attPresence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attPresence;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::XsdValidator::__cordl_internal_get_attPresence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attPresence;
}
constexpr void System::Xml::Schema::XsdValidator::__cordl_internal_set_attPresence(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attPresence = value;
}
constexpr ::System::Xml::XmlNamespaceManager*& System::Xml::Schema::XsdValidator::__cordl_internal_get_nsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsManager;
}
constexpr ::System::Xml::XmlNamespaceManager* const& System::Xml::Schema::XsdValidator::__cordl_internal_get_nsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsManager;
}
constexpr void System::Xml::Schema::XsdValidator::__cordl_internal_set_nsManager(::System::Xml::XmlNamespaceManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nsManager = value;
}
constexpr bool& System::Xml::Schema::XsdValidator::__cordl_internal_get_bManageNamespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bManageNamespaces;
}
constexpr bool const& System::Xml::Schema::XsdValidator::__cordl_internal_get_bManageNamespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bManageNamespaces;
}
constexpr void System::Xml::Schema::XsdValidator::__cordl_internal_set_bManageNamespaces(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bManageNamespaces = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::XsdValidator::__cordl_internal_get_IDs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IDs;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::XsdValidator::__cordl_internal_get_IDs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IDs;
}
constexpr void System::Xml::Schema::XsdValidator::__cordl_internal_set_IDs(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IDs = value;
}
constexpr ::System::Xml::Schema::IdRefNode*& System::Xml::Schema::XsdValidator::__cordl_internal_get_idRefListHead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idRefListHead;
}
constexpr ::System::Xml::Schema::IdRefNode* const& System::Xml::Schema::XsdValidator::__cordl_internal_get_idRefListHead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idRefListHead;
}
constexpr void System::Xml::Schema::XsdValidator::__cordl_internal_set_idRefListHead(::System::Xml::Schema::IdRefNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___idRefListHead = value;
}
constexpr ::System::Xml::Schema::Parser*& System::Xml::Schema::XsdValidator::__cordl_internal_get_inlineSchemaParser() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inlineSchemaParser;
}
constexpr ::System::Xml::Schema::Parser* const& System::Xml::Schema::XsdValidator::__cordl_internal_get_inlineSchemaParser() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inlineSchemaParser;
}
constexpr void System::Xml::Schema::XsdValidator::__cordl_internal_set_inlineSchemaParser(::System::Xml::Schema::Parser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inlineSchemaParser = value;
}
constexpr ::System::Xml::Schema::XmlSchemaContentProcessing& System::Xml::Schema::XsdValidator::__cordl_internal_get_processContents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processContents;
}
constexpr ::System::Xml::Schema::XmlSchemaContentProcessing const& System::Xml::Schema::XsdValidator::__cordl_internal_get_processContents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processContents;
}
constexpr void System::Xml::Schema::XsdValidator::__cordl_internal_set_processContents(::System::Xml::Schema::XmlSchemaContentProcessing value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___processContents = value;
}
constexpr ::StringW& System::Xml::Schema::XsdValidator::__cordl_internal_get_NsXmlNs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXmlNs;
}
constexpr ::StringW const& System::Xml::Schema::XsdValidator::__cordl_internal_get_NsXmlNs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXmlNs;
}
constexpr void System::Xml::Schema::XsdValidator::__cordl_internal_set_NsXmlNs(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NsXmlNs = value;
}
constexpr ::StringW& System::Xml::Schema::XsdValidator::__cordl_internal_get_NsXs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXs;
}
constexpr ::StringW const& System::Xml::Schema::XsdValidator::__cordl_internal_get_NsXs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXs;
}
constexpr void System::Xml::Schema::XsdValidator::__cordl_internal_set_NsXs(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NsXs = value;
}
constexpr ::StringW& System::Xml::Schema::XsdValidator::__cordl_internal_get_NsXsi() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXsi;
}
constexpr ::StringW const& System::Xml::Schema::XsdValidator::__cordl_internal_get_NsXsi() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXsi;
}
constexpr void System::Xml::Schema::XsdValidator::__cordl_internal_set_NsXsi(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NsXsi = value;
}
constexpr ::StringW& System::Xml::Schema::XsdValidator::__cordl_internal_get_XsiType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiType;
}
constexpr ::StringW const& System::Xml::Schema::XsdValidator::__cordl_internal_get_XsiType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiType;
}
constexpr void System::Xml::Schema::XsdValidator::__cordl_internal_set_XsiType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___XsiType = value;
}
constexpr ::StringW& System::Xml::Schema::XsdValidator::__cordl_internal_get_XsiNil() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiNil;
}
constexpr ::StringW const& System::Xml::Schema::XsdValidator::__cordl_internal_get_XsiNil() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiNil;
}
constexpr void System::Xml::Schema::XsdValidator::__cordl_internal_set_XsiNil(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___XsiNil = value;
}
constexpr ::StringW& System::Xml::Schema::XsdValidator::__cordl_internal_get_XsiSchemaLocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiSchemaLocation;
}
constexpr ::StringW const& System::Xml::Schema::XsdValidator::__cordl_internal_get_XsiSchemaLocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiSchemaLocation;
}
constexpr void System::Xml::Schema::XsdValidator::__cordl_internal_set_XsiSchemaLocation(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___XsiSchemaLocation = value;
}
constexpr ::StringW& System::Xml::Schema::XsdValidator::__cordl_internal_get_XsiNoNamespaceSchemaLocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiNoNamespaceSchemaLocation;
}
constexpr ::StringW const& System::Xml::Schema::XsdValidator::__cordl_internal_get_XsiNoNamespaceSchemaLocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiNoNamespaceSchemaLocation;
}
constexpr void System::Xml::Schema::XsdValidator::__cordl_internal_set_XsiNoNamespaceSchemaLocation(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___XsiNoNamespaceSchemaLocation = value;
}
constexpr ::StringW& System::Xml::Schema::XsdValidator::__cordl_internal_get_XsdSchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsdSchema;
}
constexpr ::StringW const& System::Xml::Schema::XsdValidator::__cordl_internal_get_XsdSchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsdSchema;
}
constexpr void System::Xml::Schema::XsdValidator::__cordl_internal_set_XsdSchema(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___XsdSchema = value;
}
inline void System::Xml::Schema::XsdValidator::setStaticF_dtCDATA(::System::Xml::Schema::XmlSchemaDatatype* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::XmlSchemaDatatype*, "dtCDATA", ::System::Xml::Schema::XsdValidator*>(std::forward<::System::Xml::Schema::XmlSchemaDatatype*>(value));
}
inline ::System::Xml::Schema::XmlSchemaDatatype* System::Xml::Schema::XsdValidator::getStaticF_dtCDATA() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::XmlSchemaDatatype*, "dtCDATA", ::System::Xml::Schema::XsdValidator*>();
}
inline void System::Xml::Schema::XsdValidator::setStaticF_dtQName(::System::Xml::Schema::XmlSchemaDatatype* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::XmlSchemaDatatype*, "dtQName", ::System::Xml::Schema::XsdValidator*>(std::forward<::System::Xml::Schema::XmlSchemaDatatype*>(value));
}
inline ::System::Xml::Schema::XmlSchemaDatatype* System::Xml::Schema::XsdValidator::getStaticF_dtQName() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::XmlSchemaDatatype*, "dtQName", ::System::Xml::Schema::XsdValidator*>();
}
inline void System::Xml::Schema::XsdValidator::setStaticF_dtStringArray(::System::Xml::Schema::XmlSchemaDatatype* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::XmlSchemaDatatype*, "dtStringArray", ::System::Xml::Schema::XsdValidator*>(std::forward<::System::Xml::Schema::XmlSchemaDatatype*>(value));
}
inline ::System::Xml::Schema::XmlSchemaDatatype* System::Xml::Schema::XsdValidator::getStaticF_dtStringArray() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::XmlSchemaDatatype*, "dtStringArray", ::System::Xml::Schema::XsdValidator*>();
}
inline void System::Xml::Schema::XsdValidator::_ctor(::System::Xml::Schema::BaseValidator* validator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::BaseValidator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, validator);
}
inline void System::Xml::Schema::XsdValidator::_ctor(::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::Schema::XmlSchemaCollection* schemaCollection,
                                                     ::System::Xml::IValidationEventHandling* eventHandling) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::XmlValidatingReaderImpl*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaCollection*>(),
                                                               ::i2c::type_of<::System::Xml::IValidationEventHandling*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, schemaCollection, eventHandling);
}
inline void System::Xml::Schema::XsdValidator::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XsdValidator::Validate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XsdValidator::CompleteValidation() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::Schema::XsdValidator::get_IsInlineSchemaStarted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "get_IsInlineSchemaStarted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::XsdValidator::ProcessInlineSchema() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "ProcessInlineSchema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XsdValidator::ValidateElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "ValidateElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Schema::XsdValidator::ValidateChildElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "ValidateChildElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Xml::Schema::XsdValidator::ProcessElement(::System::Object* particle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "ProcessElement", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particle);
}
inline void System::Xml::Schema::XsdValidator::ProcessXsiAttributes(::by_ref<::System::Xml::XmlQualifiedName*> xsiType, ::by_ref<::StringW> xsiNil) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(),
                                                           { "ProcessXsiAttributes", {}, { ::i2c::type_of<::by_ref<::System::Xml::XmlQualifiedName*>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xsiType, xsiNil);
}
inline void System::Xml::Schema::XsdValidator::ValidateEndElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "ValidateEndElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::SchemaElementDecl* System::Xml::Schema::XsdValidator::FastGetElementDecl(::System::Object* particle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "FastGetElementDecl", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaElementDecl*>(this, ___internal_method, particle);
}
inline ::System::Xml::Schema::SchemaElementDecl* System::Xml::Schema::XsdValidator::ThoroughGetElementDecl(::System::Xml::Schema::SchemaElementDecl* elementDecl,
                                                                                                           ::System::Xml::XmlQualifiedName* xsiType, ::StringW xsiNil) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Schema::XsdValidator*>(),
          { "ThoroughGetElementDecl", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaElementDecl*>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaElementDecl*>(this, ___internal_method, elementDecl, xsiType, xsiNil);
}
inline void System::Xml::Schema::XsdValidator::ValidateStartElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "ValidateStartElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XsdValidator::ValidateEndStartElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "ValidateEndStartElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XsdValidator::LoadSchemaFromLocation(::StringW uri, ::StringW url) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "LoadSchemaFromLocation", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri, url);
}
inline void System::Xml::Schema::XsdValidator::LoadSchema(::StringW uri, ::StringW url) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "LoadSchema", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri, url);
}
inline bool System::Xml::Schema::XsdValidator::get_HasSchema() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "get_HasSchema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::Schema::XsdValidator::get_PreserveWhitespace() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::XsdValidator::ProcessTokenizedType(::System::Xml::XmlTokenizedType ttype, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(),
                                                           { "ProcessTokenizedType", {}, { ::i2c::type_of<::System::Xml::XmlTokenizedType>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ttype, name);
}
inline void System::Xml::Schema::XsdValidator::CheckValue(::StringW value, ::System::Xml::Schema::SchemaAttDef* attdef) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "CheckValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::SchemaAttDef*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, attdef);
}
inline void System::Xml::Schema::XsdValidator::AddID(::StringW name, ::System::Object* node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "AddID", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, node);
}
inline ::System::Object* System::Xml::Schema::XsdValidator::FindId(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name);
}
inline bool System::Xml::Schema::XsdValidator::IsXSDRoot(::StringW localName, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "IsXSDRoot", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localName, ns);
}
inline void System::Xml::Schema::XsdValidator::Push(::System::Xml::XmlQualifiedName* elementName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "Push", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementName);
}
inline void System::Xml::Schema::XsdValidator::Pop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "Pop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XsdValidator::CheckForwardRefs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "CheckForwardRefs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XsdValidator::ValidateStartElementIdentityConstraints() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "ValidateStartElementIdentityConstraints", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::Schema::XsdValidator::get_HasIdentityConstraints() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "get_HasIdentityConstraints", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::XsdValidator::AddIdentityConstraints() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "AddIdentityConstraints", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XsdValidator::ElementIdentityConstraints() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "ElementIdentityConstraints", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XsdValidator::AttributeIdentityConstraints(::StringW name, ::StringW ns, ::System::Object* obj, ::StringW sobj, ::System::Xml::Schema::SchemaAttDef* attdef) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "AttributeIdentityConstraints",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(),
                                                                                                    ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::SchemaAttDef*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, ns, obj, sobj, attdef);
}
inline ::System::Object* System::Xml::Schema::XsdValidator::UnWrapUnion(::System::Object* typedValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "UnWrapUnion", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, typedValue);
}
inline void System::Xml::Schema::XsdValidator::EndElementIdentityConstraints() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdValidator*>(), { "EndElementIdentityConstraints", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XsdValidator* System::Xml::Schema::XsdValidator::New_ctor(::System::Xml::Schema::BaseValidator* validator) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XsdValidator*>(validator));
}
inline ::System::Xml::Schema::XsdValidator* System::Xml::Schema::XsdValidator::New_ctor(::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::Schema::XmlSchemaCollection* schemaCollection,
                                                                                        ::System::Xml::IValidationEventHandling* eventHandling) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XsdValidator*>(reader, schemaCollection, eventHandling));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XsdValidator::XsdValidator() {}
