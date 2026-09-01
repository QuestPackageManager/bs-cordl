#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\SchemaExporter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__SchemaExporter_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotation_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaComplexType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlElement_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::SchemaExporter.ExportActualType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlElement* (*)(::System::Xml::XmlQualifiedName*, ::System::Xml::XmlDocument*)>(
    &::System::Runtime::Serialization::SchemaExporter::ExportActualType)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x615f23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SchemaExporter*>(),
                                                             { "ExportActualType", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Xml::XmlDocument*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SchemaExporter.GetXmlTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::by_ref<::System::Xml::XmlQualifiedName*>, ::by_ref<::System::Xml::Schema::XmlSchemaType*>, ::by_ref<bool>)>(
    &::System::Runtime::Serialization::SchemaExporter::GetXmlTypeInfo)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x615f464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SchemaExporter*>(),
                                                             { "GetXmlTypeInfo",
                                                               {},
                                                               { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Xml::XmlQualifiedName*>>(),
                                                                 ::i2c::type_of<::by_ref<::System::Xml::Schema::XmlSchemaType*>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SchemaExporter.InvokeSchemaProviderMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::System::Type*, ::System::Xml::Schema::XmlSchemaSet*, ::by_ref<::System::Xml::XmlQualifiedName*>, ::by_ref<::System::Xml::Schema::XmlSchemaType*>, ::by_ref<bool>)>(
        &::System::Runtime::Serialization::SchemaExporter::InvokeSchemaProviderMethod)> {
  constexpr static std::size_t size = 0xc58;
  constexpr static std::size_t addrs = 0x615f7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SchemaExporter*>(),
                                         { "InvokeSchemaProviderMethod",
                                           {},
                                           { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>(), ::i2c::type_of<::by_ref<::System::Xml::XmlQualifiedName*>>(),
                                             ::i2c::type_of<::by_ref<::System::Xml::Schema::XmlSchemaType*>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SchemaExporter.CreateAnyType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaComplexType* (*)()>(&::System::Runtime::Serialization::SchemaExporter::CreateAnyType)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6160658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SchemaExporter*>(), { "CreateAnyType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SchemaExporter.CreateAnyElementType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaComplexType* (*)()>(&::System::Runtime::Serialization::SchemaExporter::CreateAnyElementType)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x61603fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SchemaExporter*>(), { "CreateAnyElementType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SchemaExporter.IsSpecialXmlType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::by_ref<::System::Xml::XmlQualifiedName*>, ::by_ref<::System::Xml::Schema::XmlSchemaType*>, ::by_ref<bool>)>(
    &::System::Runtime::Serialization::SchemaExporter::IsSpecialXmlType)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x615f5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SchemaExporter*>(),
                                                             { "IsSpecialXmlType",
                                                               {},
                                                               { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Xml::XmlQualifiedName*>>(),
                                                                 ::i2c::type_of<::by_ref<::System::Xml::Schema::XmlSchemaType*>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SchemaExporter.GetSchemaAnnotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaAnnotation* (*)(::ArrayW<::System::Xml::XmlNode*>)>(
    &::System::Runtime::Serialization::SchemaExporter::GetSchemaAnnotation)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6160578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SchemaExporter*>(),
                                                                                           { "GetSchemaAnnotation", {}, { ::i2c::type_of<::ArrayW<::System::Xml::XmlNode*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SchemaExporter.get_ActualTypeAnnotationName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (*)()>(&::System::Runtime::Serialization::SchemaExporter::get_ActualTypeAnnotationName)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x615f380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SchemaExporter*>(), { "get_ActualTypeAnnotationName", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::SchemaExporter::setStaticF_actualTypeAnnotationName(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "actualTypeAnnotationName", ::System::Runtime::Serialization::SchemaExporter*>(
      std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Runtime::Serialization::SchemaExporter::getStaticF_actualTypeAnnotationName() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "actualTypeAnnotationName", ::System::Runtime::Serialization::SchemaExporter*>();
}
inline ::System::Xml::XmlElement* System::Runtime::Serialization::SchemaExporter::ExportActualType(::System::Xml::XmlQualifiedName* typeName, ::System::Xml::XmlDocument* xmlDoc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SchemaExporter*>(),
                                                           { "ExportActualType", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Xml::XmlDocument*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlElement*>(nullptr, ___internal_method, typeName, xmlDoc);
}
inline void System::Runtime::Serialization::SchemaExporter::GetXmlTypeInfo(::System::Type* type, ::by_ref<::System::Xml::XmlQualifiedName*> stableName,
                                                                           ::by_ref<::System::Xml::Schema::XmlSchemaType*> xsdType, ::by_ref<bool> hasRoot) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SchemaExporter*>(),
                                                                                         { "GetXmlTypeInfo",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Xml::XmlQualifiedName*>>(),
                                                                                             ::i2c::type_of<::by_ref<::System::Xml::Schema::XmlSchemaType*>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, stableName, xsdType, hasRoot);
}
inline bool System::Runtime::Serialization::SchemaExporter::InvokeSchemaProviderMethod(::System::Type* clrType, ::System::Xml::Schema::XmlSchemaSet* schemas,
                                                                                       ::by_ref<::System::Xml::XmlQualifiedName*> stableName, ::by_ref<::System::Xml::Schema::XmlSchemaType*> xsdType,
                                                                                       ::by_ref<bool> hasRoot) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SchemaExporter*>(),
                                       { "InvokeSchemaProviderMethod",
                                         {},
                                         { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>(), ::i2c::type_of<::by_ref<::System::Xml::XmlQualifiedName*>>(),
                                           ::i2c::type_of<::by_ref<::System::Xml::Schema::XmlSchemaType*>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clrType, schemas, stableName, xsdType, hasRoot);
}
inline ::System::Xml::Schema::XmlSchemaComplexType* System::Runtime::Serialization::SchemaExporter::CreateAnyType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SchemaExporter*>(), { "CreateAnyType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaComplexType*>(nullptr, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaComplexType* System::Runtime::Serialization::SchemaExporter::CreateAnyElementType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SchemaExporter*>(), { "CreateAnyElementType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaComplexType*>(nullptr, ___internal_method);
}
inline bool System::Runtime::Serialization::SchemaExporter::IsSpecialXmlType(::System::Type* type, ::by_ref<::System::Xml::XmlQualifiedName*> typeName,
                                                                             ::by_ref<::System::Xml::Schema::XmlSchemaType*> xsdType, ::by_ref<bool> hasRoot) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SchemaExporter*>(),
                                                                                         { "IsSpecialXmlType",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Xml::XmlQualifiedName*>>(),
                                                                                             ::i2c::type_of<::by_ref<::System::Xml::Schema::XmlSchemaType*>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, typeName, xsdType, hasRoot);
}
inline ::System::Xml::Schema::XmlSchemaAnnotation* System::Runtime::Serialization::SchemaExporter::GetSchemaAnnotation(::ArrayW<::System::Xml::XmlNode*> nodes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SchemaExporter*>(), { "GetSchemaAnnotation", {}, { ::i2c::type_of<::ArrayW<::System::Xml::XmlNode*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaAnnotation*>(nullptr, ___internal_method, nodes);
}
inline ::System::Xml::XmlQualifiedName* System::Runtime::Serialization::SchemaExporter::get_ActualTypeAnnotationName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SchemaExporter*>(), { "get_ActualTypeAnnotationName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::SchemaExporter::SchemaExporter() {}
