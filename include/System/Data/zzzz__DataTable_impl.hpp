#pragma once
// IWYU pragma private; include "System/Data/DataTable.hpp"
#include "System/ComponentModel/zzzz__MarshalByValueComponent_impl.hpp"
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
//  Writing Method size for method: ::System::Data::__DataTable__RowDiffIdUsageSection.Prepare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::__DataTable__RowDiffIdUsageSection::*)(::System::Data::DataTable*)>(
    &::System::Data::__DataTable__RowDiffIdUsageSection::Prepare)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2cd83ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__DataTable__RowDiffIdUsageSection>::get(), "Prepare", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
    return ___internal_method;
  }
};
inline void System::Data::__DataTable__RowDiffIdUsageSection::Prepare(::System::Data::DataTable* table) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__DataTable__RowDiffIdUsageSection>::get(), "Prepare", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, table);
}
// Ctor Parameters [CppParam { name: "_targetTable", ty: "::System::Data::DataTable*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::System::Data::__DataTable__RowDiffIdUsageSection::__DataTable__RowDiffIdUsageSection(::System::Data::DataTable* _targetTable) noexcept {
  this->_targetTable = _targetTable;
}
// Ctor Parameters []
constexpr ::System::Data::__DataTable__RowDiffIdUsageSection::__DataTable__RowDiffIdUsageSection() {}
//  Writing Method size for method: ::System::Data::__DataTable__DSRowDiffIdUsageSection.Prepare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::__DataTable__DSRowDiffIdUsageSection::*)(::System::Data::DataSet*)>(
    &::System::Data::__DataTable__DSRowDiffIdUsageSection::Prepare)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2cd4634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__DataTable__DSRowDiffIdUsageSection>::get(), "Prepare", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get() })));
    return ___internal_method;
  }
};
inline void System::Data::__DataTable__DSRowDiffIdUsageSection::Prepare(::System::Data::DataSet* ds) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__DataTable__DSRowDiffIdUsageSection>::get(), "Prepare", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ds);
}
// Ctor Parameters [CppParam { name: "_targetDS", ty: "::System::Data::DataSet*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::System::Data::__DataTable__DSRowDiffIdUsageSection::__DataTable__DSRowDiffIdUsageSection(::System::Data::DataSet* _targetDS) noexcept {
  this->_targetDS = _targetDS;
}
// Ctor Parameters []
constexpr ::System::Data::__DataTable__DSRowDiffIdUsageSection::__DataTable__DSRowDiffIdUsageSection() {}
//  Writing Method size for method: ::System::Data::DataTable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)()>(&::System::Data::DataTable::_ctor)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x2caaed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::StringW)>(&::System::Data::DataTable::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2cab380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Data::DataTable::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Data::DataTable::_ctor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2cab3e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Data::DataTable::GetObjectData)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2cab8a8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SerializeDataTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, bool, ::System::Data::SerializationFormat)>(
    &::System::Data::DataTable::SerializeDataTable)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x2cab980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SerializeDataTable", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SerializationFormat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.DeserializeDataTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, bool, ::System::Data::SerializationFormat)>(
    &::System::Data::DataTable::DeserializeDataTable)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x2cab57c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "DeserializeDataTable", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SerializationFormat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SerializeTableSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, bool)>(&::System::Data::DataTable::SerializeTableSchema)> {
  constexpr static std::size_t size = 0xccc;
  constexpr static std::size_t addrs = 0x2cabc3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SerializeTableSchema", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.DeserializeTableSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, bool)>(&::System::Data::DataTable::DeserializeTableSchema)> {
  constexpr static std::size_t size = 0xed8;
  constexpr static std::size_t addrs = 0x2cacf60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "DeserializeTableSchema", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SerializeConstraints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, int32_t, bool)>(&::System::Data::DataTable::SerializeConstraints)> {
  constexpr static std::size_t size = 0x740;
  constexpr static std::size_t addrs = 0x2cafd30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SerializeConstraints", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.DeserializeConstraints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, int32_t, bool)>(&::System::Data::DataTable::DeserializeConstraints)> {
  constexpr static std::size_t size = 0xce4;
  constexpr static std::size_t addrs = 0x2cb0d88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "DeserializeConstraints", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SerializeExpressionColumns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, int32_t)>(&::System::Data::DataTable::SerializeExpressionColumns)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2cb1a6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SerializeExpressionColumns", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.DeserializeExpressionColumns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, int32_t)>(&::System::Data::DataTable::DeserializeExpressionColumns)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2cb1bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "DeserializeExpressionColumns", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SerializeTableData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, int32_t)>(&::System::Data::DataTable::SerializeTableData)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x2cac908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SerializeTableData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.DeserializeTableData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, int32_t)>(&::System::Data::DataTable::DeserializeTableData)> {
  constexpr static std::size_t size = 0x9b0;
  constexpr static std::size_t addrs = 0x2cade38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "DeserializeTableData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ConvertToRowState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRowState (::System::Data::DataTable::*)(::System::Collections::BitArray*, int32_t)>(
    &::System::Data::DataTable::ConvertToRowState)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2cb1ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "ConvertToRowState", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::BitArray*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.GetRowAndColumnErrors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(int32_t, ::System::Collections::Hashtable*, ::System::Collections::Hashtable*)>(
    &::System::Data::DataTable::GetRowAndColumnErrors)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x2cb1d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "GetRowAndColumnErrors", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ConvertToRowError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(int32_t, ::System::Collections::Hashtable*, ::System::Collections::Hashtable*)>(
    &::System::Data::DataTable::ConvertToRowError)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x2cb20a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "ConvertToRowError", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_CaseSensitive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_CaseSensitive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb2374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_CaseSensitive",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_CaseSensitive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(bool)>(&::System::Data::DataTable::set_CaseSensitive)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2cb237c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_CaseSensitive",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_AreIndexEventsSuspended
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_AreIndexEventsSuspended)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2cb241c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_AreIndexEventsSuspended",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RestoreIndexEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(bool)>(&::System::Data::DataTable::RestoreIndexEvents)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x2cb242c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RestoreIndexEvents",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SuspendIndexEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)()>(&::System::Data::DataTable::SuspendIndexEvents)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2cb2798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SuspendIndexEvents",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_IsTypedDataTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_IsTypedDataTable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2cb2844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_IsTypedDataTable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SetCaseSensitiveValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataTable::*)(bool, bool, bool)>(&::System::Data::DataTable::SetCaseSensitiveValue)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x2cb0470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SetCaseSensitiveValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ShouldSerializeCaseSensitive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataTable::*)()>(&::System::Data::DataTable::ShouldSerializeCaseSensitive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb2904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(),
                                                                               "ShouldSerializeCaseSensitive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_SelfNested
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_SelfNested)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x2cb290c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_SelfNested",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_LiveIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Data::Index*>* (::System::Data::DataTable::*)()>(
    &::System::Data::DataTable::get_LiveIndexes)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2cb2cb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_LiveIndexes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_RemotingFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::SerializationFormat (::System::Data::DataTable::*)()>(
    &::System::Data::DataTable::get_RemotingFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb2d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_RemotingFormat",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_RemotingFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::SerializationFormat)>(
    &::System::Data::DataTable::set_RemotingFormat)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2cb2d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_RemotingFormat", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SerializationFormat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_UKColumnPositionForInference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_UKColumnPositionForInference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb2dc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_UKColumnPositionForInference",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_UKColumnPositionForInference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(int32_t)>(&::System::Data::DataTable::set_UKColumnPositionForInference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb2dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_UKColumnPositionForInference",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_ChildRelations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRelationCollection* (::System::Data::DataTable::*)()>(
    &::System::Data::DataTable::get_ChildRelations)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2cb2dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_ChildRelations",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_Columns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataColumnCollection* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_Columns)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb2e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_Columns",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_CompareInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CompareInfo* (::System::Data::DataTable::*)()>(
    &::System::Data::DataTable::get_CompareInfo)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2cb2e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_CompareInfo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_Constraints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::ConstraintCollection* (::System::Data::DataTable::*)()>(
    &::System::Data::DataTable::get_Constraints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb2e84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_Constraints",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ResetConstraints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)()>(&::System::Data::DataTable::ResetConstraints)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2cb2e8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "ResetConstraints",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_DataSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataSet* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_DataSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb2ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_DataSet",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SetDataSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataSet*)>(&::System::Data::DataTable::SetDataSet)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2cb2eb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SetDataSet", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_DisplayExpressionInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_DisplayExpressionInternal)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2cb2f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(),
                                                                               "get_DisplayExpressionInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_EnforceConstraints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_EnforceConstraints)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2cb2fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_EnforceConstraints",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_EnforceConstraints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(bool)>(&::System::Data::DataTable::set_EnforceConstraints)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2cb2ff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_EnforceConstraints",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_SuspendEnforceConstraints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_SuspendEnforceConstraints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb3610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(),
                                                                               "get_SuspendEnforceConstraints", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_SuspendEnforceConstraints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(bool)>(&::System::Data::DataTable::set_SuspendEnforceConstraints)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cb3618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_SuspendEnforceConstraints",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.EnableConstraints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)()>(&::System::Data::DataTable::EnableConstraints)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x2cb3030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "EnableConstraints",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_ExtendedProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::PropertyCollection* (::System::Data::DataTable::*)()>(
    &::System::Data::DataTable::get_ExtendedProperties)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2caf7bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_ExtendedProperties",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_FormatProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IFormatProvider* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_FormatProvider)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2cb3624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_FormatProvider",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_Locale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_Locale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb36b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_Locale",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_Locale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Globalization::CultureInfo*)>(&::System::Data::DataTable::set_Locale)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x2cb36bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_Locale", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SetLocaleValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataTable::*)(::System::Globalization::CultureInfo*, bool, bool)>(
    &::System::Data::DataTable::SetLocaleValue)> {
  constexpr static std::size_t size = 0x5c4;
  constexpr static std::size_t addrs = 0x2cb0794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SetLocaleValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ShouldSerializeLocale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataTable::*)()>(&::System::Data::DataTable::ShouldSerializeLocale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb3b58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "ShouldSerializeLocale",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_MinimumCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_MinimumCapacity)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2cb3b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_MinimumCapacity",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_MinimumCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(int32_t)>(&::System::Data::DataTable::set_MinimumCapacity)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2cb0d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_MinimumCapacity", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_RecordCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_RecordCapacity)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2cb3b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_RecordCapacity",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_ElementColumnCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_ElementColumnCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb3b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_ElementColumnCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_ElementColumnCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(int32_t)>(&::System::Data::DataTable::set_ElementColumnCount)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cb3ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_ElementColumnCount", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_ParentRelations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRelationCollection* (::System::Data::DataTable::*)()>(
    &::System::Data::DataTable::get_ParentRelations)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2cb2c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_ParentRelations",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_MergingData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_MergingData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb3be4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_MergingData",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_MergingData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(bool)>(&::System::Data::DataTable::set_MergingData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cb3bec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_MergingData", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_NestedParentRelations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Data::DataRelation*, ::Array<::System::Data::DataRelation*>*> (::System::Data::DataTable::*)()>(
    &::System::Data::DataTable::get_NestedParentRelations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb3bf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_NestedParentRelations",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_SchemaLoading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_SchemaLoading)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb3c00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_SchemaLoading",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CacheNestedParent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)()>(&::System::Data::DataTable::CacheNestedParent)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2cb3c08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "CacheNestedParent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.FindNestedParentRelations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Data::DataRelation*, ::Array<::System::Data::DataRelation*>*> (::System::Data::DataTable::*)()>(
    &::System::Data::DataTable::FindNestedParentRelations)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x2cb3c20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "FindNestedParentRelations",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_NestedParentsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_NestedParentsCount)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x2cb40a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_NestedParentsCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_PrimaryKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> (::System::Data::DataTable::*)()>(
    &::System::Data::DataTable::get_PrimaryKey)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2cb43b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_PrimaryKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_PrimaryKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>)>(
    &::System::Data::DataTable::set_PrimaryKey)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x2cb445c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_PrimaryKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_Rows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRowCollection* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_Rows)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb4848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_Rows",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_TableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_TableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb4850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_TableName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_TableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::StringW)>(&::System::Data::DataTable::set_TableName)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x2cb4858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_TableName", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_EncodedTableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_EncodedTableName)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2cb4de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_EncodedTableName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.GetInheritedNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::DataTable::*)(::System::Collections::Generic::List_1<::System::Data::DataTable*>*)>(
    &::System::Data::DataTable::GetInheritedNamespace)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x2cb4e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "GetInheritedNamespace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Data::DataTable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_Namespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_Namespace)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2caced4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_Namespace",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_Namespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::StringW)>(&::System::Data::DataTable::set_Namespace)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x2caf484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_Namespace", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.IsNamespaceInherited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataTable::*)()>(&::System::Data::DataTable::IsNamespaceInherited)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2cb5e78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "IsNamespaceInherited",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CheckCascadingNamespaceConflict
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::StringW)>(&::System::Data::DataTable::CheckCascadingNamespaceConflict)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x2cb5098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "CheckCascadingNamespaceConflict",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CheckNamespaceValidityForNestedRelations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::StringW)>(
    &::System::Data::DataTable::CheckNamespaceValidityForNestedRelations)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x2cb5474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "CheckNamespaceValidityForNestedRelations",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CheckNamespaceValidityForNestedParentRelations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::StringW, ::System::Data::DataTable*)>(
    &::System::Data::DataTable::CheckNamespaceValidityForNestedParentRelations)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x2cb5e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "CheckNamespaceValidityForNestedParentRelations", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.DoRaiseNamespaceChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)()>(&::System::Data::DataTable::DoRaiseNamespaceChange)> {
  constexpr static std::size_t size = 0x5dc;
  constexpr static std::size_t addrs = 0x2cb589c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "DoRaiseNamespaceChange",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_Prefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_Prefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb6208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_Prefix",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_Prefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::StringW)>(&::System::Data::DataTable::set_Prefix)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2cb6210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_Prefix", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_XmlText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataColumn* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_XmlText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb6370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_XmlText",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_XmlText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataColumn*)>(&::System::Data::DataTable::set_XmlText)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2cb6378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_XmlText", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_MaxOccurs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_MaxOccurs)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cb6420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_MaxOccurs",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_MaxOccurs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Decimal)>(&::System::Data::DataTable::set_MaxOccurs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb642c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_MaxOccurs", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_MinOccurs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_MinOccurs)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cb6434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_MinOccurs",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_MinOccurs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Decimal)>(&::System::Data::DataTable::set_MinOccurs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb6440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_MinOccurs", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SetKeyValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Data::DataTable::*)(::System::Data::DataKey, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>, int32_t)>(&::System::Data::DataTable::SetKeyValues)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2cb6448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SetKeyValues", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataKey>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.FindByIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Data::DataRow* (::System::Data::DataTable::*)(::System::Data::Index*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::System::Data::DataTable::FindByIndex)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2cb64d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "FindByIndex", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Index*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.FindMergeTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Data::DataRow* (::System::Data::DataTable::*)(::System::Data::DataRow*, ::System::Data::DataKey, ::System::Data::Index*)>(&::System::Data::DataTable::FindMergeTarget)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2cb6570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "FindMergeTarget", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataKey>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Index*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SetMergeRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*, int32_t, int32_t, ::System::Data::DataRowAction)>(
    &::System::Data::DataTable::SetMergeRecords)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2cb65f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SetMergeRecords", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowAction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.MergeRow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Data::DataRow* (::System::Data::DataTable::*)(::System::Data::DataRow*, ::System::Data::DataRow*, bool, ::System::Data::Index*)>(&::System::Data::DataTable::MergeRow)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x2cb6980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "MergeRow", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Index*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CreateInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::CreateInstance)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2cb735c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::Clone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb73e8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (::System::Data::DataTable::*)(::System::Data::DataSet*)>(
    &::System::Data::DataTable::Clone)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2cb73f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "Clone", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.IncrementalCloneTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (::System::Data::DataTable::*)(::System::Data::DataTable*, ::System::Data::DataTable*)>(
    &::System::Data::DataTable::IncrementalCloneTo)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x2cb75e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "IncrementalCloneTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CloneHierarchy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (
    ::System::Data::DataTable::*)(::System::Data::DataTable*, ::System::Data::DataSet*, ::System::Collections::Hashtable*)>(&::System::Data::DataTable::CloneHierarchy)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x2cb7928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "CloneHierarchy", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CloneTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Data::DataTable* (::System::Data::DataTable::*)(::System::Data::DataTable*, ::System::Data::DataSet*, bool)>(&::System::Data::DataTable::CloneTo)> {
  constexpr static std::size_t size = 0xc94;
  constexpr static std::size_t addrs = 0x2cae7f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "CloneTo", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_Site
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ISite* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_Site)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb7da8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.AddRow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*, int32_t)>(&::System::Data::DataTable::AddRow)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2cb7db0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "AddRow", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.InsertRow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*, int32_t, int32_t)>(
    &::System::Data::DataTable::InsertRow)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cb7dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "InsertRow", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.InsertRow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*, int64_t, int32_t, bool)>(
    &::System::Data::DataTable::InsertRow)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x2cb7dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "InsertRow", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CheckNotModifying
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*)>(&::System::Data::DataTable::CheckNotModifying)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2cb8978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "CheckNotModifying", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)()>(&::System::Data::DataTable::Clear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb89a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(bool)>(&::System::Data::DataTable::Clear)> {
  constexpr static std::size_t size = 0x880;
  constexpr static std::size_t addrs = 0x2cb89b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "Clear", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CascadeAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*, ::System::Data::DataRowAction)>(
    &::System::Data::DataTable::CascadeAll)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2cb9390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "CascadeAll", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowAction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CommitRow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*)>(&::System::Data::DataTable::CommitRow)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2cb9448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "CommitRow", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataTable::*)(::StringW, ::StringW)>(&::System::Data::DataTable::Compare)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb9610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataTable::*)(::StringW, ::StringW, ::System::Globalization::CompareInfo*)>(
    &::System::Data::DataTable::Compare)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2cb9618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.IndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataTable::*)(::StringW, ::StringW)>(&::System::Data::DataTable::IndexOf)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2cb9774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "IndexOf", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.IsSuffix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataTable::*)(::StringW, ::StringW)>(&::System::Data::DataTable::IsSuffix)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2cb97b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "IsSuffix", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.DeleteRow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*)>(&::System::Data::DataTable::DeleteRow)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2cb97f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "DeleteRow", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.FormatSortString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::DataTable::*)(::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*>)>(
    &::System::Data::DataTable::FormatSortString)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2cb984c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "FormatSortString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.FreeRecord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(ByRef<int32_t>)>(&::System::Data::DataTable::FreeRecord)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2cb9974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "FreeRecord", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.GetIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Data::Index* (::System::Data::DataTable::*)(::StringW, ::System::Data::DataViewRowState, ::System::Data::IFilter*)>(&::System::Data::DataTable::GetIndex)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2cb9990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "GetIndex", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::IFilter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.GetIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Index* (
    ::System::Data::DataTable::*)(::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*>, ::System::Data::DataViewRowState, ::System::Data::IFilter*)>(
    &::System::Data::DataTable::GetIndex)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x2cb9d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "GetIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::IFilter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.GetListeners
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Data::DataViewListener*>* (::System::Data::DataTable::*)()>(
    &::System::Data::DataTable::GetListeners)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb9ee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "GetListeners",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.GetSpecialHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataTable::*)(::StringW)>(&::System::Data::DataTable::GetSpecialHashCode)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2cb3a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "GetSpecialHashCode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.InsertRow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*, int64_t)>(&::System::Data::DataTable::InsertRow)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x2cb6eb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "InsertRow", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.NewRecord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataTable::*)()>(&::System::Data::DataTable::NewRecord)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cbabbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "NewRecord",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.NewUninitializedRecord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataTable::*)()>(&::System::Data::DataTable::NewUninitializedRecord)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2cbaca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "NewUninitializedRecord",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.NewRecord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataTable::*)(int32_t)>(&::System::Data::DataTable::NewRecord)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2cbabc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "NewRecord", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.NewEmptyRow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRow* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::NewEmptyRow)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2cb1fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "NewEmptyRow",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.NewUninitializedRow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRow* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::NewUninitializedRow)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2cbacc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "NewUninitializedRow",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.NewRow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRow* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::NewRow)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2cbad7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "NewRow",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CreateEmptyRow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRow* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::CreateEmptyRow)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x2cbae3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "CreateEmptyRow",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.NewRowCreated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*)>(&::System::Data::DataTable::NewRowCreated)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2cbadb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "NewRowCreated", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.NewRow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRow* (::System::Data::DataTable::*)(int32_t)>(&::System::Data::DataTable::NewRow)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2cbacf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "NewRow", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.NewRowFromBuilder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRow* (::System::Data::DataTable::*)(::System::Data::DataRowBuilder*)>(
    &::System::Data::DataTable::NewRowFromBuilder)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2cbb214;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.GetRowType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::GetRowType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2cbb278;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.NewRowArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> (::System::Data::DataTable::*)(int32_t)>(
    &::System::Data::DataTable::NewRowArray)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2cbb2e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "NewRowArray", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_NeedColumnChangeEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_NeedColumnChangeEvents)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2cbb468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_NeedColumnChangeEvents",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.OnColumnChanging
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataColumnChangeEventArgs*)>(
    &::System::Data::DataTable::OnColumnChanging)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2cbb49c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.OnColumnChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataColumnChangeEventArgs*)>(
    &::System::Data::DataTable::OnColumnChanged)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2cbb56c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.OnPropertyChanging
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::ComponentModel::PropertyChangedEventArgs*)>(
    &::System::Data::DataTable::OnPropertyChanging)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2cbb63c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.OnRemoveColumnInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataColumn*)>(
    &::System::Data::DataTable::OnRemoveColumnInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2cbb70c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "OnRemoveColumnInternal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.OnRemoveColumn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataColumn*)>(&::System::Data::DataTable::OnRemoveColumn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cbb71c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.OnRowChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRowChangeEventArgs* (
    ::System::Data::DataTable::*)(::System::Data::DataRowChangeEventArgs*, ::System::Data::DataRow*, ::System::Data::DataRowAction)>(&::System::Data::DataTable::OnRowChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2cb9564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "OnRowChanged", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowChangeEventArgs*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowAction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.OnRowChanging
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRowChangeEventArgs* (
    ::System::Data::DataTable::*)(::System::Data::DataRowChangeEventArgs*, ::System::Data::DataRow*, ::System::Data::DataRowAction)>(&::System::Data::DataTable::OnRowChanging)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2cb94b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "OnRowChanging", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowChangeEventArgs*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowAction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.OnRowChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRowChangeEventArgs*)>(
    &::System::Data::DataTable::OnRowChanged)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2cbb720;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.OnRowChanging
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRowChangeEventArgs*)>(
    &::System::Data::DataTable::OnRowChanging)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2cbb7f0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.OnRowDeleting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRowChangeEventArgs*)>(
    &::System::Data::DataTable::OnRowDeleting)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2cbb8c0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.OnRowDeleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRowChangeEventArgs*)>(
    &::System::Data::DataTable::OnRowDeleted)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2cbb990;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.OnTableCleared
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataTableClearEventArgs*)>(
    &::System::Data::DataTable::OnTableCleared)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2cbba60;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.OnTableClearing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataTableClearEventArgs*)>(
    &::System::Data::DataTable::OnTableClearing)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2cbbb30;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.OnTableNewRow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataTableNewRowEventArgs*)>(
    &::System::Data::DataTable::OnTableNewRow)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2cbbc00;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ParseSortString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*> (::System::Data::DataTable::*)(::StringW)>(
    &::System::Data::DataTable::ParseSortString)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x2cb99c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "ParseSortString", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RaisePropertyChanging
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::StringW)>(&::System::Data::DataTable::RaisePropertyChanging)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2cb4d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RaisePropertyChanging", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RecordChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(int32_t)>(&::System::Data::DataTable::RecordChanged)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2cbbcd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RecordChanged", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RecordChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::ArrayW<int32_t, ::Array<int32_t>*>, ::ArrayW<int32_t, ::Array<int32_t>*>)>(
    &::System::Data::DataTable::RecordChanged)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2cbbe40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RecordChanged", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RecordStateChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(int32_t, ::System::Data::DataViewRowState, ::System::Data::DataViewRowState)>(
    &::System::Data::DataTable::RecordStateChanged)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2cba084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RecordStateChanged", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RecordStateChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(int32_t, ::System::Data::DataViewRowState, ::System::Data::DataViewRowState,
                                                                                                                      int32_t, ::System::Data::DataViewRowState, ::System::Data::DataViewRowState)>(
    &::System::Data::DataTable::RecordStateChanged)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x2cba20c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RecordStateChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RemoveRecordFromIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (::System::Data::DataTable::*)(::System::Data::DataRow*, ::System::Data::DataRowVersion)>(&::System::Data::DataTable::RemoveRecordFromIndexes)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2cbc014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RemoveRecordFromIndexes", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.InsertRecordToIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (::System::Data::DataTable::*)(::System::Data::DataRow*, ::System::Data::DataRowVersion)>(&::System::Data::DataTable::InsertRecordToIndexes)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2cbc1cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "InsertRecordToIndexes", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SilentlySetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(
    ::System::Data::DataRow*, ::System::Data::DataColumn*, ::System::Data::DataRowVersion, ::System::Object*)>(&::System::Data::DataTable::SilentlySetValue)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2cbc344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SilentlySetValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RemoveRow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*, bool)>(&::System::Data::DataTable::RemoveRow)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2cbcc28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RemoveRow", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)()>(&::System::Data::DataTable::Reset)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x2cbcdc8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ResetIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)()>(&::System::Data::DataTable::ResetIndexes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cae7e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "ResetIndexes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ResetInternalIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataColumn*)>(&::System::Data::DataTable::ResetInternalIndexes)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x2cbd048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "ResetInternalIndexes", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RollbackRow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*)>(&::System::Data::DataTable::RollbackRow)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2cbd210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RollbackRow", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RaiseRowChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRowChangeEventArgs* (
    ::System::Data::DataTable::*)(::System::Data::DataRowChangeEventArgs*, ::System::Data::DataRow*, ::System::Data::DataRowAction)>(&::System::Data::DataTable::RaiseRowChanged)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2cba9c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RaiseRowChanged", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowChangeEventArgs*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowAction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RaiseRowChanging
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRowChangeEventArgs* (
    ::System::Data::DataTable::*)(::System::Data::DataRowChangeEventArgs*, ::System::Data::DataRow*, ::System::Data::DataRowAction)>(&::System::Data::DataTable::RaiseRowChanging)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2cbd29c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RaiseRowChanging", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowChangeEventArgs*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowAction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RaiseRowChanging
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRowChangeEventArgs* (
    ::System::Data::DataTable::*)(::System::Data::DataRowChangeEventArgs*, ::System::Data::DataRow*, ::System::Data::DataRowAction, bool)>(&::System::Data::DataTable::RaiseRowChanging)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2cb9ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RaiseRowChanging", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowChangeEventArgs*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowAction>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SetNewRecord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*, int32_t, ::System::Data::DataRowAction, bool, bool, bool)>(&::System::Data::DataTable::SetNewRecord)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2cb66ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SetNewRecord", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 6>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SetNewRecordWorker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(
    ::System::Data::DataRow*, int32_t, ::System::Data::DataRowAction, bool, bool, int32_t, bool, ByRef<::System::Exception*>)>(&::System::Data::DataTable::SetNewRecordWorker)> {
  constexpr static std::size_t size = 0x820;
  constexpr static std::size_t addrs = 0x2cb8158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SetNewRecordWorker", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Exception*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SetOldRecord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataRow*, int32_t)>(&::System::Data::DataTable::SetOldRecord)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x2cb6704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SetOldRecord", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RestoreShadowIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)()>(&::System::Data::DataTable::RestoreShadowIndexes)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2cbd458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RestoreShadowIndexes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.SetShadowIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)()>(&::System::Data::DataTable::SetShadowIndexes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2cb2760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SetShadowIndexes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ShadowIndexCopy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)()>(&::System::Data::DataTable::ShadowIndexCopy)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2cbd474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "ShadowIndexCopy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::DataTable::*)()>(&::System::Data::DataTable::ToString)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2cbd4f8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.UpdatingCurrent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataTable::*)(::System::Data::DataRow*, ::System::Data::DataRowAction)>(
    &::System::Data::DataTable::UpdatingCurrent)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2cbd25c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "UpdatingCurrent", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowAction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.AddUniqueKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataColumn* (::System::Data::DataTable::*)(int32_t)>(&::System::Data::DataTable::AddUniqueKey)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x2cbd56c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "AddUniqueKey", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.AddUniqueKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataColumn* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::AddUniqueKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cbd7e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "AddUniqueKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.AddForeignKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataColumn* (::System::Data::DataTable::*)(::System::Data::DataColumn*)>(
    &::System::Data::DataTable::AddForeignKey)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2cbd7ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "AddForeignKey", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.UpdatePropertyDescriptorCollectionCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)()>(&::System::Data::DataTable::UpdatePropertyDescriptorCollectionCache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cbd89c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "UpdatePropertyDescriptorCollectionCache",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.GetPropertyDescriptorCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (
    ::System::Data::DataTable::*)(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(&::System::Data::DataTable::GetPropertyDescriptorCollection)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x2cbd8a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "GetPropertyDescriptorCollection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_TypeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_TypeName)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2caf728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_TypeName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.set_TypeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Xml::XmlQualifiedName*)>(&::System::Data::DataTable::set_TypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cbdae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_TypeName", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.Merge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataTable*)>(&::System::Data::DataTable::Merge)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cbdaf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "Merge", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.Merge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataTable*, bool, ::System::Data::MissingSchemaAction)>(
    &::System::Data::DataTable::Merge)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x2cbdafc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "Merge", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::MissingSchemaAction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.WriteXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Xml::XmlWriter*, ::System::Data::XmlWriteMode, bool)>(
    &::System::Data::DataTable::WriteXml)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x2cbdd64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "WriteXml", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::XmlWriteMode>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CheckForClosureOnExpressions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataTable::*)(::System::Data::DataTable*, bool)>(
    &::System::Data::DataTable::CheckForClosureOnExpressions)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2cbe11c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "CheckForClosureOnExpressions", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CheckForClosureOnExpressionTables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataTable::*)(::System::Collections::Generic::List_1<::System::Data::DataTable*>*)>(
    &::System::Data::DataTable::CheckForClosureOnExpressionTables)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x2caf828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "CheckForClosureOnExpressionTables", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Data::DataTable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.WriteXmlSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Xml::XmlWriter*, bool)>(&::System::Data::DataTable::WriteXmlSchema)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x2cbe60c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "WriteXmlSchema", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RestoreConstraint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(bool)>(&::System::Data::DataTable::RestoreConstraint)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2cbe94c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RestoreConstraint",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.IsEmptyXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataTable::*)(::System::Xml::XmlReader*)>(&::System::Data::DataTable::IsEmptyXml)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2cbe9a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "IsEmptyXml", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ReadXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Data::XmlReadMode (::System::Data::DataTable::*)(::System::Xml::XmlReader*, ::System::Data::XmlReadMode, bool)>(&::System::Data::DataTable::ReadXml)> {
  constexpr static std::size_t size = 0xe5c;
  constexpr static std::size_t addrs = 0x2cbeb70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "ReadXml", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::XmlReadMode>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ReadEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Xml::XmlReader*)>(&::System::Data::DataTable::ReadEndElement)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2cc03c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "ReadEndElement", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ReadXDRSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Xml::XmlReader*)>(&::System::Data::DataTable::ReadXDRSchema)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2cc045c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "ReadXDRSchema", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.MoveToElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataTable::*)(::System::Xml::XmlReader*, int32_t)>(&::System::Data::DataTable::MoveToElement)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2cc18f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "MoveToElement", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ReadXmlDiffgram
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Xml::XmlReader*)>(&::System::Data::DataTable::ReadXmlDiffgram)> {
  constexpr static std::size_t size = 0x9fc;
  constexpr static std::size_t addrs = 0x2cbf9cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "ReadXmlDiffgram", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ReadXSDSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Xml::XmlReader*, bool)>(&::System::Data::DataTable::ReadXSDSchema)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2cc19ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "ReadXSDSchema", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ReadXmlSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Xml::XmlReader*, bool)>(&::System::Data::DataTable::ReadXmlSchema)> {
  constexpr static std::size_t size = 0x142c;
  constexpr static std::size_t addrs = 0x2cc04cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "ReadXmlSchema", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CreateTableList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Data::DataTable::*)(::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataTable*>*)>(&::System::Data::DataTable::CreateTableList)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x2cbe224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "CreateTableList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Data::DataTable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.CreateRelationList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(
    ::System::Collections::Generic::List_1<::System::Data::DataTable*>*, ::System::Collections::Generic::List_1<::System::Data::DataRelation*>*)>(&::System::Data::DataTable::CreateRelationList)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x2cc1b3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "CreateRelationList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Data::DataTable*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Data::DataRelation*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.GetDataTableSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaComplexType* (*)(::System::Xml::Schema::XmlSchemaSet*)>(
    &::System::Data::DataTable::GetDataTableSchema)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x2cc2058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "GetDataTableSchema", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.System_Xml_Serialization_IXmlSerializable_GetSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Data::DataTable::*)()>(
    &::System::Data::DataTable::System_Xml_Serialization_IXmlSerializable_GetSchema)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2cc2278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "System.Xml.Serialization.IXmlSerializable.GetSchema",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.GetSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::GetSchema)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2cc2288;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.System_Xml_Serialization_IXmlSerializable_ReadXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Xml::XmlReader*)>(
    &::System::Data::DataTable::System_Xml_Serialization_IXmlSerializable_ReadXml)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2cc2460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "System.Xml.Serialization.IXmlSerializable.ReadXml", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.System_Xml_Serialization_IXmlSerializable_WriteXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Xml::XmlWriter*)>(
    &::System::Data::DataTable::System_Xml_Serialization_IXmlSerializable_WriteXml)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2cc260c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "System.Xml.Serialization.IXmlSerializable.WriteXml", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.ReadXmlSerializable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Xml::XmlReader*)>(&::System::Data::DataTable::ReadXmlSerializable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cc2640;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_RowDiffId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Hashtable* (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_RowDiffId)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2cc264c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_RowDiffId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.get_ObjectID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataTable::*)()>(&::System::Data::DataTable::get_ObjectID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cc26b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_ObjectID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.AddDependentColumn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataColumn*)>(&::System::Data::DataTable::AddDependentColumn)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2cc26c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "AddDependentColumn", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.RemoveDependentColumn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataColumn*)>(
    &::System::Data::DataTable::RemoveDependentColumn)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2cc27dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RemoveDependentColumn", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.EvaluateExpressions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)()>(&::System::Data::DataTable::EvaluateExpressions)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x2cc286c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "EvaluateExpressions",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.EvaluateExpressions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(
    ::System::Data::DataRow*, ::System::Data::DataRowAction, ::System::Collections::Generic::List_1<::System::Data::DataRow*>*)>(&::System::Data::DataTable::EvaluateExpressions)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x2cba428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "EvaluateExpressions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowAction>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Data::DataRow*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.EvaluateExpressions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataColumn*)>(&::System::Data::DataTable::EvaluateExpressions)> {
  constexpr static std::size_t size = 0x1228;
  constexpr static std::size_t addrs = 0x2cc2be4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "EvaluateExpressions", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.EvaluateDependentExpressions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(::System::Data::DataColumn*)>(
    &::System::Data::DataTable::EvaluateDependentExpressions)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2cb9230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "EvaluateDependentExpressions", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTable.EvaluateDependentExpressions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTable::*)(
    ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*, ::System::Data::DataRow*, ::System::Data::DataRowVersion, ::System::Collections::Generic::List_1<::System::Data::DataRow*>*)>(
    &::System::Data::DataTable::EvaluateDependentExpressions)> {
  constexpr static std::size_t size = 0x774;
  constexpr static std::size_t addrs = 0x2cbc4b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "EvaluateDependentExpressions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Data::DataColumn*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Data::DataRow*>*>::get() })));
    return ___internal_method;
  }
};
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
constexpr ::System::Data::DataSet*& System::Data::DataTable::__cordl_internal_get__dataSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSet;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataSet*> const& System::Data::DataTable::__cordl_internal_get__dataSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSet;
}
constexpr void System::Data::DataTable::__cordl_internal_set__dataSet(::System::Data::DataSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dataSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataView*& System::Data::DataTable::__cordl_internal_get__defaultView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultView;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataView*> const& System::Data::DataTable::__cordl_internal_get__defaultView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultView;
}
constexpr void System::Data::DataTable::__cordl_internal_set__defaultView(::System::Data::DataView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataRowCollection*> const& System::Data::DataTable::__cordl_internal_get__rowCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowCollection;
}
constexpr void System::Data::DataTable::__cordl_internal_set__rowCollection(::System::Data::DataRowCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rowCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataColumnCollection*& System::Data::DataTable::__cordl_internal_get__columnCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnCollection;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataColumnCollection*> const& System::Data::DataTable::__cordl_internal_get__columnCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnCollection;
}
constexpr void System::Data::DataTable::__cordl_internal_set__columnCollection(::System::Data::DataColumnCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____columnCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::ConstraintCollection*& System::Data::DataTable::__cordl_internal_get__constraintCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constraintCollection;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::ConstraintCollection*> const& System::Data::DataTable::__cordl_internal_get__constraintCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constraintCollection;
}
constexpr void System::Data::DataTable::__cordl_internal_set__constraintCollection(::System::Data::ConstraintCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____constraintCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataRelationCollection*> const& System::Data::DataTable::__cordl_internal_get__parentRelationsCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentRelationsCollection;
}
constexpr void System::Data::DataTable::__cordl_internal_set__parentRelationsCollection(::System::Data::DataRelationCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parentRelationsCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataRelationCollection*& System::Data::DataTable::__cordl_internal_get__childRelationsCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childRelationsCollection;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataRelationCollection*> const& System::Data::DataTable::__cordl_internal_get__childRelationsCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childRelationsCollection;
}
constexpr void System::Data::DataTable::__cordl_internal_set__childRelationsCollection(::System::Data::DataRelationCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____childRelationsCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::RecordManager*& System::Data::DataTable::__cordl_internal_get__recordManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordManager;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::RecordManager*> const& System::Data::DataTable::__cordl_internal_get__recordManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordManager;
}
constexpr void System::Data::DataTable::__cordl_internal_set__recordManager(::System::Data::RecordManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____recordManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Data::Index*>*& System::Data::DataTable::__cordl_internal_get__indexes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indexes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Data::Index*>*> const& System::Data::DataTable::__cordl_internal_get__indexes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indexes;
}
constexpr void System::Data::DataTable::__cordl_internal_set__indexes(::System::Collections::Generic::List_1<::System::Data::Index*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____indexes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Data::Index*>*& System::Data::DataTable::__cordl_internal_get__shadowIndexes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadowIndexes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Data::Index*>*> const& System::Data::DataTable::__cordl_internal_get__shadowIndexes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadowIndexes;
}
constexpr void System::Data::DataTable::__cordl_internal_set__shadowIndexes(::System::Collections::Generic::List_1<::System::Data::Index*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shadowIndexes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::System::Data::PropertyCollection*> const& System::Data::DataTable::__cordl_internal_get__extendedProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extendedProperties;
}
constexpr void System::Data::DataTable::__cordl_internal_set__extendedProperties(::System::Data::PropertyCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____extendedProperties)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tableName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tableNamespace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tablePrefix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataExpression*& System::Data::DataTable::__cordl_internal_get__displayExpression() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayExpression;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataExpression*> const& System::Data::DataTable::__cordl_internal_get__displayExpression() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayExpression;
}
constexpr void System::Data::DataTable::__cordl_internal_set__displayExpression(::System::Data::DataExpression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____displayExpression)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> const& System::Data::DataTable::__cordl_internal_get__culture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____culture;
}
constexpr void System::Data::DataTable::__cordl_internal_set__culture(::System::Globalization::CultureInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____culture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CompareInfo*> const& System::Data::DataTable::__cordl_internal_get__compareInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compareInfo;
}
constexpr void System::Data::DataTable::__cordl_internal_set__compareInfo(::System::Globalization::CompareInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____compareInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::System::IFormatProvider*> const& System::Data::DataTable::__cordl_internal_get__formatProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formatProvider;
}
constexpr void System::Data::DataTable::__cordl_internal_set__formatProvider(::System::IFormatProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____formatProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::StringComparer*& System::Data::DataTable::__cordl_internal_get__hashCodeProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashCodeProvider;
}
constexpr ::cordl_internals::to_const_pointer<::System::StringComparer*> const& System::Data::DataTable::__cordl_internal_get__hashCodeProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashCodeProvider;
}
constexpr void System::Data::DataTable::__cordl_internal_set__hashCodeProvider(::System::StringComparer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hashCodeProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____encodedTableName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataColumn*& System::Data::DataTable::__cordl_internal_get__xmlText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlText;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataColumn*> const& System::Data::DataTable::__cordl_internal_get__xmlText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlText;
}
constexpr void System::Data::DataTable::__cordl_internal_set__xmlText(::System::Data::DataColumn* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____xmlText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataColumn*& System::Data::DataTable::__cordl_internal_get__colUnique() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colUnique;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataColumn*> const& System::Data::DataTable::__cordl_internal_get__colUnique() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colUnique;
}
constexpr void System::Data::DataTable::__cordl_internal_set__colUnique(::System::Data::DataColumn* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colUnique)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Data::DataTable::__cordl_internal_get__typeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeName;
}
constexpr void System::Data::DataTable::__cordl_internal_set__typeName(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____typeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::UniqueConstraint*& System::Data::DataTable::__cordl_internal_get__primaryKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primaryKey;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::UniqueConstraint*> const& System::Data::DataTable::__cordl_internal_get__primaryKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primaryKey;
}
constexpr void System::Data::DataTable::__cordl_internal_set__primaryKey(::System::Data::UniqueConstraint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____primaryKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*>& System::Data::DataTable::__cordl_internal_get__primaryIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primaryIndex;
}
constexpr ::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*> const& System::Data::DataTable::__cordl_internal_get__primaryIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primaryIndex;
}
constexpr void System::Data::DataTable::__cordl_internal_set__primaryIndex(::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____primaryIndex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>& System::Data::DataTable::__cordl_internal_get__delayedSetPrimaryKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayedSetPrimaryKey;
}
constexpr ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> const& System::Data::DataTable::__cordl_internal_get__delayedSetPrimaryKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayedSetPrimaryKey;
}
constexpr void System::Data::DataTable::__cordl_internal_set__delayedSetPrimaryKey(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____delayedSetPrimaryKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::Index*& System::Data::DataTable::__cordl_internal_get__loadIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadIndex;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::Index*> const& System::Data::DataTable::__cordl_internal_get__loadIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadIndex;
}
constexpr void System::Data::DataTable::__cordl_internal_set__loadIndex(::System::Data::Index* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadIndex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::Index*& System::Data::DataTable::__cordl_internal_get__loadIndexwithOriginalAdded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadIndexwithOriginalAdded;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::Index*> const& System::Data::DataTable::__cordl_internal_get__loadIndexwithOriginalAdded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadIndexwithOriginalAdded;
}
constexpr void System::Data::DataTable::__cordl_internal_set__loadIndexwithOriginalAdded(::System::Data::Index* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadIndexwithOriginalAdded)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::Index*& System::Data::DataTable::__cordl_internal_get__loadIndexwithCurrentDeleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadIndexwithCurrentDeleted;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::Index*> const& System::Data::DataTable::__cordl_internal_get__loadIndexwithCurrentDeleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadIndexwithCurrentDeleted;
}
constexpr void System::Data::DataTable::__cordl_internal_set__loadIndexwithCurrentDeleted(::System::Data::Index* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadIndexwithCurrentDeleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*>& System::Data::DataTable::__cordl_internal_get__emptyDataRowArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptyDataRowArray;
}
constexpr ::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> const& System::Data::DataTable::__cordl_internal_get__emptyDataRowArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptyDataRowArray;
}
constexpr void System::Data::DataTable::__cordl_internal_set__emptyDataRowArray(::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____emptyDataRowArray)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::ComponentModel::PropertyDescriptorCollection*& System::Data::DataTable::__cordl_internal_get__propertyDescriptorCollectionCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyDescriptorCollectionCache;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyDescriptorCollection*> const& System::Data::DataTable::__cordl_internal_get__propertyDescriptorCollectionCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyDescriptorCollectionCache;
}
constexpr void System::Data::DataTable::__cordl_internal_set__propertyDescriptorCollectionCache(::System::ComponentModel::PropertyDescriptorCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____propertyDescriptorCollectionCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Data::DataRelation*, ::Array<::System::Data::DataRelation*>*>& System::Data::DataTable::__cordl_internal_get__nestedParentRelations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nestedParentRelations;
}
constexpr ::ArrayW<::System::Data::DataRelation*, ::Array<::System::Data::DataRelation*>*> const& System::Data::DataTable::__cordl_internal_get__nestedParentRelations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nestedParentRelations;
}
constexpr void System::Data::DataTable::__cordl_internal_set__nestedParentRelations(::ArrayW<::System::Data::DataRelation*, ::Array<::System::Data::DataRelation*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nestedParentRelations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*& System::Data::DataTable::__cordl_internal_get__dependentColumns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dependentColumns;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Data::DataColumn*>*> const& System::Data::DataTable::__cordl_internal_get__dependentColumns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dependentColumns;
}
constexpr void System::Data::DataTable::__cordl_internal_set__dependentColumns(::System::Collections::Generic::List_1<::System::Data::DataColumn*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dependentColumns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataRowChangeEventHandler*> const& System::Data::DataTable::__cordl_internal_get__onRowChangedDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onRowChangedDelegate;
}
constexpr void System::Data::DataTable::__cordl_internal_set__onRowChangedDelegate(::System::Data::DataRowChangeEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onRowChangedDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataRowChangeEventHandler*& System::Data::DataTable::__cordl_internal_get__onRowChangingDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onRowChangingDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataRowChangeEventHandler*> const& System::Data::DataTable::__cordl_internal_get__onRowChangingDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onRowChangingDelegate;
}
constexpr void System::Data::DataTable::__cordl_internal_set__onRowChangingDelegate(::System::Data::DataRowChangeEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onRowChangingDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataRowChangeEventHandler*& System::Data::DataTable::__cordl_internal_get__onRowDeletingDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onRowDeletingDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataRowChangeEventHandler*> const& System::Data::DataTable::__cordl_internal_get__onRowDeletingDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onRowDeletingDelegate;
}
constexpr void System::Data::DataTable::__cordl_internal_set__onRowDeletingDelegate(::System::Data::DataRowChangeEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onRowDeletingDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataRowChangeEventHandler*& System::Data::DataTable::__cordl_internal_get__onRowDeletedDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onRowDeletedDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataRowChangeEventHandler*> const& System::Data::DataTable::__cordl_internal_get__onRowDeletedDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onRowDeletedDelegate;
}
constexpr void System::Data::DataTable::__cordl_internal_set__onRowDeletedDelegate(::System::Data::DataRowChangeEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onRowDeletedDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataColumnChangeEventHandler*& System::Data::DataTable::__cordl_internal_get__onColumnChangedDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onColumnChangedDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataColumnChangeEventHandler*> const& System::Data::DataTable::__cordl_internal_get__onColumnChangedDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onColumnChangedDelegate;
}
constexpr void System::Data::DataTable::__cordl_internal_set__onColumnChangedDelegate(::System::Data::DataColumnChangeEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onColumnChangedDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataColumnChangeEventHandler*& System::Data::DataTable::__cordl_internal_get__onColumnChangingDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onColumnChangingDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataColumnChangeEventHandler*> const& System::Data::DataTable::__cordl_internal_get__onColumnChangingDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onColumnChangingDelegate;
}
constexpr void System::Data::DataTable::__cordl_internal_set__onColumnChangingDelegate(::System::Data::DataColumnChangeEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onColumnChangingDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataTableClearEventHandler*& System::Data::DataTable::__cordl_internal_get__onTableClearingDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onTableClearingDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataTableClearEventHandler*> const& System::Data::DataTable::__cordl_internal_get__onTableClearingDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onTableClearingDelegate;
}
constexpr void System::Data::DataTable::__cordl_internal_set__onTableClearingDelegate(::System::Data::DataTableClearEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onTableClearingDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataTableClearEventHandler*& System::Data::DataTable::__cordl_internal_get__onTableClearedDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onTableClearedDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataTableClearEventHandler*> const& System::Data::DataTable::__cordl_internal_get__onTableClearedDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onTableClearedDelegate;
}
constexpr void System::Data::DataTable::__cordl_internal_set__onTableClearedDelegate(::System::Data::DataTableClearEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onTableClearedDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataTableNewRowEventHandler*& System::Data::DataTable::__cordl_internal_get__onTableNewRowDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onTableNewRowDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataTableNewRowEventHandler*> const& System::Data::DataTable::__cordl_internal_get__onTableNewRowDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onTableNewRowDelegate;
}
constexpr void System::Data::DataTable::__cordl_internal_set__onTableNewRowDelegate(::System::Data::DataTableNewRowEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onTableNewRowDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::ComponentModel::PropertyChangedEventHandler*& System::Data::DataTable::__cordl_internal_get__onPropertyChangingDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onPropertyChangingDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyChangedEventHandler*> const& System::Data::DataTable::__cordl_internal_get__onPropertyChangingDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onPropertyChangingDelegate;
}
constexpr void System::Data::DataTable::__cordl_internal_set__onPropertyChangingDelegate(::System::ComponentModel::PropertyChangedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onPropertyChangingDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataRowBuilder*& System::Data::DataTable::__cordl_internal_get__rowBuilder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowBuilder;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataRowBuilder*> const& System::Data::DataTable::__cordl_internal_get__rowBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowBuilder;
}
constexpr void System::Data::DataTable::__cordl_internal_set__rowBuilder(::System::Data::DataRowBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rowBuilder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Data::DataView*>*& System::Data::DataTable::__cordl_internal_get__delayedViews() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayedViews;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Data::DataView*>*> const& System::Data::DataTable::__cordl_internal_get__delayedViews() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayedViews;
}
constexpr void System::Data::DataTable::__cordl_internal_set__delayedViews(::System::Collections::Generic::List_1<::System::Data::DataView*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____delayedViews)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Data::DataViewListener*>*& System::Data::DataTable::__cordl_internal_get__dataViewListeners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataViewListeners;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Data::DataViewListener*>*> const&
System::Data::DataTable::__cordl_internal_get__dataViewListeners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataViewListeners;
}
constexpr void System::Data::DataTable::__cordl_internal_set__dataViewListeners(::System::Collections::Generic::List_1<::System::Data::DataViewListener*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dataViewListeners)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Data::DataTable::__cordl_internal_get__rowDiffId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowDiffId;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Data::DataTable::__cordl_internal_get__rowDiffId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowDiffId;
}
constexpr void System::Data::DataTable::__cordl_internal_set__rowDiffId(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rowDiffId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::ReaderWriterLockSlim*& System::Data::DataTable::__cordl_internal_get__indexesLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indexesLock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ReaderWriterLockSlim*> const& System::Data::DataTable::__cordl_internal_get__indexesLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indexesLock;
}
constexpr void System::Data::DataTable::__cordl_internal_set__indexesLock(::System::Threading::ReaderWriterLockSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____indexesLock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  ::cordl_internals::setStaticField<int32_t, "s_objectTypeCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Data::DataTable::getStaticF_s_objectTypeCount() {
  return ::cordl_internals::getStaticField<int32_t, "s_objectTypeCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get>();
}
inline ::System::Data::DataTable* System::Data::DataTable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::DataTable*>());
}
inline void System::Data::DataTable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Data::DataTable* System::Data::DataTable::New_ctor(::StringW tableName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::DataTable*>(tableName));
}
inline void System::Data::DataTable::_ctor(::StringW tableName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tableName);
}
inline ::System::Data::DataTable* System::Data::DataTable::New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::DataTable*>(info, context));
}
inline void System::Data::DataTable::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline void System::Data::DataTable::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline void System::Data::DataTable::SerializeDataTable(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, bool isSingleTable,
                                                        ::System::Data::SerializationFormat remotingFormat) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SerializeDataTable", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SerializationFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context, isSingleTable, remotingFormat);
}
inline void System::Data::DataTable::DeserializeDataTable(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, bool isSingleTable,
                                                          ::System::Data::SerializationFormat remotingFormat) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "DeserializeDataTable", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SerializationFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context, isSingleTable, remotingFormat);
}
inline void System::Data::DataTable::SerializeTableSchema(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, bool isSingleTable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SerializeTableSchema", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context, isSingleTable);
}
inline void System::Data::DataTable::DeserializeTableSchema(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, bool isSingleTable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "DeserializeTableSchema", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context, isSingleTable);
}
inline void System::Data::DataTable::SerializeConstraints(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, int32_t serIndex,
                                                          bool allConstraints) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SerializeConstraints", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context, serIndex, allConstraints);
}
inline void System::Data::DataTable::DeserializeConstraints(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, int32_t serIndex,
                                                            bool allConstraints) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "DeserializeConstraints", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context, serIndex, allConstraints);
}
inline void System::Data::DataTable::SerializeExpressionColumns(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context,
                                                                int32_t serIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SerializeExpressionColumns", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context, serIndex);
}
inline void System::Data::DataTable::DeserializeExpressionColumns(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context,
                                                                  int32_t serIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "DeserializeExpressionColumns", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context, serIndex);
}
inline void System::Data::DataTable::SerializeTableData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, int32_t serIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SerializeTableData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context, serIndex);
}
inline void System::Data::DataTable::DeserializeTableData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, int32_t serIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "DeserializeTableData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context, serIndex);
}
inline ::System::Data::DataRowState System::Data::DataTable::ConvertToRowState(::System::Collections::BitArray* bitStates, int32_t bitIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "ConvertToRowState", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::BitArray*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRowState, false>(this, ___internal_method, bitStates, bitIndex);
}
inline void System::Data::DataTable::GetRowAndColumnErrors(int32_t rowIndex, ::System::Collections::Hashtable* rowErrors, ::System::Collections::Hashtable* colErrors) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "GetRowAndColumnErrors", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rowIndex, rowErrors, colErrors);
}
inline void System::Data::DataTable::ConvertToRowError(int32_t rowIndex, ::System::Collections::Hashtable* rowErrors, ::System::Collections::Hashtable* colErrors) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "ConvertToRowError", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rowIndex, rowErrors, colErrors);
}
inline bool System::Data::DataTable::get_CaseSensitive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_CaseSensitive",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Data::DataTable::set_CaseSensitive(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_CaseSensitive", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Data::DataTable::get_AreIndexEventsSuspended() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_AreIndexEventsSuspended",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Data::DataTable::RestoreIndexEvents(bool forceReset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RestoreIndexEvents",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, forceReset);
}
inline void System::Data::DataTable::SuspendIndexEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SuspendIndexEvents",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Data::DataTable::get_IsTypedDataTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_IsTypedDataTable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Data::DataTable::SetCaseSensitiveValue(bool isCaseSensitive, bool userSet, bool resetIndexes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SetCaseSensitiveValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, isCaseSensitive, userSet, resetIndexes);
}
inline bool System::Data::DataTable::ShouldSerializeCaseSensitive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "ShouldSerializeCaseSensitive",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Data::DataTable::get_SelfNested() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_SelfNested",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::System::Data::Index*>* System::Data::DataTable::get_LiveIndexes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_LiveIndexes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Data::Index*>*, false>(this, ___internal_method);
}
inline ::System::Data::SerializationFormat System::Data::DataTable::get_RemotingFormat() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_RemotingFormat",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SerializationFormat, false>(this, ___internal_method);
}
inline void System::Data::DataTable::set_RemotingFormat(::System::Data::SerializationFormat value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_RemotingFormat", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SerializationFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::Data::DataTable::get_UKColumnPositionForInference() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(),
                                                                             "get_UKColumnPositionForInference", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Data::DataTable::set_UKColumnPositionForInference(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_UKColumnPositionForInference",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Data::DataRelationCollection* System::Data::DataTable::get_ChildRelations() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_ChildRelations",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRelationCollection*, false>(this, ___internal_method);
}
inline ::System::Data::DataColumnCollection* System::Data::DataTable::get_Columns() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_Columns",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataColumnCollection*, false>(this, ___internal_method);
}
inline ::System::Globalization::CompareInfo* System::Data::DataTable::get_CompareInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_CompareInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CompareInfo*, false>(this, ___internal_method);
}
inline ::System::Data::ConstraintCollection* System::Data::DataTable::get_Constraints() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_Constraints",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Data::ConstraintCollection*, false>(this, ___internal_method);
}
inline void System::Data::DataTable::ResetConstraints() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "ResetConstraints",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Data::DataSet* System::Data::DataTable::get_DataSet() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_DataSet",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataSet*, false>(this, ___internal_method);
}
inline void System::Data::DataTable::SetDataSet(::System::Data::DataSet* dataSet) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SetDataSet", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataSet);
}
inline ::StringW System::Data::DataTable::get_DisplayExpressionInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_DisplayExpressionInternal",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Data::DataTable::get_EnforceConstraints() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_EnforceConstraints",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Data::DataTable::set_EnforceConstraints(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_EnforceConstraints",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Data::DataTable::get_SuspendEnforceConstraints() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_SuspendEnforceConstraints",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Data::DataTable::set_SuspendEnforceConstraints(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_SuspendEnforceConstraints",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Data::DataTable::EnableConstraints() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "EnableConstraints",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Data::PropertyCollection* System::Data::DataTable::get_ExtendedProperties() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_ExtendedProperties",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Data::PropertyCollection*, false>(this, ___internal_method);
}
inline ::System::IFormatProvider* System::Data::DataTable::get_FormatProvider() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_FormatProvider",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IFormatProvider*, false>(this, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Data::DataTable::get_Locale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_Locale",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(this, ___internal_method);
}
inline void System::Data::DataTable::set_Locale(::System::Globalization::CultureInfo* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_Locale", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Data::DataTable::SetLocaleValue(::System::Globalization::CultureInfo* culture, bool userSet, bool resetIndexes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SetLocaleValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, culture, userSet, resetIndexes);
}
inline bool System::Data::DataTable::ShouldSerializeLocale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "ShouldSerializeLocale",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Data::DataTable::get_MinimumCapacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_MinimumCapacity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Data::DataTable::set_MinimumCapacity(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_MinimumCapacity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::Data::DataTable::get_RecordCapacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_RecordCapacity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Data::DataTable::get_ElementColumnCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_ElementColumnCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Data::DataTable::set_ElementColumnCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_ElementColumnCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Data::DataRelationCollection* System::Data::DataTable::get_ParentRelations() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_ParentRelations",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRelationCollection*, false>(this, ___internal_method);
}
inline bool System::Data::DataTable::get_MergingData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_MergingData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Data::DataTable::set_MergingData(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_MergingData", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::System::Data::DataRelation*, ::Array<::System::Data::DataRelation*>*> System::Data::DataTable::get_NestedParentRelations() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_NestedParentRelations",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataRelation*, ::Array<::System::Data::DataRelation*>*>, false>(this, ___internal_method);
}
inline bool System::Data::DataTable::get_SchemaLoading() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_SchemaLoading",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Data::DataTable::CacheNestedParent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "CacheNestedParent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Data::DataRelation*, ::Array<::System::Data::DataRelation*>*> System::Data::DataTable::FindNestedParentRelations() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "FindNestedParentRelations",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataRelation*, ::Array<::System::Data::DataRelation*>*>, false>(this, ___internal_method);
}
inline int32_t System::Data::DataTable::get_NestedParentsCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_NestedParentsCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> System::Data::DataTable::get_PrimaryKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_PrimaryKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>, false>(this, ___internal_method);
}
inline void System::Data::DataTable::set_PrimaryKey(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_PrimaryKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Data::DataRowCollection* System::Data::DataTable::get_Rows() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_Rows",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRowCollection*, false>(this, ___internal_method);
}
inline ::StringW System::Data::DataTable::get_TableName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_TableName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Data::DataTable::set_TableName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_TableName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW System::Data::DataTable::get_EncodedTableName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_EncodedTableName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Data::DataTable::GetInheritedNamespace(::System::Collections::Generic::List_1<::System::Data::DataTable*>* visitedTables) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "GetInheritedNamespace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Data::DataTable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, visitedTables);
}
inline ::StringW System::Data::DataTable::get_Namespace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_Namespace",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Data::DataTable::set_Namespace(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_Namespace", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Data::DataTable::IsNamespaceInherited() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "IsNamespaceInherited",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Data::DataTable::CheckCascadingNamespaceConflict(::StringW realNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "CheckCascadingNamespaceConflict",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, realNamespace);
}
inline void System::Data::DataTable::CheckNamespaceValidityForNestedRelations(::StringW realNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "CheckNamespaceValidityForNestedRelations",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, realNamespace);
}
inline void System::Data::DataTable::CheckNamespaceValidityForNestedParentRelations(::StringW ns, ::System::Data::DataTable* parentTable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "CheckNamespaceValidityForNestedParentRelations", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ns, parentTable);
}
inline void System::Data::DataTable::DoRaiseNamespaceChange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "DoRaiseNamespaceChange",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Data::DataTable::get_Prefix() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_Prefix",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Data::DataTable::set_Prefix(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_Prefix", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Data::DataColumn* System::Data::DataTable::get_XmlText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_XmlText",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataColumn*, false>(this, ___internal_method);
}
inline void System::Data::DataTable::set_XmlText(::System::Data::DataColumn* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_XmlText", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Decimal System::Data::DataTable::get_MaxOccurs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_MaxOccurs",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(this, ___internal_method);
}
inline void System::Data::DataTable::set_MaxOccurs(::System::Decimal value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_MaxOccurs", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Decimal System::Data::DataTable::get_MinOccurs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_MinOccurs",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(this, ___internal_method);
}
inline void System::Data::DataTable::set_MinOccurs(::System::Decimal value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_MinOccurs", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Data::DataTable::SetKeyValues(::System::Data::DataKey key, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> keyValues, int32_t record) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SetKeyValues", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataKey>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, keyValues, record);
}
inline ::System::Data::DataRow* System::Data::DataTable::FindByIndex(::System::Data::Index* ndx, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "FindByIndex", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Index*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*, false>(this, ___internal_method, ndx, key);
}
inline ::System::Data::DataRow* System::Data::DataTable::FindMergeTarget(::System::Data::DataRow* row, ::System::Data::DataKey key, ::System::Data::Index* ndx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "FindMergeTarget", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataKey>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Index*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*, false>(this, ___internal_method, row, key, ndx);
}
inline void System::Data::DataTable::SetMergeRecords(::System::Data::DataRow* row, int32_t newRecord, int32_t oldRecord, ::System::Data::DataRowAction action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SetMergeRecords", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, row, newRecord, oldRecord, action);
}
inline ::System::Data::DataRow* System::Data::DataTable::MergeRow(::System::Data::DataRow* row, ::System::Data::DataRow* targetRow, bool preserveChanges, ::System::Data::Index* idxSearch) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "MergeRow", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Index*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*, false>(this, ___internal_method, row, targetRow, preserveChanges, idxSearch);
}
inline ::System::Data::DataTable* System::Data::DataTable::CreateInstance() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*, false>(this, ___internal_method);
}
inline ::System::Data::DataTable* System::Data::DataTable::Clone() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*, false>(this, ___internal_method);
}
inline ::System::Data::DataTable* System::Data::DataTable::Clone(::System::Data::DataSet* cloneDS) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "Clone", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*, false>(this, ___internal_method, cloneDS);
}
inline ::System::Data::DataTable* System::Data::DataTable::IncrementalCloneTo(::System::Data::DataTable* sourceTable, ::System::Data::DataTable* targetTable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "IncrementalCloneTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*, false>(this, ___internal_method, sourceTable, targetTable);
}
inline ::System::Data::DataTable* System::Data::DataTable::CloneHierarchy(::System::Data::DataTable* sourceTable, ::System::Data::DataSet* ds, ::System::Collections::Hashtable* visitedMap) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "CloneHierarchy", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*, false>(this, ___internal_method, sourceTable, ds, visitedMap);
}
inline ::System::Data::DataTable* System::Data::DataTable::CloneTo(::System::Data::DataTable* clone, ::System::Data::DataSet* cloneDS, bool skipExpressionColumns) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "CloneTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*, false>(this, ___internal_method, clone, cloneDS, skipExpressionColumns);
}
inline ::System::ComponentModel::ISite* System::Data::DataTable::get_Site() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ISite*, false>(this, ___internal_method);
}
inline void System::Data::DataTable::AddRow(::System::Data::DataRow* row, int32_t proposedID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "AddRow", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, row, proposedID);
}
inline void System::Data::DataTable::InsertRow(::System::Data::DataRow* row, int32_t proposedID, int32_t pos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "InsertRow", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, row, proposedID, pos);
}
inline void System::Data::DataTable::InsertRow(::System::Data::DataRow* row, int64_t proposedID, int32_t pos, bool fireEvent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "InsertRow", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, row, proposedID, pos, fireEvent);
}
inline void System::Data::DataTable::CheckNotModifying(::System::Data::DataRow* row) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "CheckNotModifying", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, row);
}
inline void System::Data::DataTable::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::DataTable::Clear(bool clearAll) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "Clear", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clearAll);
}
inline void System::Data::DataTable::CascadeAll(::System::Data::DataRow* row, ::System::Data::DataRowAction action) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "CascadeAll", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, row, action);
}
inline void System::Data::DataTable::CommitRow(::System::Data::DataRow* row) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "CommitRow", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, row);
}
inline int32_t System::Data::DataTable::Compare(::StringW s1, ::StringW s2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s1, s2);
}
inline int32_t System::Data::DataTable::Compare(::StringW s1, ::StringW s2, ::System::Globalization::CompareInfo* comparer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s1, s2, comparer);
}
inline int32_t System::Data::DataTable::IndexOf(::StringW s1, ::StringW s2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "IndexOf", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s1, s2);
}
inline bool System::Data::DataTable::IsSuffix(::StringW s1, ::StringW s2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "IsSuffix", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, s1, s2);
}
inline void System::Data::DataTable::DeleteRow(::System::Data::DataRow* row) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "DeleteRow", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, row);
}
inline ::StringW System::Data::DataTable::FormatSortString(::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*> indexDesc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "FormatSortString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, indexDesc);
}
inline void System::Data::DataTable::FreeRecord(ByRef<int32_t> record) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "FreeRecord", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, record);
}
inline ::System::Data::Index* System::Data::DataTable::GetIndex(::StringW sort, ::System::Data::DataViewRowState recordStates, ::System::Data::IFilter* rowFilter) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "GetIndex", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::IFilter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Index*, false>(this, ___internal_method, sort, recordStates, rowFilter);
}
inline ::System::Data::Index* System::Data::DataTable::GetIndex(::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*> indexDesc, ::System::Data::DataViewRowState recordStates,
                                                                ::System::Data::IFilter* rowFilter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "GetIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::IFilter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Index*, false>(this, ___internal_method, indexDesc, recordStates, rowFilter);
}
inline ::System::Collections::Generic::List_1<::System::Data::DataViewListener*>* System::Data::DataTable::GetListeners() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "GetListeners",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Data::DataViewListener*>*, false>(this, ___internal_method);
}
inline int32_t System::Data::DataTable::GetSpecialHashCode(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "GetSpecialHashCode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, name);
}
inline void System::Data::DataTable::InsertRow(::System::Data::DataRow* row, int64_t proposedID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "InsertRow", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, row, proposedID);
}
inline int32_t System::Data::DataTable::NewRecord() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "NewRecord",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Data::DataTable::NewUninitializedRecord() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "NewUninitializedRecord",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Data::DataTable::NewRecord(int32_t sourceRecord) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "NewRecord", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, sourceRecord);
}
inline ::System::Data::DataRow* System::Data::DataTable::NewEmptyRow() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "NewEmptyRow",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*, false>(this, ___internal_method);
}
inline ::System::Data::DataRow* System::Data::DataTable::NewUninitializedRow() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "NewUninitializedRow",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*, false>(this, ___internal_method);
}
inline ::System::Data::DataRow* System::Data::DataTable::NewRow() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "NewRow",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*, false>(this, ___internal_method);
}
inline ::System::Data::DataRow* System::Data::DataTable::CreateEmptyRow() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "CreateEmptyRow",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*, false>(this, ___internal_method);
}
inline void System::Data::DataTable::NewRowCreated(::System::Data::DataRow* row) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "NewRowCreated", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, row);
}
inline ::System::Data::DataRow* System::Data::DataTable::NewRow(int32_t record) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "NewRow", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*, false>(this, ___internal_method, record);
}
inline ::System::Data::DataRow* System::Data::DataTable::NewRowFromBuilder(::System::Data::DataRowBuilder* builder) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*, false>(this, ___internal_method, builder);
}
inline ::System::Type* System::Data::DataTable::GetRowType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> System::Data::DataTable::NewRowArray(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "NewRowArray", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*>, false>(this, ___internal_method, size);
}
inline bool System::Data::DataTable::get_NeedColumnChangeEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_NeedColumnChangeEvents",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Data::DataTable::OnColumnChanging(::System::Data::DataColumnChangeEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void System::Data::DataTable::OnColumnChanged(::System::Data::DataColumnChangeEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void System::Data::DataTable::OnPropertyChanging(::System::ComponentModel::PropertyChangedEventArgs* pcevent) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pcevent);
}
inline void System::Data::DataTable::OnRemoveColumnInternal(::System::Data::DataColumn* column) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "OnRemoveColumnInternal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column);
}
inline void System::Data::DataTable::OnRemoveColumn(::System::Data::DataColumn* column) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column);
}
inline ::System::Data::DataRowChangeEventArgs* System::Data::DataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs* args, ::System::Data::DataRow* eRow,
                                                                                     ::System::Data::DataRowAction eAction) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "OnRowChanged", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowChangeEventArgs*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRowChangeEventArgs*, false>(this, ___internal_method, args, eRow, eAction);
}
inline ::System::Data::DataRowChangeEventArgs* System::Data::DataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs* args, ::System::Data::DataRow* eRow,
                                                                                      ::System::Data::DataRowAction eAction) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "OnRowChanging", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowChangeEventArgs*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRowChangeEventArgs*, false>(this, ___internal_method, args, eRow, eAction);
}
inline void System::Data::DataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void System::Data::DataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void System::Data::DataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void System::Data::DataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void System::Data::DataTable::OnTableCleared(::System::Data::DataTableClearEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void System::Data::DataTable::OnTableClearing(::System::Data::DataTableClearEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void System::Data::DataTable::OnTableNewRow(::System::Data::DataTableNewRowEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline ::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*> System::Data::DataTable::ParseSortString(::StringW sortString) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "ParseSortString", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*>, false>(this, ___internal_method, sortString);
}
inline void System::Data::DataTable::RaisePropertyChanging(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RaisePropertyChanging", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void System::Data::DataTable::RecordChanged(int32_t record) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RecordChanged", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, record);
}
inline void System::Data::DataTable::RecordChanged(::ArrayW<int32_t, ::Array<int32_t>*> oldIndex, ::ArrayW<int32_t, ::Array<int32_t>*> newIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RecordChanged", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldIndex, newIndex);
}
inline void System::Data::DataTable::RecordStateChanged(int32_t record, ::System::Data::DataViewRowState oldState, ::System::Data::DataViewRowState newState) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RecordStateChanged", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, record, oldState, newState);
}
inline void System::Data::DataTable::RecordStateChanged(int32_t record1, ::System::Data::DataViewRowState oldState1, ::System::Data::DataViewRowState newState1, int32_t record2,
                                                        ::System::Data::DataViewRowState oldState2, ::System::Data::DataViewRowState newState2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RecordStateChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, record1, oldState1, newState1, record2, oldState2, newState2);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> System::Data::DataTable::RemoveRecordFromIndexes(::System::Data::DataRow* row, ::System::Data::DataRowVersion version) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RemoveRecordFromIndexes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(this, ___internal_method, row, version);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> System::Data::DataTable::InsertRecordToIndexes(::System::Data::DataRow* row, ::System::Data::DataRowVersion version) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "InsertRecordToIndexes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(this, ___internal_method, row, version);
}
inline void System::Data::DataTable::SilentlySetValue(::System::Data::DataRow* dr, ::System::Data::DataColumn* dc, ::System::Data::DataRowVersion version, ::System::Object* newValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SilentlySetValue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dr, dc, version, newValue);
}
inline void System::Data::DataTable::RemoveRow(::System::Data::DataRow* row, bool check) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RemoveRow", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, row, check);
}
inline void System::Data::DataTable::Reset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::DataTable::ResetIndexes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "ResetIndexes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::DataTable::ResetInternalIndexes(::System::Data::DataColumn* column) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "ResetInternalIndexes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column);
}
inline void System::Data::DataTable::RollbackRow(::System::Data::DataRow* row) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RollbackRow", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, row);
}
inline ::System::Data::DataRowChangeEventArgs* System::Data::DataTable::RaiseRowChanged(::System::Data::DataRowChangeEventArgs* args, ::System::Data::DataRow* eRow,
                                                                                        ::System::Data::DataRowAction eAction) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RaiseRowChanged", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowChangeEventArgs*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRowChangeEventArgs*, false>(this, ___internal_method, args, eRow, eAction);
}
inline ::System::Data::DataRowChangeEventArgs* System::Data::DataTable::RaiseRowChanging(::System::Data::DataRowChangeEventArgs* args, ::System::Data::DataRow* eRow,
                                                                                         ::System::Data::DataRowAction eAction) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RaiseRowChanging", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowChangeEventArgs*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRowChangeEventArgs*, false>(this, ___internal_method, args, eRow, eAction);
}
inline ::System::Data::DataRowChangeEventArgs* System::Data::DataTable::RaiseRowChanging(::System::Data::DataRowChangeEventArgs* args, ::System::Data::DataRow* eRow,
                                                                                         ::System::Data::DataRowAction eAction, bool fireEvent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RaiseRowChanging", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowChangeEventArgs*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowAction>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRowChangeEventArgs*, false>(this, ___internal_method, args, eRow, eAction, fireEvent);
}
/// @param action: ::System::Data::DataRowAction (default: static_cast<int32_t>(0x2))
/// @param isInMerge: bool (default: false)
/// @param fireEvent: bool (default: true)
/// @param suppressEnsurePropertyChanged: bool (default: false)
inline void System::Data::DataTable::SetNewRecord(::System::Data::DataRow* row, int32_t proposedRecord, ::System::Data::DataRowAction action, bool isInMerge, bool fireEvent,
                                                  bool suppressEnsurePropertyChanged) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SetNewRecord", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 6>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, row, proposedRecord, action, isInMerge, fireEvent, suppressEnsurePropertyChanged);
}
inline void System::Data::DataTable::SetNewRecordWorker(::System::Data::DataRow* row, int32_t proposedRecord, ::System::Data::DataRowAction action, bool isInMerge, bool suppressEnsurePropertyChanged,
                                                        int32_t position, bool fireEvent, ByRef<::System::Exception*> deferredException) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SetNewRecordWorker", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowAction>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Exception*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, row, proposedRecord, action, isInMerge, suppressEnsurePropertyChanged, position, fireEvent, deferredException);
}
inline void System::Data::DataTable::SetOldRecord(::System::Data::DataRow* row, int32_t proposedRecord) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SetOldRecord", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, row, proposedRecord);
}
inline void System::Data::DataTable::RestoreShadowIndexes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RestoreShadowIndexes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::DataTable::SetShadowIndexes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "SetShadowIndexes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::DataTable::ShadowIndexCopy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "ShadowIndexCopy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Data::DataTable::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Data::DataTable::UpdatingCurrent(::System::Data::DataRow* row, ::System::Data::DataRowAction action) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "UpdatingCurrent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, row, action);
}
inline ::System::Data::DataColumn* System::Data::DataTable::AddUniqueKey(int32_t position) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "AddUniqueKey", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataColumn*, false>(this, ___internal_method, position);
}
inline ::System::Data::DataColumn* System::Data::DataTable::AddUniqueKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "AddUniqueKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataColumn*, false>(this, ___internal_method);
}
inline ::System::Data::DataColumn* System::Data::DataTable::AddForeignKey(::System::Data::DataColumn* parentKey) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "AddForeignKey", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataColumn*, false>(this, ___internal_method, parentKey);
}
inline void System::Data::DataTable::UpdatePropertyDescriptorCollectionCache() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "UpdatePropertyDescriptorCollectionCache",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::Data::DataTable::GetPropertyDescriptorCollection(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "GetPropertyDescriptorCollection", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(this, ___internal_method, attributes);
}
inline ::System::Xml::XmlQualifiedName* System::Data::DataTable::get_TypeName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_TypeName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*, false>(this, ___internal_method);
}
inline void System::Data::DataTable::set_TypeName(::System::Xml::XmlQualifiedName* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "set_TypeName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Data::DataTable::Merge(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "Merge", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, table);
}
inline void System::Data::DataTable::Merge(::System::Data::DataTable* table, bool preserveChanges, ::System::Data::MissingSchemaAction missingSchemaAction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "Merge", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::MissingSchemaAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, table, preserveChanges, missingSchemaAction);
}
inline void System::Data::DataTable::WriteXml(::System::Xml::XmlWriter* writer, ::System::Data::XmlWriteMode mode, bool writeHierarchy) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "WriteXml", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::XmlWriteMode>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, mode, writeHierarchy);
}
inline bool System::Data::DataTable::CheckForClosureOnExpressions(::System::Data::DataTable* dt, bool writeHierarchy) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "CheckForClosureOnExpressions", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, dt, writeHierarchy);
}
inline bool System::Data::DataTable::CheckForClosureOnExpressionTables(::System::Collections::Generic::List_1<::System::Data::DataTable*>* tableList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "CheckForClosureOnExpressionTables", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Data::DataTable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, tableList);
}
inline void System::Data::DataTable::WriteXmlSchema(::System::Xml::XmlWriter* writer, bool writeHierarchy) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "WriteXmlSchema", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, writeHierarchy);
}
inline void System::Data::DataTable::RestoreConstraint(bool originalEnforceConstraint) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RestoreConstraint", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, originalEnforceConstraint);
}
inline bool System::Data::DataTable::IsEmptyXml(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "IsEmptyXml", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, reader);
}
inline ::System::Data::XmlReadMode System::Data::DataTable::ReadXml(::System::Xml::XmlReader* reader, ::System::Data::XmlReadMode mode, bool denyResolving) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "ReadXml", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::XmlReadMode>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::XmlReadMode, false>(this, ___internal_method, reader, mode, denyResolving);
}
inline void System::Data::DataTable::ReadEndElement(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "ReadEndElement", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void System::Data::DataTable::ReadXDRSchema(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "ReadXDRSchema", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline bool System::Data::DataTable::MoveToElement(::System::Xml::XmlReader* reader, int32_t depth) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "MoveToElement", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, reader, depth);
}
inline void System::Data::DataTable::ReadXmlDiffgram(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "ReadXmlDiffgram", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void System::Data::DataTable::ReadXSDSchema(::System::Xml::XmlReader* reader, bool denyResolving) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "ReadXSDSchema", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, denyResolving);
}
inline void System::Data::DataTable::ReadXmlSchema(::System::Xml::XmlReader* reader, bool denyResolving) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "ReadXmlSchema", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, denyResolving);
}
inline void System::Data::DataTable::CreateTableList(::System::Data::DataTable* currentTable, ::System::Collections::Generic::List_1<::System::Data::DataTable*>* tableList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "CreateTableList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Data::DataTable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentTable, tableList);
}
inline void System::Data::DataTable::CreateRelationList(::System::Collections::Generic::List_1<::System::Data::DataTable*>* tableList,
                                                        ::System::Collections::Generic::List_1<::System::Data::DataRelation*>* relationList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "CreateRelationList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Data::DataTable*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Data::DataRelation*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tableList, relationList);
}
inline ::System::Xml::Schema::XmlSchemaComplexType* System::Data::DataTable::GetDataTableSchema(::System::Xml::Schema::XmlSchemaSet* schemaSet) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "GetDataTableSchema", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaComplexType*, false>(nullptr, ___internal_method, schemaSet);
}
inline ::System::Xml::Schema::XmlSchema* System::Data::DataTable::System_Xml_Serialization_IXmlSerializable_GetSchema() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "System.Xml.Serialization.IXmlSerializable.GetSchema",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchema* System::Data::DataTable::GetSchema() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*, false>(this, ___internal_method);
}
inline void System::Data::DataTable::System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "System.Xml.Serialization.IXmlSerializable.ReadXml", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void System::Data::DataTable::System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "System.Xml.Serialization.IXmlSerializable.WriteXml", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void System::Data::DataTable::ReadXmlSerializable(::System::Xml::XmlReader* reader) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline ::System::Collections::Hashtable* System::Data::DataTable::get_RowDiffId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_RowDiffId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Hashtable*, false>(this, ___internal_method);
}
inline int32_t System::Data::DataTable::get_ObjectID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "get_ObjectID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Data::DataTable::AddDependentColumn(::System::Data::DataColumn* expressionColumn) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "AddDependentColumn", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expressionColumn);
}
inline void System::Data::DataTable::RemoveDependentColumn(::System::Data::DataColumn* expressionColumn) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "RemoveDependentColumn", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expressionColumn);
}
inline void System::Data::DataTable::EvaluateExpressions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "EvaluateExpressions",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::DataTable::EvaluateExpressions(::System::Data::DataRow* row, ::System::Data::DataRowAction action,
                                                         ::System::Collections::Generic::List_1<::System::Data::DataRow*>* cachedRows) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "EvaluateExpressions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowAction>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Data::DataRow*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, row, action, cachedRows);
}
inline void System::Data::DataTable::EvaluateExpressions(::System::Data::DataColumn* column) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "EvaluateExpressions", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column);
}
inline void System::Data::DataTable::EvaluateDependentExpressions(::System::Data::DataColumn* column) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "EvaluateDependentExpressions", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column);
}
inline void System::Data::DataTable::EvaluateDependentExpressions(::System::Collections::Generic::List_1<::System::Data::DataColumn*>* columns, ::System::Data::DataRow* row,
                                                                  ::System::Data::DataRowVersion version, ::System::Collections::Generic::List_1<::System::Data::DataRow*>* cachedRows) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTable*>::get(), "EvaluateDependentExpressions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Data::DataColumn*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Data::DataRow*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, columns, row, version, cachedRows);
}
// Ctor Parameters []
constexpr ::System::Data::DataTable::DataTable() {}
