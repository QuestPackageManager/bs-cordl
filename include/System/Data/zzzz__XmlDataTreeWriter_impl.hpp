#pragma once
// IWYU pragma private; include "System/Data/XmlDataTreeWriter.hpp"
#include "System/Data/zzzz__DataTable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__XmlDataTreeWriter_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::XmlDataTreeWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlDataTreeWriter::*)(::System::Data::DataSet*)>(&::System::Data::XmlDataTreeWriter::_ctor)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x6078ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlDataTreeWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataTreeWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlDataTreeWriter::*)(::System::Data::DataTable*, bool)>(&::System::Data::XmlDataTreeWriter::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6078718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlDataTreeWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataTreeWriter.CreateToplevelTables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Data::DataTable*> (::System::Data::XmlDataTreeWriter::*)()>(&::System::Data::XmlDataTreeWriter::CreateToplevelTables)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x607ada4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlDataTreeWriter*>(), { "CreateToplevelTables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataTreeWriter.CreateTablesHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlDataTreeWriter::*)(::System::Data::DataTable*)>(&::System::Data::XmlDataTreeWriter::CreateTablesHierarchy)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x607aa4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlDataTreeWriter*>(), { "CreateTablesHierarchy", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataTreeWriter.RowHasErrors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Data::DataRow*)>(&::System::Data::XmlDataTreeWriter::RowHasErrors)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6079f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlDataTreeWriter*>(), { "RowHasErrors", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataTreeWriter.SaveDiffgramData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlDataTreeWriter::*)(::System::Xml::XmlWriter*, ::System::Collections::Hashtable*)>(
    &::System::Data::XmlDataTreeWriter::SaveDiffgramData)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x6078860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlDataTreeWriter*>(),
                                                             { "SaveDiffgramData", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>(), ::i2c::type_of<::System::Collections::Hashtable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataTreeWriter.Save
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlDataTreeWriter::*)(::System::Xml::XmlWriter*, bool)>(&::System::Data::XmlDataTreeWriter::Save)> {
  constexpr static std::size_t size = 0x8d4;
  constexpr static std::size_t addrs = 0x607ca84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlDataTreeWriter*>(), { "Save", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataTreeWriter.GetNestedChildRelations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::System::Data::XmlDataTreeWriter::*)(::System::Data::DataRow*)>(
    &::System::Data::XmlDataTreeWriter::GetNestedChildRelations)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x607d358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlDataTreeWriter*>(), { "GetNestedChildRelations", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataTreeWriter.XmlDataRowWriter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XmlDataTreeWriter::*)(::System::Data::DataRow*, ::StringW)>(&::System::Data::XmlDataTreeWriter::XmlDataRowWriter)> {
  constexpr static std::size_t size = 0x19e8;
  constexpr static std::size_t addrs = 0x607b09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlDataTreeWriter*>(),
                                                                                           { "XmlDataRowWriter", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataTreeWriter.PreserveSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*)>(&::System::Data::XmlDataTreeWriter::PreserveSpace)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x607a9bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlDataTreeWriter*>(), { "PreserveSpace", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlWriter*& System::Data::XmlDataTreeWriter::__cordl_internal_get__xmlw() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlw;
}
constexpr ::System::Xml::XmlWriter* const& System::Data::XmlDataTreeWriter::__cordl_internal_get__xmlw() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlw;
}
constexpr void System::Data::XmlDataTreeWriter::__cordl_internal_set__xmlw(::System::Xml::XmlWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xmlw = value;
}
constexpr ::System::Data::DataSet*& System::Data::XmlDataTreeWriter::__cordl_internal_get__ds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ds;
}
constexpr ::System::Data::DataSet* const& System::Data::XmlDataTreeWriter::__cordl_internal_get__ds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ds;
}
constexpr void System::Data::XmlDataTreeWriter::__cordl_internal_set__ds(::System::Data::DataSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ds = value;
}
constexpr ::System::Data::DataTable*& System::Data::XmlDataTreeWriter::__cordl_internal_get__dt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dt;
}
constexpr ::System::Data::DataTable* const& System::Data::XmlDataTreeWriter::__cordl_internal_get__dt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dt;
}
constexpr void System::Data::XmlDataTreeWriter::__cordl_internal_set__dt(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dt = value;
}
constexpr ::System::Collections::ArrayList*& System::Data::XmlDataTreeWriter::__cordl_internal_get__dTables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dTables;
}
constexpr ::System::Collections::ArrayList* const& System::Data::XmlDataTreeWriter::__cordl_internal_get__dTables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dTables;
}
constexpr void System::Data::XmlDataTreeWriter::__cordl_internal_set__dTables(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dTables = value;
}
constexpr ::ArrayW<::System::Data::DataTable*>& System::Data::XmlDataTreeWriter::__cordl_internal_get__topLevelTables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topLevelTables;
}
constexpr ::ArrayW<::System::Data::DataTable*> const& System::Data::XmlDataTreeWriter::__cordl_internal_get__topLevelTables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topLevelTables;
}
constexpr void System::Data::XmlDataTreeWriter::__cordl_internal_set__topLevelTables(::ArrayW<::System::Data::DataTable*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____topLevelTables = value;
}
constexpr bool& System::Data::XmlDataTreeWriter::__cordl_internal_get__fFromTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fFromTable;
}
constexpr bool const& System::Data::XmlDataTreeWriter::__cordl_internal_get__fFromTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fFromTable;
}
constexpr void System::Data::XmlDataTreeWriter::__cordl_internal_set__fFromTable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fFromTable = value;
}
constexpr bool& System::Data::XmlDataTreeWriter::__cordl_internal_get__isDiffgram() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDiffgram;
}
constexpr bool const& System::Data::XmlDataTreeWriter::__cordl_internal_get__isDiffgram() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDiffgram;
}
constexpr void System::Data::XmlDataTreeWriter::__cordl_internal_set__isDiffgram(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isDiffgram = value;
}
constexpr ::System::Collections::Hashtable*& System::Data::XmlDataTreeWriter::__cordl_internal_get__rowsOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowsOrder;
}
constexpr ::System::Collections::Hashtable* const& System::Data::XmlDataTreeWriter::__cordl_internal_get__rowsOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowsOrder;
}
constexpr void System::Data::XmlDataTreeWriter::__cordl_internal_set__rowsOrder(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rowsOrder = value;
}
constexpr bool& System::Data::XmlDataTreeWriter::__cordl_internal_get__writeHierarchy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writeHierarchy;
}
constexpr bool const& System::Data::XmlDataTreeWriter::__cordl_internal_get__writeHierarchy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writeHierarchy;
}
constexpr void System::Data::XmlDataTreeWriter::__cordl_internal_set__writeHierarchy(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____writeHierarchy = value;
}
inline void System::Data::XmlDataTreeWriter::_ctor(::System::Data::DataSet* ds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlDataTreeWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ds);
}
inline void System::Data::XmlDataTreeWriter::_ctor(::System::Data::DataTable* dt, bool writeHierarchy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlDataTreeWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt, writeHierarchy);
}
inline ::ArrayW<::System::Data::DataTable*> System::Data::XmlDataTreeWriter::CreateToplevelTables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlDataTreeWriter*>(), { "CreateToplevelTables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataTable*>>(this, ___internal_method);
}
inline void System::Data::XmlDataTreeWriter::CreateTablesHierarchy(::System::Data::DataTable* dt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlDataTreeWriter*>(), { "CreateTablesHierarchy", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline bool System::Data::XmlDataTreeWriter::RowHasErrors(::System::Data::DataRow* row) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlDataTreeWriter*>(), { "RowHasErrors", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, row);
}
inline void System::Data::XmlDataTreeWriter::SaveDiffgramData(::System::Xml::XmlWriter* xw, ::System::Collections::Hashtable* rowsOrder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlDataTreeWriter*>(),
                                                           { "SaveDiffgramData", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>(), ::i2c::type_of<::System::Collections::Hashtable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xw, rowsOrder);
}
inline void System::Data::XmlDataTreeWriter::Save(::System::Xml::XmlWriter* xw, bool writeSchema) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlDataTreeWriter*>(), { "Save", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xw, writeSchema);
}
inline ::System::Collections::ArrayList* System::Data::XmlDataTreeWriter::GetNestedChildRelations(::System::Data::DataRow* row) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlDataTreeWriter*>(), { "GetNestedChildRelations", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method, row);
}
inline void System::Data::XmlDataTreeWriter::XmlDataRowWriter(::System::Data::DataRow* row, ::StringW encodedTableName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlDataTreeWriter*>(),
                                                                                         { "XmlDataRowWriter", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row, encodedTableName);
}
inline bool System::Data::XmlDataTreeWriter::PreserveSpace(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XmlDataTreeWriter*>(), { "PreserveSpace", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline ::System::Data::XmlDataTreeWriter* System::Data::XmlDataTreeWriter::New_ctor(::System::Data::DataSet* ds) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::XmlDataTreeWriter*>(ds));
}
inline ::System::Data::XmlDataTreeWriter* System::Data::XmlDataTreeWriter::New_ctor(::System::Data::DataTable* dt, bool writeHierarchy) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::XmlDataTreeWriter*>(dt, writeHierarchy));
}
// Ctor Parameters []
constexpr ::System::Data::XmlDataTreeWriter::XmlDataTreeWriter() {}
