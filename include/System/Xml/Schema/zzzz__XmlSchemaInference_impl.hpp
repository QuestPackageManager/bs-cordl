#pragma once
// IWYU pragma private; include "System\Xml\Schema\XmlSchemaInference.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaInference_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAttribute_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaComplexType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaElement_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaInference_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectCollection_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectTable_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleContentExtension_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/zzzz__NameTable_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XmlSchemaInference_InferenceOption::XmlSchemaInference_InferenceOption(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaInference_InferenceOption::XmlSchemaInference_InferenceOption() {}
constexpr ::System::Xml::Schema::XmlSchemaInference_InferenceOption System::Xml::Schema::XmlSchemaInference_InferenceOption::Restricted{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::Schema::XmlSchemaInference_InferenceOption System::Xml::Schema::XmlSchemaInference_InferenceOption::Relaxed{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.set_Occurrence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaInference::*)(::System::Xml::Schema::XmlSchemaInference_InferenceOption)>(
    &::System::Xml::Schema::XmlSchemaInference::set_Occurrence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61d4e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                                                                           { "set_Occurrence", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaInference_InferenceOption>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.get_Occurrence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaInference_InferenceOption (::System::Xml::Schema::XmlSchemaInference::*)()>(
    &::System::Xml::Schema::XmlSchemaInference::get_Occurrence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61d4e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(), { "get_Occurrence", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.set_TypeInference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaInference::*)(::System::Xml::Schema::XmlSchemaInference_InferenceOption)>(
    &::System::Xml::Schema::XmlSchemaInference::set_TypeInference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61d4e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                                             { "set_TypeInference", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaInference_InferenceOption>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaInference::*)()>(&::System::Xml::Schema::XmlSchemaInference::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x61d4e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.InferSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaSet* (::System::Xml::Schema::XmlSchemaInference::*)(::System::Xml::XmlReader*)>(
    &::System::Xml::Schema::XmlSchemaInference::InferSchema)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x61d4fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(), { "InferSchema", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.InferSchema1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaSet* (
    ::System::Xml::Schema::XmlSchemaInference::*)(::System::Xml::XmlReader*, ::System::Xml::Schema::XmlSchemaSet*)>(&::System::Xml::Schema::XmlSchemaInference::InferSchema1)> {
  constexpr static std::size_t size = 0x970;
  constexpr static std::size_t addrs = 0x61d5018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                                             { "InferSchema1", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.AddAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaAttribute* (
    ::System::Xml::Schema::XmlSchemaInference::*)(::StringW, ::StringW, ::StringW, ::StringW, bool, ::System::Xml::Schema::XmlSchema*, ::System::Xml::Schema::XmlSchemaObjectCollection*,
                                                  ::System::Xml::Schema::XmlSchemaObjectTable*)>(&::System::Xml::Schema::XmlSchemaInference::AddAttribute)> {
  constexpr static std::size_t size = 0x7f0;
  constexpr static std::size_t addrs = 0x61d7340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                                { "AddAttribute",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(),
                                                    ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>(),
                                                    ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.CreateXmlSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Xml::Schema::XmlSchemaInference::*)(::StringW)>(
    &::System::Xml::Schema::XmlSchemaInference::CreateXmlSchema)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x61d9aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(), { "CreateXmlSchema", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.AddElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaElement* (
    ::System::Xml::Schema::XmlSchemaInference::*)(::StringW, ::StringW, ::StringW, ::System::Xml::Schema::XmlSchema*, ::System::Xml::Schema::XmlSchemaObjectCollection*, int32_t)>(
    &::System::Xml::Schema::XmlSchemaInference::AddElement)> {
  constexpr static std::size_t size = 0x5b8;
  constexpr static std::size_t addrs = 0x61d59dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                                { "AddElement",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(),
                                                    ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.InferElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaInference::*)(::System::Xml::Schema::XmlSchemaElement*, bool, ::System::Xml::Schema::XmlSchema*)>(
    &::System::Xml::Schema::XmlSchemaInference::InferElement)> {
  constexpr static std::size_t size = 0x13ac;
  constexpr static std::size_t addrs = 0x61d5f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                            { "InferElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.CheckSimpleContentExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaSimpleContentExtension* (
    ::System::Xml::Schema::XmlSchemaInference::*)(::System::Xml::Schema::XmlSchemaComplexType*)>(&::System::Xml::Schema::XmlSchemaInference::CheckSimpleContentExtension)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x61da760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                                                                           { "CheckSimpleContentExtension", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.GetEffectiveSchemaType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaType* (::System::Xml::Schema::XmlSchemaInference::*)(::System::Xml::Schema::XmlSchemaElement*, bool)>(
    &::System::Xml::Schema::XmlSchemaInference::GetEffectiveSchemaType)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x61d9ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                                             { "GetEffectiveSchemaType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.FindMatchingElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaElement* (
    ::System::Xml::Schema::XmlSchemaInference::*)(bool, ::System::Xml::XmlReader*, ::System::Xml::Schema::XmlSchemaComplexType*, ::by_ref<int32_t>, ::by_ref<bool>, ::System::Xml::Schema::XmlSchema*,
                                                  bool)>(&::System::Xml::Schema::XmlSchemaInference::FindMatchingElement)> {
  constexpr static std::size_t size = 0xf5c;
  constexpr static std::size_t addrs = 0x61dad14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                         { "FindMatchingElement",
                                           {},
                                           { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(),
                                             ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.ProcessAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaInference::*)(::by_ref<::System::Xml::Schema::XmlSchemaElement*>, ::System::Xml::Schema::XmlSchemaType*,
                                                                                                           bool, ::System::Xml::Schema::XmlSchema*)>(
    &::System::Xml::Schema::XmlSchemaInference::ProcessAttributes)> {
  constexpr static std::size_t size = 0x6f4;
  constexpr static std::size_t addrs = 0x61d9fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                                             { "ProcessAttributes",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::System::Xml::Schema::XmlSchemaElement*>>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.MoveAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaInference::*)(
    ::System::Xml::Schema::XmlSchemaSimpleContentExtension*, ::System::Xml::Schema::XmlSchemaComplexType*)>(&::System::Xml::Schema::XmlSchemaInference::MoveAttributes)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x61dac68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                            { "MoveAttributes", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleContentExtension*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.MoveAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaInference::*)(
    ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaSimpleContentExtension*, bool)>(&::System::Xml::Schema::XmlSchemaInference::MoveAttributes)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x61da8a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                                                                           { "MoveAttributes",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(),
                                                                                               ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleContentExtension*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.FindAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaAttribute* (::System::Xml::Schema::XmlSchemaInference::*)(::System::Collections::ICollection*, ::StringW)>(
    &::System::Xml::Schema::XmlSchemaInference::FindAttribute)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x61d7ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                                             { "FindAttribute", {}, { ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.FindGlobalElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaElement* (
    ::System::Xml::Schema::XmlSchemaInference::*)(::StringW, ::StringW, ::by_ref<::System::Xml::Schema::XmlSchema*>)>(&::System::Xml::Schema::XmlSchemaInference::FindGlobalElement)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x61d9b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                         { "FindGlobalElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Xml::Schema::XmlSchema*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.FindElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaElement* (
    ::System::Xml::Schema::XmlSchemaInference::*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::StringW)>(&::System::Xml::Schema::XmlSchemaInference::FindElement)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x61dbdcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                                             { "FindElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.FindAttributeRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaAttribute* (
    ::System::Xml::Schema::XmlSchemaInference::*)(::System::Collections::ICollection*, ::StringW, ::StringW)>(&::System::Xml::Schema::XmlSchemaInference::FindAttributeRef)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x61d7b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                                { "FindAttributeRef", {}, { ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.FindElementRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaElement* (
    ::System::Xml::Schema::XmlSchemaInference::*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::StringW, ::StringW)>(&::System::Xml::Schema::XmlSchemaInference::FindElementRef)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x61dbf00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                         { "FindElementRef", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.MakeExistingAttributesOptional
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaInference::*)(
    ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaObjectCollection*)>(&::System::Xml::Schema::XmlSchemaInference::MakeExistingAttributesOptional)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x61da6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
            { "MakeExistingAttributesOptional", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.SwitchUseToOptional
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaInference::*)(
    ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::Schema::XmlSchemaObjectCollection*)>(&::System::Xml::Schema::XmlSchemaInference::SwitchUseToOptional)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x61dc2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                         { "SwitchUseToOptional", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.RefineSimpleType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::Schema::XmlSchemaInference::*)(::StringW, ::by_ref<int32_t>)>(
    &::System::Xml::Schema::XmlSchemaInference::RefineSimpleType)> {
  constexpr static std::size_t size = 0x10a8;
  constexpr static std::size_t addrs = 0x61d823c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                                                                           { "RefineSimpleType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.InferSimpleType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::by_ref<bool>)>(&::System::Xml::Schema::XmlSchemaInference::InferSimpleType)> {
  constexpr static std::size_t size = 0xf00;
  constexpr static std::size_t addrs = 0x61dc3f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(), { "InferSimpleType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.DateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, bool, bool)>(&::System::Xml::Schema::XmlSchemaInference::DateTime)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x61dd2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                                                                           { "DateTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.CreateNewElementforChoice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaElement* (::System::Xml::Schema::XmlSchemaInference::*)(::System::Xml::Schema::XmlSchemaElement*)>(
    &::System::Xml::Schema::XmlSchemaInference::CreateNewElementforChoice)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x61dc060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                                                                           { "CreateNewElementforChoice", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.GetSchemaType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::XmlSchemaInference::GetSchemaType)> {
  constexpr static std::size_t size = 0x7c8;
  constexpr static std::size_t addrs = 0x61d92e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(), { "GetSchemaType", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.SetMinMaxOccurs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaInference::*)(::System::Xml::Schema::XmlSchemaElement*, bool)>(
    &::System::Xml::Schema::XmlSchemaInference::SetMinMaxOccurs)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x61dbc70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                                             { "SetMinMaxOccurs", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchema*& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_rootSchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootSchema;
}
constexpr ::System::Xml::Schema::XmlSchema* const& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_rootSchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootSchema;
}
constexpr void System::Xml::Schema::XmlSchemaInference::__cordl_internal_set_rootSchema(::System::Xml::Schema::XmlSchema* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rootSchema = value;
}
constexpr ::System::Xml::Schema::XmlSchemaSet*& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_schemaSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaSet;
}
constexpr ::System::Xml::Schema::XmlSchemaSet* const& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_schemaSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaSet;
}
constexpr void System::Xml::Schema::XmlSchemaInference::__cordl_internal_set_schemaSet(::System::Xml::Schema::XmlSchemaSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemaSet = value;
}
constexpr ::System::Xml::XmlReader*& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_xtr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xtr;
}
constexpr ::System::Xml::XmlReader* const& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_xtr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xtr;
}
constexpr void System::Xml::Schema::XmlSchemaInference::__cordl_internal_set_xtr(::System::Xml::XmlReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xtr = value;
}
constexpr ::System::Xml::NameTable*& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_nametable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nametable;
}
constexpr ::System::Xml::NameTable* const& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_nametable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nametable;
}
constexpr void System::Xml::Schema::XmlSchemaInference::__cordl_internal_set_nametable(::System::Xml::NameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nametable = value;
}
constexpr ::StringW& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_TargetNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TargetNamespace;
}
constexpr ::StringW const& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_TargetNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TargetNamespace;
}
constexpr void System::Xml::Schema::XmlSchemaInference::__cordl_internal_set_TargetNamespace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TargetNamespace = value;
}
constexpr ::System::Xml::XmlNamespaceManager*& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_NamespaceManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NamespaceManager;
}
constexpr ::System::Xml::XmlNamespaceManager* const& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_NamespaceManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NamespaceManager;
}
constexpr void System::Xml::Schema::XmlSchemaInference::__cordl_internal_set_NamespaceManager(::System::Xml::XmlNamespaceManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NamespaceManager = value;
}
constexpr ::System::Collections::ArrayList*& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_schemaList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaList;
}
constexpr ::System::Collections::ArrayList* const& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_schemaList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaList;
}
constexpr void System::Xml::Schema::XmlSchemaInference::__cordl_internal_set_schemaList(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemaList = value;
}
constexpr ::System::Xml::Schema::XmlSchemaInference_InferenceOption& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_occurrence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occurrence;
}
constexpr ::System::Xml::Schema::XmlSchemaInference_InferenceOption const& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_occurrence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occurrence;
}
constexpr void System::Xml::Schema::XmlSchemaInference::__cordl_internal_set_occurrence(::System::Xml::Schema::XmlSchemaInference_InferenceOption value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___occurrence = value;
}
constexpr ::System::Xml::Schema::XmlSchemaInference_InferenceOption& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_typeInference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeInference;
}
constexpr ::System::Xml::Schema::XmlSchemaInference_InferenceOption const& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_typeInference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeInference;
}
constexpr void System::Xml::Schema::XmlSchemaInference::__cordl_internal_set_typeInference(::System::Xml::Schema::XmlSchemaInference_InferenceOption value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___typeInference = value;
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_boolean(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_boolean", ::System::Xml::Schema::XmlSchemaInference*>(std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_boolean() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_boolean", ::System::Xml::Schema::XmlSchemaInference*>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_byte(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_byte", ::System::Xml::Schema::XmlSchemaInference*>(std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_byte() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_byte", ::System::Xml::Schema::XmlSchemaInference*>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_unsignedByte(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_unsignedByte", ::System::Xml::Schema::XmlSchemaInference*>(std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_unsignedByte() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_unsignedByte", ::System::Xml::Schema::XmlSchemaInference*>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_short(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_short", ::System::Xml::Schema::XmlSchemaInference*>(std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_short() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_short", ::System::Xml::Schema::XmlSchemaInference*>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_unsignedShort(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_unsignedShort", ::System::Xml::Schema::XmlSchemaInference*>(std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_unsignedShort() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_unsignedShort", ::System::Xml::Schema::XmlSchemaInference*>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_int(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_int", ::System::Xml::Schema::XmlSchemaInference*>(std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_int() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_int", ::System::Xml::Schema::XmlSchemaInference*>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_unsignedInt(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_unsignedInt", ::System::Xml::Schema::XmlSchemaInference*>(std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_unsignedInt() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_unsignedInt", ::System::Xml::Schema::XmlSchemaInference*>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_long(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_long", ::System::Xml::Schema::XmlSchemaInference*>(std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_long() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_long", ::System::Xml::Schema::XmlSchemaInference*>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_unsignedLong(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_unsignedLong", ::System::Xml::Schema::XmlSchemaInference*>(std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_unsignedLong() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_unsignedLong", ::System::Xml::Schema::XmlSchemaInference*>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_integer(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_integer", ::System::Xml::Schema::XmlSchemaInference*>(std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_integer() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_integer", ::System::Xml::Schema::XmlSchemaInference*>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_decimal(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_decimal", ::System::Xml::Schema::XmlSchemaInference*>(std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_decimal() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_decimal", ::System::Xml::Schema::XmlSchemaInference*>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_float(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_float", ::System::Xml::Schema::XmlSchemaInference*>(std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_float() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_float", ::System::Xml::Schema::XmlSchemaInference*>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_double(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_double", ::System::Xml::Schema::XmlSchemaInference*>(std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_double() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_double", ::System::Xml::Schema::XmlSchemaInference*>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_duration(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_duration", ::System::Xml::Schema::XmlSchemaInference*>(std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_duration() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_duration", ::System::Xml::Schema::XmlSchemaInference*>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_dateTime(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_dateTime", ::System::Xml::Schema::XmlSchemaInference*>(std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_dateTime() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_dateTime", ::System::Xml::Schema::XmlSchemaInference*>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_time(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_time", ::System::Xml::Schema::XmlSchemaInference*>(std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_time() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_time", ::System::Xml::Schema::XmlSchemaInference*>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_date(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_date", ::System::Xml::Schema::XmlSchemaInference*>(std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_date() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_date", ::System::Xml::Schema::XmlSchemaInference*>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_gYearMonth(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_gYearMonth", ::System::Xml::Schema::XmlSchemaInference*>(std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_gYearMonth() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_gYearMonth", ::System::Xml::Schema::XmlSchemaInference*>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_string(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_string", ::System::Xml::Schema::XmlSchemaInference*>(std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_string() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_string", ::System::Xml::Schema::XmlSchemaInference*>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_anySimpleType(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_anySimpleType", ::System::Xml::Schema::XmlSchemaInference*>(std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_anySimpleType() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_anySimpleType", ::System::Xml::Schema::XmlSchemaInference*>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_SimpleTypes(::ArrayW<::System::Xml::XmlQualifiedName*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::XmlQualifiedName*>, "SimpleTypes", ::System::Xml::Schema::XmlSchemaInference*>(
      std::forward<::ArrayW<::System::Xml::XmlQualifiedName*>>(value));
}
inline ::ArrayW<::System::Xml::XmlQualifiedName*> System::Xml::Schema::XmlSchemaInference::getStaticF_SimpleTypes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::XmlQualifiedName*>, "SimpleTypes", ::System::Xml::Schema::XmlSchemaInference*>();
}
inline void System::Xml::Schema::XmlSchemaInference::set_Occurrence(::System::Xml::Schema::XmlSchemaInference_InferenceOption value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                                                                         { "set_Occurrence", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaInference_InferenceOption>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaInference_InferenceOption System::Xml::Schema::XmlSchemaInference::get_Occurrence() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(), { "get_Occurrence", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaInference_InferenceOption>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaInference::set_TypeInference(::System::Xml::Schema::XmlSchemaInference_InferenceOption value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                                           { "set_TypeInference", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaInference_InferenceOption>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaInference::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaSet* System::Xml::Schema::XmlSchemaInference::InferSchema(::System::Xml::XmlReader* instanceDocument) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(), { "InferSchema", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaSet*>(this, ___internal_method, instanceDocument);
}
inline ::System::Xml::Schema::XmlSchemaSet* System::Xml::Schema::XmlSchemaInference::InferSchema1(::System::Xml::XmlReader* instanceDocument, ::System::Xml::Schema::XmlSchemaSet* schemas) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                                           { "InferSchema1", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaSet*>(this, ___internal_method, instanceDocument, schemas);
}
inline ::System::Xml::Schema::XmlSchemaAttribute* System::Xml::Schema::XmlSchemaInference::AddAttribute(::StringW localName, ::StringW prefix, ::StringW childURI, ::StringW attrValue,
                                                                                                        bool bCreatingNewType, ::System::Xml::Schema::XmlSchema* parentSchema,
                                                                                                        ::System::Xml::Schema::XmlSchemaObjectCollection* addLocation,
                                                                                                        ::System::Xml::Schema::XmlSchemaObjectTable* compiledAttributes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                              { "AddAttribute",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(),
                                                  ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>(),
                                                  ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaAttribute*>(this, ___internal_method, localName, prefix, childURI, attrValue, bCreatingNewType, parentSchema, addLocation,
                                                                                         compiledAttributes);
}
inline ::System::Xml::Schema::XmlSchema* System::Xml::Schema::XmlSchemaInference::CreateXmlSchema(::StringW targetNS) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(), { "CreateXmlSchema", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(this, ___internal_method, targetNS);
}
inline ::System::Xml::Schema::XmlSchemaElement* System::Xml::Schema::XmlSchemaInference::AddElement(::StringW localName, ::StringW prefix, ::StringW childURI,
                                                                                                    ::System::Xml::Schema::XmlSchema* parentSchema,
                                                                                                    ::System::Xml::Schema::XmlSchemaObjectCollection* addLocation, int32_t positionWithinCollection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                              { "AddElement",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(),
                                                  ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaElement*>(this, ___internal_method, localName, prefix, childURI, parentSchema, addLocation, positionWithinCollection);
}
inline void System::Xml::Schema::XmlSchemaInference::InferElement(::System::Xml::Schema::XmlSchemaElement* xse, bool bCreatingNewType, ::System::Xml::Schema::XmlSchema* parentSchema) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                          { "InferElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xse, bCreatingNewType, parentSchema);
}
inline ::System::Xml::Schema::XmlSchemaSimpleContentExtension* System::Xml::Schema::XmlSchemaInference::CheckSimpleContentExtension(::System::Xml::Schema::XmlSchemaComplexType* ct) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                                                                         { "CheckSimpleContentExtension", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaSimpleContentExtension*>(this, ___internal_method, ct);
}
inline ::System::Xml::Schema::XmlSchemaType* System::Xml::Schema::XmlSchemaInference::GetEffectiveSchemaType(::System::Xml::Schema::XmlSchemaElement* elem, bool bCreatingNewType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                                           { "GetEffectiveSchemaType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaType*>(this, ___internal_method, elem, bCreatingNewType);
}
inline ::System::Xml::Schema::XmlSchemaElement* System::Xml::Schema::XmlSchemaInference::FindMatchingElement(bool bCreatingNewType, ::System::Xml::XmlReader* xtr,
                                                                                                             ::System::Xml::Schema::XmlSchemaComplexType* ct, ::by_ref<int32_t> lastUsedSeqItem,
                                                                                                             ::by_ref<bool> bParticleChanged, ::System::Xml::Schema::XmlSchema* parentSchema,
                                                                                                             bool setMaxoccurs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                       { "FindMatchingElement",
                                         {},
                                         { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(),
                                           ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaElement*>(this, ___internal_method, bCreatingNewType, xtr, ct, lastUsedSeqItem, bParticleChanged, parentSchema,
                                                                                       setMaxoccurs);
}
inline void System::Xml::Schema::XmlSchemaInference::ProcessAttributes(::by_ref<::System::Xml::Schema::XmlSchemaElement*> xse, ::System::Xml::Schema::XmlSchemaType* effectiveSchemaType,
                                                                       bool bCreatingNewType, ::System::Xml::Schema::XmlSchema* parentSchema) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                                           { "ProcessAttributes",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::System::Xml::Schema::XmlSchemaElement*>>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xse, effectiveSchemaType, bCreatingNewType, parentSchema);
}
inline void System::Xml::Schema::XmlSchemaInference::MoveAttributes(::System::Xml::Schema::XmlSchemaSimpleContentExtension* scExtension, ::System::Xml::Schema::XmlSchemaComplexType* ct) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                          { "MoveAttributes", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleContentExtension*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scExtension, ct);
}
inline void System::Xml::Schema::XmlSchemaInference::MoveAttributes(::System::Xml::Schema::XmlSchemaComplexType* ct, ::System::Xml::Schema::XmlSchemaSimpleContentExtension* simpleContentExtension,
                                                                    bool bCreatingNewType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                          { "MoveAttributes",
                            {},
                            { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleContentExtension*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ct, simpleContentExtension, bCreatingNewType);
}
inline ::System::Xml::Schema::XmlSchemaAttribute* System::Xml::Schema::XmlSchemaInference::FindAttribute(::System::Collections::ICollection* attributes, ::StringW attrName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                                           { "FindAttribute", {}, { ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaAttribute*>(this, ___internal_method, attributes, attrName);
}
inline ::System::Xml::Schema::XmlSchemaElement* System::Xml::Schema::XmlSchemaInference::FindGlobalElement(::StringW namespaceURI, ::StringW localName,
                                                                                                           ::by_ref<::System::Xml::Schema::XmlSchema*> parentSchema) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                       { "FindGlobalElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Xml::Schema::XmlSchema*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaElement*>(this, ___internal_method, namespaceURI, localName, parentSchema);
}
inline ::System::Xml::Schema::XmlSchemaElement* System::Xml::Schema::XmlSchemaInference::FindElement(::System::Xml::Schema::XmlSchemaObjectCollection* elements, ::StringW elementName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                                           { "FindElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaElement*>(this, ___internal_method, elements, elementName);
}
inline ::System::Xml::Schema::XmlSchemaAttribute* System::Xml::Schema::XmlSchemaInference::FindAttributeRef(::System::Collections::ICollection* attributes, ::StringW attributeName, ::StringW nsURI) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                              { "FindAttributeRef", {}, { ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaAttribute*>(this, ___internal_method, attributes, attributeName, nsURI);
}
inline ::System::Xml::Schema::XmlSchemaElement* System::Xml::Schema::XmlSchemaInference::FindElementRef(::System::Xml::Schema::XmlSchemaObjectCollection* elements, ::StringW elementName,
                                                                                                        ::StringW nsURI) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                       { "FindElementRef", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaElement*>(this, ___internal_method, elements, elementName, nsURI);
}
inline void System::Xml::Schema::XmlSchemaInference::MakeExistingAttributesOptional(::System::Xml::Schema::XmlSchemaComplexType* ct,
                                                                                    ::System::Xml::Schema::XmlSchemaObjectCollection* attributesInInstance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
          { "MakeExistingAttributesOptional", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ct, attributesInInstance);
}
inline void System::Xml::Schema::XmlSchemaInference::SwitchUseToOptional(::System::Xml::Schema::XmlSchemaObjectCollection* attributes,
                                                                         ::System::Xml::Schema::XmlSchemaObjectCollection* attributesInInstance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                       { "SwitchUseToOptional", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributes, attributesInInstance);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::RefineSimpleType(::StringW s, ::by_ref<int32_t> iTypeFlags) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                                                                         { "RefineSimpleType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(this, ___internal_method, s, iTypeFlags);
}
inline int32_t System::Xml::Schema::XmlSchemaInference::InferSimpleType(::StringW s, ::by_ref<bool> bNeedsRangeCheck) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(), { "InferSimpleType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s, bNeedsRangeCheck);
}
inline int32_t System::Xml::Schema::XmlSchemaInference::DateTime(::StringW s, bool bDate, bool bTime) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                                                                         { "DateTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s, bDate, bTime);
}
inline ::System::Xml::Schema::XmlSchemaElement* System::Xml::Schema::XmlSchemaInference::CreateNewElementforChoice(::System::Xml::Schema::XmlSchemaElement* copyElement) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                                                                         { "CreateNewElementforChoice", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaElement*>(this, ___internal_method, copyElement);
}
inline int32_t System::Xml::Schema::XmlSchemaInference::GetSchemaType(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(), { "GetSchemaType", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, qname);
}
inline void System::Xml::Schema::XmlSchemaInference::SetMinMaxOccurs(::System::Xml::Schema::XmlSchemaElement* el, bool setMaxOccurs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaInference*>(),
                                                           { "SetMinMaxOccurs", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, el, setMaxOccurs);
}
inline ::System::Xml::Schema::XmlSchemaInference* System::Xml::Schema::XmlSchemaInference::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaInference*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaInference::XmlSchemaInference() {}
