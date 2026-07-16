#pragma once
// IWYU pragma private; include "System/Data/DataSet.hpp"
#include "System/ComponentModel/zzzz__MarshalByValueComponent_impl.hpp"
#include "System/Data/zzzz__SerializationFormat_impl.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
#include "System/ComponentModel/zzzz__ISite_def.hpp"
#include "System/ComponentModel/zzzz__PropertyChangedEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__PropertyChangedEventHandler_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "System/Data/zzzz__DataRelationCollection_def.hpp"
#include "System/Data/zzzz__DataRelation_def.hpp"
#include "System/Data/zzzz__DataRowCreatedEventHandler_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Data/zzzz__DataSetClearEventhandler_def.hpp"
#include "System/Data/zzzz__DataTableCollection_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__DataViewManager_def.hpp"
#include "System/Data/zzzz__MergeFailedEventArgs_def.hpp"
#include "System/Data/zzzz__MergeFailedEventHandler_def.hpp"
#include "System/Data/zzzz__MissingSchemaAction_def.hpp"
#include "System/Data/zzzz__PropertyCollection_def.hpp"
#include "System/Data/zzzz__SchemaFormat_def.hpp"
#include "System/Data/zzzz__SchemaSerializationMode_def.hpp"
#include "System/Data/zzzz__SerializationFormat_def.hpp"
#include "System/Data/zzzz__XmlReadMode_def.hpp"
#include "System/Data/zzzz__XmlWriteMode_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaComplexType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__Converter_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::DataSet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)()>(&::System::Data::DataSet::_ctor)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x6004a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::StringW)>(&::System::Data::DataSet::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6004cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.get_RemotingFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SerializationFormat (::System::Data::DataSet::*)()>(&::System::Data::DataSet::get_RemotingFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6004e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "get_RemotingFormat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.set_RemotingFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Data::SerializationFormat)>(&::System::Data::DataSet::set_RemotingFormat)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6004e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "set_RemotingFormat", {}, { ::i2c::type_of<::System::Data::SerializationFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.get_SchemaSerializationMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SchemaSerializationMode (::System::Data::DataSet::*)()>(&::System::Data::DataSet::get_SchemaSerializationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6004ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { ::i2c::class_of<::System::Data::DataSet*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Data::DataSet::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6004eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::System::Data::DataSet::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, bool)>(&::System::Data::DataSet::_ctor)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x6004ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { ".ctor",
                                                                                               {},
                                                                                               { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                                 ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Data::DataSet::GetObjectData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600515c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { ::i2c::class_of<::System::Data::DataSet*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.InitializeDerivedDataSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)()>(&::System::Data::DataSet::InitializeDerivedDataSet)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60057d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { ::i2c::class_of<::System::Data::DataSet*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.SerializeDataSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext,
                                                                                         ::System::Data::SerializationFormat)>(&::System::Data::DataSet::SerializeDataSet)> {
  constexpr static std::size_t size = 0x66c;
  constexpr static std::size_t addrs = 0x6005164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(),
                                                             { "SerializeDataSet",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<::System::Data::SerializationFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.DeserializeDataSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext,
                                                                                         ::System::Data::SerializationFormat, ::System::Data::SchemaSerializationMode)>(
    &::System::Data::DataSet::DeserializeDataSet)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6005114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(),
                                                { "DeserializeDataSet",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(),
                                                    ::i2c::type_of<::System::Data::SerializationFormat>(), ::i2c::type_of<::System::Data::SchemaSerializationMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.DeserializeDataSetSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext,
                                                                                         ::System::Data::SerializationFormat, ::System::Data::SchemaSerializationMode)>(
    &::System::Data::DataSet::DeserializeDataSetSchema)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x60064b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(),
                                                { "DeserializeDataSetSchema",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(),
                                                    ::i2c::type_of<::System::Data::SerializationFormat>(), ::i2c::type_of<::System::Data::SchemaSerializationMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.DeserializeDataSetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext,
                                                                                         ::System::Data::SerializationFormat)>(&::System::Data::DataSet::DeserializeDataSetData)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6006998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(),
                                                             { "DeserializeDataSetData",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<::System::Data::SerializationFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.SerializeDataSetProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Data::DataSet::SerializeDataSetProperties)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x60057d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Data::DataSet*>(),
            { "SerializeDataSetProperties", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.DeserializeDataSetProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Data::DataSet::DeserializeDataSetProperties)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x6006b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Data::DataSet*>(),
            { "DeserializeDataSetProperties", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.SerializeRelations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Data::DataSet::SerializeRelations)> {
  constexpr static std::size_t size = 0x67c;
  constexpr static std::size_t addrs = 0x6005960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Data::DataSet*>(),
            { "SerializeRelations", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.DeserializeRelations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Data::DataSet::DeserializeRelations)> {
  constexpr static std::size_t size = 0x81c;
  constexpr static std::size_t addrs = 0x6006df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Data::DataSet*>(),
            { "DeserializeRelations", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.FailedEnableConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)()>(&::System::Data::DataSet::FailedEnableConstraints)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6007f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "FailedEnableConstraints", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.get_CaseSensitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataSet::*)()>(&::System::Data::DataSet::get_CaseSensitive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60080b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "get_CaseSensitive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.set_CaseSensitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(bool)>(&::System::Data::DataSet::set_CaseSensitive)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x60080c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "set_CaseSensitive", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.get_EnforceConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataSet::*)()>(&::System::Data::DataSet::get_EnforceConstraints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60087a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "get_EnforceConstraints", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.set_EnforceConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(bool)>(&::System::Data::DataSet::set_EnforceConstraints)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6007f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "set_EnforceConstraints", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.RestoreEnforceConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(bool)>(&::System::Data::DataSet::RestoreEnforceConstraints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6008ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "RestoreEnforceConstraints", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.EnableConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)()>(&::System::Data::DataSet::EnableConstraints)> {
  constexpr static std::size_t size = 0x6f4;
  constexpr static std::size_t addrs = 0x60087ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "EnableConstraints", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.get_DataSetName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataSet::*)()>(&::System::Data::DataSet::get_DataSetName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6008ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "get_DataSetName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.set_DataSetName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::StringW)>(&::System::Data::DataSet::set_DataSetName)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6004cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "set_DataSetName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.get_Namespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataSet::*)()>(&::System::Data::DataSet::get_Namespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6008f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "get_Namespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.set_Namespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::StringW)>(&::System::Data::DataSet::set_Namespace)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x6008f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "set_Namespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.get_Prefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataSet::*)()>(&::System::Data::DataSet::get_Prefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60093b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "get_Prefix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.set_Prefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::StringW)>(&::System::Data::DataSet::set_Prefix)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x60093c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "set_Prefix", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.get_ExtendedProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::PropertyCollection* (::System::Data::DataSet::*)()>(&::System::Data::DataSet::get_ExtendedProperties)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6007eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "get_ExtendedProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.get_Locale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (::System::Data::DataSet::*)()>(&::System::Data::DataSet::get_Locale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60094d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "get_Locale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.set_Locale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Globalization::CultureInfo*)>(&::System::Data::DataSet::set_Locale)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x60094d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "set_Locale", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.SetLocaleValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Globalization::CultureInfo*, bool)>(&::System::Data::DataSet::SetLocaleValue)> {
  constexpr static std::size_t size = 0x704;
  constexpr static std::size_t addrs = 0x6009664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "SetLocaleValue", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.ShouldSerializeLocale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataSet::*)()>(&::System::Data::DataSet::ShouldSerializeLocale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600a1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "ShouldSerializeLocale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.get_Site
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ISite* (::System::Data::DataSet::*)()>(&::System::Data::DataSet::get_Site)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600a1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { ::i2c::class_of<::System::Data::DataSet*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.get_Relations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRelationCollection* (::System::Data::DataSet::*)()>(&::System::Data::DataSet::get_Relations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600a1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "get_Relations", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.get_Tables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTableCollection* (::System::Data::DataSet::*)()>(&::System::Data::DataSet::get_Tables)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600a1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "get_Tables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)()>(&::System::Data::DataSet::Clear)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x600a1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataSet* (::System::Data::DataSet::*)()>(&::System::Data::DataSet::Clone)> {
  constexpr static std::size_t size = 0xf44;
  constexpr static std::size_t addrs = 0x600a3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { ::i2c::class_of<::System::Data::DataSet*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.EstimatedXmlStringSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataSet::*)()>(&::System::Data::DataSet::EstimatedXmlStringSize)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6006188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "EstimatedXmlStringSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.GetRemotingDiffGram
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataSet::*)(::System::Data::DataTable*)>(&::System::Data::DataSet::GetRemotingDiffGram)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x600b330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "GetRemotingDiffGram", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.GetXmlSchemaForRemoting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataSet::*)(::System::Data::DataTable*)>(&::System::Data::DataSet::GetXmlSchemaForRemoting)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6005fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "GetXmlSchemaForRemoting", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.ReadXmlSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Xml::XmlReader*)>(&::System::Data::DataSet::ReadXmlSchema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600b46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "ReadXmlSchema", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.ReadXmlSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Xml::XmlReader*, bool)>(&::System::Data::DataSet::ReadXmlSchema)> {
  constexpr static std::size_t size = 0x89c;
  constexpr static std::size_t addrs = 0x600760c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "ReadXmlSchema", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.MoveToElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataSet::*)(::System::Xml::XmlReader*, int32_t)>(&::System::Data::DataSet::MoveToElement)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x600b870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "MoveToElement", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.MoveToElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::XmlReader*)>(&::System::Data::DataSet::MoveToElement)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x600bd3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "MoveToElement", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.ReadEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Xml::XmlReader*)>(&::System::Data::DataSet::ReadEndElement)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x600b924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "ReadEndElement", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.ReadXSDSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Xml::XmlReader*, bool)>(&::System::Data::DataSet::ReadXSDSchema)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x600b5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "ReadXSDSchema", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.ReadXDRSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Xml::XmlReader*)>(&::System::Data::DataSet::ReadXDRSchema)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x600b474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "ReadXDRSchema", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.WriteXmlSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Xml::XmlWriter*, ::System::Data::SchemaFormat, ::System::Converter_2<::System::Type*, ::StringW>*)>(
    &::System::Data::DataSet::WriteXmlSchema)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x600bdb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "WriteXmlSchema",
                                                                                               {},
                                                                                               { ::i2c::type_of<::System::Xml::XmlWriter*>(), ::i2c::type_of<::System::Data::SchemaFormat>(),
                                                                                                 ::i2c::type_of<::System::Converter_2<::System::Type*, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.ReadXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::XmlReadMode (::System::Data::DataSet::*)(::System::Xml::XmlReader*)>(&::System::Data::DataSet::ReadXml)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600bfe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.ReadXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::XmlReadMode (::System::Data::DataSet::*)(::System::Xml::XmlReader*, bool)>(&::System::Data::DataSet::ReadXml)> {
  constexpr static std::size_t size = 0x104c;
  constexpr static std::size_t addrs = 0x600bfec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.InferSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Xml::XmlDocument*, ::ArrayW<::StringW>, ::System::Data::XmlReadMode)>(
    &::System::Data::DataSet::InferSchema)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x600b9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(),
                            { "InferSchema", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Data::XmlReadMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataSet::*)()>(&::System::Data::DataSet::IsEmpty)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x600e270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "IsEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.ReadXmlDiffgram
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Xml::XmlReader*)>(&::System::Data::DataSet::ReadXmlDiffgram)> {
  constexpr static std::size_t size = 0x11c8;
  constexpr static std::size_t addrs = 0x600d0a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "ReadXmlDiffgram", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.ReadXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::XmlReadMode (::System::Data::DataSet::*)(::System::Xml::XmlReader*, ::System::Data::XmlReadMode)>(
    &::System::Data::DataSet::ReadXml)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6007ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::System::Data::XmlReadMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.ReadXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::XmlReadMode (::System::Data::DataSet::*)(::System::Xml::XmlReader*, ::System::Data::XmlReadMode, bool)>(
    &::System::Data::DataSet::ReadXml)> {
  constexpr static std::size_t size = 0xdb8;
  constexpr static std::size_t addrs = 0x600e6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(),
                                                { "ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::System::Data::XmlReadMode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.WriteXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Xml::XmlWriter*, ::System::Data::XmlWriteMode)>(&::System::Data::DataSet::WriteXml)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x60062a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>(), ::i2c::type_of<::System::Data::XmlWriteMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.Merge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Data::DataSet*)>(&::System::Data::DataSet::Merge)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x600e53c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "Merge", {}, { ::i2c::type_of<::System::Data::DataSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.Merge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Data::DataSet*, bool, ::System::Data::MissingSchemaAction)>(&::System::Data::DataSet::Merge)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x600f464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(),
                                                { "Merge", {}, { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Data::MissingSchemaAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.OnPropertyChanging
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::ComponentModel::PropertyChangedEventArgs*)>(&::System::Data::DataSet::OnPropertyChanging)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x600f6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { ::i2c::class_of<::System::Data::DataSet*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.OnMergeFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Data::MergeFailedEventArgs*)>(&::System::Data::DataSet::OnMergeFailed)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x600f6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "OnMergeFailed", {}, { ::i2c::type_of<::System::Data::MergeFailedEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.RaiseMergeFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Data::DataTable*, ::StringW, ::System::Data::MissingSchemaAction)>(
    &::System::Data::DataSet::RaiseMergeFailed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x600f738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(),
                            { "RaiseMergeFailed", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Data::MissingSchemaAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.OnDataRowCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Data::DataRow*)>(&::System::Data::DataSet::OnDataRowCreated)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x600f7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "OnDataRowCreated", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.OnClearFunctionCalled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Data::DataTable*)>(&::System::Data::DataSet::OnClearFunctionCalled)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x600a3c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "OnClearFunctionCalled", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.OnRemoveTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Data::DataTable*)>(&::System::Data::DataSet::OnRemoveTable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x600f810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { ::i2c::class_of<::System::Data::DataSet*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.OnRemovedTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Data::DataTable*)>(&::System::Data::DataSet::OnRemovedTable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x600f814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "OnRemovedTable", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.OnRemoveRelation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Data::DataRelation*)>(&::System::Data::DataSet::OnRemoveRelation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x600f850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { ::i2c::class_of<::System::Data::DataSet*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.OnRemoveRelationHack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Data::DataRelation*)>(&::System::Data::DataSet::OnRemoveRelationHack)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x600f854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "OnRemoveRelationHack", {}, { ::i2c::type_of<::System::Data::DataRelation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.RaisePropertyChanging
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::StringW)>(&::System::Data::DataSet::RaisePropertyChanging)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6008eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "RaisePropertyChanging", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.TopLevelTables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Data::DataTable*> (::System::Data::DataSet::*)()>(&::System::Data::DataSet::TopLevelTables)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600f864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "TopLevelTables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.TopLevelTables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Data::DataTable*> (::System::Data::DataSet::*)(bool)>(&::System::Data::DataSet::TopLevelTables)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x600f86c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "TopLevelTables", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)()>(&::System::Data::DataSet::Reset)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x600fb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { ::i2c::class_of<::System::Data::DataSet*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.ValidateCaseConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataSet::*)()>(&::System::Data::DataSet::ValidateCaseConstraint)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x60083b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "ValidateCaseConstraint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.ValidateLocaleConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataSet::*)()>(&::System::Data::DataSet::ValidateLocaleConstraint)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x6009d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "ValidateLocaleConstraint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.FindTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::DataSet::*)(::System::Data::DataTable*, ::ArrayW<::System::ComponentModel::PropertyDescriptor*>,
                                                                                                               int32_t)>(&::System::Data::DataSet::FindTable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x600fe20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Data::DataSet*>(),
                         { "FindTable", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::ArrayW<::System::ComponentModel::PropertyDescriptor*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.ReadXmlSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Xml::XmlReader*)>(&::System::Data::DataSet::ReadXmlSerializable)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x600ff40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { ::i2c::class_of<::System::Data::DataSet*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.GetDataSetSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaComplexType* (*)(::System::Xml::Schema::XmlSchemaSet*)>(&::System::Data::DataSet::GetDataSetSchema)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x601023c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "GetDataSetSchema", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.System_Xml_Serialization_IXmlSerializable_GetSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Data::DataSet::*)()>(
    &::System::Data::DataSet::System_Xml_Serialization_IXmlSerializable_GetSchema)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6010460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "System.Xml.Serialization.IXmlSerializable.GetSchema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.System_Xml_Serialization_IXmlSerializable_ReadXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Xml::XmlReader*)>(&::System::Data::DataSet::System_Xml_Serialization_IXmlSerializable_ReadXml)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x6010638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "System.Xml.Serialization.IXmlSerializable.ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.System_Xml_Serialization_IXmlSerializable_WriteXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::System::Xml::XmlWriter*)>(&::System::Data::DataSet::System_Xml_Serialization_IXmlSerializable_WriteXml)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6010898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "System.Xml.Serialization.IXmlSerializable.WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.get_MainTableName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataSet::*)()>(&::System::Data::DataSet::get_MainTableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60108cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "get_MainTableName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.set_MainTableName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSet::*)(::StringW)>(&::System::Data::DataSet::set_MainTableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60108d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "set_MainTableName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSet.get_ObjectID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataSet::*)()>(&::System::Data::DataSet::get_ObjectID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60108dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "get_ObjectID", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataViewManager*& System::Data::DataSet::__cordl_internal_get__defaultViewManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultViewManager;
}
constexpr ::System::Data::DataViewManager* const& System::Data::DataSet::__cordl_internal_get__defaultViewManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultViewManager;
}
constexpr void System::Data::DataSet::__cordl_internal_set__defaultViewManager(::System::Data::DataViewManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultViewManager = value;
}
constexpr ::System::Data::DataTableCollection*& System::Data::DataSet::__cordl_internal_get__tableCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableCollection;
}
constexpr ::System::Data::DataTableCollection* const& System::Data::DataSet::__cordl_internal_get__tableCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableCollection;
}
constexpr void System::Data::DataSet::__cordl_internal_set__tableCollection(::System::Data::DataTableCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tableCollection = value;
}
constexpr ::System::Data::DataRelationCollection*& System::Data::DataSet::__cordl_internal_get__relationCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relationCollection;
}
constexpr ::System::Data::DataRelationCollection* const& System::Data::DataSet::__cordl_internal_get__relationCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relationCollection;
}
constexpr void System::Data::DataSet::__cordl_internal_set__relationCollection(::System::Data::DataRelationCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____relationCollection = value;
}
constexpr ::System::Data::PropertyCollection*& System::Data::DataSet::__cordl_internal_get__extendedProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extendedProperties;
}
constexpr ::System::Data::PropertyCollection* const& System::Data::DataSet::__cordl_internal_get__extendedProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extendedProperties;
}
constexpr void System::Data::DataSet::__cordl_internal_set__extendedProperties(::System::Data::PropertyCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____extendedProperties = value;
}
constexpr ::StringW& System::Data::DataSet::__cordl_internal_get__dataSetName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSetName;
}
constexpr ::StringW const& System::Data::DataSet::__cordl_internal_get__dataSetName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSetName;
}
constexpr void System::Data::DataSet::__cordl_internal_set__dataSetName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataSetName = value;
}
constexpr ::StringW& System::Data::DataSet::__cordl_internal_get__datasetPrefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____datasetPrefix;
}
constexpr ::StringW const& System::Data::DataSet::__cordl_internal_get__datasetPrefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____datasetPrefix;
}
constexpr void System::Data::DataSet::__cordl_internal_set__datasetPrefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____datasetPrefix = value;
}
constexpr ::StringW& System::Data::DataSet::__cordl_internal_get__namespaceURI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____namespaceURI;
}
constexpr ::StringW const& System::Data::DataSet::__cordl_internal_get__namespaceURI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____namespaceURI;
}
constexpr void System::Data::DataSet::__cordl_internal_set__namespaceURI(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____namespaceURI = value;
}
constexpr bool& System::Data::DataSet::__cordl_internal_get__enforceConstraints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enforceConstraints;
}
constexpr bool const& System::Data::DataSet::__cordl_internal_get__enforceConstraints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enforceConstraints;
}
constexpr void System::Data::DataSet::__cordl_internal_set__enforceConstraints(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enforceConstraints = value;
}
constexpr bool& System::Data::DataSet::__cordl_internal_get__caseSensitive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caseSensitive;
}
constexpr bool const& System::Data::DataSet::__cordl_internal_get__caseSensitive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caseSensitive;
}
constexpr void System::Data::DataSet::__cordl_internal_set__caseSensitive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____caseSensitive = value;
}
constexpr ::System::Globalization::CultureInfo*& System::Data::DataSet::__cordl_internal_get__culture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____culture;
}
constexpr ::System::Globalization::CultureInfo* const& System::Data::DataSet::__cordl_internal_get__culture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____culture;
}
constexpr void System::Data::DataSet::__cordl_internal_set__culture(::System::Globalization::CultureInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____culture = value;
}
constexpr bool& System::Data::DataSet::__cordl_internal_get__cultureUserSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cultureUserSet;
}
constexpr bool const& System::Data::DataSet::__cordl_internal_get__cultureUserSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cultureUserSet;
}
constexpr void System::Data::DataSet::__cordl_internal_set__cultureUserSet(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cultureUserSet = value;
}
constexpr bool& System::Data::DataSet::__cordl_internal_get__fInReadXml() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fInReadXml;
}
constexpr bool const& System::Data::DataSet::__cordl_internal_get__fInReadXml() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fInReadXml;
}
constexpr void System::Data::DataSet::__cordl_internal_set__fInReadXml(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fInReadXml = value;
}
constexpr bool& System::Data::DataSet::__cordl_internal_get__fInLoadDiffgram() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fInLoadDiffgram;
}
constexpr bool const& System::Data::DataSet::__cordl_internal_get__fInLoadDiffgram() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fInLoadDiffgram;
}
constexpr void System::Data::DataSet::__cordl_internal_set__fInLoadDiffgram(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fInLoadDiffgram = value;
}
constexpr bool& System::Data::DataSet::__cordl_internal_get__fTopLevelTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fTopLevelTable;
}
constexpr bool const& System::Data::DataSet::__cordl_internal_get__fTopLevelTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fTopLevelTable;
}
constexpr void System::Data::DataSet::__cordl_internal_set__fTopLevelTable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fTopLevelTable = value;
}
constexpr bool& System::Data::DataSet::__cordl_internal_get__fInitInProgress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fInitInProgress;
}
constexpr bool const& System::Data::DataSet::__cordl_internal_get__fInitInProgress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fInitInProgress;
}
constexpr void System::Data::DataSet::__cordl_internal_set__fInitInProgress(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fInitInProgress = value;
}
constexpr bool& System::Data::DataSet::__cordl_internal_get__fEnableCascading() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fEnableCascading;
}
constexpr bool const& System::Data::DataSet::__cordl_internal_get__fEnableCascading() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fEnableCascading;
}
constexpr void System::Data::DataSet::__cordl_internal_set__fEnableCascading(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fEnableCascading = value;
}
constexpr bool& System::Data::DataSet::__cordl_internal_get__fIsSchemaLoading() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fIsSchemaLoading;
}
constexpr bool const& System::Data::DataSet::__cordl_internal_get__fIsSchemaLoading() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fIsSchemaLoading;
}
constexpr void System::Data::DataSet::__cordl_internal_set__fIsSchemaLoading(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fIsSchemaLoading = value;
}
constexpr ::StringW& System::Data::DataSet::__cordl_internal_get__mainTableName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainTableName;
}
constexpr ::StringW const& System::Data::DataSet::__cordl_internal_get__mainTableName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainTableName;
}
constexpr void System::Data::DataSet::__cordl_internal_set__mainTableName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainTableName = value;
}
constexpr ::System::Data::SerializationFormat& System::Data::DataSet::__cordl_internal_get__remotingFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remotingFormat;
}
constexpr ::System::Data::SerializationFormat const& System::Data::DataSet::__cordl_internal_get__remotingFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remotingFormat;
}
constexpr void System::Data::DataSet::__cordl_internal_set__remotingFormat(::System::Data::SerializationFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____remotingFormat = value;
}
constexpr ::System::Object*& System::Data::DataSet::__cordl_internal_get__defaultViewManagerLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultViewManagerLock;
}
constexpr ::System::Object* const& System::Data::DataSet::__cordl_internal_get__defaultViewManagerLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultViewManagerLock;
}
constexpr void System::Data::DataSet::__cordl_internal_set__defaultViewManagerLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultViewManagerLock = value;
}
constexpr int32_t& System::Data::DataSet::__cordl_internal_get__objectID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectID;
}
constexpr int32_t const& System::Data::DataSet::__cordl_internal_get__objectID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectID;
}
constexpr void System::Data::DataSet::__cordl_internal_set__objectID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectID = value;
}
constexpr bool& System::Data::DataSet::__cordl_internal_get__useDataSetSchemaOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useDataSetSchemaOnly;
}
constexpr bool const& System::Data::DataSet::__cordl_internal_get__useDataSetSchemaOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useDataSetSchemaOnly;
}
constexpr void System::Data::DataSet::__cordl_internal_set__useDataSetSchemaOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useDataSetSchemaOnly = value;
}
constexpr bool& System::Data::DataSet::__cordl_internal_get__udtIsWrapped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____udtIsWrapped;
}
constexpr bool const& System::Data::DataSet::__cordl_internal_get__udtIsWrapped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____udtIsWrapped;
}
constexpr void System::Data::DataSet::__cordl_internal_set__udtIsWrapped(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____udtIsWrapped = value;
}
constexpr ::System::ComponentModel::PropertyChangedEventHandler*& System::Data::DataSet::__cordl_internal_get_PropertyChanging() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PropertyChanging;
}
constexpr ::System::ComponentModel::PropertyChangedEventHandler* const& System::Data::DataSet::__cordl_internal_get_PropertyChanging() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PropertyChanging;
}
constexpr void System::Data::DataSet::__cordl_internal_set_PropertyChanging(::System::ComponentModel::PropertyChangedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PropertyChanging = value;
}
constexpr ::System::Data::MergeFailedEventHandler*& System::Data::DataSet::__cordl_internal_get_MergeFailed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MergeFailed;
}
constexpr ::System::Data::MergeFailedEventHandler* const& System::Data::DataSet::__cordl_internal_get_MergeFailed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MergeFailed;
}
constexpr void System::Data::DataSet::__cordl_internal_set_MergeFailed(::System::Data::MergeFailedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MergeFailed = value;
}
constexpr ::System::Data::DataRowCreatedEventHandler*& System::Data::DataSet::__cordl_internal_get_DataRowCreated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DataRowCreated;
}
constexpr ::System::Data::DataRowCreatedEventHandler* const& System::Data::DataSet::__cordl_internal_get_DataRowCreated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DataRowCreated;
}
constexpr void System::Data::DataSet::__cordl_internal_set_DataRowCreated(::System::Data::DataRowCreatedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DataRowCreated = value;
}
constexpr ::System::Data::DataSetClearEventhandler*& System::Data::DataSet::__cordl_internal_get_ClearFunctionCalled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ClearFunctionCalled;
}
constexpr ::System::Data::DataSetClearEventhandler* const& System::Data::DataSet::__cordl_internal_get_ClearFunctionCalled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ClearFunctionCalled;
}
constexpr void System::Data::DataSet::__cordl_internal_set_ClearFunctionCalled(::System::Data::DataSetClearEventhandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ClearFunctionCalled = value;
}
inline void System::Data::DataSet::setStaticF_s_objectTypeCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_objectTypeCount", ::System::Data::DataSet*>(std::forward<int32_t>(value));
}
inline int32_t System::Data::DataSet::getStaticF_s_objectTypeCount() {
  return ::cordl_internals::getStaticField<int32_t, "s_objectTypeCount", ::System::Data::DataSet*>();
}
inline void System::Data::DataSet::setStaticF_s_schemaTypeForWSDL(::System::Xml::Schema::XmlSchemaComplexType* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::XmlSchemaComplexType*, "s_schemaTypeForWSDL", ::System::Data::DataSet*>(std::forward<::System::Xml::Schema::XmlSchemaComplexType*>(value));
}
inline ::System::Xml::Schema::XmlSchemaComplexType* System::Data::DataSet::getStaticF_s_schemaTypeForWSDL() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::XmlSchemaComplexType*, "s_schemaTypeForWSDL", ::System::Data::DataSet*>();
}
inline void System::Data::DataSet::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataSet::_ctor(::StringW dataSetName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSetName);
}
inline ::System::Data::SerializationFormat System::Data::DataSet::get_RemotingFormat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "get_RemotingFormat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SerializationFormat>(this, ___internal_method);
}
inline void System::Data::DataSet::set_RemotingFormat(::System::Data::SerializationFormat value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "set_RemotingFormat", {}, { ::i2c::type_of<::System::Data::SerializationFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Data::SchemaSerializationMode System::Data::DataSet::get_SchemaSerializationMode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataSet*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SchemaSerializationMode>(this, ___internal_method);
}
inline void System::Data::DataSet::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Data::DataSet::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, bool ConstructSchema) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Data::DataSet*>(),
          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context, ConstructSchema);
}
inline void System::Data::DataSet::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataSet*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Data::DataSet::InitializeDerivedDataSet() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataSet*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataSet::SerializeDataSet(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context,
                                                    ::System::Data::SerializationFormat remotingFormat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(),
                                                           { "SerializeDataSet",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<::System::Data::SerializationFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context, remotingFormat);
}
inline void System::Data::DataSet::DeserializeDataSet(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context,
                                                      ::System::Data::SerializationFormat remotingFormat, ::System::Data::SchemaSerializationMode schemaSerializationMode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(),
                                              { "DeserializeDataSet",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(),
                                                  ::i2c::type_of<::System::Data::SerializationFormat>(), ::i2c::type_of<::System::Data::SchemaSerializationMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context, remotingFormat, schemaSerializationMode);
}
inline void System::Data::DataSet::DeserializeDataSetSchema(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context,
                                                            ::System::Data::SerializationFormat remotingFormat, ::System::Data::SchemaSerializationMode schemaSerializationMode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(),
                                              { "DeserializeDataSetSchema",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(),
                                                  ::i2c::type_of<::System::Data::SerializationFormat>(), ::i2c::type_of<::System::Data::SchemaSerializationMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context, remotingFormat, schemaSerializationMode);
}
inline void System::Data::DataSet::DeserializeDataSetData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context,
                                                          ::System::Data::SerializationFormat remotingFormat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(),
                                                           { "DeserializeDataSetData",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<::System::Data::SerializationFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context, remotingFormat);
}
inline void System::Data::DataSet::SerializeDataSetProperties(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Data::DataSet*>(),
          { "SerializeDataSetProperties", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Data::DataSet::DeserializeDataSetProperties(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Data::DataSet*>(),
          { "DeserializeDataSetProperties", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Data::DataSet::SerializeRelations(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Data::DataSet*>(),
          { "SerializeRelations", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Data::DataSet::DeserializeRelations(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Data::DataSet*>(),
          { "DeserializeRelations", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Data::DataSet::FailedEnableConstraints() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "FailedEnableConstraints", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Data::DataSet::get_CaseSensitive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "get_CaseSensitive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::DataSet::set_CaseSensitive(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "set_CaseSensitive", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Data::DataSet::get_EnforceConstraints() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "get_EnforceConstraints", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::DataSet::set_EnforceConstraints(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "set_EnforceConstraints", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Data::DataSet::RestoreEnforceConstraints(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "RestoreEnforceConstraints", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Data::DataSet::EnableConstraints() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "EnableConstraints", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Data::DataSet::get_DataSetName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "get_DataSetName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Data::DataSet::set_DataSetName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "set_DataSetName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Data::DataSet::get_Namespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "get_Namespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Data::DataSet::set_Namespace(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "set_Namespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Data::DataSet::get_Prefix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "get_Prefix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Data::DataSet::set_Prefix(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "set_Prefix", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Data::PropertyCollection* System::Data::DataSet::get_ExtendedProperties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "get_ExtendedProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::PropertyCollection*>(this, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Data::DataSet::get_Locale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "get_Locale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(this, ___internal_method);
}
inline void System::Data::DataSet::set_Locale(::System::Globalization::CultureInfo* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "set_Locale", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Data::DataSet::SetLocaleValue(::System::Globalization::CultureInfo* value, bool userSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "SetLocaleValue", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, userSet);
}
inline bool System::Data::DataSet::ShouldSerializeLocale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "ShouldSerializeLocale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ComponentModel::ISite* System::Data::DataSet::get_Site() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataSet*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ISite*>(this, ___internal_method);
}
inline ::System::Data::DataRelationCollection* System::Data::DataSet::get_Relations() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "get_Relations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRelationCollection*>(this, ___internal_method);
}
inline ::System::Data::DataTableCollection* System::Data::DataSet::get_Tables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "get_Tables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTableCollection*>(this, ___internal_method);
}
inline void System::Data::DataSet::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Data::DataSet* System::Data::DataSet::Clone() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataSet*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataSet*>(this, ___internal_method);
}
inline int32_t System::Data::DataSet::EstimatedXmlStringSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "EstimatedXmlStringSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Data::DataSet::GetRemotingDiffGram(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "GetRemotingDiffGram", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, table);
}
inline ::StringW System::Data::DataSet::GetXmlSchemaForRemoting(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "GetXmlSchemaForRemoting", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, table);
}
inline void System::Data::DataSet::ReadXmlSchema(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "ReadXmlSchema", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void System::Data::DataSet::ReadXmlSchema(::System::Xml::XmlReader* reader, bool denyResolving) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "ReadXmlSchema", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, denyResolving);
}
inline bool System::Data::DataSet::MoveToElement(::System::Xml::XmlReader* reader, int32_t depth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "MoveToElement", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reader, depth);
}
inline void System::Data::DataSet::MoveToElement(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "MoveToElement", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, reader);
}
inline void System::Data::DataSet::ReadEndElement(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "ReadEndElement", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void System::Data::DataSet::ReadXSDSchema(::System::Xml::XmlReader* reader, bool denyResolving) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "ReadXSDSchema", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, denyResolving);
}
inline void System::Data::DataSet::ReadXDRSchema(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "ReadXDRSchema", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void System::Data::DataSet::WriteXmlSchema(::System::Xml::XmlWriter* writer, ::System::Data::SchemaFormat schemaFormat,
                                                  ::System::Converter_2<::System::Type*, ::StringW>* multipleTargetConverter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "WriteXmlSchema",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::System::Xml::XmlWriter*>(), ::i2c::type_of<::System::Data::SchemaFormat>(),
                                                                                                            ::i2c::type_of<::System::Converter_2<::System::Type*, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, schemaFormat, multipleTargetConverter);
}
inline ::System::Data::XmlReadMode System::Data::DataSet::ReadXml(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::XmlReadMode>(this, ___internal_method, reader);
}
inline ::System::Data::XmlReadMode System::Data::DataSet::ReadXml(::System::Xml::XmlReader* reader, bool denyResolving) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::XmlReadMode>(this, ___internal_method, reader, denyResolving);
}
inline void System::Data::DataSet::InferSchema(::System::Xml::XmlDocument* xdoc, ::ArrayW<::StringW> excludedNamespaces, ::System::Data::XmlReadMode mode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(),
                          { "InferSchema", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Data::XmlReadMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xdoc, excludedNamespaces, mode);
}
inline bool System::Data::DataSet::IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::DataSet::ReadXmlDiffgram(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "ReadXmlDiffgram", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline ::System::Data::XmlReadMode System::Data::DataSet::ReadXml(::System::Xml::XmlReader* reader, ::System::Data::XmlReadMode mode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::System::Data::XmlReadMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::XmlReadMode>(this, ___internal_method, reader, mode);
}
inline ::System::Data::XmlReadMode System::Data::DataSet::ReadXml(::System::Xml::XmlReader* reader, ::System::Data::XmlReadMode mode, bool denyResolving) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(),
                                                           { "ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::System::Data::XmlReadMode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::XmlReadMode>(this, ___internal_method, reader, mode, denyResolving);
}
inline void System::Data::DataSet::WriteXml(::System::Xml::XmlWriter* writer, ::System::Data::XmlWriteMode mode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>(), ::i2c::type_of<::System::Data::XmlWriteMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, mode);
}
inline void System::Data::DataSet::Merge(::System::Data::DataSet* dataSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "Merge", {}, { ::i2c::type_of<::System::Data::DataSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSet);
}
inline void System::Data::DataSet::Merge(::System::Data::DataSet* dataSet, bool preserveChanges, ::System::Data::MissingSchemaAction missingSchemaAction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(),
                                              { "Merge", {}, { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Data::MissingSchemaAction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSet, preserveChanges, missingSchemaAction);
}
inline void System::Data::DataSet::OnPropertyChanging(::System::ComponentModel::PropertyChangedEventArgs* pcevent) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataSet*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pcevent);
}
inline void System::Data::DataSet::OnMergeFailed(::System::Data::MergeFailedEventArgs* mfevent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "OnMergeFailed", {}, { ::i2c::type_of<::System::Data::MergeFailedEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mfevent);
}
inline void System::Data::DataSet::RaiseMergeFailed(::System::Data::DataTable* table, ::StringW conflict, ::System::Data::MissingSchemaAction missingSchemaAction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(),
                          { "RaiseMergeFailed", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Data::MissingSchemaAction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, conflict, missingSchemaAction);
}
inline void System::Data::DataSet::OnDataRowCreated(::System::Data::DataRow* row) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "OnDataRowCreated", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row);
}
inline void System::Data::DataSet::OnClearFunctionCalled(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "OnClearFunctionCalled", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline void System::Data::DataSet::OnRemoveTable(::System::Data::DataTable* table) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataSet*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline void System::Data::DataSet::OnRemovedTable(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "OnRemovedTable", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline void System::Data::DataSet::OnRemoveRelation(::System::Data::DataRelation* relation) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataSet*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, relation);
}
inline void System::Data::DataSet::OnRemoveRelationHack(::System::Data::DataRelation* relation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "OnRemoveRelationHack", {}, { ::i2c::type_of<::System::Data::DataRelation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, relation);
}
inline void System::Data::DataSet::RaisePropertyChanging(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "RaisePropertyChanging", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::ArrayW<::System::Data::DataTable*> System::Data::DataSet::TopLevelTables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "TopLevelTables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataTable*>>(this, ___internal_method);
}
inline ::ArrayW<::System::Data::DataTable*> System::Data::DataSet::TopLevelTables(bool forSchema) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "TopLevelTables", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataTable*>>(this, ___internal_method, forSchema);
}
inline void System::Data::DataSet::Reset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataSet*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Data::DataSet::ValidateCaseConstraint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "ValidateCaseConstraint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataSet::ValidateLocaleConstraint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "ValidateLocaleConstraint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Data::DataTable* System::Data::DataSet::FindTable(::System::Data::DataTable* baseTable, ::ArrayW<::System::ComponentModel::PropertyDescriptor*> props, int32_t propStart) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Data::DataSet*>(),
                       { "FindTable", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::ArrayW<::System::ComponentModel::PropertyDescriptor*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method, baseTable, props, propStart);
}
inline void System::Data::DataSet::ReadXmlSerializable(::System::Xml::XmlReader* reader) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataSet*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline ::System::Xml::Schema::XmlSchemaComplexType* System::Data::DataSet::GetDataSetSchema(::System::Xml::Schema::XmlSchemaSet* schemaSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "GetDataSetSchema", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaComplexType*>(nullptr, ___internal_method, schemaSet);
}
inline ::System::Xml::Schema::XmlSchema* System::Data::DataSet::System_Xml_Serialization_IXmlSerializable_GetSchema() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "System.Xml.Serialization.IXmlSerializable.GetSchema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(this, ___internal_method);
}
inline void System::Data::DataSet::System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "System.Xml.Serialization.IXmlSerializable.ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void System::Data::DataSet::System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "System.Xml.Serialization.IXmlSerializable.WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline ::StringW System::Data::DataSet::get_MainTableName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "get_MainTableName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Data::DataSet::set_MainTableName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "set_MainTableName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Data::DataSet::get_ObjectID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataSet*>(), { "get_ObjectID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Data::DataSet* System::Data::DataSet::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataSet*>());
}
inline ::System::Data::DataSet* System::Data::DataSet::New_ctor(::StringW dataSetName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataSet*>(dataSetName));
}
inline ::System::Data::DataSet* System::Data::DataSet::New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataSet*>(info, context));
}
inline ::System::Data::DataSet* System::Data::DataSet::New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context,
                                                                bool ConstructSchema) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataSet*>(info, context, ConstructSchema));
}
/// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
constexpr System::Data::DataSet::operator ::System::Xml::Serialization::IXmlSerializable*() noexcept {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
constexpr ::System::Xml::Serialization::IXmlSerializable* System::Data::DataSet::i___System__Xml__Serialization__IXmlSerializable() noexcept {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Data::DataSet::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Data::DataSet::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Data::DataSet::DataSet() {}
