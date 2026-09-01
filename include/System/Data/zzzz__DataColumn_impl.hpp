#pragma once
// IWYU pragma private; include "System\Data\DataColumn.hpp"
#include "System/ComponentModel/zzzz__MarshalByValueComponent_impl.hpp"
#include "System/Data/Common/zzzz__StorageType_impl.hpp"
#include "System/Data/zzzz__DataSetDateTime_impl.hpp"
#include "System/Data/zzzz__MappingType_impl.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__BitArray_def.hpp"
#include "System/ComponentModel/zzzz__PropertyChangedEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__PropertyChangedEventHandler_def.hpp"
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "System/Data/Common/zzzz__StorageType_def.hpp"
#include "System/Data/zzzz__AggregateType_def.hpp"
#include "System/Data/zzzz__AutoIncrementValue_def.hpp"
#include "System/Data/zzzz__DataExpression_def.hpp"
#include "System/Data/zzzz__DataRowAction_def.hpp"
#include "System/Data/zzzz__DataRowVersion_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Data/zzzz__DataSetDateTime_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__Index_def.hpp"
#include "System/Data/zzzz__MappingType_def.hpp"
#include "System/Data/zzzz__PropertyCollection_def.hpp"
#include "System/Data/zzzz__SimpleType_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlRootAttribute_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::DataColumn._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ffd918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(::StringW, ::System::Type*)>(&::System::Data::DataColumn::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ffdc48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(::StringW, ::System::Type*, ::StringW, ::System::Data::MappingType)>(&::System::Data::DataColumn::_ctor)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5ffd970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(),
                            { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Data::MappingType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.UpdateColumnType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(::System::Type*, ::System::Data::Common::StorageType)>(&::System::Data::DataColumn::UpdateColumnType)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5ffdd58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "UpdateColumnType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Data::Common::StorageType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_AllowDBNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_AllowDBNull)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ffe6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_AllowDBNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.set_AllowDBNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(bool)>(&::System::Data::DataColumn::set_AllowDBNull)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5ffe6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_AllowDBNull", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_AutoIncrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_AutoIncrement)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ffec70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_AutoIncrement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.set_AutoIncrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(bool)>(&::System::Data::DataColumn::set_AutoIncrement)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5ffec90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_AutoIncrement", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_AutoIncrementCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_AutoIncrementCurrent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fff9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_AutoIncrementCurrent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.set_AutoIncrementCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(::System::Object*)>(&::System::Data::DataColumn::set_AutoIncrementCurrent)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5fffa08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_AutoIncrementCurrent", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_AutoInc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::AutoIncrementValue* (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_AutoInc)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5fff8e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_AutoInc", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_AutoIncrementSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_AutoIncrementSeed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fff9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_AutoIncrementSeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.set_AutoIncrementSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(int64_t)>(&::System::Data::DataColumn::set_AutoIncrementSeed)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5fffc20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_AutoIncrementSeed", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_AutoIncrementStep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_AutoIncrementStep)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fffd1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_AutoIncrementStep", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.set_AutoIncrementStep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(int64_t)>(&::System::Data::DataColumn::set_AutoIncrementStep)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5fffd38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_AutoIncrementStep", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_Caption
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_Caption)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fffe3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_Caption", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.set_Caption
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(::StringW)>(&::System::Data::DataColumn::set_Caption)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5fffe58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_Caption", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_ColumnName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_ColumnName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ffff24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_ColumnName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.set_ColumnName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(::StringW)>(&::System::Data::DataColumn::set_ColumnName)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x5ffff2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_ColumnName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_EncodedColumnName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_EncodedColumnName)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6000324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_EncodedColumnName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_FormatProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IFormatProvider* (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_FormatProvider)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5fffb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_FormatProvider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_Locale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_Locale)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5fffeb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_Locale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_ObjectID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_ObjectID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6000394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_ObjectID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_Prefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_Prefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600039c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_Prefix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.set_Prefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(::StringW)>(&::System::Data::DataColumn::set_Prefix)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x60003a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_Prefix", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.GetColumnValueAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataColumn::*)(::System::Data::DataRow*, ::System::Data::DataRowVersion)>(
    &::System::Data::DataColumn::GetColumnValueAsString)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6000550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(),
                                                             { "GetColumnValueAsString", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowVersion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_Computed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_Computed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6000674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_Computed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_DataExpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataExpression* (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_DataExpression)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6000684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_DataExpression", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_DataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_DataType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600068c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_DataType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.set_DataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(::System::Type*)>(&::System::Data::DataColumn::set_DataType)> {
  constexpr static std::size_t size = 0x788;
  constexpr static std::size_t addrs = 0x5fff15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_DataType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_DateTimeMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataSetDateTime (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_DateTimeMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6000e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_DateTimeMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.set_DateTimeMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(::System::Data::DataSetDateTime)>(&::System::Data::DataColumn::set_DateTimeMode)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6000e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_DateTimeMode", {}, { ::i2c::type_of<::System::Data::DataSetDateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_DefaultValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_DefaultValue)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x60008b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_DefaultValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.set_DefaultValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(::System::Object*)>(&::System::Data::DataColumn::set_DefaultValue)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x60009c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_DefaultValue", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_DefaultValueIsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_DefaultValueIsNull)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6001188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_DefaultValueIsNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_Expression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_Expression)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6001190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_Expression", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.set_Expression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(::StringW)>(&::System::Data::DataColumn::set_Expression)> {
  constexpr static std::size_t size = 0x854;
  constexpr static std::size_t addrs = 0x5ffde58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_Expression", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_ExtendedProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::PropertyCollection* (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_ExtendedProperties)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6001690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_ExtendedProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_HasData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_HasData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fff0fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_HasData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_ImplementsINullable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_ImplementsINullable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60016fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_ImplementsINullable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_ImplementsIChangeTracking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_ImplementsIChangeTracking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6001704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_ImplementsIChangeTracking", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_ImplementsIRevertibleChangeTracking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_ImplementsIRevertibleChangeTracking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600170c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_ImplementsIRevertibleChangeTracking", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_IsValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_IsValueType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6001714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_IsValueType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_IsSqlType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_IsSqlType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600172c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_IsSqlType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.SetMaxLengthSimpleType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::SetMaxLengthSimpleType)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6001734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "SetMaxLengthSimpleType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_MaxLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_MaxLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60017e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_MaxLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.set_MaxLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(int32_t)>(&::System::Data::DataColumn::set_MaxLength)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x60017e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_MaxLength", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_Namespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_Namespace)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6001f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_Namespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.set_Namespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(::StringW)>(&::System::Data::DataColumn::set_Namespace)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6001fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_Namespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_Ordinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_Ordinal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6002160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_Ordinal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.SetOrdinalInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(int32_t)>(&::System::Data::DataColumn::SetOrdinalInternal)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6002168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "SetOrdinalInternal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_ReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_ReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60022b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_ReadOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.set_ReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(bool)>(&::System::Data::DataColumn::set_ReadOnly)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x60012e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_ReadOnly", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_SortIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Index* (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_SortIndex)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6002300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_SortIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_Table
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_Table)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60023a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_Table", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.SetTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(::System::Data::DataTable*)>(&::System::Data::DataColumn::SetTable)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x60023a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "SetTable", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.GetDataRow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRow* (::System::Data::DataColumn::*)(int32_t)>(&::System::Data::DataColumn::GetDataRow)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x600245c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "GetDataRow", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::DataColumn::*)(int32_t)>(&::System::Data::DataColumn::get_Item)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x600061c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(int32_t, ::System::Object*)>(&::System::Data::DataColumn::set_Item)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6002480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.InitializeRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(int32_t)>(&::System::Data::DataColumn::InitializeRecord)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6001600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "InitializeRecord", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(int32_t, ::System::Object*)>(&::System::Data::DataColumn::SetValue)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x60026dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "SetValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.FreeRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(int32_t)>(&::System::Data::DataColumn::FreeRecord)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60027e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "FreeRecord", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_Unique
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_Unique)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6002804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_Unique", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.set_Unique
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(bool)>(&::System::Data::DataColumn::set_Unique)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x600280c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_Unique", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.InternalUnique
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(bool)>(&::System::Data::DataColumn::InternalUnique)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6002ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "InternalUnique", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_XmlDataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_XmlDataType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6002cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_XmlDataType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.set_XmlDataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(::StringW)>(&::System::Data::DataColumn::set_XmlDataType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6002cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_XmlDataType", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_SimpleType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SimpleType* (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_SimpleType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6002cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_SimpleType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.set_SimpleType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(::System::Data::SimpleType*)>(&::System::Data::DataColumn::set_SimpleType)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5ffdd1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_SimpleType", {}, { ::i2c::type_of<::System::Data::SimpleType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_ColumnMapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::MappingType (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_ColumnMapping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6002cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { ::i2c::class_of<::System::Data::DataColumn*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.set_ColumnMapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(::System::Data::MappingType)>(&::System::Data::DataColumn::set_ColumnMapping)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x6002cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { ::i2c::class_of<::System::Data::DataColumn*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.CheckColumnConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(::System::Data::DataRow*, ::System::Data::DataRowAction)>(
    &::System::Data::DataColumn::CheckColumnConstraint)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6002fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(),
                                                             { "CheckColumnConstraint", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.CheckMaxLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::CheckMaxLength)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x6001bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "CheckMaxLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.CheckMaxLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(::System::Data::DataRow*)>(&::System::Data::DataColumn::CheckMaxLength)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x60030b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "CheckMaxLength", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.CheckNotAllowNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::CheckNotAllowNull)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x5ffe850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "CheckNotAllowNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.CheckNullable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(::System::Data::DataRow*)>(&::System::Data::DataColumn::CheckNullable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x600303c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "CheckNullable", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.CheckUnique
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::CheckUnique)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6002c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "CheckUnique", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataColumn::*)(int32_t, int32_t)>(&::System::Data::DataColumn::Compare)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6003294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "Compare", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.CompareValueTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataColumn::*)(int32_t, ::System::Object*, bool)>(&::System::Data::DataColumn::CompareValueTo)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x60032b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "CompareValueTo", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.CompareValueTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataColumn::*)(int32_t, ::System::Object*)>(&::System::Data::DataColumn::CompareValueTo)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6003440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "CompareValueTo", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.ConvertValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::DataColumn::*)(::System::Object*)>(&::System::Data::DataColumn::ConvertValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x600345c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "ConvertValue", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(int32_t, int32_t)>(&::System::Data::DataColumn::Copy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6003478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "Copy", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataColumn* (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::Clone)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x6003494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.GetAggregateValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::DataColumn::*)(::ArrayW<int32_t>, ::System::Data::AggregateType)>(
    &::System::Data::DataColumn::GetAggregateValue)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6003a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "GetAggregateValue", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Data::AggregateType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.GetStringLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataColumn::*)(int32_t)>(&::System::Data::DataColumn::GetStringLength)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6003130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "GetStringLength", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(int32_t)>(&::System::Data::DataColumn::Init)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6003b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "Init", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.IsAutoIncrementType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::System::Data::DataColumn::IsAutoIncrementType)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5ffeeb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "IsAutoIncrementType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_IsCustomType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_IsCustomType)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6003b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_IsCustomType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.IsValueCustomTypeInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataColumn::*)(::System::Object*)>(&::System::Data::DataColumn::IsValueCustomTypeInstance)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6003c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "IsValueCustomTypeInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.get_ImplementsIXMLSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::get_ImplementsIXMLSerializable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6003cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_ImplementsIXMLSerializable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.IsInRelation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::IsInRelation)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x600071c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "IsInRelation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.IsMaxLengthViolated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::IsMaxLengthViolated)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x6003cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "IsMaxLengthViolated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.IsNotAllowDBNullViolated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::IsNotAllowDBNullViolated)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6004204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "IsNotAllowDBNullViolated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.OnPropertyChanging
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(::System::ComponentModel::PropertyChangedEventArgs*)>(&::System::Data::DataColumn::OnPropertyChanging)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x600438c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { ::i2c::class_of<::System::Data::DataColumn*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.RaisePropertyChanging
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(::StringW)>(&::System::Data::DataColumn::RaisePropertyChanging)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x60002ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "RaisePropertyChanging", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.InsureStorage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::InsureStorage)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x60043b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "InsureStorage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.SetCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(int32_t)>(&::System::Data::DataColumn::SetCapacity)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6004430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "SetCapacity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.OnSetDataSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::OnSetDataSet)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x600446c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "OnSetDataSet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataColumn::*)()>(&::System::Data::DataColumn::ToString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6004470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { ::i2c::class_of<::System::Data::DataColumn*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.ConvertXmlToObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::DataColumn::*)(::StringW)>(&::System::Data::DataColumn::ConvertXmlToObject)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60044e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "ConvertXmlToObject", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.ConvertXmlToObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::DataColumn::*)(::System::Xml::XmlReader*, ::System::Xml::Serialization::XmlRootAttribute*)>(
    &::System::Data::DataColumn::ConvertXmlToObject)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6004524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(),
                                                { "ConvertXmlToObject", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.ConvertObjectToXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataColumn::*)(::System::Object*)>(&::System::Data::DataColumn::ConvertObjectToXml)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6000638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "ConvertObjectToXml", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.ConvertObjectToXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(::System::Object*, ::System::Xml::XmlWriter*, ::System::Xml::Serialization::XmlRootAttribute*)>(
    &::System::Data::DataColumn::ConvertObjectToXml)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6004568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Data::DataColumn*>(),
            { "ConvertObjectToXml", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::XmlWriter*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.GetEmptyColumnStore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::DataColumn::*)(int32_t)>(&::System::Data::DataColumn::GetEmptyColumnStore)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60045bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "GetEmptyColumnStore", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.CopyValueIntoStore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(int32_t, ::System::Object*, ::System::Collections::BitArray*, int32_t)>(
    &::System::Data::DataColumn::CopyValueIntoStore)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60045f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Data::DataColumn*>(),
            { "CopyValueIntoStore", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::BitArray*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.SetStorage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(::System::Object*, ::System::Collections::BitArray*)>(&::System::Data::DataColumn::SetStorage)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6004618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "SetStorage", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::BitArray*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.AddDependentColumn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(::System::Data::DataColumn*)>(&::System::Data::DataColumn::AddDependentColumn)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x600465c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "AddDependentColumn", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.RemoveDependentColumn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(::System::Data::DataColumn*)>(&::System::Data::DataColumn::RemoveDependentColumn)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6004768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "RemoveDependentColumn", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumn.HandleDependentColumnList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumn::*)(::System::Data::DataExpression*, ::System::Data::DataExpression*)>(
    &::System::Data::DataColumn::HandleDependentColumnList)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x60014bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(),
                                                { "HandleDependentColumnList", {}, { ::i2c::type_of<::System::Data::DataExpression*>(), ::i2c::type_of<::System::Data::DataExpression*>() } })));
    return ___internal_method;
  }
};
constexpr bool& System::Data::DataColumn::__cordl_internal_get__allowNull() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowNull;
}
constexpr bool const& System::Data::DataColumn::__cordl_internal_get__allowNull() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowNull;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__allowNull(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowNull = value;
}
constexpr ::StringW& System::Data::DataColumn::__cordl_internal_get__caption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caption;
}
constexpr ::StringW const& System::Data::DataColumn::__cordl_internal_get__caption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caption;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__caption(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____caption = value;
}
constexpr ::StringW& System::Data::DataColumn::__cordl_internal_get__columnName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnName;
}
constexpr ::StringW const& System::Data::DataColumn::__cordl_internal_get__columnName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnName;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__columnName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____columnName = value;
}
constexpr ::System::Type*& System::Data::DataColumn::__cordl_internal_get__dataType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataType;
}
constexpr ::System::Type* const& System::Data::DataColumn::__cordl_internal_get__dataType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataType;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__dataType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataType = value;
}
constexpr ::System::Data::Common::StorageType& System::Data::DataColumn::__cordl_internal_get__storageType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____storageType;
}
constexpr ::System::Data::Common::StorageType const& System::Data::DataColumn::__cordl_internal_get__storageType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____storageType;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__storageType(::System::Data::Common::StorageType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____storageType = value;
}
constexpr ::System::Object*& System::Data::DataColumn::__cordl_internal_get__defaultValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValue;
}
constexpr ::System::Object* const& System::Data::DataColumn::__cordl_internal_get__defaultValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValue;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__defaultValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultValue = value;
}
constexpr ::System::Data::DataSetDateTime& System::Data::DataColumn::__cordl_internal_get__dateTimeMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateTimeMode;
}
constexpr ::System::Data::DataSetDateTime const& System::Data::DataColumn::__cordl_internal_get__dateTimeMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateTimeMode;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__dateTimeMode(::System::Data::DataSetDateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dateTimeMode = value;
}
constexpr ::System::Data::DataExpression*& System::Data::DataColumn::__cordl_internal_get__expression() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expression;
}
constexpr ::System::Data::DataExpression* const& System::Data::DataColumn::__cordl_internal_get__expression() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expression;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__expression(::System::Data::DataExpression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____expression = value;
}
constexpr int32_t& System::Data::DataColumn::__cordl_internal_get__maxLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxLength;
}
constexpr int32_t const& System::Data::DataColumn::__cordl_internal_get__maxLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxLength;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__maxLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxLength = value;
}
constexpr int32_t& System::Data::DataColumn::__cordl_internal_get__ordinal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ordinal;
}
constexpr int32_t const& System::Data::DataColumn::__cordl_internal_get__ordinal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ordinal;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__ordinal(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ordinal = value;
}
constexpr bool& System::Data::DataColumn::__cordl_internal_get__readOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readOnly;
}
constexpr bool const& System::Data::DataColumn::__cordl_internal_get__readOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readOnly;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__readOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____readOnly = value;
}
constexpr ::System::Data::Index*& System::Data::DataColumn::__cordl_internal_get__sortIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortIndex;
}
constexpr ::System::Data::Index* const& System::Data::DataColumn::__cordl_internal_get__sortIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortIndex;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__sortIndex(::System::Data::Index* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sortIndex = value;
}
constexpr ::System::Data::DataTable*& System::Data::DataColumn::__cordl_internal_get__table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr ::System::Data::DataTable* const& System::Data::DataColumn::__cordl_internal_get__table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__table(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____table = value;
}
constexpr bool& System::Data::DataColumn::__cordl_internal_get__unique() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unique;
}
constexpr bool const& System::Data::DataColumn::__cordl_internal_get__unique() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unique;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__unique(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____unique = value;
}
constexpr ::System::Data::MappingType& System::Data::DataColumn::__cordl_internal_get__columnMapping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnMapping;
}
constexpr ::System::Data::MappingType const& System::Data::DataColumn::__cordl_internal_get__columnMapping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnMapping;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__columnMapping(::System::Data::MappingType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____columnMapping = value;
}
constexpr int32_t& System::Data::DataColumn::__cordl_internal_get__hashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashCode;
}
constexpr int32_t const& System::Data::DataColumn::__cordl_internal_get__hashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashCode;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__hashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hashCode = value;
}
constexpr int32_t& System::Data::DataColumn::__cordl_internal_get__errors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____errors;
}
constexpr int32_t const& System::Data::DataColumn::__cordl_internal_get__errors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____errors;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__errors(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____errors = value;
}
constexpr bool& System::Data::DataColumn::__cordl_internal_get__isSqlType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isSqlType;
}
constexpr bool const& System::Data::DataColumn::__cordl_internal_get__isSqlType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isSqlType;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__isSqlType(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isSqlType = value;
}
constexpr bool& System::Data::DataColumn::__cordl_internal_get__implementsINullable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____implementsINullable;
}
constexpr bool const& System::Data::DataColumn::__cordl_internal_get__implementsINullable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____implementsINullable;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__implementsINullable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____implementsINullable = value;
}
constexpr bool& System::Data::DataColumn::__cordl_internal_get__implementsIChangeTracking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____implementsIChangeTracking;
}
constexpr bool const& System::Data::DataColumn::__cordl_internal_get__implementsIChangeTracking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____implementsIChangeTracking;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__implementsIChangeTracking(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____implementsIChangeTracking = value;
}
constexpr bool& System::Data::DataColumn::__cordl_internal_get__implementsIRevertibleChangeTracking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____implementsIRevertibleChangeTracking;
}
constexpr bool const& System::Data::DataColumn::__cordl_internal_get__implementsIRevertibleChangeTracking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____implementsIRevertibleChangeTracking;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__implementsIRevertibleChangeTracking(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____implementsIRevertibleChangeTracking = value;
}
constexpr bool& System::Data::DataColumn::__cordl_internal_get__implementsIXMLSerializable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____implementsIXMLSerializable;
}
constexpr bool const& System::Data::DataColumn::__cordl_internal_get__implementsIXMLSerializable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____implementsIXMLSerializable;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__implementsIXMLSerializable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____implementsIXMLSerializable = value;
}
constexpr bool& System::Data::DataColumn::__cordl_internal_get__defaultValueIsNull() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValueIsNull;
}
constexpr bool const& System::Data::DataColumn::__cordl_internal_get__defaultValueIsNull() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValueIsNull;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__defaultValueIsNull(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultValueIsNull = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*& System::Data::DataColumn::__cordl_internal_get__dependentColumns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dependentColumns;
}
constexpr ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* const& System::Data::DataColumn::__cordl_internal_get__dependentColumns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dependentColumns;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__dependentColumns(::System::Collections::Generic::List_1<::System::Data::DataColumn*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dependentColumns = value;
}
constexpr ::System::Data::PropertyCollection*& System::Data::DataColumn::__cordl_internal_get__extendedProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extendedProperties;
}
constexpr ::System::Data::PropertyCollection* const& System::Data::DataColumn::__cordl_internal_get__extendedProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extendedProperties;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__extendedProperties(::System::Data::PropertyCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____extendedProperties = value;
}
constexpr ::System::Data::Common::DataStorage*& System::Data::DataColumn::__cordl_internal_get__storage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____storage;
}
constexpr ::System::Data::Common::DataStorage* const& System::Data::DataColumn::__cordl_internal_get__storage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____storage;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__storage(::System::Data::Common::DataStorage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____storage = value;
}
constexpr ::System::Data::AutoIncrementValue*& System::Data::DataColumn::__cordl_internal_get__autoInc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoInc;
}
constexpr ::System::Data::AutoIncrementValue* const& System::Data::DataColumn::__cordl_internal_get__autoInc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoInc;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__autoInc(::System::Data::AutoIncrementValue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____autoInc = value;
}
constexpr ::StringW& System::Data::DataColumn::__cordl_internal_get__columnUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnUri;
}
constexpr ::StringW const& System::Data::DataColumn::__cordl_internal_get__columnUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnUri;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__columnUri(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____columnUri = value;
}
constexpr ::StringW& System::Data::DataColumn::__cordl_internal_get__columnPrefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnPrefix;
}
constexpr ::StringW const& System::Data::DataColumn::__cordl_internal_get__columnPrefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnPrefix;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__columnPrefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____columnPrefix = value;
}
constexpr ::StringW& System::Data::DataColumn::__cordl_internal_get__encodedColumnName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encodedColumnName;
}
constexpr ::StringW const& System::Data::DataColumn::__cordl_internal_get__encodedColumnName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encodedColumnName;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__encodedColumnName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____encodedColumnName = value;
}
constexpr ::System::Data::SimpleType*& System::Data::DataColumn::__cordl_internal_get__simpleType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____simpleType;
}
constexpr ::System::Data::SimpleType* const& System::Data::DataColumn::__cordl_internal_get__simpleType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____simpleType;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__simpleType(::System::Data::SimpleType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____simpleType = value;
}
constexpr int32_t& System::Data::DataColumn::__cordl_internal_get__objectID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectID;
}
constexpr int32_t const& System::Data::DataColumn::__cordl_internal_get__objectID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectID;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__objectID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectID = value;
}
constexpr ::StringW& System::Data::DataColumn::__cordl_internal_get__XmlDataType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____XmlDataType_k__BackingField;
}
constexpr ::StringW const& System::Data::DataColumn::__cordl_internal_get__XmlDataType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____XmlDataType_k__BackingField;
}
constexpr void System::Data::DataColumn::__cordl_internal_set__XmlDataType_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____XmlDataType_k__BackingField = value;
}
constexpr ::System::ComponentModel::PropertyChangedEventHandler*& System::Data::DataColumn::__cordl_internal_get_PropertyChanging() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PropertyChanging;
}
constexpr ::System::ComponentModel::PropertyChangedEventHandler* const& System::Data::DataColumn::__cordl_internal_get_PropertyChanging() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PropertyChanging;
}
constexpr void System::Data::DataColumn::__cordl_internal_set_PropertyChanging(::System::ComponentModel::PropertyChangedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PropertyChanging = value;
}
inline void System::Data::DataColumn::setStaticF_s_objectTypeCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_objectTypeCount", ::System::Data::DataColumn*>(std::forward<int32_t>(value));
}
inline int32_t System::Data::DataColumn::getStaticF_s_objectTypeCount() {
  return ::cordl_internals::getStaticField<int32_t, "s_objectTypeCount", ::System::Data::DataColumn*>();
}
inline void System::Data::DataColumn::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataColumn::_ctor(::StringW columnName, ::System::Type* dataType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, columnName, dataType);
}
inline void System::Data::DataColumn::_ctor(::StringW columnName, ::System::Type* dataType, ::StringW expr, ::System::Data::MappingType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(),
                          { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Data::MappingType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, columnName, dataType, expr, type);
}
inline void System::Data::DataColumn::UpdateColumnType(::System::Type* type, ::System::Data::Common::StorageType typeCode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "UpdateColumnType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Data::Common::StorageType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, typeCode);
}
inline bool System::Data::DataColumn::get_AllowDBNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_AllowDBNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::DataColumn::set_AllowDBNull(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_AllowDBNull", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Data::DataColumn::get_AutoIncrement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_AutoIncrement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::DataColumn::set_AutoIncrement(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_AutoIncrement", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* System::Data::DataColumn::get_AutoIncrementCurrent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_AutoIncrementCurrent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Data::DataColumn::set_AutoIncrementCurrent(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_AutoIncrementCurrent", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Data::AutoIncrementValue* System::Data::DataColumn::get_AutoInc() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_AutoInc", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::AutoIncrementValue*>(this, ___internal_method);
}
inline int64_t System::Data::DataColumn::get_AutoIncrementSeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_AutoIncrementSeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Data::DataColumn::set_AutoIncrementSeed(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_AutoIncrementSeed", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t System::Data::DataColumn::get_AutoIncrementStep() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_AutoIncrementStep", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Data::DataColumn::set_AutoIncrementStep(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_AutoIncrementStep", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Data::DataColumn::get_Caption() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_Caption", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Data::DataColumn::set_Caption(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_Caption", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Data::DataColumn::get_ColumnName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_ColumnName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Data::DataColumn::set_ColumnName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_ColumnName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Data::DataColumn::get_EncodedColumnName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_EncodedColumnName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::IFormatProvider* System::Data::DataColumn::get_FormatProvider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_FormatProvider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IFormatProvider*>(this, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Data::DataColumn::get_Locale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_Locale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(this, ___internal_method);
}
inline int32_t System::Data::DataColumn::get_ObjectID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_ObjectID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Data::DataColumn::get_Prefix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_Prefix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Data::DataColumn::set_Prefix(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_Prefix", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Data::DataColumn::GetColumnValueAsString(::System::Data::DataRow* row, ::System::Data::DataRowVersion version) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(),
                                                           { "GetColumnValueAsString", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowVersion>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, row, version);
}
inline bool System::Data::DataColumn::get_Computed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_Computed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Data::DataExpression* System::Data::DataColumn::get_DataExpression() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_DataExpression", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataExpression*>(this, ___internal_method);
}
inline ::System::Type* System::Data::DataColumn::get_DataType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_DataType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void System::Data::DataColumn::set_DataType(::System::Type* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_DataType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Data::DataSetDateTime System::Data::DataColumn::get_DateTimeMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_DateTimeMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataSetDateTime>(this, ___internal_method);
}
inline void System::Data::DataColumn::set_DateTimeMode(::System::Data::DataSetDateTime value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_DateTimeMode", {}, { ::i2c::type_of<::System::Data::DataSetDateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* System::Data::DataColumn::get_DefaultValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_DefaultValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Data::DataColumn::set_DefaultValue(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_DefaultValue", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Data::DataColumn::get_DefaultValueIsNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_DefaultValueIsNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Data::DataColumn::get_Expression() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_Expression", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Data::DataColumn::set_Expression(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_Expression", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Data::PropertyCollection* System::Data::DataColumn::get_ExtendedProperties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_ExtendedProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::PropertyCollection*>(this, ___internal_method);
}
inline bool System::Data::DataColumn::get_HasData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_HasData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataColumn::get_ImplementsINullable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_ImplementsINullable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataColumn::get_ImplementsIChangeTracking() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_ImplementsIChangeTracking", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataColumn::get_ImplementsIRevertibleChangeTracking() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_ImplementsIRevertibleChangeTracking", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataColumn::get_IsValueType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_IsValueType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataColumn::get_IsSqlType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_IsSqlType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::DataColumn::SetMaxLengthSimpleType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "SetMaxLengthSimpleType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Data::DataColumn::get_MaxLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_MaxLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Data::DataColumn::set_MaxLength(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_MaxLength", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Data::DataColumn::get_Namespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_Namespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Data::DataColumn::set_Namespace(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_Namespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Data::DataColumn::get_Ordinal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_Ordinal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Data::DataColumn::SetOrdinalInternal(int32_t ordinal) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "SetOrdinalInternal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ordinal);
}
inline bool System::Data::DataColumn::get_ReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_ReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::DataColumn::set_ReadOnly(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_ReadOnly", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Data::Index* System::Data::DataColumn::get_SortIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_SortIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Index*>(this, ___internal_method);
}
inline ::System::Data::DataTable* System::Data::DataColumn::get_Table() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_Table", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method);
}
inline void System::Data::DataColumn::SetTable(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "SetTable", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline ::System::Data::DataRow* System::Data::DataColumn::GetDataRow(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "GetDataRow", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*>(this, ___internal_method, index);
}
inline ::System::Object* System::Data::DataColumn::get_Item(int32_t record) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, record);
}
inline void System::Data::DataColumn::set_Item(int32_t record, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record, value);
}
inline void System::Data::DataColumn::InitializeRecord(int32_t record) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "InitializeRecord", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record);
}
inline void System::Data::DataColumn::SetValue(int32_t record, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "SetValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record, value);
}
inline void System::Data::DataColumn::FreeRecord(int32_t record) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "FreeRecord", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record);
}
inline bool System::Data::DataColumn::get_Unique() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_Unique", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::DataColumn::set_Unique(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_Unique", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Data::DataColumn::InternalUnique(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "InternalUnique", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Data::DataColumn::get_XmlDataType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_XmlDataType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Data::DataColumn::set_XmlDataType(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_XmlDataType", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Data::SimpleType* System::Data::DataColumn::get_SimpleType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_SimpleType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SimpleType*>(this, ___internal_method);
}
inline void System::Data::DataColumn::set_SimpleType(::System::Data::SimpleType* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "set_SimpleType", {}, { ::i2c::type_of<::System::Data::SimpleType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Data::MappingType System::Data::DataColumn::get_ColumnMapping() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataColumn*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::MappingType>(this, ___internal_method);
}
inline void System::Data::DataColumn::set_ColumnMapping(::System::Data::MappingType value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataColumn*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Data::DataColumn::CheckColumnConstraint(::System::Data::DataRow* row, ::System::Data::DataRowAction action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(),
                                                           { "CheckColumnConstraint", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowAction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row, action);
}
inline bool System::Data::DataColumn::CheckMaxLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "CheckMaxLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::DataColumn::CheckMaxLength(::System::Data::DataRow* dr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "CheckMaxLength", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dr);
}
inline void System::Data::DataColumn::CheckNotAllowNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "CheckNotAllowNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataColumn::CheckNullable(::System::Data::DataRow* row) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "CheckNullable", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row);
}
inline void System::Data::DataColumn::CheckUnique() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "CheckUnique", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Data::DataColumn::Compare(int32_t record1, int32_t record2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "Compare", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, record1, record2);
}
inline bool System::Data::DataColumn::CompareValueTo(int32_t record1, ::System::Object* value, bool checkType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "CompareValueTo", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, record1, value, checkType);
}
inline int32_t System::Data::DataColumn::CompareValueTo(int32_t record1, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "CompareValueTo", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, record1, value);
}
inline ::System::Object* System::Data::DataColumn::ConvertValue(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "ConvertValue", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value);
}
inline void System::Data::DataColumn::Copy(int32_t srcRecordNo, int32_t dstRecordNo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "Copy", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, srcRecordNo, dstRecordNo);
}
inline ::System::Data::DataColumn* System::Data::DataColumn::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataColumn*>(this, ___internal_method);
}
inline ::System::Object* System::Data::DataColumn::GetAggregateValue(::ArrayW<int32_t> records, ::System::Data::AggregateType kind) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "GetAggregateValue", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Data::AggregateType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, records, kind);
}
inline int32_t System::Data::DataColumn::GetStringLength(int32_t record) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "GetStringLength", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, record);
}
inline void System::Data::DataColumn::Init(int32_t record) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "Init", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record);
}
inline bool System::Data::DataColumn::IsAutoIncrementType(::System::Type* dataType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "IsAutoIncrementType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dataType);
}
inline bool System::Data::DataColumn::get_IsCustomType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_IsCustomType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataColumn::IsValueCustomTypeInstance(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "IsValueCustomTypeInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool System::Data::DataColumn::get_ImplementsIXMLSerializable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "get_ImplementsIXMLSerializable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataColumn::IsInRelation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "IsInRelation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataColumn::IsMaxLengthViolated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "IsMaxLengthViolated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataColumn::IsNotAllowDBNullViolated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "IsNotAllowDBNullViolated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::DataColumn::OnPropertyChanging(::System::ComponentModel::PropertyChangedEventArgs* pcevent) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataColumn*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pcevent);
}
inline void System::Data::DataColumn::RaisePropertyChanging(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "RaisePropertyChanging", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Data::DataColumn::InsureStorage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "InsureStorage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataColumn::SetCapacity(int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "SetCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline void System::Data::DataColumn::OnSetDataSet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "OnSetDataSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Data::DataColumn::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataColumn*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Object* System::Data::DataColumn::ConvertXmlToObject(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "ConvertXmlToObject", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, s);
}
inline ::System::Object* System::Data::DataColumn::ConvertXmlToObject(::System::Xml::XmlReader* xmlReader, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(),
                                              { "ConvertXmlToObject", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xmlReader, xmlAttrib);
}
inline ::StringW System::Data::DataColumn::ConvertObjectToXml(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "ConvertObjectToXml", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline void System::Data::DataColumn::ConvertObjectToXml(::System::Object* value, ::System::Xml::XmlWriter* xmlWriter, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Data::DataColumn*>(),
          { "ConvertObjectToXml", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::XmlWriter*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, xmlWriter, xmlAttrib);
}
inline ::System::Object* System::Data::DataColumn::GetEmptyColumnStore(int32_t recordCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "GetEmptyColumnStore", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, recordCount);
}
inline void System::Data::DataColumn::CopyValueIntoStore(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Data::DataColumn*>(),
          { "CopyValueIntoStore", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::BitArray*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record, store, nullbits, storeIndex);
}
inline void System::Data::DataColumn::SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "SetStorage", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::BitArray*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, store, nullbits);
}
inline void System::Data::DataColumn::AddDependentColumn(::System::Data::DataColumn* expressionColumn) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "AddDependentColumn", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expressionColumn);
}
inline void System::Data::DataColumn::RemoveDependentColumn(::System::Data::DataColumn* expressionColumn) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(), { "RemoveDependentColumn", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expressionColumn);
}
inline void System::Data::DataColumn::HandleDependentColumnList(::System::Data::DataExpression* oldExpression, ::System::Data::DataExpression* newExpression) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumn*>(),
                                              { "HandleDependentColumnList", {}, { ::i2c::type_of<::System::Data::DataExpression*>(), ::i2c::type_of<::System::Data::DataExpression*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldExpression, newExpression);
}
inline ::System::Data::DataColumn* System::Data::DataColumn::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataColumn*>());
}
inline ::System::Data::DataColumn* System::Data::DataColumn::New_ctor(::StringW columnName, ::System::Type* dataType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataColumn*>(columnName, dataType));
}
inline ::System::Data::DataColumn* System::Data::DataColumn::New_ctor(::StringW columnName, ::System::Type* dataType, ::StringW expr, ::System::Data::MappingType type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataColumn*>(columnName, dataType, expr, type));
}
// Ctor Parameters []
constexpr ::System::Data::DataColumn::DataColumn() {}
