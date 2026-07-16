#pragma once
// IWYU pragma private; include "System/Data/XmlTreeGen.hpp"
#include "System/Data/zzzz__SchemaFormat_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__XmlTreeGen_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "System/Data/zzzz__AcceptRejectRule_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataRelation_def.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__ForeignKeyConstraint_def.hpp"
#include "System/Data/zzzz__PropertyCollection_def.hpp"
#include "System/Data/zzzz__Rule_def.hpp"
#include "System/Data/zzzz__SchemaFormat_def.hpp"
#include "System/Data/zzzz__UniqueConstraint_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlElement_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__Converter_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::XmlTreeGen._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlTreeGen::*)(::System::Data::SchemaFormat)>(&::System::Data::XmlTreeGen::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x606a5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::SchemaFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.AddExtendedProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Data::PropertyCollection*, ::System::Xml::XmlElement*)>(&::System::Data::XmlTreeGen::AddExtendedProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x606a638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(),
                                                { "AddExtendedProperties", {}, { ::i2c::type_of<::System::Data::PropertyCollection*>(), ::i2c::type_of<::System::Xml::XmlElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.AddExtendedProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Data::PropertyCollection*, ::System::Xml::XmlElement*, ::System::Type*)>(
    &::System::Data::XmlTreeGen::AddExtendedProperties)> {
  constexpr static std::size_t size = 0x6d8;
  constexpr static std::size_t addrs = 0x606a640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Data::XmlTreeGen*>(),
                         { "AddExtendedProperties", {}, { ::i2c::type_of<::System::Data::PropertyCollection*>(), ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.AddXdoProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlTreeGen::*)(::System::Object*, ::System::Xml::XmlElement*, ::System::Xml::XmlDocument*)>(
    &::System::Data::XmlTreeGen::AddXdoProperties)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x606ad18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(),
                            { "AddXdoProperties", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::System::Xml::XmlDocument*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.AddXdoProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlTreeGen::*)(::System::ComponentModel::PropertyDescriptor*, ::System::Object*, ::System::Xml::XmlElement*,
                                                                                            ::System::Xml::XmlDocument*)>(&::System::Data::XmlTreeGen::AddXdoProperty)> {
  constexpr static std::size_t size = 0x89c;
  constexpr static std::size_t addrs = 0x606aedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "AddXdoProperty",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>(), ::i2c::type_of<::System::Object*>(),
                                                                                             ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::System::Xml::XmlDocument*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.XmlDataTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*)>(&::System::Data::XmlTreeGen::XmlDataTypeName)> {
  constexpr static std::size_t size = 0xb50;
  constexpr static std::size_t addrs = 0x606b778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "XmlDataTypeName", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.GenerateConstraintNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlTreeGen::*)(::System::Data::DataTable*, bool)>(&::System::Data::XmlTreeGen::GenerateConstraintNames)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x606c498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "GenerateConstraintNames", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.GenerateConstraintNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlTreeGen::*)(::System::Collections::ArrayList*)>(&::System::Data::XmlTreeGen::GenerateConstraintNames)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x606c94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "GenerateConstraintNames", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.GenerateConstraintNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlTreeGen::*)(::System::Data::DataSet*)>(&::System::Data::XmlTreeGen::GenerateConstraintNames)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x606ca48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "GenerateConstraintNames", {}, { ::i2c::type_of<::System::Data::DataSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen._PropsNotEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Data::PropertyCollection*)>(&::System::Data::XmlTreeGen::_PropsNotEmpty)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x606cd00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "_PropsNotEmpty", {}, { ::i2c::type_of<::System::Data::PropertyCollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.HaveExtendedProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::XmlTreeGen::*)(::System::Data::DataSet*)>(&::System::Data::XmlTreeGen::HaveExtendedProperties)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x606cd28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "HaveExtendedProperties", {}, { ::i2c::type_of<::System::Data::DataSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.WriteSchemaRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlTreeGen::*)(::System::Xml::XmlDocument*, ::System::Xml::XmlElement*, ::StringW)>(
    &::System::Data::XmlTreeGen::WriteSchemaRoot)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x606ceac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(),
                                         { "WriteSchemaRoot", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.ValidateColumnMapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*)>(&::System::Data::XmlTreeGen::ValidateColumnMapping)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x606d12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "ValidateColumnMapping", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.SetupAutoGenerated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlTreeGen::*)(::System::Data::DataSet*)>(&::System::Data::XmlTreeGen::SetupAutoGenerated)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x606d1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "SetupAutoGenerated", {}, { ::i2c::type_of<::System::Data::DataSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.SetupAutoGenerated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlTreeGen::*)(::System::Collections::ArrayList*)>(&::System::Data::XmlTreeGen::SetupAutoGenerated)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x606de6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "SetupAutoGenerated", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.SetupAutoGenerated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlTreeGen::*)(::System::Data::DataTable*)>(&::System::Data::XmlTreeGen::SetupAutoGenerated)> {
  constexpr static std::size_t size = 0xa00;
  constexpr static std::size_t addrs = 0x606d46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "SetupAutoGenerated", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.CreateTablesHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlTreeGen::*)(::System::Data::DataTable*)>(&::System::Data::XmlTreeGen::CreateTablesHierarchy)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x606e50c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "CreateTablesHierarchy", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.CreateRelations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlTreeGen::*)(::System::Data::DataTable*)>(&::System::Data::XmlTreeGen::CreateRelations)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x606e864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "CreateRelations", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.CreateToplevelTables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Data::DataTable*> (::System::Data::XmlTreeGen::*)()>(&::System::Data::XmlTreeGen::CreateToplevelTables)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x606eb98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "CreateToplevelTables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.SchemaTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlTreeGen::*)(::System::Xml::XmlDocument*, ::System::Xml::XmlWriter*, ::System::Data::DataSet*,
                                                                                            ::System::Data::DataTable*, bool)>(&::System::Data::XmlTreeGen::SchemaTree)> {
  constexpr static std::size_t size = 0x28bc;
  constexpr static std::size_t addrs = 0x606ee90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "SchemaTree",
                                                                              {},
                                                                              { ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::System::Xml::XmlWriter*>(),
                                                                                ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.SchemaTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlElement* (::System::Data::XmlTreeGen::*)(::System::Xml::XmlDocument*, ::System::Data::DataTable*)>(
    &::System::Data::XmlTreeGen::SchemaTree)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x607243c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "SchemaTree", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.FillDataSetElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlElement* (::System::Data::XmlTreeGen::*)(::System::Xml::XmlDocument*, ::System::Data::DataSet*, ::System::Data::DataTable*)>(
    &::System::Data::XmlTreeGen::FillDataSetElement)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0x607174c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Data::XmlTreeGen*>(),
                         { "FillDataSetElement", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.SetPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlTreeGen::*)(::System::Xml::XmlWriter*)>(&::System::Data::XmlTreeGen::SetPath)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x6075160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "SetPath", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.Save
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlTreeGen::*)(::System::Data::DataSet*, ::System::Xml::XmlWriter*)>(&::System::Data::XmlTreeGen::Save)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6075400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "Save", {}, { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.Save
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlTreeGen::*)(::System::Data::DataTable*, ::System::Xml::XmlWriter*)>(&::System::Data::XmlTreeGen::Save)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6075420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "Save", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.Save
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlTreeGen::*)(::System::Data::DataSet*, ::System::Data::DataTable*, ::System::Xml::XmlWriter*)>(
    &::System::Data::XmlTreeGen::Save)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6075414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(),
                                         { "Save", {}, { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.Save
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlTreeGen::*)(::System::Data::DataSet*, ::System::Data::DataTable*, ::System::Xml::XmlWriter*, bool)>(
    &::System::Data::XmlTreeGen::Save)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60754e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Data::XmlTreeGen*>(),
            { "Save", {}, { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Xml::XmlWriter*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.Save
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlTreeGen::*)(::System::Data::DataSet*, ::System::Data::DataTable*, ::System::Xml::XmlWriter*, bool,
                                                                                            ::System::Converter_2<::System::Type*, ::StringW>*)>(&::System::Data::XmlTreeGen::Save)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x60754ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(),
                                                             { "Save",
                                                               {},
                                                               { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Xml::XmlWriter*>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::System::Converter_2<::System::Type*, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.HandleRelation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlElement* (::System::Data::XmlTreeGen::*)(::System::Data::DataRelation*, ::System::Xml::XmlDocument*)>(
    &::System::Data::XmlTreeGen::HandleRelation)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x6071e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(),
                                                             { "HandleRelation", {}, { ::i2c::type_of<::System::Data::DataRelation*>(), ::i2c::type_of<::System::Xml::XmlDocument*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.FindSimpleType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlElement* (*)(::System::Xml::XmlElement*, ::StringW)>(&::System::Data::XmlTreeGen::FindSimpleType)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6075680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "FindSimpleType", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.GetSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlElement* (::System::Data::XmlTreeGen::*)(::StringW)>(&::System::Data::XmlTreeGen::GetSchema)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x6075778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "GetSchema", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.HandleColumnType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlTreeGen::*)(::System::Data::DataColumn*, ::System::Xml::XmlDocument*, ::System::Xml::XmlElement*,
                                                                                            ::System::Xml::XmlElement*)>(&::System::Data::XmlTreeGen::HandleColumnType)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x6075a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "HandleColumnType",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Xml::XmlDocument*>(),
                                                                                                    ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::System::Xml::XmlElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.AddColumnProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlTreeGen::*)(::System::Data::DataColumn*, ::System::Xml::XmlElement*)>(
    &::System::Data::XmlTreeGen::AddColumnProperties)> {
  constexpr static std::size_t size = 0x634;
  constexpr static std::size_t addrs = 0x6075e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(),
                                                             { "AddColumnProperties", {}, { ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Xml::XmlElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.FindTargetNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::XmlTreeGen::*)(::System::Data::DataTable*)>(&::System::Data::XmlTreeGen::FindTargetNamespace)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x60764a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "FindTargetNamespace", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.HandleColumn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlElement* (::System::Data::XmlTreeGen::*)(::System::Data::DataColumn*, ::System::Xml::XmlDocument*, ::System::Xml::XmlElement*,
                                                                                                                  bool)>(&::System::Data::XmlTreeGen::HandleColumn)> {
  constexpr static std::size_t size = 0xab0;
  constexpr static std::size_t addrs = 0x60765b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "HandleColumn",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Xml::XmlDocument*>(),
                                                                                                    ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.TranslateAcceptRejectRule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Data::AcceptRejectRule)>(&::System::Data::XmlTreeGen::TranslateAcceptRejectRule)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6077248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "TranslateAcceptRejectRule", {}, { ::i2c::type_of<::System::Data::AcceptRejectRule>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.TranslateRule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Data::Rule)>(&::System::Data::XmlTreeGen::TranslateRule)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x60772c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "TranslateRule", {}, { ::i2c::type_of<::System::Data::Rule>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.AppendChildWithoutRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlTreeGen::*)(::System::Xml::XmlElement*, ::StringW, ::System::Xml::XmlElement*, ::StringW)>(
    &::System::Data::XmlTreeGen::AppendChildWithoutRef)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6071db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "AppendChildWithoutRef",
                                                                                                               {},
                                                                                                               { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::StringW>(),
                                                                                                                 ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.FindTypeNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlElement* (::System::Data::XmlTreeGen::*)(::System::Xml::XmlElement*, ::StringW)>(&::System::Data::XmlTreeGen::FindTypeNode)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x6077068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "FindTypeNode", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.HandleTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlElement* (::System::Data::XmlTreeGen::*)(::System::Data::DataTable*, ::System::Xml::XmlDocument*, ::System::Xml::XmlElement*)>(
    &::System::Data::XmlTreeGen::HandleTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6071da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(),
                            { "HandleTable", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::System::Xml::XmlElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.HasMixedColumns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::XmlTreeGen::*)(::System::Data::DataTable*)>(&::System::Data::XmlTreeGen::HasMixedColumns)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x6077394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "HasMixedColumns", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.AutoGenerated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Data::DataColumn*)>(&::System::Data::XmlTreeGen::AutoGenerated)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x606df64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "AutoGenerated", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.AutoGenerated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Data::DataRelation*)>(&::System::Data::XmlTreeGen::AutoGenerated)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6077710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "AutoGenerated", {}, { ::i2c::type_of<::System::Data::DataRelation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.AutoGenerated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Data::UniqueConstraint*)>(&::System::Data::XmlTreeGen::AutoGenerated)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x606e434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "AutoGenerated", {}, { ::i2c::type_of<::System::Data::UniqueConstraint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.AutoGenerated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::XmlTreeGen::*)(::System::Data::ForeignKeyConstraint*)>(&::System::Data::XmlTreeGen::AutoGenerated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x606e428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "AutoGenerated", {}, { ::i2c::type_of<::System::Data::ForeignKeyConstraint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.AutoGenerated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Data::ForeignKeyConstraint*, bool)>(&::System::Data::XmlTreeGen::AutoGenerated)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x60777f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "AutoGenerated", {}, { ::i2c::type_of<::System::Data::ForeignKeyConstraint*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.IsAutoGenerated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::XmlTreeGen::*)(::System::Object*)>(&::System::Data::XmlTreeGen::IsAutoGenerated)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x607793c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "IsAutoGenerated", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.HandleTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlElement* (::System::Data::XmlTreeGen::*)(::System::Data::DataTable*, ::System::Xml::XmlDocument*, ::System::Xml::XmlElement*,
                                                                                                                  bool)>(&::System::Data::XmlTreeGen::HandleTable)> {
  constexpr static std::size_t size = 0x28b4;
  constexpr static std::size_t addrs = 0x60728ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "HandleTable",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Xml::XmlDocument*>(),
                                                                                                    ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlTreeGen.SetMSDataAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlTreeGen::*)(::System::Xml::XmlElement*, ::System::Type*)>(&::System::Data::XmlTreeGen::SetMSDataAttribute)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x606c2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "SetMSDataAttribute", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ArrayList*& System::Data::XmlTreeGen::__cordl_internal_get__constraintNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constraintNames;
}
constexpr ::System::Collections::ArrayList* const& System::Data::XmlTreeGen::__cordl_internal_get__constraintNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constraintNames;
}
constexpr void System::Data::XmlTreeGen::__cordl_internal_set__constraintNames(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____constraintNames = value;
}
constexpr ::System::Collections::Hashtable*& System::Data::XmlTreeGen::__cordl_internal_get__namespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____namespaces;
}
constexpr ::System::Collections::Hashtable* const& System::Data::XmlTreeGen::__cordl_internal_get__namespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____namespaces;
}
constexpr void System::Data::XmlTreeGen::__cordl_internal_set__namespaces(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____namespaces = value;
}
constexpr ::System::Collections::Hashtable*& System::Data::XmlTreeGen::__cordl_internal_get__autogenerated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autogenerated;
}
constexpr ::System::Collections::Hashtable* const& System::Data::XmlTreeGen::__cordl_internal_get__autogenerated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autogenerated;
}
constexpr void System::Data::XmlTreeGen::__cordl_internal_set__autogenerated(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____autogenerated = value;
}
constexpr ::System::Collections::Hashtable*& System::Data::XmlTreeGen::__cordl_internal_get__prefixes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefixes;
}
constexpr ::System::Collections::Hashtable* const& System::Data::XmlTreeGen::__cordl_internal_get__prefixes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefixes;
}
constexpr void System::Data::XmlTreeGen::__cordl_internal_set__prefixes(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prefixes = value;
}
constexpr ::System::Data::DataSet*& System::Data::XmlTreeGen::__cordl_internal_get__ds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ds;
}
constexpr ::System::Data::DataSet* const& System::Data::XmlTreeGen::__cordl_internal_get__ds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ds;
}
constexpr void System::Data::XmlTreeGen::__cordl_internal_set__ds(::System::Data::DataSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ds = value;
}
constexpr ::System::Collections::ArrayList*& System::Data::XmlTreeGen::__cordl_internal_get__tables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tables;
}
constexpr ::System::Collections::ArrayList* const& System::Data::XmlTreeGen::__cordl_internal_get__tables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tables;
}
constexpr void System::Data::XmlTreeGen::__cordl_internal_set__tables(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tables = value;
}
constexpr ::System::Collections::ArrayList*& System::Data::XmlTreeGen::__cordl_internal_get__relations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relations;
}
constexpr ::System::Collections::ArrayList* const& System::Data::XmlTreeGen::__cordl_internal_get__relations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relations;
}
constexpr void System::Data::XmlTreeGen::__cordl_internal_set__relations(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____relations = value;
}
constexpr ::System::Xml::XmlDocument*& System::Data::XmlTreeGen::__cordl_internal_get__dc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dc;
}
constexpr ::System::Xml::XmlDocument* const& System::Data::XmlTreeGen::__cordl_internal_get__dc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dc;
}
constexpr void System::Data::XmlTreeGen::__cordl_internal_set__dc(::System::Xml::XmlDocument* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dc = value;
}
constexpr ::System::Xml::XmlElement*& System::Data::XmlTreeGen::__cordl_internal_get__sRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sRoot;
}
constexpr ::System::Xml::XmlElement* const& System::Data::XmlTreeGen::__cordl_internal_get__sRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sRoot;
}
constexpr void System::Data::XmlTreeGen::__cordl_internal_set__sRoot(::System::Xml::XmlElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sRoot = value;
}
constexpr int32_t& System::Data::XmlTreeGen::__cordl_internal_get__prefixCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefixCount;
}
constexpr int32_t const& System::Data::XmlTreeGen::__cordl_internal_get__prefixCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefixCount;
}
constexpr void System::Data::XmlTreeGen::__cordl_internal_set__prefixCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prefixCount = value;
}
constexpr ::System::Data::SchemaFormat& System::Data::XmlTreeGen::__cordl_internal_get__schFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schFormat;
}
constexpr ::System::Data::SchemaFormat const& System::Data::XmlTreeGen::__cordl_internal_get__schFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schFormat;
}
constexpr void System::Data::XmlTreeGen::__cordl_internal_set__schFormat(::System::Data::SchemaFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____schFormat = value;
}
constexpr ::StringW& System::Data::XmlTreeGen::__cordl_internal_get__filePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filePath;
}
constexpr ::StringW const& System::Data::XmlTreeGen::__cordl_internal_get__filePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filePath;
}
constexpr void System::Data::XmlTreeGen::__cordl_internal_set__filePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____filePath = value;
}
constexpr ::StringW& System::Data::XmlTreeGen::__cordl_internal_get__fileName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileName;
}
constexpr ::StringW const& System::Data::XmlTreeGen::__cordl_internal_get__fileName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileName;
}
constexpr void System::Data::XmlTreeGen::__cordl_internal_set__fileName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fileName = value;
}
constexpr ::StringW& System::Data::XmlTreeGen::__cordl_internal_get__fileExt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileExt;
}
constexpr ::StringW const& System::Data::XmlTreeGen::__cordl_internal_get__fileExt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileExt;
}
constexpr void System::Data::XmlTreeGen::__cordl_internal_set__fileExt(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fileExt = value;
}
constexpr ::System::Xml::XmlElement*& System::Data::XmlTreeGen::__cordl_internal_get__dsElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dsElement;
}
constexpr ::System::Xml::XmlElement* const& System::Data::XmlTreeGen::__cordl_internal_get__dsElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dsElement;
}
constexpr void System::Data::XmlTreeGen::__cordl_internal_set__dsElement(::System::Xml::XmlElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dsElement = value;
}
constexpr ::System::Xml::XmlElement*& System::Data::XmlTreeGen::__cordl_internal_get__constraintSeparator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constraintSeparator;
}
constexpr ::System::Xml::XmlElement* const& System::Data::XmlTreeGen::__cordl_internal_get__constraintSeparator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constraintSeparator;
}
constexpr void System::Data::XmlTreeGen::__cordl_internal_set__constraintSeparator(::System::Xml::XmlElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____constraintSeparator = value;
}
constexpr ::System::Converter_2<::System::Type*, ::StringW>*& System::Data::XmlTreeGen::__cordl_internal_get__targetConverter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetConverter;
}
constexpr ::System::Converter_2<::System::Type*, ::StringW>* const& System::Data::XmlTreeGen::__cordl_internal_get__targetConverter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetConverter;
}
constexpr void System::Data::XmlTreeGen::__cordl_internal_set__targetConverter(::System::Converter_2<::System::Type*, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetConverter = value;
}
inline void System::Data::XmlTreeGen::_ctor(::System::Data::SchemaFormat format) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::SchemaFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format);
}
inline void System::Data::XmlTreeGen::AddExtendedProperties(::System::Data::PropertyCollection* props, ::System::Xml::XmlElement* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(),
                                                           { "AddExtendedProperties", {}, { ::i2c::type_of<::System::Data::PropertyCollection*>(), ::i2c::type_of<::System::Xml::XmlElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, props, node);
}
inline void System::Data::XmlTreeGen::AddExtendedProperties(::System::Data::PropertyCollection* props, ::System::Xml::XmlElement* node, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Data::XmlTreeGen*>(),
                       { "AddExtendedProperties", {}, { ::i2c::type_of<::System::Data::PropertyCollection*>(), ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, props, node, type);
}
inline void System::Data::XmlTreeGen::AddXdoProperties(::System::Object* instance, ::System::Xml::XmlElement* root, ::System::Xml::XmlDocument* xd) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(),
                          { "AddXdoProperties", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::System::Xml::XmlDocument*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance, root, xd);
}
inline void System::Data::XmlTreeGen::AddXdoProperty(::System::ComponentModel::PropertyDescriptor* pd, ::System::Object* instance, ::System::Xml::XmlElement* root, ::System::Xml::XmlDocument* xd) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "AddXdoProperty",
                                                                                                {},
                                                                                                { ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>(), ::i2c::type_of<::System::Object*>(),
                                                                                                  ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::System::Xml::XmlDocument*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pd, instance, root, xd);
}
inline ::StringW System::Data::XmlTreeGen::XmlDataTypeName(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "XmlDataTypeName", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
inline void System::Data::XmlTreeGen::GenerateConstraintNames(::System::Data::DataTable* table, bool fromTable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "GenerateConstraintNames", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, fromTable);
}
inline void System::Data::XmlTreeGen::GenerateConstraintNames(::System::Collections::ArrayList* tables) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "GenerateConstraintNames", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tables);
}
inline void System::Data::XmlTreeGen::GenerateConstraintNames(::System::Data::DataSet* ds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "GenerateConstraintNames", {}, { ::i2c::type_of<::System::Data::DataSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ds);
}
inline bool System::Data::XmlTreeGen::_PropsNotEmpty(::System::Data::PropertyCollection* props) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "_PropsNotEmpty", {}, { ::i2c::type_of<::System::Data::PropertyCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, props);
}
inline bool System::Data::XmlTreeGen::HaveExtendedProperties(::System::Data::DataSet* ds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "HaveExtendedProperties", {}, { ::i2c::type_of<::System::Data::DataSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ds);
}
inline void System::Data::XmlTreeGen::WriteSchemaRoot(::System::Xml::XmlDocument* xd, ::System::Xml::XmlElement* rootSchema, ::StringW targetNamespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(),
                                       { "WriteSchemaRoot", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xd, rootSchema, targetNamespace);
}
inline void System::Data::XmlTreeGen::ValidateColumnMapping(::System::Type* columnType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "ValidateColumnMapping", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, columnType);
}
inline void System::Data::XmlTreeGen::SetupAutoGenerated(::System::Data::DataSet* ds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "SetupAutoGenerated", {}, { ::i2c::type_of<::System::Data::DataSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ds);
}
inline void System::Data::XmlTreeGen::SetupAutoGenerated(::System::Collections::ArrayList* dt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "SetupAutoGenerated", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void System::Data::XmlTreeGen::SetupAutoGenerated(::System::Data::DataTable* dt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "SetupAutoGenerated", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void System::Data::XmlTreeGen::CreateTablesHierarchy(::System::Data::DataTable* dt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "CreateTablesHierarchy", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void System::Data::XmlTreeGen::CreateRelations(::System::Data::DataTable* dt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "CreateRelations", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline ::ArrayW<::System::Data::DataTable*> System::Data::XmlTreeGen::CreateToplevelTables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "CreateToplevelTables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataTable*>>(this, ___internal_method);
}
inline void System::Data::XmlTreeGen::SchemaTree(::System::Xml::XmlDocument* xd, ::System::Xml::XmlWriter* xmlWriter, ::System::Data::DataSet* ds, ::System::Data::DataTable* dt, bool writeHierarchy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "SchemaTree",
                                                                            {},
                                                                            { ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::System::Xml::XmlWriter*>(),
                                                                              ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xd, xmlWriter, ds, dt, writeHierarchy);
}
inline ::System::Xml::XmlElement* System::Data::XmlTreeGen::SchemaTree(::System::Xml::XmlDocument* xd, ::System::Data::DataTable* dt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "SchemaTree", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlElement*>(this, ___internal_method, xd, dt);
}
inline ::System::Xml::XmlElement* System::Data::XmlTreeGen::FillDataSetElement(::System::Xml::XmlDocument* xd, ::System::Data::DataSet* ds, ::System::Data::DataTable* dt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(),
                          { "FillDataSetElement", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlElement*>(this, ___internal_method, xd, ds, dt);
}
inline void System::Data::XmlTreeGen::SetPath(::System::Xml::XmlWriter* xw) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "SetPath", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xw);
}
inline void System::Data::XmlTreeGen::Save(::System::Data::DataSet* ds, ::System::Xml::XmlWriter* xw) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "Save", {}, { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ds, xw);
}
inline void System::Data::XmlTreeGen::Save(::System::Data::DataTable* dt, ::System::Xml::XmlWriter* xw) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "Save", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt, xw);
}
inline void System::Data::XmlTreeGen::Save(::System::Data::DataSet* ds, ::System::Data::DataTable* dt, ::System::Xml::XmlWriter* xw) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(),
                                       { "Save", {}, { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ds, dt, xw);
}
inline void System::Data::XmlTreeGen::Save(::System::Data::DataSet* ds, ::System::Data::DataTable* dt, ::System::Xml::XmlWriter* xw, bool writeHierarchy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Data::XmlTreeGen*>(),
          { "Save", {}, { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Xml::XmlWriter*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ds, dt, xw, writeHierarchy);
}
inline void System::Data::XmlTreeGen::Save(::System::Data::DataSet* ds, ::System::Data::DataTable* dt, ::System::Xml::XmlWriter* xw, bool writeHierarchy,
                                           ::System::Converter_2<::System::Type*, ::StringW>* multipleTargetConverter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(),
                                                           { "Save",
                                                             {},
                                                             { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Xml::XmlWriter*>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::System::Converter_2<::System::Type*, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ds, dt, xw, writeHierarchy, multipleTargetConverter);
}
inline ::System::Xml::XmlElement* System::Data::XmlTreeGen::HandleRelation(::System::Data::DataRelation* rel, ::System::Xml::XmlDocument* dc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(),
                                                           { "HandleRelation", {}, { ::i2c::type_of<::System::Data::DataRelation*>(), ::i2c::type_of<::System::Xml::XmlDocument*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlElement*>(this, ___internal_method, rel, dc);
}
inline ::System::Xml::XmlElement* System::Data::XmlTreeGen::FindSimpleType(::System::Xml::XmlElement* schema, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "FindSimpleType", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlElement*>(nullptr, ___internal_method, schema, name);
}
inline ::System::Xml::XmlElement* System::Data::XmlTreeGen::GetSchema(::StringW NamespaceURI) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "GetSchema", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlElement*>(this, ___internal_method, NamespaceURI);
}
inline void System::Data::XmlTreeGen::HandleColumnType(::System::Data::DataColumn* col, ::System::Xml::XmlDocument* dc, ::System::Xml::XmlElement* root, ::System::Xml::XmlElement* schema) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "HandleColumnType",
                                                                                                {},
                                                                                                { ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Xml::XmlDocument*>(),
                                                                                                  ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::System::Xml::XmlElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, col, dc, root, schema);
}
inline void System::Data::XmlTreeGen::AddColumnProperties(::System::Data::DataColumn* col, ::System::Xml::XmlElement* root) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(),
                                                           { "AddColumnProperties", {}, { ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Xml::XmlElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, col, root);
}
inline ::StringW System::Data::XmlTreeGen::FindTargetNamespace(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "FindTargetNamespace", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, table);
}
inline ::System::Xml::XmlElement* System::Data::XmlTreeGen::HandleColumn(::System::Data::DataColumn* col, ::System::Xml::XmlDocument* dc, ::System::Xml::XmlElement* schema, bool fWriteOrdinal) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "HandleColumn",
                                                                                                {},
                                                                                                { ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Xml::XmlDocument*>(),
                                                                                                  ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlElement*>(this, ___internal_method, col, dc, schema, fWriteOrdinal);
}
inline ::StringW System::Data::XmlTreeGen::TranslateAcceptRejectRule(::System::Data::AcceptRejectRule rule) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "TranslateAcceptRejectRule", {}, { ::i2c::type_of<::System::Data::AcceptRejectRule>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, rule);
}
inline ::StringW System::Data::XmlTreeGen::TranslateRule(::System::Data::Rule rule) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "TranslateRule", {}, { ::i2c::type_of<::System::Data::Rule>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, rule);
}
inline void System::Data::XmlTreeGen::AppendChildWithoutRef(::System::Xml::XmlElement* node, ::StringW Namespace, ::System::Xml::XmlElement* el, ::StringW refString) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Data::XmlTreeGen*>(),
          { "AppendChildWithoutRef", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, Namespace, el, refString);
}
inline ::System::Xml::XmlElement* System::Data::XmlTreeGen::FindTypeNode(::System::Xml::XmlElement* node, ::StringW strType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "FindTypeNode", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlElement*>(this, ___internal_method, node, strType);
}
inline ::System::Xml::XmlElement* System::Data::XmlTreeGen::HandleTable(::System::Data::DataTable* table, ::System::Xml::XmlDocument* dc, ::System::Xml::XmlElement* schema) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(),
                          { "HandleTable", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::System::Xml::XmlElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlElement*>(this, ___internal_method, table, dc, schema);
}
inline bool System::Data::XmlTreeGen::HasMixedColumns(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "HasMixedColumns", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, table);
}
inline bool System::Data::XmlTreeGen::AutoGenerated(::System::Data::DataColumn* col) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "AutoGenerated", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, col);
}
inline bool System::Data::XmlTreeGen::AutoGenerated(::System::Data::DataRelation* rel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "AutoGenerated", {}, { ::i2c::type_of<::System::Data::DataRelation*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rel);
}
inline bool System::Data::XmlTreeGen::AutoGenerated(::System::Data::UniqueConstraint* unique) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "AutoGenerated", {}, { ::i2c::type_of<::System::Data::UniqueConstraint*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, unique);
}
inline bool System::Data::XmlTreeGen::AutoGenerated(::System::Data::ForeignKeyConstraint* fk) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "AutoGenerated", {}, { ::i2c::type_of<::System::Data::ForeignKeyConstraint*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fk);
}
inline bool System::Data::XmlTreeGen::AutoGenerated(::System::Data::ForeignKeyConstraint* fk, bool checkRelation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "AutoGenerated", {}, { ::i2c::type_of<::System::Data::ForeignKeyConstraint*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fk, checkRelation);
}
inline bool System::Data::XmlTreeGen::IsAutoGenerated(::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "IsAutoGenerated", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o);
}
inline ::System::Xml::XmlElement* System::Data::XmlTreeGen::HandleTable(::System::Data::DataTable* table, ::System::Xml::XmlDocument* dc, ::System::Xml::XmlElement* schema, bool genNested) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "HandleTable",
                                                                                                {},
                                                                                                { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Xml::XmlDocument*>(),
                                                                                                  ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlElement*>(this, ___internal_method, table, dc, schema, genNested);
}
inline void System::Data::XmlTreeGen::SetMSDataAttribute(::System::Xml::XmlElement* root, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::XmlTreeGen*>(), { "SetMSDataAttribute", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root, type);
}
inline ::System::Data::XmlTreeGen* System::Data::XmlTreeGen::New_ctor(::System::Data::SchemaFormat format) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::XmlTreeGen*>(format));
}
// Ctor Parameters []
constexpr ::System::Data::XmlTreeGen::XmlTreeGen() {}
