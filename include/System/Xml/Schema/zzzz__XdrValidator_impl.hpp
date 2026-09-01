#pragma once
// IWYU pragma private; include "System\Xml\Schema\XdrValidator.hpp"
#include "System/Xml/Schema/zzzz__BaseValidator_impl.hpp"
#include "System/Xml/Schema/zzzz__XdrValidator_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Xml/Schema/zzzz__BaseValidator_def.hpp"
#include "System/Xml/Schema/zzzz__IdRefNode_def.hpp"
#include "System/Xml/Schema/zzzz__Parser_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaAttDef_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaElementDecl_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaInfo_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventHandler_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaCollection_def.hpp"
#include "System/Xml/zzzz__HWStack_def.hpp"
#include "System/Xml/zzzz__IValidationEventHandling_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlTokenizedType_def.hpp"
#include "System/Xml/zzzz__XmlValidatingReaderImpl_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XdrValidator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrValidator::*)(::System::Xml::Schema::BaseValidator*)>(&::System::Xml::Schema::XdrValidator::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x622654c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::BaseValidator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrValidator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrValidator::*)(::System::Xml::XmlValidatingReaderImpl*, ::System::Xml::Schema::XmlSchemaCollection*,
                                                                                                     ::System::Xml::IValidationEventHandling*)>(&::System::Xml::Schema::XdrValidator::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6226778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::XmlValidatingReaderImpl*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaCollection*>(),
                                                                 ::i2c::type_of<::System::Xml::IValidationEventHandling*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrValidator.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrValidator::*)()>(&::System::Xml::Schema::XdrValidator::Init)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x62265d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrValidator.Validate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrValidator::*)()>(&::System::Xml::Schema::XdrValidator::Validate)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x62268f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { ::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrValidator.ValidateElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrValidator::*)()>(&::System::Xml::Schema::XdrValidator::ValidateElement)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6226b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "ValidateElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrValidator.ValidateChildElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrValidator::*)()>(&::System::Xml::Schema::XdrValidator::ValidateChildElement)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6226ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "ValidateChildElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrValidator.get_IsInlineSchemaStarted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XdrValidator::*)()>(&::System::Xml::Schema::XdrValidator::get_IsInlineSchemaStarted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62269ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "get_IsInlineSchemaStarted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrValidator.ProcessInlineSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrValidator::*)()>(&::System::Xml::Schema::XdrValidator::ProcessInlineSchema)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x62269bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "ProcessInlineSchema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrValidator.ProcessElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrValidator::*)()>(&::System::Xml::Schema::XdrValidator::ProcessElement)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6227010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "ProcessElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrValidator.ValidateEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrValidator::*)()>(&::System::Xml::Schema::XdrValidator::ValidateEndElement)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6226d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "ValidateEndElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrValidator.ThoroughGetElementDecl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaElementDecl* (::System::Xml::Schema::XdrValidator::*)()>(
    &::System::Xml::Schema::XdrValidator::ThoroughGetElementDecl)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x62270c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "ThoroughGetElementDecl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrValidator.ValidateStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrValidator::*)()>(&::System::Xml::Schema::XdrValidator::ValidateStartElement)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x62273c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "ValidateStartElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrValidator.ValidateEndStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrValidator::*)()>(&::System::Xml::Schema::XdrValidator::ValidateEndStartElement)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x62277a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "ValidateEndStartElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrValidator.LoadSchemaFromLocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrValidator::*)(::StringW)>(&::System::Xml::Schema::XdrValidator::LoadSchemaFromLocation)> {
  constexpr static std::size_t size = 0x5a4;
  constexpr static std::size_t addrs = 0x62283d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "LoadSchemaFromLocation", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrValidator.LoadSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrValidator::*)(::StringW)>(&::System::Xml::Schema::XdrValidator::LoadSchema)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6228194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "LoadSchema", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrValidator.get_HasSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XdrValidator::*)()>(&::System::Xml::Schema::XdrValidator::get_HasSchema)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6228a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "get_HasSchema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrValidator.get_PreserveWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XdrValidator::*)()>(&::System::Xml::Schema::XdrValidator::get_PreserveWhitespace)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6228a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { ::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrValidator.ProcessTokenizedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrValidator::*)(::System::Xml::XmlTokenizedType, ::StringW)>(
    &::System::Xml::Schema::XdrValidator::ProcessTokenizedType)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x6228a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(),
                                                             { "ProcessTokenizedType", {}, { ::i2c::type_of<::System::Xml::XmlTokenizedType>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrValidator.CompleteValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrValidator::*)()>(&::System::Xml::Schema::XdrValidator::CompleteValidation)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6228d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { ::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrValidator.CheckValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrValidator::*)(::StringW, ::System::Xml::Schema::SchemaAttDef*)>(
    &::System::Xml::Schema::XdrValidator::CheckValue)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x6227af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "CheckValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::SchemaAttDef*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrValidator.CheckDefaultValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Xml::Schema::SchemaAttDef*, ::System::Xml::Schema::SchemaInfo*, ::System::Xml::XmlNamespaceManager*,
                                                                ::System::Xml::XmlNameTable*, ::System::Object*, ::System::Xml::Schema::ValidationEventHandler*, ::StringW, int32_t, int32_t)>(
    &::System::Xml::Schema::XdrValidator::CheckDefaultValue)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x62245d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(),
                                         { "CheckDefaultValue",
                                           {},
                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::SchemaAttDef*>(), ::i2c::type_of<::System::Xml::Schema::SchemaInfo*>(),
                                             ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(), ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Object*>(),
                                             ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrValidator.AddID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrValidator::*)(::StringW, ::System::Object*)>(&::System::Xml::Schema::XdrValidator::AddID)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6228c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "AddID", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrValidator.FindId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XdrValidator::*)(::StringW)>(&::System::Xml::Schema::XdrValidator::FindId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6228f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { ::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrValidator.Push
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrValidator::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::XdrValidator::Push)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6226814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "Push", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrValidator.Pop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrValidator::*)()>(&::System::Xml::Schema::XdrValidator::Pop)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x62280f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "Pop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrValidator.CheckForwardRefs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrValidator::*)()>(&::System::Xml::Schema::XdrValidator::CheckForwardRefs)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6228dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "CheckForwardRefs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrValidator.QualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::Schema::XdrValidator::*)(::StringW, ::StringW)>(
    &::System::Xml::Schema::XdrValidator::QualifiedName)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6228330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "QualifiedName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::HWStack*& System::Xml::Schema::XdrValidator::__cordl_internal_get_validationStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationStack;
}
constexpr ::System::Xml::HWStack* const& System::Xml::Schema::XdrValidator::__cordl_internal_get_validationStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationStack;
}
constexpr void System::Xml::Schema::XdrValidator::__cordl_internal_set_validationStack(::System::Xml::HWStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validationStack = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::XdrValidator::__cordl_internal_get_attPresence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attPresence;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::XdrValidator::__cordl_internal_get_attPresence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attPresence;
}
constexpr void System::Xml::Schema::XdrValidator::__cordl_internal_set_attPresence(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attPresence = value;
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::XdrValidator::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::XdrValidator::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Xml::Schema::XdrValidator::__cordl_internal_set_name(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::System::Xml::XmlNamespaceManager*& System::Xml::Schema::XdrValidator::__cordl_internal_get_nsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsManager;
}
constexpr ::System::Xml::XmlNamespaceManager* const& System::Xml::Schema::XdrValidator::__cordl_internal_get_nsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsManager;
}
constexpr void System::Xml::Schema::XdrValidator::__cordl_internal_set_nsManager(::System::Xml::XmlNamespaceManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nsManager = value;
}
constexpr bool& System::Xml::Schema::XdrValidator::__cordl_internal_get_isProcessContents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isProcessContents;
}
constexpr bool const& System::Xml::Schema::XdrValidator::__cordl_internal_get_isProcessContents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isProcessContents;
}
constexpr void System::Xml::Schema::XdrValidator::__cordl_internal_set_isProcessContents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isProcessContents = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::XdrValidator::__cordl_internal_get_IDs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IDs;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::XdrValidator::__cordl_internal_get_IDs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IDs;
}
constexpr void System::Xml::Schema::XdrValidator::__cordl_internal_set_IDs(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IDs = value;
}
constexpr ::System::Xml::Schema::IdRefNode*& System::Xml::Schema::XdrValidator::__cordl_internal_get_idRefListHead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idRefListHead;
}
constexpr ::System::Xml::Schema::IdRefNode* const& System::Xml::Schema::XdrValidator::__cordl_internal_get_idRefListHead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idRefListHead;
}
constexpr void System::Xml::Schema::XdrValidator::__cordl_internal_set_idRefListHead(::System::Xml::Schema::IdRefNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___idRefListHead = value;
}
constexpr ::System::Xml::Schema::Parser*& System::Xml::Schema::XdrValidator::__cordl_internal_get_inlineSchemaParser() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inlineSchemaParser;
}
constexpr ::System::Xml::Schema::Parser* const& System::Xml::Schema::XdrValidator::__cordl_internal_get_inlineSchemaParser() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inlineSchemaParser;
}
constexpr void System::Xml::Schema::XdrValidator::__cordl_internal_set_inlineSchemaParser(::System::Xml::Schema::Parser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inlineSchemaParser = value;
}
inline void System::Xml::Schema::XdrValidator::_ctor(::System::Xml::Schema::BaseValidator* validator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::BaseValidator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, validator);
}
inline void System::Xml::Schema::XdrValidator::_ctor(::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::Schema::XmlSchemaCollection* schemaCollection,
                                                     ::System::Xml::IValidationEventHandling* eventHandling) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::XmlValidatingReaderImpl*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaCollection*>(),
                                                               ::i2c::type_of<::System::Xml::IValidationEventHandling*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, schemaCollection, eventHandling);
}
inline void System::Xml::Schema::XdrValidator::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XdrValidator::Validate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XdrValidator::ValidateElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "ValidateElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XdrValidator::ValidateChildElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "ValidateChildElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::Schema::XdrValidator::get_IsInlineSchemaStarted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "get_IsInlineSchemaStarted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::XdrValidator::ProcessInlineSchema() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "ProcessInlineSchema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XdrValidator::ProcessElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "ProcessElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XdrValidator::ValidateEndElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "ValidateEndElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::SchemaElementDecl* System::Xml::Schema::XdrValidator::ThoroughGetElementDecl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "ThoroughGetElementDecl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaElementDecl*>(this, ___internal_method);
}
inline void System::Xml::Schema::XdrValidator::ValidateStartElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "ValidateStartElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XdrValidator::ValidateEndStartElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "ValidateEndStartElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XdrValidator::LoadSchemaFromLocation(::StringW uri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "LoadSchemaFromLocation", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri);
}
inline void System::Xml::Schema::XdrValidator::LoadSchema(::StringW uri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "LoadSchema", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri);
}
inline bool System::Xml::Schema::XdrValidator::get_HasSchema() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "get_HasSchema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::Schema::XdrValidator::get_PreserveWhitespace() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::XdrValidator::ProcessTokenizedType(::System::Xml::XmlTokenizedType ttype, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(),
                                                           { "ProcessTokenizedType", {}, { ::i2c::type_of<::System::Xml::XmlTokenizedType>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ttype, name);
}
inline void System::Xml::Schema::XdrValidator::CompleteValidation() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XdrValidator::CheckValue(::StringW value, ::System::Xml::Schema::SchemaAttDef* attdef) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "CheckValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::SchemaAttDef*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, attdef);
}
inline void System::Xml::Schema::XdrValidator::CheckDefaultValue(::StringW value, ::System::Xml::Schema::SchemaAttDef* attdef, ::System::Xml::Schema::SchemaInfo* sinfo,
                                                                 ::System::Xml::XmlNamespaceManager* nsManager, ::System::Xml::XmlNameTable* NameTable, ::System::Object* sender,
                                                                 ::System::Xml::Schema::ValidationEventHandler* eventhandler, ::StringW baseUri, int32_t lineNo, int32_t linePos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(),
                                       { "CheckDefaultValue",
                                         {},
                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::SchemaAttDef*>(), ::i2c::type_of<::System::Xml::Schema::SchemaInfo*>(),
                                           ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(), ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Object*>(),
                                           ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, attdef, sinfo, nsManager, NameTable, sender, eventhandler, baseUri, lineNo, linePos);
}
inline void System::Xml::Schema::XdrValidator::AddID(::StringW name, ::System::Object* node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "AddID", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, node);
}
inline ::System::Object* System::Xml::Schema::XdrValidator::FindId(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name);
}
inline void System::Xml::Schema::XdrValidator::Push(::System::Xml::XmlQualifiedName* elementName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "Push", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementName);
}
inline void System::Xml::Schema::XdrValidator::Pop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "Pop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XdrValidator::CheckForwardRefs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "CheckForwardRefs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XdrValidator::QualifiedName(::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrValidator*>(), { "QualifiedName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(this, ___internal_method, name, ns);
}
inline ::System::Xml::Schema::XdrValidator* System::Xml::Schema::XdrValidator::New_ctor(::System::Xml::Schema::BaseValidator* validator) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XdrValidator*>(validator));
}
inline ::System::Xml::Schema::XdrValidator* System::Xml::Schema::XdrValidator::New_ctor(::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::Schema::XmlSchemaCollection* schemaCollection,
                                                                                        ::System::Xml::IValidationEventHandling* eventHandling) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XdrValidator*>(reader, schemaCollection, eventHandling));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XdrValidator::XdrValidator() {}
