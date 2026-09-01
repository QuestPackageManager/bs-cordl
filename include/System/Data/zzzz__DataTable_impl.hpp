#pragma once
// IWYU pragma private; include "System\Data\DataTable.hpp"
#include "System/ComponentModel/zzzz__MarshalByValueComponent_impl.hpp"
#include "System/Data/zzzz__DataColumn_impl.hpp"
#include "System/Data/zzzz__DataRelation_impl.hpp"
#include "System/Data/zzzz__DataRow_impl.hpp"
#include "System/Data/zzzz__IndexField_impl.hpp"
#include "System/Data/zzzz__SerializationFormat_impl.hpp"
#include "System/Globalization/zzzz__CompareOptions_impl.hpp"
#include "System/zzzz__Decimal_impl.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__BitArray_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/ComponentModel/zzzz__ISite_def.hpp"
#include "System/ComponentModel/zzzz__PropertyChangedEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__PropertyChangedEventHandler_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptorCollection_def.hpp"
#include "System/Data/zzzz__ConstraintCollection_def.hpp"
#include "System/Data/zzzz__DataColumnChangeEventArgs_def.hpp"
#include "System/Data/zzzz__DataColumnChangeEventHandler_def.hpp"
#include "System/Data/zzzz__DataColumnCollection_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataExpression_def.hpp"
#include "System/Data/zzzz__DataKey_def.hpp"
#include "System/Data/zzzz__DataRelationCollection_def.hpp"
#include "System/Data/zzzz__DataRelation_def.hpp"
#include "System/Data/zzzz__DataRowAction_def.hpp"
#include "System/Data/zzzz__DataRowBuilder_def.hpp"
#include "System/Data/zzzz__DataRowChangeEventArgs_def.hpp"
#include "System/Data/zzzz__DataRowChangeEventHandler_def.hpp"
#include "System/Data/zzzz__DataRowCollection_def.hpp"
#include "System/Data/zzzz__DataRowState_def.hpp"
#include "System/Data/zzzz__DataRowVersion_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
#include "System/Data/zzzz__DataTableClearEventArgs_def.hpp"
#include "System/Data/zzzz__DataTableClearEventHandler_def.hpp"
#include "System/Data/zzzz__DataTableNewRowEventArgs_def.hpp"
#include "System/Data/zzzz__DataTableNewRowEventHandler_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__DataViewListener_def.hpp"
#include "System/Data/zzzz__DataViewRowState_def.hpp"
#include "System/Data/zzzz__DataView_def.hpp"
#include "System/Data/zzzz__IFilter_def.hpp"
#include "System/Data/zzzz__IndexField_def.hpp"
#include "System/Data/zzzz__Index_def.hpp"
#include "System/Data/zzzz__MissingSchemaAction_def.hpp"
#include "System/Data/zzzz__PropertyCollection_def.hpp"
#include "System/Data/zzzz__RecordManager_def.hpp"
#include "System/Data/zzzz__SerializationFormat_def.hpp"
#include "System/Data/zzzz__UniqueConstraint_def.hpp"
#include "System/Data/zzzz__XmlReadMode_def.hpp"
#include "System/Data/zzzz__XmlWriteMode_def.hpp"
#include "System/Globalization/zzzz__CompareInfo_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Threading/zzzz__ReaderWriterLockSlim_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaComplexType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__StringComparer_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::DataTable_RowDiffIdUsageSection.Prepare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable_RowDiffIdUsageSection::*)(::System::Data::DataTable*)>(
    &::System::Data::DataTable_RowDiffIdUsageSection::Prepare)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x60160fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable_RowDiffIdUsageSection>(), { "Prepare", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
inline void System::Data::DataTable_RowDiffIdUsageSection::Prepare(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable_RowDiffIdUsageSection>(), { "Prepare", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, table);
}
// Ctor Parameters [CppParam { name: "_targetTable", ty: "::System::Data::DataTable*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::DataTable_RowDiffIdUsageSection::DataTable_RowDiffIdUsageSection(::System::Data::DataTable* _targetTable) noexcept {
  this->_targetTable = _targetTable;
}
// Ctor Parameters []
constexpr ::System::Data::DataTable_RowDiffIdUsageSection::DataTable_RowDiffIdUsageSection() {}
//  Writing Method size for method: ::System::Data::DataTable_DSRowDiffIdUsageSection.Prepare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable_DSRowDiffIdUsageSection::*)(::System::Data::DataSet*)>(
    &::System::Data::DataTable_DSRowDiffIdUsageSection::Prepare)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6012850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable_DSRowDiffIdUsageSection>(), { "Prepare", {}, { ::i2c::type_of<::System::Data::DataSet*>() } })));
    return ___internal_method;
  }
};
inline void System::Data::DataTable_DSRowDiffIdUsageSection::Prepare(::System::Data::DataSet* ds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable_DSRowDiffIdUsageSection>(), { "Prepare", {}, { ::i2c::type_of<::System::Data::DataSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ds);
}
// Ctor Parameters [CppParam { name: "_targetDS", ty: "::System::Data::DataSet*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::DataTable_DSRowDiffIdUsageSection::DataTable_DSRowDiffIdUsageSection(::System::Data::DataSet* _targetDS) noexcept {
  this->_targetDS = _targetDS;
}
// Ctor Parameters []
constexpr ::System::Data::DataTable_DSRowDiffIdUsageSection::DataTable_DSRowDiffIdUsageSection() {}
//  Writing Method size for method: ::System::Data::DataTable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)()>(&::System::Data::DataTable::_ctor)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x5fe4e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::StringW)>(&::System::Data::DataTable::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5fe5364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Data::DataTable::_ctor)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5fe53d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Data::DataTable::GetObjectData)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5fe587c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { ::i2c::class_of<::System::Data::DataTable*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SerializeDataTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext,
                                                                                           bool, ::System::Data::SerializationFormat)>(&::System::Data::DataTable::SerializeDataTable)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x5fe595c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "SerializeDataTable",
                                                                                                              {},
                                                                                                              { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                                                ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(),
                                                                                                                ::i2c::type_of<bool>(), ::i2c::type_of<::System::Data::SerializationFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.DeserializeDataTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext,
                                                                                           bool, ::System::Data::SerializationFormat)>(&::System::Data::DataTable::DeserializeDataTable)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x5fe558c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "DeserializeDataTable",
                                                                                                              {},
                                                                                                              { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                                                ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(),
                                                                                                                ::i2c::type_of<bool>(), ::i2c::type_of<::System::Data::SerializationFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SerializeTableSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext,
                                                                                           bool)>(&::System::Data::DataTable::SerializeTableSchema)> {
  constexpr static std::size_t size = 0xfe8;
  constexpr static std::size_t addrs = 0x5fe5c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "SerializeTableSchema",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                                   ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.DeserializeTableSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext,
                                                                                           bool)>(&::System::Data::DataTable::DeserializeTableSchema)> {
  constexpr static std::size_t size = 0x114c;
  constexpr static std::size_t addrs = 0x5fe7348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "DeserializeTableSchema",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                                   ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SerializeConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext,
                                                                                           int32_t, bool)>(&::System::Data::DataTable::SerializeConstraints)> {
  constexpr static std::size_t size = 0x744;
  constexpr static std::size_t addrs = 0x5fea3c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                             { "SerializeConstraints",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.DeserializeConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext,
                                                                                           int32_t, bool)>(&::System::Data::DataTable::DeserializeConstraints)> {
  constexpr static std::size_t size = 0xc9c;
  constexpr static std::size_t addrs = 0x5feb38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                             { "DeserializeConstraints",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SerializeExpressionColumns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext,
                                                                                           int32_t)>(&::System::Data::DataTable::SerializeExpressionColumns)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5fec028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "SerializeExpressionColumns",
                                                                                          {},
                                                                                          { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                            ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.DeserializeExpressionColumns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext,
                                                                                           int32_t)>(&::System::Data::DataTable::DeserializeExpressionColumns)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5fec1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "DeserializeExpressionColumns",
                                                                                          {},
                                                                                          { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                            ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SerializeTableData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext,
                                                                                           int32_t)>(&::System::Data::DataTable::SerializeTableData)> {
  constexpr static std::size_t size = 0x6c4;
  constexpr static std::size_t addrs = 0x5fe6bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "SerializeTableData",
                                                                                          {},
                                                                                          { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                            ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.DeserializeTableData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext,
                                                                                           int32_t)>(&::System::Data::DataTable::DeserializeTableData)> {
  constexpr static std::size_t size = 0xacc;
  constexpr static std::size_t addrs = 0x5fe8494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "DeserializeTableData",
                                                                                          {},
                                                                                          { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                            ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ConvertToRowState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRowState (::System::Data::DataTable::*)(::System::Collections::BitArray*, int32_t)>(
    &::System::Data::DataTable::ConvertToRowState)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5fec5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "ConvertToRowState", {}, { ::i2c::type_of<::System::Collections::BitArray*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.GetRowAndColumnErrors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(int32_t, ::System::Collections::Hashtable*, ::System::Collections::Hashtable*)>(
    &::System::Data::DataTable::GetRowAndColumnErrors)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5fec328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                            { "GetRowAndColumnErrors", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Hashtable*>(), ::i2c::type_of<::System::Collections::Hashtable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ConvertToRowError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(int32_t, ::System::Collections::Hashtable*, ::System::Collections::Hashtable*)>(
    &::System::Data::DataTable::ConvertToRowError)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x5fec694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                            { "ConvertToRowError", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Hashtable*>(), ::i2c::type_of<::System::Collections::Hashtable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_CaseSensitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_CaseSensitive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fec950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_CaseSensitive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_CaseSensitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(bool)>(&::System::Data::DataTable::set_CaseSensitive)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5fec958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_CaseSensitive", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_AreIndexEventsSuspended
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_AreIndexEventsSuspended)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fec9f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_AreIndexEventsSuspended", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RestoreIndexEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(bool)>(&::System::Data::DataTable::RestoreIndexEvents)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x5feca08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "RestoreIndexEvents", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SuspendIndexEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)()>(&::System::Data::DataTable::SuspendIndexEvents)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5fecde8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "SuspendIndexEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_IsTypedDataTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_IsTypedDataTable)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5fecea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_IsTypedDataTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SetCaseSensitiveValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTable::*)(bool, bool, bool)>(&::System::Data::DataTable::SetCaseSensitiveValue)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5feab04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "SetCaseSensitiveValue", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ShouldSerializeCaseSensitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTable::*)()>(&::System::Data::DataTable::ShouldSerializeCaseSensitive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fecf44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "ShouldSerializeCaseSensitive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_SelfNested
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_SelfNested)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x5fecf4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_SelfNested", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_LiveIndexes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Data::Index*>* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_LiveIndexes)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5fed2b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_LiveIndexes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_RemotingFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SerializationFormat (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_RemotingFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fed368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_RemotingFormat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_RemotingFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::SerializationFormat)>(&::System::Data::DataTable::set_RemotingFormat)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5fed370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_RemotingFormat", {}, { ::i2c::type_of<::System::Data::SerializationFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_UKColumnPositionForInference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_UKColumnPositionForInference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fed3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_UKColumnPositionForInference", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_UKColumnPositionForInference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(int32_t)>(&::System::Data::DataTable::set_UKColumnPositionForInference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fed3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_UKColumnPositionForInference", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_ChildRelations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRelationCollection* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_ChildRelations)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5fed3e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_ChildRelations", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_Columns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataColumnCollection* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_Columns)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fed450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_Columns", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_CompareInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CompareInfo* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_CompareInfo)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5fed458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_CompareInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_Constraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::ConstraintCollection* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_Constraints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fed48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_Constraints", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ResetConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)()>(&::System::Data::DataTable::ResetConstraints)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fed494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "ResetConstraints", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_DataSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataSet* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_DataSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fed4ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_DataSet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SetDataSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataSet*)>(&::System::Data::DataTable::SetDataSet)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5fed4b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "SetDataSet", {}, { ::i2c::type_of<::System::Data::DataSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_DisplayExpressionInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_DisplayExpressionInternal)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5fed558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_DisplayExpressionInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_EnforceConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_EnforceConstraints)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fed5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_EnforceConstraints", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_EnforceConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(bool)>(&::System::Data::DataTable::set_EnforceConstraints)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fed5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_EnforceConstraints", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_SuspendEnforceConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_SuspendEnforceConstraints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fedbc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_SuspendEnforceConstraints", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_SuspendEnforceConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(bool)>(&::System::Data::DataTable::set_SuspendEnforceConstraints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fedbd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_SuspendEnforceConstraints", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.EnableConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)()>(&::System::Data::DataTable::EnableConstraints)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x5fed638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "EnableConstraints", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_ExtendedProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::PropertyCollection* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_ExtendedProperties)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5fe9eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_ExtendedProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_FormatProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IFormatProvider* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_FormatProvider)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5fedbd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_FormatProvider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_Locale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_Locale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fedc6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_Locale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_Locale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Globalization::CultureInfo*)>(&::System::Data::DataTable::set_Locale)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x5fedc74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_Locale", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SetLocaleValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTable::*)(::System::Globalization::CultureInfo*, bool, bool)>(&::System::Data::DataTable::SetLocaleValue)> {
  constexpr static std::size_t size = 0x55c;
  constexpr static std::size_t addrs = 0x5feae08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                             { "SetLocaleValue", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ShouldSerializeLocale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTable::*)()>(&::System::Data::DataTable::ShouldSerializeLocale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fee0f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "ShouldSerializeLocale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_MinimumCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_MinimumCapacity)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fee0fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_MinimumCapacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_MinimumCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(int32_t)>(&::System::Data::DataTable::set_MinimumCapacity)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5feb364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_MinimumCapacity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_RecordCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_RecordCapacity)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fee114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_RecordCapacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_ElementColumnCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_ElementColumnCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fee12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_ElementColumnCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_ElementColumnCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(int32_t)>(&::System::Data::DataTable::set_ElementColumnCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5fee134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_ElementColumnCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_ParentRelations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRelationCollection* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_ParentRelations)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5fed240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_ParentRelations", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_MergingData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_MergingData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fee174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_MergingData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_MergingData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(bool)>(&::System::Data::DataTable::set_MergingData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fee17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_MergingData", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_NestedParentRelations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Data::DataRelation*> (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_NestedParentRelations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fee184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_NestedParentRelations", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_SchemaLoading
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_SchemaLoading)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fee18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_SchemaLoading", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CacheNestedParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)()>(&::System::Data::DataTable::CacheNestedParent)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fee194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "CacheNestedParent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.FindNestedParentRelations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Data::DataRelation*> (::System::Data::DataTable::*)()>(&::System::Data::DataTable::FindNestedParentRelations)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x5fee1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "FindNestedParentRelations", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_NestedParentsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_NestedParentsCount)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5fee60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_NestedParentsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_PrimaryKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Data::DataColumn*> (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_PrimaryKey)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5fee8d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_PrimaryKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_PrimaryKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::ArrayW<::System::Data::DataColumn*>)>(&::System::Data::DataTable::set_PrimaryKey)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x5fee994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_PrimaryKey", {}, { ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_Rows
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRowCollection* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_Rows)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5feed6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_Rows", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_TableName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_TableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5feed74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_TableName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_TableName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::StringW)>(&::System::Data::DataTable::set_TableName)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x5feed7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_TableName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_EncodedTableName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_EncodedTableName)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5fef2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_EncodedTableName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.GetInheritedNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataTable::*)(::System::Collections::Generic::List_1<::System::Data::DataTable*>*)>(
    &::System::Data::DataTable::GetInheritedNamespace)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x5fef338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                             { "GetInheritedNamespace", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Data::DataTable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_Namespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_Namespace)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5fe72bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_Namespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_Namespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::StringW)>(&::System::Data::DataTable::set_Namespace)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x5fe9b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_Namespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.IsNamespaceInherited
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTable::*)()>(&::System::Data::DataTable::IsNamespaceInherited)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ff0288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "IsNamespaceInherited", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CheckCascadingNamespaceConflict
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::StringW)>(&::System::Data::DataTable::CheckCascadingNamespaceConflict)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x5fef58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "CheckCascadingNamespaceConflict", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CheckNamespaceValidityForNestedRelations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::StringW)>(&::System::Data::DataTable::CheckNamespaceValidityForNestedRelations)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x5fef93c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "CheckNamespaceValidityForNestedRelations", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CheckNamespaceValidityForNestedParentRelations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::StringW, ::System::Data::DataTable*)>(
    &::System::Data::DataTable::CheckNamespaceValidityForNestedParentRelations)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x5ff0298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                             { "CheckNamespaceValidityForNestedParentRelations", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.DoRaiseNamespaceChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)()>(&::System::Data::DataTable::DoRaiseNamespaceChange)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0x5fefd20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "DoRaiseNamespaceChange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_Prefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_Prefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ff05f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_Prefix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_Prefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::StringW)>(&::System::Data::DataTable::set_Prefix)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5ff05f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_Prefix", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_XmlText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataColumn* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_XmlText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ff0758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_XmlText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_XmlText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataColumn*)>(&::System::Data::DataTable::set_XmlText)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5ff0760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_XmlText", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_MaxOccurs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_MaxOccurs)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ff0808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_MaxOccurs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_MaxOccurs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Decimal)>(&::System::Data::DataTable::set_MaxOccurs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ff0814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_MaxOccurs", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_MinOccurs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_MinOccurs)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ff081c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_MinOccurs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_MinOccurs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Decimal)>(&::System::Data::DataTable::set_MinOccurs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ff0828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_MinOccurs", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SetKeyValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataKey, ::ArrayW<::System::Object*>, int32_t)>(&::System::Data::DataTable::SetKeyValues)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ff0830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                { "SetKeyValues", {}, { ::i2c::type_of<::System::Data::DataKey>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.FindByIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRow* (::System::Data::DataTable::*)(::System::Data::Index*, ::ArrayW<::System::Object*>)>(
    &::System::Data::DataTable::FindByIndex)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5ff08bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "FindByIndex", {}, { ::i2c::type_of<::System::Data::Index*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.FindMergeTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRow* (::System::Data::DataTable::*)(::System::Data::DataRow*, ::System::Data::DataKey, ::System::Data::Index*)>(
    &::System::Data::DataTable::FindMergeTarget)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ff0954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                            { "FindMergeTarget", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataKey>(), ::i2c::type_of<::System::Data::Index*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SetMergeRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*, int32_t, int32_t, ::System::Data::DataRowAction)>(
    &::System::Data::DataTable::SetMergeRecords)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5ff09c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Data::DataTable*>(),
            { "SetMergeRecords", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::DataRowAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.MergeRow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRow* (::System::Data::DataTable::*)(::System::Data::DataRow*, ::System::Data::DataRow*, bool, ::System::Data::Index*)>(
    &::System::Data::DataTable::MergeRow)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x5ff0e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Data::DataTable*>(),
            { "MergeRow", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Data::Index*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::CreateInstance)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ff190c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { ::i2c::class_of<::System::Data::DataTable*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::Clone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ff199c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { ::i2c::class_of<::System::Data::DataTable*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::DataTable::*)(::System::Data::DataSet*)>(&::System::Data::DataTable::Clone)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5ff19a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "Clone", {}, { ::i2c::type_of<::System::Data::DataSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.IncrementalCloneTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::DataTable::*)(::System::Data::DataTable*, ::System::Data::DataTable*)>(
    &::System::Data::DataTable::IncrementalCloneTo)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x5ff1b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                             { "IncrementalCloneTo", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CloneHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::DataTable::*)(::System::Data::DataTable*, ::System::Data::DataSet*,
                                                                                                                 ::System::Collections::Hashtable*)>(&::System::Data::DataTable::CloneHierarchy)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x5ff1e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Data::DataTable*>(),
                         { "CloneHierarchy", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Collections::Hashtable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CloneTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::DataTable::*)(::System::Data::DataTable*, ::System::Data::DataSet*, bool)>(
    &::System::Data::DataTable::CloneTo)> {
  constexpr static std::size_t size = 0xc28;
  constexpr static std::size_t addrs = 0x5fe8f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                             { "CloneTo", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_Site
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ISite* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_Site)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ff22f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { ::i2c::class_of<::System::Data::DataTable*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.AddRow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*, int32_t)>(&::System::Data::DataTable::AddRow)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ff22fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "AddRow", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.InsertRow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*, int32_t, int32_t)>(&::System::Data::DataTable::InsertRow)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ff230c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "InsertRow", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.InsertRow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*, int64_t, int32_t, bool)>(&::System::Data::DataTable::InsertRow)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x5ff2318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                { "InsertRow", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CheckNotModifying
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*)>(&::System::Data::DataTable::CheckNotModifying)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ff30a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "CheckNotModifying", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)()>(&::System::Data::DataTable::Clear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ff30d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(bool)>(&::System::Data::DataTable::Clear)> {
  constexpr static std::size_t size = 0x7dc;
  constexpr static std::size_t addrs = 0x5ff30d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "Clear", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CascadeAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*, ::System::Data::DataRowAction)>(&::System::Data::DataTable::CascadeAll)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5ff39dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "CascadeAll", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CommitRow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*)>(&::System::Data::DataTable::CommitRow)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ff3a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "CommitRow", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataTable::*)(::StringW, ::StringW)>(&::System::Data::DataTable::Compare)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ff3c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "Compare", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataTable::*)(::StringW, ::StringW, ::System::Globalization::CompareInfo*)>(&::System::Data::DataTable::Compare)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5ff3c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                { "Compare", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataTable::*)(::StringW, ::StringW)>(&::System::Data::DataTable::IndexOf)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5ff3d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "IndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.IsSuffix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTable::*)(::StringW, ::StringW)>(&::System::Data::DataTable::IsSuffix)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5ff3db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "IsSuffix", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.DeleteRow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*)>(&::System::Data::DataTable::DeleteRow)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ff3df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "DeleteRow", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.FormatSortString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataTable::*)(::ArrayW<::System::Data::IndexField>)>(&::System::Data::DataTable::FormatSortString)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5ff3e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "FormatSortString", {}, { ::i2c::type_of<::ArrayW<::System::Data::IndexField>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.FreeRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::by_ref<int32_t>)>(&::System::Data::DataTable::FreeRecord)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ff3f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "FreeRecord", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.GetIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Index* (::System::Data::DataTable::*)(::StringW, ::System::Data::DataViewRowState, ::System::Data::IFilter*)>(
    &::System::Data::DataTable::GetIndex)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5ff3fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                { "GetIndex", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Data::DataViewRowState>(), ::i2c::type_of<::System::Data::IFilter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.GetIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Index* (::System::Data::DataTable::*)(::ArrayW<::System::Data::IndexField>, ::System::Data::DataViewRowState,
                                                                                                             ::System::Data::IFilter*)>(&::System::Data::DataTable::GetIndex)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5ff4330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Data::DataTable*>(),
            { "GetIndex", {}, { ::i2c::type_of<::ArrayW<::System::Data::IndexField>>(), ::i2c::type_of<::System::Data::DataViewRowState>(), ::i2c::type_of<::System::Data::IFilter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.GetListeners
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Data::DataViewListener*>* (::System::Data::DataTable::*)()>(
    &::System::Data::DataTable::GetListeners)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ff450c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "GetListeners", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.GetSpecialHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataTable::*)(::StringW)>(&::System::Data::DataTable::GetSpecialHashCode)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5fee00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "GetSpecialHashCode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.InsertRow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*, int64_t)>(&::System::Data::DataTable::InsertRow)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x5ff1430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "InsertRow", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.NewRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataTable::*)()>(&::System::Data::DataTable::NewRecord)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ff517c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "NewRecord", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.NewUninitializedRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataTable::*)()>(&::System::Data::DataTable::NewUninitializedRecord)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ff5274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "NewUninitializedRecord", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.NewRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataTable::*)(int32_t)>(&::System::Data::DataTable::NewRecord)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5ff5184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "NewRecord", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.NewEmptyRow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRow* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::NewEmptyRow)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5fec594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "NewEmptyRow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.NewUninitializedRow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRow* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::NewUninitializedRow)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ff528c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "NewUninitializedRow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.NewRow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRow* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::NewRow)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5ff5354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "NewRow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CreateEmptyRow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRow* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::CreateEmptyRow)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x5ff541c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "CreateEmptyRow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.NewRowCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*)>(&::System::Data::DataTable::NewRowCreated)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ff5388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "NewRowCreated", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.NewRow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRow* (::System::Data::DataTable::*)(int32_t)>(&::System::Data::DataTable::NewRow)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ff52b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "NewRow", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.NewRowFromBuilder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRow* (::System::Data::DataTable::*)(::System::Data::DataRowBuilder*)>(&::System::Data::DataTable::NewRowFromBuilder)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ff57cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { ::i2c::class_of<::System::Data::DataTable*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.GetRowType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::GetRowType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ff582c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { ::i2c::class_of<::System::Data::DataTable*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.NewRowArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Data::DataRow*> (::System::Data::DataTable::*)(int32_t)>(&::System::Data::DataTable::NewRowArray)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5ff588c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "NewRowArray", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_NeedColumnChangeEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_NeedColumnChangeEvents)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5ff5a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_NeedColumnChangeEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.OnColumnChanging
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataColumnChangeEventArgs*)>(&::System::Data::DataTable::OnColumnChanging)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5ff5a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { ::i2c::class_of<::System::Data::DataTable*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.OnColumnChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataColumnChangeEventArgs*)>(&::System::Data::DataTable::OnColumnChanged)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5ff5b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { ::i2c::class_of<::System::Data::DataTable*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.OnPropertyChanging
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::ComponentModel::PropertyChangedEventArgs*)>(&::System::Data::DataTable::OnPropertyChanging)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5ff5c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { ::i2c::class_of<::System::Data::DataTable*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.OnRemoveColumnInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataColumn*)>(&::System::Data::DataTable::OnRemoveColumnInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ff5d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "OnRemoveColumnInternal", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.OnRemoveColumn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataColumn*)>(&::System::Data::DataTable::OnRemoveColumn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ff5d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { ::i2c::class_of<::System::Data::DataTable*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.OnRowChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRowChangeEventArgs* (
    ::System::Data::DataTable::*)(::System::Data::DataRowChangeEventArgs*, ::System::Data::DataRow*, ::System::Data::DataRowAction)>(&::System::Data::DataTable::OnRowChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5ff3bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Data::DataTable*>(),
            { "OnRowChanged", {}, { ::i2c::type_of<::System::Data::DataRowChangeEventArgs*>(), ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.OnRowChanging
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRowChangeEventArgs* (
    ::System::Data::DataTable::*)(::System::Data::DataRowChangeEventArgs*, ::System::Data::DataRow*, ::System::Data::DataRowAction)>(&::System::Data::DataTable::OnRowChanging)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5ff3b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Data::DataTable*>(),
            { "OnRowChanging", {}, { ::i2c::type_of<::System::Data::DataRowChangeEventArgs*>(), ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.OnRowChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRowChangeEventArgs*)>(&::System::Data::DataTable::OnRowChanged)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5ff5d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { ::i2c::class_of<::System::Data::DataTable*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.OnRowChanging
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRowChangeEventArgs*)>(&::System::Data::DataTable::OnRowChanging)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5ff5e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { ::i2c::class_of<::System::Data::DataTable*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.OnRowDeleting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRowChangeEventArgs*)>(&::System::Data::DataTable::OnRowDeleting)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5ff5f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { ::i2c::class_of<::System::Data::DataTable*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.OnRowDeleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRowChangeEventArgs*)>(&::System::Data::DataTable::OnRowDeleted)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5ff5ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { ::i2c::class_of<::System::Data::DataTable*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.OnTableCleared
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataTableClearEventArgs*)>(&::System::Data::DataTable::OnTableCleared)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5ff60d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { ::i2c::class_of<::System::Data::DataTable*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.OnTableClearing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataTableClearEventArgs*)>(&::System::Data::DataTable::OnTableClearing)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5ff61c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { ::i2c::class_of<::System::Data::DataTable*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.OnTableNewRow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataTableNewRowEventArgs*)>(&::System::Data::DataTable::OnTableNewRow)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5ff62a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { ::i2c::class_of<::System::Data::DataTable*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ParseSortString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Data::IndexField> (::System::Data::DataTable::*)(::StringW)>(&::System::Data::DataTable::ParseSortString)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x5ff3fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "ParseSortString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RaisePropertyChanging
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::StringW)>(&::System::Data::DataTable::RaisePropertyChanging)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5fef24c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "RaisePropertyChanging", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RecordChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(int32_t)>(&::System::Data::DataTable::RecordChanged)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5ff6390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "RecordChanged", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RecordChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::ArrayW<int32_t>, ::ArrayW<int32_t>)>(&::System::Data::DataTable::RecordChanged)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5ff651c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "RecordChanged", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RecordStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(int32_t, ::System::Data::DataViewRowState, ::System::Data::DataViewRowState)>(
    &::System::Data::DataTable::RecordStateChanged)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5ff4694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                            { "RecordStateChanged", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::DataViewRowState>(), ::i2c::type_of<::System::Data::DataViewRowState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RecordStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(int32_t, ::System::Data::DataViewRowState, ::System::Data::DataViewRowState, int32_t,
                                                                                           ::System::Data::DataViewRowState, ::System::Data::DataViewRowState)>(
    &::System::Data::DataTable::RecordStateChanged)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5ff4838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                { "RecordStateChanged",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::DataViewRowState>(), ::i2c::type_of<::System::Data::DataViewRowState>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::DataViewRowState>(), ::i2c::type_of<::System::Data::DataViewRowState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RemoveRecordFromIndexes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::System::Data::DataTable::*)(::System::Data::DataRow*, ::System::Data::DataRowVersion)>(
    &::System::Data::DataTable::RemoveRecordFromIndexes)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5ff6704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                             { "RemoveRecordFromIndexes", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowVersion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.InsertRecordToIndexes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::System::Data::DataTable::*)(::System::Data::DataRow*, ::System::Data::DataRowVersion)>(
    &::System::Data::DataTable::InsertRecordToIndexes)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5ff6904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                             { "InsertRecordToIndexes", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowVersion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SilentlySetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*, ::System::Data::DataColumn*, ::System::Data::DataRowVersion, ::System::Object*)>(
    &::System::Data::DataTable::SilentlySetValue)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5ff6acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "SilentlySetValue",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataColumn*>(),
                                                                                                   ::i2c::type_of<::System::Data::DataRowVersion>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RemoveRow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*, bool)>(&::System::Data::DataTable::RemoveRow)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5ff7398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "RemoveRow", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)()>(&::System::Data::DataTable::Reset)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5ff7548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { ::i2c::class_of<::System::Data::DataTable*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ResetIndexes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)()>(&::System::Data::DataTable::ResetIndexes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fe8f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "ResetIndexes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ResetInternalIndexes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataColumn*)>(&::System::Data::DataTable::ResetInternalIndexes)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5ff77c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "ResetInternalIndexes", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RollbackRow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*)>(&::System::Data::DataTable::RollbackRow)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5ff79a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "RollbackRow", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RaiseRowChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRowChangeEventArgs* (
    ::System::Data::DataTable::*)(::System::Data::DataRowChangeEventArgs*, ::System::Data::DataRow*, ::System::Data::DataRowAction)>(&::System::Data::DataTable::RaiseRowChanged)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5ff4f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Data::DataTable*>(),
            { "RaiseRowChanged", {}, { ::i2c::type_of<::System::Data::DataRowChangeEventArgs*>(), ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RaiseRowChanging
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRowChangeEventArgs* (
    ::System::Data::DataTable::*)(::System::Data::DataRowChangeEventArgs*, ::System::Data::DataRow*, ::System::Data::DataRowAction)>(&::System::Data::DataTable::RaiseRowChanging)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5ff7a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Data::DataTable*>(),
            { "RaiseRowChanging", {}, { ::i2c::type_of<::System::Data::DataRowChangeEventArgs*>(), ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RaiseRowChanging
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRowChangeEventArgs* (
    ::System::Data::DataTable::*)(::System::Data::DataRowChangeEventArgs*, ::System::Data::DataRow*, ::System::Data::DataRowAction, bool)>(&::System::Data::DataTable::RaiseRowChanging)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5ff4514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "RaiseRowChanging",
                                                                                          {},
                                                                                          { ::i2c::type_of<::System::Data::DataRowChangeEventArgs*>(), ::i2c::type_of<::System::Data::DataRow*>(),
                                                                                            ::i2c::type_of<::System::Data::DataRowAction>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SetNewRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*, int32_t, ::System::Data::DataRowAction, bool, bool, bool)>(
    &::System::Data::DataTable::SetNewRecord)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5ff0a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "SetNewRecord",
                                                                             {},
                                                                             { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::DataRowAction>(),
                                                                               ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SetNewRecordWorker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*, int32_t, ::System::Data::DataRowAction, bool, bool, int32_t, bool,
                                                                                           ::by_ref<::System::Exception*>)>(&::System::Data::DataTable::SetNewRecordWorker)> {
  constexpr static std::size_t size = 0xa08;
  constexpr static std::size_t addrs = 0x5ff26a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                { "SetNewRecordWorker",
                                                  {},
                                                  { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::DataRowAction>(), ::i2c::type_of<bool>(),
                                                    ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Exception*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SetOldRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*, int32_t)>(&::System::Data::DataTable::SetOldRecord)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x5ff0abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "SetOldRecord", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RestoreShadowIndexes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)()>(&::System::Data::DataTable::RestoreShadowIndexes)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ff7c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "RestoreShadowIndexes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SetShadowIndexes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)()>(&::System::Data::DataTable::SetShadowIndexes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fecdb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "SetShadowIndexes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ShadowIndexCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)()>(&::System::Data::DataTable::ShadowIndexCopy)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5ff7c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "ShadowIndexCopy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataTable::*)()>(&::System::Data::DataTable::ToString)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5ff7cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { ::i2c::class_of<::System::Data::DataTable*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.UpdatingCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTable::*)(::System::Data::DataRow*, ::System::Data::DataRowAction)>(&::System::Data::DataTable::UpdatingCurrent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ff79f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                             { "UpdatingCurrent", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.AddUniqueKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataColumn* (::System::Data::DataTable::*)(int32_t)>(&::System::Data::DataTable::AddUniqueKey)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5ff7d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "AddUniqueKey", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.AddUniqueKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataColumn* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::AddUniqueKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ff7fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "AddUniqueKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.AddForeignKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataColumn* (::System::Data::DataTable::*)(::System::Data::DataColumn*)>(&::System::Data::DataTable::AddForeignKey)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5ff7fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "AddForeignKey", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.UpdatePropertyDescriptorCollectionCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)()>(&::System::Data::DataTable::UpdatePropertyDescriptorCollectionCache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ff808c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "UpdatePropertyDescriptorCollectionCache", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.GetPropertyDescriptorCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::System::Data::DataTable::*)(::ArrayW<::System::Attribute*>)>(
    &::System::Data::DataTable::GetPropertyDescriptorCollection)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5ff8094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "GetPropertyDescriptorCollection", {}, { ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_TypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_TypeName)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5fe9e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_TypeName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_TypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Xml::XmlQualifiedName*)>(&::System::Data::DataTable::set_TypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ff82dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_TypeName", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.Merge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataTable*)>(&::System::Data::DataTable::Merge)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ff82e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "Merge", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.Merge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataTable*, bool, ::System::Data::MissingSchemaAction)>(&::System::Data::DataTable::Merge)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5ff82f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                { "Merge", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Data::MissingSchemaAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.WriteXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Xml::XmlWriter*, ::System::Data::XmlWriteMode, bool)>(&::System::Data::DataTable::WriteXml)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x5ff8550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                { "WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>(), ::i2c::type_of<::System::Data::XmlWriteMode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CheckForClosureOnExpressions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTable::*)(::System::Data::DataTable*, bool)>(&::System::Data::DataTable::CheckForClosureOnExpressions)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5ff88f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "CheckForClosureOnExpressions", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CheckForClosureOnExpressionTables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTable::*)(::System::Collections::Generic::List_1<::System::Data::DataTable*>*)>(
    &::System::Data::DataTable::CheckForClosureOnExpressionTables)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x5fe9f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                             { "CheckForClosureOnExpressionTables", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Data::DataTable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.WriteXmlSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Xml::XmlWriter*, bool)>(&::System::Data::DataTable::WriteXmlSchema)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x5ff8dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "WriteXmlSchema", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RestoreConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(bool)>(&::System::Data::DataTable::RestoreConstraint)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5ff90e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "RestoreConstraint", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.IsEmptyXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTable::*)(::System::Xml::XmlReader*)>(&::System::Data::DataTable::IsEmptyXml)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5ff9138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "IsEmptyXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ReadXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::XmlReadMode (::System::Data::DataTable::*)(::System::Xml::XmlReader*, ::System::Data::XmlReadMode, bool)>(
    &::System::Data::DataTable::ReadXml)> {
  constexpr static std::size_t size = 0xef8;
  constexpr static std::size_t addrs = 0x5ff9308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                { "ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::System::Data::XmlReadMode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ReadEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Xml::XmlReader*)>(&::System::Data::DataTable::ReadEndElement)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ffabcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "ReadEndElement", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ReadXDRSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Xml::XmlReader*)>(&::System::Data::DataTable::ReadXDRSchema)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ffac68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "ReadXDRSchema", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.MoveToElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTable::*)(::System::Xml::XmlReader*, int32_t)>(&::System::Data::DataTable::MoveToElement)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5ffbebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "MoveToElement", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ReadXmlDiffgram
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Xml::XmlReader*)>(&::System::Data::DataTable::ReadXmlDiffgram)> {
  constexpr static std::size_t size = 0x9cc;
  constexpr static std::size_t addrs = 0x5ffa200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "ReadXmlDiffgram", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ReadXSDSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Xml::XmlReader*, bool)>(&::System::Data::DataTable::ReadXSDSchema)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5ffbf70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "ReadXSDSchema", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ReadXmlSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Xml::XmlReader*, bool)>(&::System::Data::DataTable::ReadXmlSchema)> {
  constexpr static std::size_t size = 0x11e0;
  constexpr static std::size_t addrs = 0x5ffacdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "ReadXmlSchema", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CreateTableList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataTable*>*)>(
    &::System::Data::DataTable::CreateTableList)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x5ff8a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                            { "CreateTableList", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Data::DataTable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CreateRelationList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(
    ::System::Collections::Generic::List_1<::System::Data::DataTable*>*, ::System::Collections::Generic::List_1<::System::Data::DataRelation*>*)>(&::System::Data::DataTable::CreateRelationList)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x5ffc100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "CreateRelationList",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Data::DataTable*>*>(),
                                                                                                   ::i2c::type_of<::System::Collections::Generic::List_1<::System::Data::DataRelation*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.GetDataTableSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaComplexType* (*)(::System::Xml::Schema::XmlSchemaSet*)>(&::System::Data::DataTable::GetDataTableSchema)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5ffc5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "GetDataTableSchema", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.System_Xml_Serialization_IXmlSerializable_GetSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Data::DataTable::*)()>(
    &::System::Data::DataTable::System_Xml_Serialization_IXmlSerializable_GetSchema)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ffc794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "System.Xml.Serialization.IXmlSerializable.GetSchema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.GetSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::GetSchema)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5ffc7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { ::i2c::class_of<::System::Data::DataTable*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.System_Xml_Serialization_IXmlSerializable_ReadXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Xml::XmlReader*)>(&::System::Data::DataTable::System_Xml_Serialization_IXmlSerializable_ReadXml)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5ffc974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "System.Xml.Serialization.IXmlSerializable.ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.System_Xml_Serialization_IXmlSerializable_WriteXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Xml::XmlWriter*)>(
    &::System::Data::DataTable::System_Xml_Serialization_IXmlSerializable_WriteXml)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5ffcb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "System.Xml.Serialization.IXmlSerializable.WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ReadXmlSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Xml::XmlReader*)>(&::System::Data::DataTable::ReadXmlSerializable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ffcb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { ::i2c::class_of<::System::Data::DataTable*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_RowDiffId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Hashtable* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_RowDiffId)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ffcb64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_RowDiffId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_ObjectID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_ObjectID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ffcbd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_ObjectID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.AddDependentColumn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataColumn*)>(&::System::Data::DataTable::AddDependentColumn)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5ffcbd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "AddDependentColumn", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RemoveDependentColumn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataColumn*)>(&::System::Data::DataTable::RemoveDependentColumn)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5ffcd0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "RemoveDependentColumn", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.EvaluateExpressions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)()>(&::System::Data::DataTable::EvaluateExpressions)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x5ffcdb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "EvaluateExpressions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.EvaluateExpressions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(
    ::System::Data::DataRow*, ::System::Data::DataRowAction, ::System::Collections::Generic::List_1<::System::Data::DataRow*>*)>(&::System::Data::DataTable::EvaluateExpressions)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x5ff4a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "EvaluateExpressions",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowAction>(),
                                                                                                   ::i2c::type_of<::System::Collections::Generic::List_1<::System::Data::DataRow*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.EvaluateExpressions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataColumn*)>(&::System::Data::DataTable::EvaluateExpressions)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5ffd108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "EvaluateExpressions", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.EvaluateDependentExpressions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataColumn*)>(&::System::Data::DataTable::EvaluateDependentExpressions)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5ff38b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "EvaluateDependentExpressions", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.EvaluateDependentExpressions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTable::*)(::System::Collections::Generic::List_1<::System::Data::DataColumn*>*, ::System::Data::DataRow*,
                                                                                           ::System::Data::DataRowVersion, ::System::Collections::Generic::List_1<::System::Data::DataRow*>*)>(
    &::System::Data::DataTable::EvaluateDependentExpressions)> {
  constexpr static std::size_t size = 0x750;
  constexpr static std::size_t addrs = 0x5ff6c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                { "EvaluateDependentExpressions",
                                                  {},
                                                  { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Data::DataColumn*>*>(), ::i2c::type_of<::System::Data::DataRow*>(),
                                                    ::i2c::type_of<::System::Data::DataRowVersion>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Data::DataRow*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataSet*& System::Data::DataTable::__cordl_internal_get__dataSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSet;
}
constexpr ::System::Data::DataSet* const& System::Data::DataTable::__cordl_internal_get__dataSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSet;
}
constexpr void System::Data::DataTable::__cordl_internal_set__dataSet(::System::Data::DataSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataSet = value;
}
constexpr ::System::Data::DataView*& System::Data::DataTable::__cordl_internal_get__defaultView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultView;
}
constexpr ::System::Data::DataView* const& System::Data::DataTable::__cordl_internal_get__defaultView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultView;
}
constexpr void System::Data::DataTable::__cordl_internal_set__defaultView(::System::Data::DataView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultView = value;
}
constexpr int64_t& System::Data::DataTable::__cordl_internal_get__nextRowID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextRowID;
}
constexpr int64_t const& System::Data::DataTable::__cordl_internal_get__nextRowID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextRowID;
}
constexpr void System::Data::DataTable::__cordl_internal_set__nextRowID(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nextRowID = value;
}
constexpr ::System::Data::DataRowCollection*& System::Data::DataTable::__cordl_internal_get__rowCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowCollection;
}
constexpr ::System::Data::DataRowCollection* const& System::Data::DataTable::__cordl_internal_get__rowCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowCollection;
}
constexpr void System::Data::DataTable::__cordl_internal_set__rowCollection(::System::Data::DataRowCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rowCollection = value;
}
constexpr ::System::Data::DataColumnCollection*& System::Data::DataTable::__cordl_internal_get__columnCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnCollection;
}
constexpr ::System::Data::DataColumnCollection* const& System::Data::DataTable::__cordl_internal_get__columnCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnCollection;
}
constexpr void System::Data::DataTable::__cordl_internal_set__columnCollection(::System::Data::DataColumnCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____columnCollection = value;
}
constexpr ::System::Data::ConstraintCollection*& System::Data::DataTable::__cordl_internal_get__constraintCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constraintCollection;
}
constexpr ::System::Data::ConstraintCollection* const& System::Data::DataTable::__cordl_internal_get__constraintCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constraintCollection;
}
constexpr void System::Data::DataTable::__cordl_internal_set__constraintCollection(::System::Data::ConstraintCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____constraintCollection = value;
}
constexpr int32_t& System::Data::DataTable::__cordl_internal_get__elementColumnCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementColumnCount;
}
constexpr int32_t const& System::Data::DataTable::__cordl_internal_get__elementColumnCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementColumnCount;
}
constexpr void System::Data::DataTable::__cordl_internal_set__elementColumnCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elementColumnCount = value;
}
constexpr ::System::Data::DataRelationCollection*& System::Data::DataTable::__cordl_internal_get__parentRelationsCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentRelationsCollection;
}
constexpr ::System::Data::DataRelationCollection* const& System::Data::DataTable::__cordl_internal_get__parentRelationsCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentRelationsCollection;
}
constexpr void System::Data::DataTable::__cordl_internal_set__parentRelationsCollection(::System::Data::DataRelationCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parentRelationsCollection = value;
}
constexpr ::System::Data::DataRelationCollection*& System::Data::DataTable::__cordl_internal_get__childRelationsCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childRelationsCollection;
}
constexpr ::System::Data::DataRelationCollection* const& System::Data::DataTable::__cordl_internal_get__childRelationsCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childRelationsCollection;
}
constexpr void System::Data::DataTable::__cordl_internal_set__childRelationsCollection(::System::Data::DataRelationCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____childRelationsCollection = value;
}
constexpr ::System::Data::RecordManager*& System::Data::DataTable::__cordl_internal_get__recordManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordManager;
}
constexpr ::System::Data::RecordManager* const& System::Data::DataTable::__cordl_internal_get__recordManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordManager;
}
constexpr void System::Data::DataTable::__cordl_internal_set__recordManager(::System::Data::RecordManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____recordManager = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Data::Index*>*& System::Data::DataTable::__cordl_internal_get__indexes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indexes;
}
constexpr ::System::Collections::Generic::List_1<::System::Data::Index*>* const& System::Data::DataTable::__cordl_internal_get__indexes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indexes;
}
constexpr void System::Data::DataTable::__cordl_internal_set__indexes(::System::Collections::Generic::List_1<::System::Data::Index*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____indexes = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Data::Index*>*& System::Data::DataTable::__cordl_internal_get__shadowIndexes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadowIndexes;
}
constexpr ::System::Collections::Generic::List_1<::System::Data::Index*>* const& System::Data::DataTable::__cordl_internal_get__shadowIndexes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadowIndexes;
}
constexpr void System::Data::DataTable::__cordl_internal_set__shadowIndexes(::System::Collections::Generic::List_1<::System::Data::Index*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shadowIndexes = value;
}
constexpr int32_t& System::Data::DataTable::__cordl_internal_get__shadowCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadowCount;
}
constexpr int32_t const& System::Data::DataTable::__cordl_internal_get__shadowCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadowCount;
}
constexpr void System::Data::DataTable::__cordl_internal_set__shadowCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shadowCount = value;
}
constexpr ::System::Data::PropertyCollection*& System::Data::DataTable::__cordl_internal_get__extendedProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extendedProperties;
}
constexpr ::System::Data::PropertyCollection* const& System::Data::DataTable::__cordl_internal_get__extendedProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extendedProperties;
}
constexpr void System::Data::DataTable::__cordl_internal_set__extendedProperties(::System::Data::PropertyCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____extendedProperties = value;
}
constexpr ::StringW& System::Data::DataTable::__cordl_internal_get__tableName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableName;
}
constexpr ::StringW const& System::Data::DataTable::__cordl_internal_get__tableName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableName;
}
constexpr void System::Data::DataTable::__cordl_internal_set__tableName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tableName = value;
}
constexpr ::StringW& System::Data::DataTable::__cordl_internal_get__tableNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableNamespace;
}
constexpr ::StringW const& System::Data::DataTable::__cordl_internal_get__tableNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableNamespace;
}
constexpr void System::Data::DataTable::__cordl_internal_set__tableNamespace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tableNamespace = value;
}
constexpr ::StringW& System::Data::DataTable::__cordl_internal_get__tablePrefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tablePrefix;
}
constexpr ::StringW const& System::Data::DataTable::__cordl_internal_get__tablePrefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tablePrefix;
}
constexpr void System::Data::DataTable::__cordl_internal_set__tablePrefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tablePrefix = value;
}
constexpr ::System::Data::DataExpression*& System::Data::DataTable::__cordl_internal_get__displayExpression() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayExpression;
}
constexpr ::System::Data::DataExpression* const& System::Data::DataTable::__cordl_internal_get__displayExpression() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayExpression;
}
constexpr void System::Data::DataTable::__cordl_internal_set__displayExpression(::System::Data::DataExpression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____displayExpression = value;
}
constexpr bool& System::Data::DataTable::__cordl_internal_get__fNestedInDataset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fNestedInDataset;
}
constexpr bool const& System::Data::DataTable::__cordl_internal_get__fNestedInDataset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fNestedInDataset;
}
constexpr void System::Data::DataTable::__cordl_internal_set__fNestedInDataset(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fNestedInDataset = value;
}
constexpr ::System::Globalization::CultureInfo*& System::Data::DataTable::__cordl_internal_get__culture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____culture;
}
constexpr ::System::Globalization::CultureInfo* const& System::Data::DataTable::__cordl_internal_get__culture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____culture;
}
constexpr void System::Data::DataTable::__cordl_internal_set__culture(::System::Globalization::CultureInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____culture = value;
}
constexpr bool& System::Data::DataTable::__cordl_internal_get__cultureUserSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cultureUserSet;
}
constexpr bool const& System::Data::DataTable::__cordl_internal_get__cultureUserSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cultureUserSet;
}
constexpr void System::Data::DataTable::__cordl_internal_set__cultureUserSet(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cultureUserSet = value;
}
constexpr ::System::Globalization::CompareInfo*& System::Data::DataTable::__cordl_internal_get__compareInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compareInfo;
}
constexpr ::System::Globalization::CompareInfo* const& System::Data::DataTable::__cordl_internal_get__compareInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compareInfo;
}
constexpr void System::Data::DataTable::__cordl_internal_set__compareInfo(::System::Globalization::CompareInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____compareInfo = value;
}
constexpr ::System::Globalization::CompareOptions& System::Data::DataTable::__cordl_internal_get__compareFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compareFlags;
}
constexpr ::System::Globalization::CompareOptions const& System::Data::DataTable::__cordl_internal_get__compareFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compareFlags;
}
constexpr void System::Data::DataTable::__cordl_internal_set__compareFlags(::System::Globalization::CompareOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____compareFlags = value;
}
constexpr ::System::IFormatProvider*& System::Data::DataTable::__cordl_internal_get__formatProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formatProvider;
}
constexpr ::System::IFormatProvider* const& System::Data::DataTable::__cordl_internal_get__formatProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formatProvider;
}
constexpr void System::Data::DataTable::__cordl_internal_set__formatProvider(::System::IFormatProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____formatProvider = value;
}
constexpr ::System::StringComparer*& System::Data::DataTable::__cordl_internal_get__hashCodeProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashCodeProvider;
}
constexpr ::System::StringComparer* const& System::Data::DataTable::__cordl_internal_get__hashCodeProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashCodeProvider;
}
constexpr void System::Data::DataTable::__cordl_internal_set__hashCodeProvider(::System::StringComparer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hashCodeProvider = value;
}
constexpr bool& System::Data::DataTable::__cordl_internal_get__caseSensitive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caseSensitive;
}
constexpr bool const& System::Data::DataTable::__cordl_internal_get__caseSensitive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caseSensitive;
}
constexpr void System::Data::DataTable::__cordl_internal_set__caseSensitive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____caseSensitive = value;
}
constexpr bool& System::Data::DataTable::__cordl_internal_get__caseSensitiveUserSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caseSensitiveUserSet;
}
constexpr bool const& System::Data::DataTable::__cordl_internal_get__caseSensitiveUserSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caseSensitiveUserSet;
}
constexpr void System::Data::DataTable::__cordl_internal_set__caseSensitiveUserSet(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____caseSensitiveUserSet = value;
}
constexpr ::StringW& System::Data::DataTable::__cordl_internal_get__encodedTableName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encodedTableName;
}
constexpr ::StringW const& System::Data::DataTable::__cordl_internal_get__encodedTableName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encodedTableName;
}
constexpr void System::Data::DataTable::__cordl_internal_set__encodedTableName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____encodedTableName = value;
}
constexpr ::System::Data::DataColumn*& System::Data::DataTable::__cordl_internal_get__xmlText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlText;
}
constexpr ::System::Data::DataColumn* const& System::Data::DataTable::__cordl_internal_get__xmlText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlText;
}
constexpr void System::Data::DataTable::__cordl_internal_set__xmlText(::System::Data::DataColumn* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xmlText = value;
}
constexpr ::System::Data::DataColumn*& System::Data::DataTable::__cordl_internal_get__colUnique() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colUnique;
}
constexpr ::System::Data::DataColumn* const& System::Data::DataTable::__cordl_internal_get__colUnique() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colUnique;
}
constexpr void System::Data::DataTable::__cordl_internal_set__colUnique(::System::Data::DataColumn* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colUnique = value;
}
constexpr ::System::Decimal& System::Data::DataTable::__cordl_internal_get__minOccurs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minOccurs;
}
constexpr ::System::Decimal const& System::Data::DataTable::__cordl_internal_get__minOccurs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minOccurs;
}
constexpr void System::Data::DataTable::__cordl_internal_set__minOccurs(::System::Decimal value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minOccurs = value;
}
constexpr ::System::Decimal& System::Data::DataTable::__cordl_internal_get__maxOccurs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxOccurs;
}
constexpr ::System::Decimal const& System::Data::DataTable::__cordl_internal_get__maxOccurs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxOccurs;
}
constexpr void System::Data::DataTable::__cordl_internal_set__maxOccurs(::System::Decimal value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxOccurs = value;
}
constexpr bool& System::Data::DataTable::__cordl_internal_get__repeatableElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____repeatableElement;
}
constexpr bool const& System::Data::DataTable::__cordl_internal_get__repeatableElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____repeatableElement;
}
constexpr void System::Data::DataTable::__cordl_internal_set__repeatableElement(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____repeatableElement = value;
}
constexpr ::System::Object*& System::Data::DataTable::__cordl_internal_get__typeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeName;
}
constexpr ::System::Object* const& System::Data::DataTable::__cordl_internal_get__typeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeName;
}
constexpr void System::Data::DataTable::__cordl_internal_set__typeName(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____typeName = value;
}
constexpr ::System::Data::UniqueConstraint*& System::Data::DataTable::__cordl_internal_get__primaryKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primaryKey;
}
constexpr ::System::Data::UniqueConstraint* const& System::Data::DataTable::__cordl_internal_get__primaryKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primaryKey;
}
constexpr void System::Data::DataTable::__cordl_internal_set__primaryKey(::System::Data::UniqueConstraint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____primaryKey = value;
}
constexpr ::ArrayW<::System::Data::IndexField>& System::Data::DataTable::__cordl_internal_get__primaryIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primaryIndex;
}
constexpr ::ArrayW<::System::Data::IndexField> const& System::Data::DataTable::__cordl_internal_get__primaryIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primaryIndex;
}
constexpr void System::Data::DataTable::__cordl_internal_set__primaryIndex(::ArrayW<::System::Data::IndexField> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____primaryIndex = value;
}
constexpr ::ArrayW<::System::Data::DataColumn*>& System::Data::DataTable::__cordl_internal_get__delayedSetPrimaryKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayedSetPrimaryKey;
}
constexpr ::ArrayW<::System::Data::DataColumn*> const& System::Data::DataTable::__cordl_internal_get__delayedSetPrimaryKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayedSetPrimaryKey;
}
constexpr void System::Data::DataTable::__cordl_internal_set__delayedSetPrimaryKey(::ArrayW<::System::Data::DataColumn*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____delayedSetPrimaryKey = value;
}
constexpr ::System::Data::Index*& System::Data::DataTable::__cordl_internal_get__loadIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadIndex;
}
constexpr ::System::Data::Index* const& System::Data::DataTable::__cordl_internal_get__loadIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadIndex;
}
constexpr void System::Data::DataTable::__cordl_internal_set__loadIndex(::System::Data::Index* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadIndex = value;
}
constexpr ::System::Data::Index*& System::Data::DataTable::__cordl_internal_get__loadIndexwithOriginalAdded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadIndexwithOriginalAdded;
}
constexpr ::System::Data::Index* const& System::Data::DataTable::__cordl_internal_get__loadIndexwithOriginalAdded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadIndexwithOriginalAdded;
}
constexpr void System::Data::DataTable::__cordl_internal_set__loadIndexwithOriginalAdded(::System::Data::Index* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadIndexwithOriginalAdded = value;
}
constexpr ::System::Data::Index*& System::Data::DataTable::__cordl_internal_get__loadIndexwithCurrentDeleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadIndexwithCurrentDeleted;
}
constexpr ::System::Data::Index* const& System::Data::DataTable::__cordl_internal_get__loadIndexwithCurrentDeleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadIndexwithCurrentDeleted;
}
constexpr void System::Data::DataTable::__cordl_internal_set__loadIndexwithCurrentDeleted(::System::Data::Index* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadIndexwithCurrentDeleted = value;
}
constexpr int32_t& System::Data::DataTable::__cordl_internal_get__suspendIndexEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____suspendIndexEvents;
}
constexpr int32_t const& System::Data::DataTable::__cordl_internal_get__suspendIndexEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____suspendIndexEvents;
}
constexpr void System::Data::DataTable::__cordl_internal_set__suspendIndexEvents(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____suspendIndexEvents = value;
}
constexpr bool& System::Data::DataTable::__cordl_internal_get__inDataLoad() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inDataLoad;
}
constexpr bool const& System::Data::DataTable::__cordl_internal_get__inDataLoad() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inDataLoad;
}
constexpr void System::Data::DataTable::__cordl_internal_set__inDataLoad(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inDataLoad = value;
}
constexpr bool& System::Data::DataTable::__cordl_internal_get__schemaLoading() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaLoading;
}
constexpr bool const& System::Data::DataTable::__cordl_internal_get__schemaLoading() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaLoading;
}
constexpr void System::Data::DataTable::__cordl_internal_set__schemaLoading(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____schemaLoading = value;
}
constexpr bool& System::Data::DataTable::__cordl_internal_get__enforceConstraints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enforceConstraints;
}
constexpr bool const& System::Data::DataTable::__cordl_internal_get__enforceConstraints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enforceConstraints;
}
constexpr void System::Data::DataTable::__cordl_internal_set__enforceConstraints(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enforceConstraints = value;
}
constexpr bool& System::Data::DataTable::__cordl_internal_get__suspendEnforceConstraints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____suspendEnforceConstraints;
}
constexpr bool const& System::Data::DataTable::__cordl_internal_get__suspendEnforceConstraints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____suspendEnforceConstraints;
}
constexpr void System::Data::DataTable::__cordl_internal_set__suspendEnforceConstraints(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____suspendEnforceConstraints = value;
}
constexpr bool& System::Data::DataTable::__cordl_internal_get_fInitInProgress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fInitInProgress;
}
constexpr bool const& System::Data::DataTable::__cordl_internal_get_fInitInProgress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fInitInProgress;
}
constexpr void System::Data::DataTable::__cordl_internal_set_fInitInProgress(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fInitInProgress = value;
}
constexpr bool& System::Data::DataTable::__cordl_internal_get__inLoad() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inLoad;
}
constexpr bool const& System::Data::DataTable::__cordl_internal_get__inLoad() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inLoad;
}
constexpr void System::Data::DataTable::__cordl_internal_set__inLoad(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inLoad = value;
}
constexpr bool& System::Data::DataTable::__cordl_internal_get__fInLoadDiffgram() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fInLoadDiffgram;
}
constexpr bool const& System::Data::DataTable::__cordl_internal_get__fInLoadDiffgram() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fInLoadDiffgram;
}
constexpr void System::Data::DataTable::__cordl_internal_set__fInLoadDiffgram(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fInLoadDiffgram = value;
}
constexpr uint8_t& System::Data::DataTable::__cordl_internal_get__isTypedDataTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isTypedDataTable;
}
constexpr uint8_t const& System::Data::DataTable::__cordl_internal_get__isTypedDataTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isTypedDataTable;
}
constexpr void System::Data::DataTable::__cordl_internal_set__isTypedDataTable(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isTypedDataTable = value;
}
constexpr ::ArrayW<::System::Data::DataRow*>& System::Data::DataTable::__cordl_internal_get__emptyDataRowArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptyDataRowArray;
}
constexpr ::ArrayW<::System::Data::DataRow*> const& System::Data::DataTable::__cordl_internal_get__emptyDataRowArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptyDataRowArray;
}
constexpr void System::Data::DataTable::__cordl_internal_set__emptyDataRowArray(::ArrayW<::System::Data::DataRow*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____emptyDataRowArray = value;
}
constexpr ::System::ComponentModel::PropertyDescriptorCollection*& System::Data::DataTable::__cordl_internal_get__propertyDescriptorCollectionCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyDescriptorCollectionCache;
}
constexpr ::System::ComponentModel::PropertyDescriptorCollection* const& System::Data::DataTable::__cordl_internal_get__propertyDescriptorCollectionCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyDescriptorCollectionCache;
}
constexpr void System::Data::DataTable::__cordl_internal_set__propertyDescriptorCollectionCache(::System::ComponentModel::PropertyDescriptorCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____propertyDescriptorCollectionCache = value;
}
constexpr ::ArrayW<::System::Data::DataRelation*>& System::Data::DataTable::__cordl_internal_get__nestedParentRelations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nestedParentRelations;
}
constexpr ::ArrayW<::System::Data::DataRelation*> const& System::Data::DataTable::__cordl_internal_get__nestedParentRelations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nestedParentRelations;
}
constexpr void System::Data::DataTable::__cordl_internal_set__nestedParentRelations(::ArrayW<::System::Data::DataRelation*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nestedParentRelations = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*& System::Data::DataTable::__cordl_internal_get__dependentColumns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dependentColumns;
}
constexpr ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* const& System::Data::DataTable::__cordl_internal_get__dependentColumns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dependentColumns;
}
constexpr void System::Data::DataTable::__cordl_internal_set__dependentColumns(::System::Collections::Generic::List_1<::System::Data::DataColumn*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dependentColumns = value;
}
constexpr bool& System::Data::DataTable::__cordl_internal_get__mergingData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mergingData;
}
constexpr bool const& System::Data::DataTable::__cordl_internal_get__mergingData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mergingData;
}
constexpr void System::Data::DataTable::__cordl_internal_set__mergingData(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mergingData = value;
}
constexpr ::System::Data::DataRowChangeEventHandler*& System::Data::DataTable::__cordl_internal_get__onRowChangedDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onRowChangedDelegate;
}
constexpr ::System::Data::DataRowChangeEventHandler* const& System::Data::DataTable::__cordl_internal_get__onRowChangedDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onRowChangedDelegate;
}
constexpr void System::Data::DataTable::__cordl_internal_set__onRowChangedDelegate(::System::Data::DataRowChangeEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onRowChangedDelegate = value;
}
constexpr ::System::Data::DataRowChangeEventHandler*& System::Data::DataTable::__cordl_internal_get__onRowChangingDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onRowChangingDelegate;
}
constexpr ::System::Data::DataRowChangeEventHandler* const& System::Data::DataTable::__cordl_internal_get__onRowChangingDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onRowChangingDelegate;
}
constexpr void System::Data::DataTable::__cordl_internal_set__onRowChangingDelegate(::System::Data::DataRowChangeEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onRowChangingDelegate = value;
}
constexpr ::System::Data::DataRowChangeEventHandler*& System::Data::DataTable::__cordl_internal_get__onRowDeletingDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onRowDeletingDelegate;
}
constexpr ::System::Data::DataRowChangeEventHandler* const& System::Data::DataTable::__cordl_internal_get__onRowDeletingDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onRowDeletingDelegate;
}
constexpr void System::Data::DataTable::__cordl_internal_set__onRowDeletingDelegate(::System::Data::DataRowChangeEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onRowDeletingDelegate = value;
}
constexpr ::System::Data::DataRowChangeEventHandler*& System::Data::DataTable::__cordl_internal_get__onRowDeletedDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onRowDeletedDelegate;
}
constexpr ::System::Data::DataRowChangeEventHandler* const& System::Data::DataTable::__cordl_internal_get__onRowDeletedDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onRowDeletedDelegate;
}
constexpr void System::Data::DataTable::__cordl_internal_set__onRowDeletedDelegate(::System::Data::DataRowChangeEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onRowDeletedDelegate = value;
}
constexpr ::System::Data::DataColumnChangeEventHandler*& System::Data::DataTable::__cordl_internal_get__onColumnChangedDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onColumnChangedDelegate;
}
constexpr ::System::Data::DataColumnChangeEventHandler* const& System::Data::DataTable::__cordl_internal_get__onColumnChangedDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onColumnChangedDelegate;
}
constexpr void System::Data::DataTable::__cordl_internal_set__onColumnChangedDelegate(::System::Data::DataColumnChangeEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onColumnChangedDelegate = value;
}
constexpr ::System::Data::DataColumnChangeEventHandler*& System::Data::DataTable::__cordl_internal_get__onColumnChangingDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onColumnChangingDelegate;
}
constexpr ::System::Data::DataColumnChangeEventHandler* const& System::Data::DataTable::__cordl_internal_get__onColumnChangingDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onColumnChangingDelegate;
}
constexpr void System::Data::DataTable::__cordl_internal_set__onColumnChangingDelegate(::System::Data::DataColumnChangeEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onColumnChangingDelegate = value;
}
constexpr ::System::Data::DataTableClearEventHandler*& System::Data::DataTable::__cordl_internal_get__onTableClearingDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onTableClearingDelegate;
}
constexpr ::System::Data::DataTableClearEventHandler* const& System::Data::DataTable::__cordl_internal_get__onTableClearingDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onTableClearingDelegate;
}
constexpr void System::Data::DataTable::__cordl_internal_set__onTableClearingDelegate(::System::Data::DataTableClearEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onTableClearingDelegate = value;
}
constexpr ::System::Data::DataTableClearEventHandler*& System::Data::DataTable::__cordl_internal_get__onTableClearedDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onTableClearedDelegate;
}
constexpr ::System::Data::DataTableClearEventHandler* const& System::Data::DataTable::__cordl_internal_get__onTableClearedDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onTableClearedDelegate;
}
constexpr void System::Data::DataTable::__cordl_internal_set__onTableClearedDelegate(::System::Data::DataTableClearEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onTableClearedDelegate = value;
}
constexpr ::System::Data::DataTableNewRowEventHandler*& System::Data::DataTable::__cordl_internal_get__onTableNewRowDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onTableNewRowDelegate;
}
constexpr ::System::Data::DataTableNewRowEventHandler* const& System::Data::DataTable::__cordl_internal_get__onTableNewRowDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onTableNewRowDelegate;
}
constexpr void System::Data::DataTable::__cordl_internal_set__onTableNewRowDelegate(::System::Data::DataTableNewRowEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onTableNewRowDelegate = value;
}
constexpr ::System::ComponentModel::PropertyChangedEventHandler*& System::Data::DataTable::__cordl_internal_get__onPropertyChangingDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onPropertyChangingDelegate;
}
constexpr ::System::ComponentModel::PropertyChangedEventHandler* const& System::Data::DataTable::__cordl_internal_get__onPropertyChangingDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onPropertyChangingDelegate;
}
constexpr void System::Data::DataTable::__cordl_internal_set__onPropertyChangingDelegate(::System::ComponentModel::PropertyChangedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onPropertyChangingDelegate = value;
}
constexpr ::System::Data::DataRowBuilder*& System::Data::DataTable::__cordl_internal_get__rowBuilder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowBuilder;
}
constexpr ::System::Data::DataRowBuilder* const& System::Data::DataTable::__cordl_internal_get__rowBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowBuilder;
}
constexpr void System::Data::DataTable::__cordl_internal_set__rowBuilder(::System::Data::DataRowBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rowBuilder = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Data::DataView*>*& System::Data::DataTable::__cordl_internal_get__delayedViews() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayedViews;
}
constexpr ::System::Collections::Generic::List_1<::System::Data::DataView*>* const& System::Data::DataTable::__cordl_internal_get__delayedViews() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayedViews;
}
constexpr void System::Data::DataTable::__cordl_internal_set__delayedViews(::System::Collections::Generic::List_1<::System::Data::DataView*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____delayedViews = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Data::DataViewListener*>*& System::Data::DataTable::__cordl_internal_get__dataViewListeners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataViewListeners;
}
constexpr ::System::Collections::Generic::List_1<::System::Data::DataViewListener*>* const& System::Data::DataTable::__cordl_internal_get__dataViewListeners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataViewListeners;
}
constexpr void System::Data::DataTable::__cordl_internal_set__dataViewListeners(::System::Collections::Generic::List_1<::System::Data::DataViewListener*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataViewListeners = value;
}
constexpr ::System::Collections::Hashtable*& System::Data::DataTable::__cordl_internal_get__rowDiffId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowDiffId;
}
constexpr ::System::Collections::Hashtable* const& System::Data::DataTable::__cordl_internal_get__rowDiffId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowDiffId;
}
constexpr void System::Data::DataTable::__cordl_internal_set__rowDiffId(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rowDiffId = value;
}
constexpr ::System::Threading::ReaderWriterLockSlim*& System::Data::DataTable::__cordl_internal_get__indexesLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indexesLock;
}
constexpr ::System::Threading::ReaderWriterLockSlim* const& System::Data::DataTable::__cordl_internal_get__indexesLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indexesLock;
}
constexpr void System::Data::DataTable::__cordl_internal_set__indexesLock(::System::Threading::ReaderWriterLockSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____indexesLock = value;
}
constexpr int32_t& System::Data::DataTable::__cordl_internal_get__ukColumnPositionForInference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ukColumnPositionForInference;
}
constexpr int32_t const& System::Data::DataTable::__cordl_internal_get__ukColumnPositionForInference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ukColumnPositionForInference;
}
constexpr void System::Data::DataTable::__cordl_internal_set__ukColumnPositionForInference(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ukColumnPositionForInference = value;
}
constexpr ::System::Data::SerializationFormat& System::Data::DataTable::__cordl_internal_get__remotingFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remotingFormat;
}
constexpr ::System::Data::SerializationFormat const& System::Data::DataTable::__cordl_internal_get__remotingFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remotingFormat;
}
constexpr void System::Data::DataTable::__cordl_internal_set__remotingFormat(::System::Data::SerializationFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____remotingFormat = value;
}
constexpr int32_t& System::Data::DataTable::__cordl_internal_get__objectID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectID;
}
constexpr int32_t const& System::Data::DataTable::__cordl_internal_get__objectID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectID;
}
constexpr void System::Data::DataTable::__cordl_internal_set__objectID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectID = value;
}
inline void System::Data::DataTable::setStaticF_s_objectTypeCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_objectTypeCount", ::System::Data::DataTable*>(std::forward<int32_t>(value));
}
inline int32_t System::Data::DataTable::getStaticF_s_objectTypeCount() {
  return ::cordl_internals::getStaticField<int32_t, "s_objectTypeCount", ::System::Data::DataTable*>();
}
inline void System::Data::DataTable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataTable::_ctor(::StringW tableName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tableName);
}
inline void System::Data::DataTable::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Data::DataTable::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTable*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Data::DataTable::SerializeDataTable(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, bool isSingleTable,
                                                        ::System::Data::SerializationFormat remotingFormat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "SerializeDataTable",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                                              ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(),
                                                                                                              ::i2c::type_of<bool>(), ::i2c::type_of<::System::Data::SerializationFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context, isSingleTable, remotingFormat);
}
inline void System::Data::DataTable::DeserializeDataTable(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, bool isSingleTable,
                                                          ::System::Data::SerializationFormat remotingFormat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "DeserializeDataTable",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                                              ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(),
                                                                                                              ::i2c::type_of<bool>(), ::i2c::type_of<::System::Data::SerializationFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context, isSingleTable, remotingFormat);
}
inline void System::Data::DataTable::SerializeTableSchema(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, bool isSingleTable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "SerializeTableSchema",
                                                                                               {},
                                                                                               { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                                 ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context, isSingleTable);
}
inline void System::Data::DataTable::DeserializeTableSchema(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, bool isSingleTable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "DeserializeTableSchema",
                                                                                               {},
                                                                                               { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                                 ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context, isSingleTable);
}
inline void System::Data::DataTable::SerializeConstraints(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, int32_t serIndex,
                                                          bool allConstraints) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                           { "SerializeConstraints",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context, serIndex, allConstraints);
}
inline void System::Data::DataTable::DeserializeConstraints(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, int32_t serIndex,
                                                            bool allConstraints) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                           { "DeserializeConstraints",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context, serIndex, allConstraints);
}
inline void System::Data::DataTable::SerializeExpressionColumns(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context,
                                                                int32_t serIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "SerializeExpressionColumns",
                                                                                               {},
                                                                                               { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                                 ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context, serIndex);
}
inline void System::Data::DataTable::DeserializeExpressionColumns(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context,
                                                                  int32_t serIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "DeserializeExpressionColumns",
                                                                                               {},
                                                                                               { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                                 ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context, serIndex);
}
inline void System::Data::DataTable::SerializeTableData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, int32_t serIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "SerializeTableData",
                                                                                               {},
                                                                                               { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                                 ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context, serIndex);
}
inline void System::Data::DataTable::DeserializeTableData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, int32_t serIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "DeserializeTableData",
                                                                                               {},
                                                                                               { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                                 ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context, serIndex);
}
inline ::System::Data::DataRowState System::Data::DataTable::ConvertToRowState(::System::Collections::BitArray* bitStates, int32_t bitIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "ConvertToRowState", {}, { ::i2c::type_of<::System::Collections::BitArray*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRowState>(this, ___internal_method, bitStates, bitIndex);
}
inline void System::Data::DataTable::GetRowAndColumnErrors(int32_t rowIndex, ::System::Collections::Hashtable* rowErrors, ::System::Collections::Hashtable* colErrors) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                          { "GetRowAndColumnErrors", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Hashtable*>(), ::i2c::type_of<::System::Collections::Hashtable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rowIndex, rowErrors, colErrors);
}
inline void System::Data::DataTable::ConvertToRowError(int32_t rowIndex, ::System::Collections::Hashtable* rowErrors, ::System::Collections::Hashtable* colErrors) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                          { "ConvertToRowError", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Hashtable*>(), ::i2c::type_of<::System::Collections::Hashtable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rowIndex, rowErrors, colErrors);
}
inline bool System::Data::DataTable::get_CaseSensitive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_CaseSensitive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::DataTable::set_CaseSensitive(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_CaseSensitive", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Data::DataTable::get_AreIndexEventsSuspended() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_AreIndexEventsSuspended", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::DataTable::RestoreIndexEvents(bool forceReset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "RestoreIndexEvents", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forceReset);
}
inline void System::Data::DataTable::SuspendIndexEvents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "SuspendIndexEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Data::DataTable::get_IsTypedDataTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_IsTypedDataTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataTable::SetCaseSensitiveValue(bool isCaseSensitive, bool userSet, bool resetIndexes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "SetCaseSensitiveValue", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, isCaseSensitive, userSet, resetIndexes);
}
inline bool System::Data::DataTable::ShouldSerializeCaseSensitive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "ShouldSerializeCaseSensitive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataTable::get_SelfNested() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_SelfNested", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::System::Data::Index*>* System::Data::DataTable::get_LiveIndexes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_LiveIndexes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Data::Index*>*>(this, ___internal_method);
}
inline ::System::Data::SerializationFormat System::Data::DataTable::get_RemotingFormat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_RemotingFormat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SerializationFormat>(this, ___internal_method);
}
inline void System::Data::DataTable::set_RemotingFormat(::System::Data::SerializationFormat value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_RemotingFormat", {}, { ::i2c::type_of<::System::Data::SerializationFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Data::DataTable::get_UKColumnPositionForInference() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_UKColumnPositionForInference", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Data::DataTable::set_UKColumnPositionForInference(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_UKColumnPositionForInference", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Data::DataRelationCollection* System::Data::DataTable::get_ChildRelations() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_ChildRelations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRelationCollection*>(this, ___internal_method);
}
inline ::System::Data::DataColumnCollection* System::Data::DataTable::get_Columns() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_Columns", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataColumnCollection*>(this, ___internal_method);
}
inline ::System::Globalization::CompareInfo* System::Data::DataTable::get_CompareInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_CompareInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CompareInfo*>(this, ___internal_method);
}
inline ::System::Data::ConstraintCollection* System::Data::DataTable::get_Constraints() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_Constraints", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::ConstraintCollection*>(this, ___internal_method);
}
inline void System::Data::DataTable::ResetConstraints() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "ResetConstraints", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Data::DataSet* System::Data::DataTable::get_DataSet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_DataSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataSet*>(this, ___internal_method);
}
inline void System::Data::DataTable::SetDataSet(::System::Data::DataSet* dataSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "SetDataSet", {}, { ::i2c::type_of<::System::Data::DataSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSet);
}
inline ::StringW System::Data::DataTable::get_DisplayExpressionInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_DisplayExpressionInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Data::DataTable::get_EnforceConstraints() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_EnforceConstraints", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::DataTable::set_EnforceConstraints(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_EnforceConstraints", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Data::DataTable::get_SuspendEnforceConstraints() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_SuspendEnforceConstraints", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::DataTable::set_SuspendEnforceConstraints(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_SuspendEnforceConstraints", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Data::DataTable::EnableConstraints() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "EnableConstraints", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Data::PropertyCollection* System::Data::DataTable::get_ExtendedProperties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_ExtendedProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::PropertyCollection*>(this, ___internal_method);
}
inline ::System::IFormatProvider* System::Data::DataTable::get_FormatProvider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_FormatProvider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IFormatProvider*>(this, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Data::DataTable::get_Locale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_Locale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(this, ___internal_method);
}
inline void System::Data::DataTable::set_Locale(::System::Globalization::CultureInfo* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_Locale", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Data::DataTable::SetLocaleValue(::System::Globalization::CultureInfo* culture, bool userSet, bool resetIndexes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                           { "SetLocaleValue", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, culture, userSet, resetIndexes);
}
inline bool System::Data::DataTable::ShouldSerializeLocale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "ShouldSerializeLocale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Data::DataTable::get_MinimumCapacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_MinimumCapacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Data::DataTable::set_MinimumCapacity(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_MinimumCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Data::DataTable::get_RecordCapacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_RecordCapacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Data::DataTable::get_ElementColumnCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_ElementColumnCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Data::DataTable::set_ElementColumnCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_ElementColumnCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Data::DataRelationCollection* System::Data::DataTable::get_ParentRelations() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_ParentRelations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRelationCollection*>(this, ___internal_method);
}
inline bool System::Data::DataTable::get_MergingData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_MergingData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::DataTable::set_MergingData(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_MergingData", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::System::Data::DataRelation*> System::Data::DataTable::get_NestedParentRelations() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_NestedParentRelations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataRelation*>>(this, ___internal_method);
}
inline bool System::Data::DataTable::get_SchemaLoading() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_SchemaLoading", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::DataTable::CacheNestedParent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "CacheNestedParent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::System::Data::DataRelation*> System::Data::DataTable::FindNestedParentRelations() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "FindNestedParentRelations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataRelation*>>(this, ___internal_method);
}
inline int32_t System::Data::DataTable::get_NestedParentsCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_NestedParentsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::System::Data::DataColumn*> System::Data::DataTable::get_PrimaryKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_PrimaryKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataColumn*>>(this, ___internal_method);
}
inline void System::Data::DataTable::set_PrimaryKey(::ArrayW<::System::Data::DataColumn*> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_PrimaryKey", {}, { ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Data::DataRowCollection* System::Data::DataTable::get_Rows() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_Rows", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRowCollection*>(this, ___internal_method);
}
inline ::StringW System::Data::DataTable::get_TableName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_TableName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Data::DataTable::set_TableName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_TableName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Data::DataTable::get_EncodedTableName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_EncodedTableName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Data::DataTable::GetInheritedNamespace(::System::Collections::Generic::List_1<::System::Data::DataTable*>* visitedTables) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "GetInheritedNamespace", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Data::DataTable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, visitedTables);
}
inline ::StringW System::Data::DataTable::get_Namespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_Namespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Data::DataTable::set_Namespace(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_Namespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Data::DataTable::IsNamespaceInherited() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "IsNamespaceInherited", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::DataTable::CheckCascadingNamespaceConflict(::StringW realNamespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "CheckCascadingNamespaceConflict", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, realNamespace);
}
inline void System::Data::DataTable::CheckNamespaceValidityForNestedRelations(::StringW realNamespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "CheckNamespaceValidityForNestedRelations", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, realNamespace);
}
inline void System::Data::DataTable::CheckNamespaceValidityForNestedParentRelations(::StringW ns, ::System::Data::DataTable* parentTable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                           { "CheckNamespaceValidityForNestedParentRelations", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ns, parentTable);
}
inline void System::Data::DataTable::DoRaiseNamespaceChange() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "DoRaiseNamespaceChange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Data::DataTable::get_Prefix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_Prefix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Data::DataTable::set_Prefix(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_Prefix", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Data::DataColumn* System::Data::DataTable::get_XmlText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_XmlText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataColumn*>(this, ___internal_method);
}
inline void System::Data::DataTable::set_XmlText(::System::Data::DataColumn* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_XmlText", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Decimal System::Data::DataTable::get_MaxOccurs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_MaxOccurs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method);
}
inline void System::Data::DataTable::set_MaxOccurs(::System::Decimal value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_MaxOccurs", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Decimal System::Data::DataTable::get_MinOccurs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_MinOccurs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method);
}
inline void System::Data::DataTable::set_MinOccurs(::System::Decimal value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_MinOccurs", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Data::DataTable::SetKeyValues(::System::Data::DataKey key, ::ArrayW<::System::Object*> keyValues, int32_t record) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                              { "SetKeyValues", {}, { ::i2c::type_of<::System::Data::DataKey>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, keyValues, record);
}
inline ::System::Data::DataRow* System::Data::DataTable::FindByIndex(::System::Data::Index* ndx, ::ArrayW<::System::Object*> key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "FindByIndex", {}, { ::i2c::type_of<::System::Data::Index*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*>(this, ___internal_method, ndx, key);
}
inline ::System::Data::DataRow* System::Data::DataTable::FindMergeTarget(::System::Data::DataRow* row, ::System::Data::DataKey key, ::System::Data::Index* ndx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                          { "FindMergeTarget", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataKey>(), ::i2c::type_of<::System::Data::Index*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*>(this, ___internal_method, row, key, ndx);
}
inline void System::Data::DataTable::SetMergeRecords(::System::Data::DataRow* row, int32_t newRecord, int32_t oldRecord, ::System::Data::DataRowAction action) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Data::DataTable*>(),
          { "SetMergeRecords", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::DataRowAction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row, newRecord, oldRecord, action);
}
inline ::System::Data::DataRow* System::Data::DataTable::MergeRow(::System::Data::DataRow* row, ::System::Data::DataRow* targetRow, bool preserveChanges, ::System::Data::Index* idxSearch) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Data::DataTable*>(),
          { "MergeRow", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Data::Index*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*>(this, ___internal_method, row, targetRow, preserveChanges, idxSearch);
}
inline ::System::Data::DataTable* System::Data::DataTable::CreateInstance() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTable*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method);
}
inline ::System::Data::DataTable* System::Data::DataTable::Clone() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTable*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method);
}
inline ::System::Data::DataTable* System::Data::DataTable::Clone(::System::Data::DataSet* cloneDS) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "Clone", {}, { ::i2c::type_of<::System::Data::DataSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method, cloneDS);
}
inline ::System::Data::DataTable* System::Data::DataTable::IncrementalCloneTo(::System::Data::DataTable* sourceTable, ::System::Data::DataTable* targetTable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                           { "IncrementalCloneTo", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method, sourceTable, targetTable);
}
inline ::System::Data::DataTable* System::Data::DataTable::CloneHierarchy(::System::Data::DataTable* sourceTable, ::System::Data::DataSet* ds, ::System::Collections::Hashtable* visitedMap) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Data::DataTable*>(),
                       { "CloneHierarchy", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Collections::Hashtable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method, sourceTable, ds, visitedMap);
}
inline ::System::Data::DataTable* System::Data::DataTable::CloneTo(::System::Data::DataTable* clone, ::System::Data::DataSet* cloneDS, bool skipExpressionColumns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                           { "CloneTo", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method, clone, cloneDS, skipExpressionColumns);
}
inline ::System::ComponentModel::ISite* System::Data::DataTable::get_Site() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTable*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ISite*>(this, ___internal_method);
}
inline void System::Data::DataTable::AddRow(::System::Data::DataRow* row, int32_t proposedID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "AddRow", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row, proposedID);
}
inline void System::Data::DataTable::InsertRow(::System::Data::DataRow* row, int32_t proposedID, int32_t pos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "InsertRow", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row, proposedID, pos);
}
inline void System::Data::DataTable::InsertRow(::System::Data::DataRow* row, int64_t proposedID, int32_t pos, bool fireEvent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                              { "InsertRow", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row, proposedID, pos, fireEvent);
}
inline void System::Data::DataTable::CheckNotModifying(::System::Data::DataRow* row) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "CheckNotModifying", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row);
}
inline void System::Data::DataTable::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataTable::Clear(bool clearAll) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "Clear", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clearAll);
}
inline void System::Data::DataTable::CascadeAll(::System::Data::DataRow* row, ::System::Data::DataRowAction action) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "CascadeAll", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowAction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row, action);
}
inline void System::Data::DataTable::CommitRow(::System::Data::DataRow* row) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "CommitRow", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row);
}
inline int32_t System::Data::DataTable::Compare(::StringW s1, ::StringW s2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "Compare", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s1, s2);
}
inline int32_t System::Data::DataTable::Compare(::StringW s1, ::StringW s2, ::System::Globalization::CompareInfo* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                           { "Compare", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s1, s2, comparer);
}
inline int32_t System::Data::DataTable::IndexOf(::StringW s1, ::StringW s2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "IndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s1, s2);
}
inline bool System::Data::DataTable::IsSuffix(::StringW s1, ::StringW s2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "IsSuffix", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s1, s2);
}
inline void System::Data::DataTable::DeleteRow(::System::Data::DataRow* row) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "DeleteRow", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row);
}
inline ::StringW System::Data::DataTable::FormatSortString(::ArrayW<::System::Data::IndexField> indexDesc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "FormatSortString", {}, { ::i2c::type_of<::ArrayW<::System::Data::IndexField>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, indexDesc);
}
inline void System::Data::DataTable::FreeRecord(::by_ref<int32_t> record) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "FreeRecord", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record);
}
inline ::System::Data::Index* System::Data::DataTable::GetIndex(::StringW sort, ::System::Data::DataViewRowState recordStates, ::System::Data::IFilter* rowFilter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                              { "GetIndex", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Data::DataViewRowState>(), ::i2c::type_of<::System::Data::IFilter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Index*>(this, ___internal_method, sort, recordStates, rowFilter);
}
inline ::System::Data::Index* System::Data::DataTable::GetIndex(::ArrayW<::System::Data::IndexField> indexDesc, ::System::Data::DataViewRowState recordStates, ::System::Data::IFilter* rowFilter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Data::DataTable*>(),
          { "GetIndex", {}, { ::i2c::type_of<::ArrayW<::System::Data::IndexField>>(), ::i2c::type_of<::System::Data::DataViewRowState>(), ::i2c::type_of<::System::Data::IFilter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Index*>(this, ___internal_method, indexDesc, recordStates, rowFilter);
}
inline ::System::Collections::Generic::List_1<::System::Data::DataViewListener*>* System::Data::DataTable::GetListeners() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "GetListeners", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Data::DataViewListener*>*>(this, ___internal_method);
}
inline int32_t System::Data::DataTable::GetSpecialHashCode(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "GetSpecialHashCode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name);
}
inline void System::Data::DataTable::InsertRow(::System::Data::DataRow* row, int64_t proposedID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "InsertRow", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row, proposedID);
}
inline int32_t System::Data::DataTable::NewRecord() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "NewRecord", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Data::DataTable::NewUninitializedRecord() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "NewUninitializedRecord", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Data::DataTable::NewRecord(int32_t sourceRecord) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "NewRecord", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sourceRecord);
}
inline ::System::Data::DataRow* System::Data::DataTable::NewEmptyRow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "NewEmptyRow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*>(this, ___internal_method);
}
inline ::System::Data::DataRow* System::Data::DataTable::NewUninitializedRow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "NewUninitializedRow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*>(this, ___internal_method);
}
inline ::System::Data::DataRow* System::Data::DataTable::NewRow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "NewRow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*>(this, ___internal_method);
}
inline ::System::Data::DataRow* System::Data::DataTable::CreateEmptyRow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "CreateEmptyRow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*>(this, ___internal_method);
}
inline void System::Data::DataTable::NewRowCreated(::System::Data::DataRow* row) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "NewRowCreated", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row);
}
inline ::System::Data::DataRow* System::Data::DataTable::NewRow(int32_t record) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "NewRow", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*>(this, ___internal_method, record);
}
inline ::System::Data::DataRow* System::Data::DataTable::NewRowFromBuilder(::System::Data::DataRowBuilder* builder) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTable*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*>(this, ___internal_method, builder);
}
inline ::System::Type* System::Data::DataTable::GetRowType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTable*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::ArrayW<::System::Data::DataRow*> System::Data::DataTable::NewRowArray(int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "NewRowArray", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataRow*>>(this, ___internal_method, size);
}
inline bool System::Data::DataTable::get_NeedColumnChangeEvents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_NeedColumnChangeEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::DataTable::OnColumnChanging(::System::Data::DataColumnChangeEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTable*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Data::DataTable::OnColumnChanged(::System::Data::DataColumnChangeEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTable*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Data::DataTable::OnPropertyChanging(::System::ComponentModel::PropertyChangedEventArgs* pcevent) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTable*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pcevent);
}
inline void System::Data::DataTable::OnRemoveColumnInternal(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "OnRemoveColumnInternal", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column);
}
inline void System::Data::DataTable::OnRemoveColumn(::System::Data::DataColumn* column) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTable*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column);
}
inline ::System::Data::DataRowChangeEventArgs* System::Data::DataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs* args, ::System::Data::DataRow* eRow,
                                                                                     ::System::Data::DataRowAction eAction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Data::DataTable*>(),
          { "OnRowChanged", {}, { ::i2c::type_of<::System::Data::DataRowChangeEventArgs*>(), ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowAction>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRowChangeEventArgs*>(this, ___internal_method, args, eRow, eAction);
}
inline ::System::Data::DataRowChangeEventArgs* System::Data::DataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs* args, ::System::Data::DataRow* eRow,
                                                                                      ::System::Data::DataRowAction eAction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Data::DataTable*>(),
          { "OnRowChanging", {}, { ::i2c::type_of<::System::Data::DataRowChangeEventArgs*>(), ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowAction>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRowChangeEventArgs*>(this, ___internal_method, args, eRow, eAction);
}
inline void System::Data::DataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTable*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Data::DataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTable*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Data::DataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTable*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Data::DataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTable*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Data::DataTable::OnTableCleared(::System::Data::DataTableClearEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTable*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Data::DataTable::OnTableClearing(::System::Data::DataTableClearEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTable*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Data::DataTable::OnTableNewRow(::System::Data::DataTableNewRowEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTable*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline ::ArrayW<::System::Data::IndexField> System::Data::DataTable::ParseSortString(::StringW sortString) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "ParseSortString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::IndexField>>(this, ___internal_method, sortString);
}
inline void System::Data::DataTable::RaisePropertyChanging(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "RaisePropertyChanging", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Data::DataTable::RecordChanged(int32_t record) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "RecordChanged", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record);
}
inline void System::Data::DataTable::RecordChanged(::ArrayW<int32_t> oldIndex, ::ArrayW<int32_t> newIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "RecordChanged", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldIndex, newIndex);
}
inline void System::Data::DataTable::RecordStateChanged(int32_t record, ::System::Data::DataViewRowState oldState, ::System::Data::DataViewRowState newState) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                          { "RecordStateChanged", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::DataViewRowState>(), ::i2c::type_of<::System::Data::DataViewRowState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record, oldState, newState);
}
inline void System::Data::DataTable::RecordStateChanged(int32_t record1, ::System::Data::DataViewRowState oldState1, ::System::Data::DataViewRowState newState1, int32_t record2,
                                                        ::System::Data::DataViewRowState oldState2, ::System::Data::DataViewRowState newState2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                           { "RecordStateChanged",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::DataViewRowState>(), ::i2c::type_of<::System::Data::DataViewRowState>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::DataViewRowState>(), ::i2c::type_of<::System::Data::DataViewRowState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record1, oldState1, newState1, record2, oldState2, newState2);
}
inline ::ArrayW<int32_t> System::Data::DataTable::RemoveRecordFromIndexes(::System::Data::DataRow* row, ::System::Data::DataRowVersion version) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                           { "RemoveRecordFromIndexes", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowVersion>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, row, version);
}
inline ::ArrayW<int32_t> System::Data::DataTable::InsertRecordToIndexes(::System::Data::DataRow* row, ::System::Data::DataRowVersion version) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                           { "InsertRecordToIndexes", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowVersion>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, row, version);
}
inline void System::Data::DataTable::SilentlySetValue(::System::Data::DataRow* dr, ::System::Data::DataColumn* dc, ::System::Data::DataRowVersion version, ::System::Object* newValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "SilentlySetValue",
                                                                                               {},
                                                                                               { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataColumn*>(),
                                                                                                 ::i2c::type_of<::System::Data::DataRowVersion>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dr, dc, version, newValue);
}
inline void System::Data::DataTable::RemoveRow(::System::Data::DataRow* row, bool check) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "RemoveRow", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row, check);
}
inline void System::Data::DataTable::Reset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTable*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataTable::ResetIndexes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "ResetIndexes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataTable::ResetInternalIndexes(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "ResetInternalIndexes", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column);
}
inline void System::Data::DataTable::RollbackRow(::System::Data::DataRow* row) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "RollbackRow", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row);
}
inline ::System::Data::DataRowChangeEventArgs* System::Data::DataTable::RaiseRowChanged(::System::Data::DataRowChangeEventArgs* args, ::System::Data::DataRow* eRow,
                                                                                        ::System::Data::DataRowAction eAction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Data::DataTable*>(),
          { "RaiseRowChanged", {}, { ::i2c::type_of<::System::Data::DataRowChangeEventArgs*>(), ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowAction>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRowChangeEventArgs*>(this, ___internal_method, args, eRow, eAction);
}
inline ::System::Data::DataRowChangeEventArgs* System::Data::DataTable::RaiseRowChanging(::System::Data::DataRowChangeEventArgs* args, ::System::Data::DataRow* eRow,
                                                                                         ::System::Data::DataRowAction eAction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Data::DataTable*>(),
          { "RaiseRowChanging", {}, { ::i2c::type_of<::System::Data::DataRowChangeEventArgs*>(), ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowAction>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRowChangeEventArgs*>(this, ___internal_method, args, eRow, eAction);
}
inline ::System::Data::DataRowChangeEventArgs* System::Data::DataTable::RaiseRowChanging(::System::Data::DataRowChangeEventArgs* args, ::System::Data::DataRow* eRow,
                                                                                         ::System::Data::DataRowAction eAction, bool fireEvent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "RaiseRowChanging",
                                                                                               {},
                                                                                               { ::i2c::type_of<::System::Data::DataRowChangeEventArgs*>(), ::i2c::type_of<::System::Data::DataRow*>(),
                                                                                                 ::i2c::type_of<::System::Data::DataRowAction>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRowChangeEventArgs*>(this, ___internal_method, args, eRow, eAction, fireEvent);
}
inline void System::Data::DataTable::SetNewRecord(::System::Data::DataRow* row, int32_t proposedRecord, ::System::Data::DataRowAction action, bool isInMerge, bool fireEvent,
                                                  bool suppressEnsurePropertyChanged) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "SetNewRecord",
                                                                           {},
                                                                           { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::DataRowAction>(),
                                                                             ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row, proposedRecord, action, isInMerge, fireEvent, suppressEnsurePropertyChanged);
}
inline void System::Data::DataTable::SetNewRecordWorker(::System::Data::DataRow* row, int32_t proposedRecord, ::System::Data::DataRowAction action, bool isInMerge, bool suppressEnsurePropertyChanged,
                                                        int32_t position, bool fireEvent, ::by_ref<::System::Exception*> deferredException) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                              { "SetNewRecordWorker",
                                                {},
                                                { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::DataRowAction>(), ::i2c::type_of<bool>(),
                                                  ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Exception*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row, proposedRecord, action, isInMerge, suppressEnsurePropertyChanged, position, fireEvent, deferredException);
}
inline void System::Data::DataTable::SetOldRecord(::System::Data::DataRow* row, int32_t proposedRecord) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "SetOldRecord", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row, proposedRecord);
}
inline void System::Data::DataTable::RestoreShadowIndexes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "RestoreShadowIndexes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataTable::SetShadowIndexes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "SetShadowIndexes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataTable::ShadowIndexCopy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "ShadowIndexCopy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Data::DataTable::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTable*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Data::DataTable::UpdatingCurrent(::System::Data::DataRow* row, ::System::Data::DataRowAction action) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "UpdatingCurrent", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowAction>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, row, action);
}
inline ::System::Data::DataColumn* System::Data::DataTable::AddUniqueKey(int32_t position) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "AddUniqueKey", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataColumn*>(this, ___internal_method, position);
}
inline ::System::Data::DataColumn* System::Data::DataTable::AddUniqueKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "AddUniqueKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataColumn*>(this, ___internal_method);
}
inline ::System::Data::DataColumn* System::Data::DataTable::AddForeignKey(::System::Data::DataColumn* parentKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "AddForeignKey", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataColumn*>(this, ___internal_method, parentKey);
}
inline void System::Data::DataTable::UpdatePropertyDescriptorCollectionCache() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "UpdatePropertyDescriptorCollectionCache", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::Data::DataTable::GetPropertyDescriptorCollection(::ArrayW<::System::Attribute*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "GetPropertyDescriptorCollection", {}, { ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(this, ___internal_method, attributes);
}
inline ::System::Xml::XmlQualifiedName* System::Data::DataTable::get_TypeName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_TypeName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(this, ___internal_method);
}
inline void System::Data::DataTable::set_TypeName(::System::Xml::XmlQualifiedName* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "set_TypeName", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Data::DataTable::Merge(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "Merge", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline void System::Data::DataTable::Merge(::System::Data::DataTable* table, bool preserveChanges, ::System::Data::MissingSchemaAction missingSchemaAction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                              { "Merge", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Data::MissingSchemaAction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, preserveChanges, missingSchemaAction);
}
inline void System::Data::DataTable::WriteXml(::System::Xml::XmlWriter* writer, ::System::Data::XmlWriteMode mode, bool writeHierarchy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                              { "WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>(), ::i2c::type_of<::System::Data::XmlWriteMode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, mode, writeHierarchy);
}
inline bool System::Data::DataTable::CheckForClosureOnExpressions(::System::Data::DataTable* dt, bool writeHierarchy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "CheckForClosureOnExpressions", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, dt, writeHierarchy);
}
inline bool System::Data::DataTable::CheckForClosureOnExpressionTables(::System::Collections::Generic::List_1<::System::Data::DataTable*>* tableList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                           { "CheckForClosureOnExpressionTables", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Data::DataTable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tableList);
}
inline void System::Data::DataTable::WriteXmlSchema(::System::Xml::XmlWriter* writer, bool writeHierarchy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "WriteXmlSchema", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, writeHierarchy);
}
inline void System::Data::DataTable::RestoreConstraint(bool originalEnforceConstraint) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "RestoreConstraint", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, originalEnforceConstraint);
}
inline bool System::Data::DataTable::IsEmptyXml(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "IsEmptyXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reader);
}
inline ::System::Data::XmlReadMode System::Data::DataTable::ReadXml(::System::Xml::XmlReader* reader, ::System::Data::XmlReadMode mode, bool denyResolving) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                                           { "ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::System::Data::XmlReadMode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::XmlReadMode>(this, ___internal_method, reader, mode, denyResolving);
}
inline void System::Data::DataTable::ReadEndElement(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "ReadEndElement", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void System::Data::DataTable::ReadXDRSchema(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "ReadXDRSchema", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline bool System::Data::DataTable::MoveToElement(::System::Xml::XmlReader* reader, int32_t depth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "MoveToElement", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reader, depth);
}
inline void System::Data::DataTable::ReadXmlDiffgram(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "ReadXmlDiffgram", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void System::Data::DataTable::ReadXSDSchema(::System::Xml::XmlReader* reader, bool denyResolving) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "ReadXSDSchema", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, denyResolving);
}
inline void System::Data::DataTable::ReadXmlSchema(::System::Xml::XmlReader* reader, bool denyResolving) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "ReadXmlSchema", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, denyResolving);
}
inline void System::Data::DataTable::CreateTableList(::System::Data::DataTable* currentTable, ::System::Collections::Generic::List_1<::System::Data::DataTable*>* tableList) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                          { "CreateTableList", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Data::DataTable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTable, tableList);
}
inline void System::Data::DataTable::CreateRelationList(::System::Collections::Generic::List_1<::System::Data::DataTable*>* tableList,
                                                        ::System::Collections::Generic::List_1<::System::Data::DataRelation*>* relationList) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "CreateRelationList",
                                                                                               {},
                                                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Data::DataTable*>*>(),
                                                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::System::Data::DataRelation*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tableList, relationList);
}
inline ::System::Xml::Schema::XmlSchemaComplexType* System::Data::DataTable::GetDataTableSchema(::System::Xml::Schema::XmlSchemaSet* schemaSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "GetDataTableSchema", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaComplexType*>(nullptr, ___internal_method, schemaSet);
}
inline ::System::Xml::Schema::XmlSchema* System::Data::DataTable::System_Xml_Serialization_IXmlSerializable_GetSchema() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "System.Xml.Serialization.IXmlSerializable.GetSchema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchema* System::Data::DataTable::GetSchema() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTable*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(this, ___internal_method);
}
inline void System::Data::DataTable::System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "System.Xml.Serialization.IXmlSerializable.ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void System::Data::DataTable::System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "System.Xml.Serialization.IXmlSerializable.WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void System::Data::DataTable::ReadXmlSerializable(::System::Xml::XmlReader* reader) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTable*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline ::System::Collections::Hashtable* System::Data::DataTable::get_RowDiffId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_RowDiffId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Hashtable*>(this, ___internal_method);
}
inline int32_t System::Data::DataTable::get_ObjectID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "get_ObjectID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Data::DataTable::AddDependentColumn(::System::Data::DataColumn* expressionColumn) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "AddDependentColumn", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expressionColumn);
}
inline void System::Data::DataTable::RemoveDependentColumn(::System::Data::DataColumn* expressionColumn) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "RemoveDependentColumn", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expressionColumn);
}
inline void System::Data::DataTable::EvaluateExpressions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "EvaluateExpressions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataTable::EvaluateExpressions(::System::Data::DataRow* row, ::System::Data::DataRowAction action,
                                                         ::System::Collections::Generic::List_1<::System::Data::DataRow*>* cachedRows) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "EvaluateExpressions",
                                                                                               {},
                                                                                               { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowAction>(),
                                                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::System::Data::DataRow*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row, action, cachedRows);
}
inline void System::Data::DataTable::EvaluateExpressions(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "EvaluateExpressions", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column);
}
inline void System::Data::DataTable::EvaluateDependentExpressions(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(), { "EvaluateDependentExpressions", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column);
}
inline void System::Data::DataTable::EvaluateDependentExpressions(::System::Collections::Generic::List_1<::System::Data::DataColumn*>* columns, ::System::Data::DataRow* row,
                                                                  ::System::Data::DataRowVersion version, ::System::Collections::Generic::List_1<::System::Data::DataRow*>* cachedRows) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTable*>(),
                                              { "EvaluateDependentExpressions",
                                                {},
                                                { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Data::DataColumn*>*>(), ::i2c::type_of<::System::Data::DataRow*>(),
                                                  ::i2c::type_of<::System::Data::DataRowVersion>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Data::DataRow*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, columns, row, version, cachedRows);
}
inline ::System::Data::DataTable* System::Data::DataTable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataTable*>());
}
inline ::System::Data::DataTable* System::Data::DataTable::New_ctor(::StringW tableName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataTable*>(tableName));
}
inline ::System::Data::DataTable* System::Data::DataTable::New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataTable*>(info, context));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Data::DataTable::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Data::DataTable::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
constexpr System::Data::DataTable::operator ::System::Xml::Serialization::IXmlSerializable*() noexcept {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
constexpr ::System::Xml::Serialization::IXmlSerializable* System::Data::DataTable::i___System__Xml__Serialization__IXmlSerializable() noexcept {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Data::DataTable::DataTable() {}
