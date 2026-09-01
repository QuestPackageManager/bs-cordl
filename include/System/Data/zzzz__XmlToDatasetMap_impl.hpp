#pragma once
// IWYU pragma private; include "System\Data\XmlToDatasetMap.hpp"
#include "System/Collections/zzzz__Hashtable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__XmlToDatasetMap_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__XmlToDatasetMap_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::XmlToDatasetMap_XmlNodeIdentety._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlToDatasetMap_XmlNodeIdentety::*)(::StringW, ::StringW)>(&::System::Data::XmlToDatasetMap_XmlNodeIdentety::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x606f090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap_XmlNodeIdentety*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap_XmlNodeIdentety.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::XmlToDatasetMap_XmlNodeIdentety::*)()>(&::System::Data::XmlToDatasetMap_XmlNodeIdentety::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x606fa64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap_XmlNodeIdentety*>(), { ::i2c::class_of<::System::Data::XmlToDatasetMap_XmlNodeIdentety*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap_XmlNodeIdentety.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::XmlToDatasetMap_XmlNodeIdentety::*)(::System::Object*)>(&::System::Data::XmlToDatasetMap_XmlNodeIdentety::Equals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x606fa80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap_XmlNodeIdentety*>(), { ::i2c::class_of<::System::Data::XmlToDatasetMap_XmlNodeIdentety*>(), 0 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Data::XmlToDatasetMap_XmlNodeIdentety::__cordl_internal_get_LocalName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LocalName;
}
constexpr ::StringW const& System::Data::XmlToDatasetMap_XmlNodeIdentety::__cordl_internal_get_LocalName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LocalName;
}
constexpr void System::Data::XmlToDatasetMap_XmlNodeIdentety::__cordl_internal_set_LocalName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LocalName = value;
}
constexpr ::StringW& System::Data::XmlToDatasetMap_XmlNodeIdentety::__cordl_internal_get_NamespaceURI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NamespaceURI;
}
constexpr ::StringW const& System::Data::XmlToDatasetMap_XmlNodeIdentety::__cordl_internal_get_NamespaceURI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NamespaceURI;
}
constexpr void System::Data::XmlToDatasetMap_XmlNodeIdentety::__cordl_internal_set_NamespaceURI(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NamespaceURI = value;
}
inline void System::Data::XmlToDatasetMap_XmlNodeIdentety::_ctor(::StringW localName, ::StringW namespaceURI) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap_XmlNodeIdentety*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localName, namespaceURI);
}
inline int32_t System::Data::XmlToDatasetMap_XmlNodeIdentety::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::XmlToDatasetMap_XmlNodeIdentety*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Data::XmlToDatasetMap_XmlNodeIdentety::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::XmlToDatasetMap_XmlNodeIdentety*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline ::System::Data::XmlToDatasetMap_XmlNodeIdentety* System::Data::XmlToDatasetMap_XmlNodeIdentety::New_ctor(::StringW localName, ::StringW namespaceURI) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::XmlToDatasetMap_XmlNodeIdentety*>(localName, namespaceURI));
}
// Ctor Parameters []
constexpr ::System::Data::XmlToDatasetMap_XmlNodeIdentety::XmlToDatasetMap_XmlNodeIdentety() {}
//  Writing Method size for method: ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlToDatasetMap_XmlNodeIdHashtable::*)(int32_t)>(&::System::Data::XmlToDatasetMap_XmlNodeIdHashtable::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x606fb2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::XmlToDatasetMap_XmlNodeIdHashtable::*)(::System::Xml::XmlNode*)>(
    &::System::Data::XmlToDatasetMap_XmlNodeIdHashtable::get_Item)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x606fbac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>(), { "get_Item", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::XmlToDatasetMap_XmlNodeIdHashtable::*)(::System::Xml::XmlReader*)>(
    &::System::Data::XmlToDatasetMap_XmlNodeIdHashtable::get_Item)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x606fc24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>(), { "get_Item", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::XmlToDatasetMap_XmlNodeIdHashtable::*)(::System::Data::DataTable*)>(
    &::System::Data::XmlToDatasetMap_XmlNodeIdHashtable::get_Item)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x606fc94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>(), { "get_Item", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::XmlToDatasetMap_XmlNodeIdHashtable::*)(::StringW)>(
    &::System::Data::XmlToDatasetMap_XmlNodeIdHashtable::get_Item)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x606fd04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Data::XmlToDatasetMap_XmlNodeIdentety*& System::Data::XmlToDatasetMap_XmlNodeIdHashtable::__cordl_internal_get__id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr ::System::Data::XmlToDatasetMap_XmlNodeIdentety* const& System::Data::XmlToDatasetMap_XmlNodeIdHashtable::__cordl_internal_get__id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr void System::Data::XmlToDatasetMap_XmlNodeIdHashtable::__cordl_internal_set__id(::System::Data::XmlToDatasetMap_XmlNodeIdentety* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____id = value;
}
inline void System::Data::XmlToDatasetMap_XmlNodeIdHashtable::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline ::System::Object* System::Data::XmlToDatasetMap_XmlNodeIdHashtable::get_Item(::System::Xml::XmlNode* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>(), { "get_Item", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, node);
}
inline ::System::Object* System::Data::XmlToDatasetMap_XmlNodeIdHashtable::get_Item(::System::Xml::XmlReader* dataReader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>(), { "get_Item", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, dataReader);
}
inline ::System::Object* System::Data::XmlToDatasetMap_XmlNodeIdHashtable::get_Item(::System::Data::DataTable* table) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>(), { "get_Item", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, table);
}
inline ::System::Object* System::Data::XmlToDatasetMap_XmlNodeIdHashtable::get_Item(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name);
}
inline ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* System::Data::XmlToDatasetMap_XmlNodeIdHashtable::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>(capacity));
}
// Ctor Parameters []
constexpr ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable::XmlToDatasetMap_XmlNodeIdHashtable() {}
//  Writing Method size for method: ::System::Data::XmlToDatasetMap_TableSchemaInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlToDatasetMap_TableSchemaInfo::*)(::System::Data::DataTable*)>(
    &::System::Data::XmlToDatasetMap_TableSchemaInfo::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x606fd3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap_TableSchemaInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataTable*& System::Data::XmlToDatasetMap_TableSchemaInfo::__cordl_internal_get_TableSchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TableSchema;
}
constexpr ::System::Data::DataTable* const& System::Data::XmlToDatasetMap_TableSchemaInfo::__cordl_internal_get_TableSchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TableSchema;
}
constexpr void System::Data::XmlToDatasetMap_TableSchemaInfo::__cordl_internal_set_TableSchema(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TableSchema = value;
}
constexpr ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*& System::Data::XmlToDatasetMap_TableSchemaInfo::__cordl_internal_get_ColumnsSchemaMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ColumnsSchemaMap;
}
constexpr ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* const& System::Data::XmlToDatasetMap_TableSchemaInfo::__cordl_internal_get_ColumnsSchemaMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ColumnsSchemaMap;
}
constexpr void System::Data::XmlToDatasetMap_TableSchemaInfo::__cordl_internal_set_ColumnsSchemaMap(::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ColumnsSchemaMap = value;
}
inline void System::Data::XmlToDatasetMap_TableSchemaInfo::_ctor(::System::Data::DataTable* tableSchema) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap_TableSchemaInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tableSchema);
}
inline ::System::Data::XmlToDatasetMap_TableSchemaInfo* System::Data::XmlToDatasetMap_TableSchemaInfo::New_ctor(::System::Data::DataTable* tableSchema) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::XmlToDatasetMap_TableSchemaInfo*>(tableSchema));
}
// Ctor Parameters []
constexpr ::System::Data::XmlToDatasetMap_TableSchemaInfo::XmlToDatasetMap_TableSchemaInfo() {}
//  Writing Method size for method: ::System::Data::XmlToDatasetMap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlToDatasetMap::*)(::System::Data::DataSet*, ::System::Xml::XmlNameTable*)>(&::System::Data::XmlToDatasetMap::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60698a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlToDatasetMap::*)(::System::Xml::XmlNameTable*, ::System::Data::DataSet*)>(&::System::Data::XmlToDatasetMap::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x606af08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Data::DataSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlToDatasetMap::*)(::System::Data::DataTable*, ::System::Xml::XmlNameTable*)>(&::System::Data::XmlToDatasetMap::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x606989c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlToDatasetMap::*)(::System::Xml::XmlNameTable*, ::System::Data::DataTable*)>(&::System::Data::XmlToDatasetMap::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x606af0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.IsMappedColumn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Data::DataColumn*)>(&::System::Data::XmlToDatasetMap::IsMappedColumn)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x606a8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(), { "IsMappedColumn", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.AddTableSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::XmlToDatasetMap_TableSchemaInfo* (::System::Data::XmlToDatasetMap::*)(::System::Data::DataTable*, ::System::Xml::XmlNameTable*)>(
    &::System::Data::XmlToDatasetMap::AddTableSchema)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x606ef78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(),
                                                             { "AddTableSchema", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.AddTableSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::XmlToDatasetMap_TableSchemaInfo* (::System::Data::XmlToDatasetMap::*)(::System::Xml::XmlNameTable*, ::System::Data::DataTable*)>(
    &::System::Data::XmlToDatasetMap::AddTableSchema)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x606f098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(),
                                                             { "AddTableSchema", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.AddColumnSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::XmlToDatasetMap::*)(
    ::System::Data::DataColumn*, ::System::Xml::XmlNameTable*, ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*)>(&::System::Data::XmlToDatasetMap::AddColumnSchema)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x606f200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(), { "AddColumnSchema",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Xml::XmlNameTable*>(),
                                                                                                         ::i2c::type_of<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.AddColumnSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::XmlToDatasetMap::*)(
    ::System::Xml::XmlNameTable*, ::System::Data::DataColumn*, ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*)>(&::System::Data::XmlToDatasetMap::AddColumnSchema)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x606f484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(), { "AddColumnSchema",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Data::DataColumn*>(),
                                                                                                         ::i2c::type_of<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.BuildIdentityMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlToDatasetMap::*)(::System::Data::DataSet*, ::System::Xml::XmlNameTable*)>(
    &::System::Data::XmlToDatasetMap::BuildIdentityMap)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x606d208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(),
                                                             { "BuildIdentityMap", {}, { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.BuildIdentityMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlToDatasetMap::*)(::System::Xml::XmlNameTable*, ::System::Data::DataSet*)>(
    &::System::Data::XmlToDatasetMap::BuildIdentityMap)> {
  constexpr static std::size_t size = 0xa60;
  constexpr static std::size_t addrs = 0x606d7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(),
                                                             { "BuildIdentityMap", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Data::DataSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.BuildIdentityMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlToDatasetMap::*)(::System::Data::DataTable*, ::System::Xml::XmlNameTable*)>(
    &::System::Data::XmlToDatasetMap::BuildIdentityMap)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x606e228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(),
                                                             { "BuildIdentityMap", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.BuildIdentityMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlToDatasetMap::*)(::System::Xml::XmlNameTable*, ::System::Data::DataTable*)>(
    &::System::Data::XmlToDatasetMap::BuildIdentityMap)> {
  constexpr static std::size_t size = 0xa24;
  constexpr static std::size_t addrs = 0x606e554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(),
                                                             { "BuildIdentityMap", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.GetSelfAndDescendants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::System::Data::XmlToDatasetMap::*)(::System::Data::DataTable*)>(
    &::System::Data::XmlToDatasetMap::GetSelfAndDescendants)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x606f628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(), { "GetSelfAndDescendants", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.GetColumnSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::XmlToDatasetMap::*)(::System::Xml::XmlNode*, bool)>(&::System::Data::XmlToDatasetMap::GetColumnSchema)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x6069324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(), { "GetColumnSchema", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.GetColumnSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::XmlToDatasetMap::*)(::System::Data::DataTable*, ::System::Xml::XmlReader*, bool)>(
    &::System::Data::XmlToDatasetMap::GetColumnSchema)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x606c7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(),
                                                { "GetColumnSchema", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.GetSchemaForNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::XmlToDatasetMap::*)(::System::Xml::XmlNode*, bool)>(&::System::Data::XmlToDatasetMap::GetSchemaForNode)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x60698a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(), { "GetSchemaForNode", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.GetTableForNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::XmlToDatasetMap::*)(::System::Xml::XmlReader*, bool)>(
    &::System::Data::XmlToDatasetMap::GetTableForNode)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x606b834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(), { "GetTableForNode", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlToDatasetMap.HandleSpecialColumn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlToDatasetMap::*)(
    ::System::Data::DataColumn*, ::System::Xml::XmlNameTable*, ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*)>(&::System::Data::XmlToDatasetMap::HandleSpecialColumn)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x606f324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(), { "HandleSpecialColumn",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Xml::XmlNameTable*>(),
                                                                                                         ::i2c::type_of<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*& System::Data::XmlToDatasetMap::__cordl_internal_get__tableSchemaMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableSchemaMap;
}
constexpr ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* const& System::Data::XmlToDatasetMap::__cordl_internal_get__tableSchemaMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableSchemaMap;
}
constexpr void System::Data::XmlToDatasetMap::__cordl_internal_set__tableSchemaMap(::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tableSchemaMap = value;
}
constexpr ::System::Data::XmlToDatasetMap_TableSchemaInfo*& System::Data::XmlToDatasetMap::__cordl_internal_get__lastTableSchemaInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastTableSchemaInfo;
}
constexpr ::System::Data::XmlToDatasetMap_TableSchemaInfo* const& System::Data::XmlToDatasetMap::__cordl_internal_get__lastTableSchemaInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastTableSchemaInfo;
}
constexpr void System::Data::XmlToDatasetMap::__cordl_internal_set__lastTableSchemaInfo(::System::Data::XmlToDatasetMap_TableSchemaInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastTableSchemaInfo = value;
}
inline void System::Data::XmlToDatasetMap::_ctor(::System::Data::DataSet* dataSet, ::System::Xml::XmlNameTable* nameTable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSet, nameTable);
}
inline void System::Data::XmlToDatasetMap::_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataSet* dataSet) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Data::DataSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameTable, dataSet);
}
inline void System::Data::XmlToDatasetMap::_ctor(::System::Data::DataTable* dataTable, ::System::Xml::XmlNameTable* nameTable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataTable, nameTable);
}
inline void System::Data::XmlToDatasetMap::_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataTable* dataTable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameTable, dataTable);
}
inline bool System::Data::XmlToDatasetMap::IsMappedColumn(::System::Data::DataColumn* c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(), { "IsMappedColumn", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline ::System::Data::XmlToDatasetMap_TableSchemaInfo* System::Data::XmlToDatasetMap::AddTableSchema(::System::Data::DataTable* table, ::System::Xml::XmlNameTable* nameTable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(),
                                                           { "AddTableSchema", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::XmlToDatasetMap_TableSchemaInfo*>(this, ___internal_method, table, nameTable);
}
inline ::System::Data::XmlToDatasetMap_TableSchemaInfo* System::Data::XmlToDatasetMap::AddTableSchema(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(),
                                                           { "AddTableSchema", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::XmlToDatasetMap_TableSchemaInfo*>(this, ___internal_method, nameTable, table);
}
inline bool System::Data::XmlToDatasetMap::AddColumnSchema(::System::Data::DataColumn* col, ::System::Xml::XmlNameTable* nameTable, ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* columns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(), { "AddColumnSchema",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Xml::XmlNameTable*>(),
                                                                                                       ::i2c::type_of<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, col, nameTable, columns);
}
inline bool System::Data::XmlToDatasetMap::AddColumnSchema(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataColumn* col, ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* columns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(), { "AddColumnSchema",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Data::DataColumn*>(),
                                                                                                       ::i2c::type_of<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, nameTable, col, columns);
}
inline void System::Data::XmlToDatasetMap::BuildIdentityMap(::System::Data::DataSet* dataSet, ::System::Xml::XmlNameTable* nameTable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(),
                                                           { "BuildIdentityMap", {}, { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSet, nameTable);
}
inline void System::Data::XmlToDatasetMap::BuildIdentityMap(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataSet* dataSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(),
                                                           { "BuildIdentityMap", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Data::DataSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameTable, dataSet);
}
inline void System::Data::XmlToDatasetMap::BuildIdentityMap(::System::Data::DataTable* dataTable, ::System::Xml::XmlNameTable* nameTable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(),
                                                           { "BuildIdentityMap", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataTable, nameTable);
}
inline void System::Data::XmlToDatasetMap::BuildIdentityMap(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataTable* dataTable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(),
                                                           { "BuildIdentityMap", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameTable, dataTable);
}
inline ::System::Collections::ArrayList* System::Data::XmlToDatasetMap::GetSelfAndDescendants(::System::Data::DataTable* dt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(), { "GetSelfAndDescendants", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method, dt);
}
inline ::System::Object* System::Data::XmlToDatasetMap::GetColumnSchema(::System::Xml::XmlNode* node, bool fIgnoreNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(), { "GetColumnSchema", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, node, fIgnoreNamespace);
}
inline ::System::Object* System::Data::XmlToDatasetMap::GetColumnSchema(::System::Data::DataTable* table, ::System::Xml::XmlReader* dataReader, bool fIgnoreNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(),
                                              { "GetColumnSchema", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, table, dataReader, fIgnoreNamespace);
}
inline ::System::Object* System::Data::XmlToDatasetMap::GetSchemaForNode(::System::Xml::XmlNode* node, bool fIgnoreNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(), { "GetSchemaForNode", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, node, fIgnoreNamespace);
}
inline ::System::Data::DataTable* System::Data::XmlToDatasetMap::GetTableForNode(::System::Xml::XmlReader* node, bool fIgnoreNamespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(), { "GetTableForNode", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method, node, fIgnoreNamespace);
}
inline void System::Data::XmlToDatasetMap::HandleSpecialColumn(::System::Data::DataColumn* col, ::System::Xml::XmlNameTable* nameTable, ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* columns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlToDatasetMap*>(), { "HandleSpecialColumn",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Xml::XmlNameTable*>(),
                                                                                                       ::i2c::type_of<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, col, nameTable, columns);
}
inline ::System::Data::XmlToDatasetMap* System::Data::XmlToDatasetMap::New_ctor(::System::Data::DataSet* dataSet, ::System::Xml::XmlNameTable* nameTable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::XmlToDatasetMap*>(dataSet, nameTable));
}
inline ::System::Data::XmlToDatasetMap* System::Data::XmlToDatasetMap::New_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataSet* dataSet) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::XmlToDatasetMap*>(nameTable, dataSet));
}
inline ::System::Data::XmlToDatasetMap* System::Data::XmlToDatasetMap::New_ctor(::System::Data::DataTable* dataTable, ::System::Xml::XmlNameTable* nameTable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::XmlToDatasetMap*>(dataTable, nameTable));
}
inline ::System::Data::XmlToDatasetMap* System::Data::XmlToDatasetMap::New_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataTable* dataTable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::XmlToDatasetMap*>(nameTable, dataTable));
}
// Ctor Parameters []
constexpr ::System::Data::XmlToDatasetMap::XmlToDatasetMap() {}
