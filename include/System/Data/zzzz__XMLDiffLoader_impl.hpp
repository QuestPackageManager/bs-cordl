#pragma once
// IWYU pragma private; include "System\Data\XMLDiffLoader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__XMLDiffLoader_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
//  Writing Method size for method: ::System::Data::XMLDiffLoader.LoadDiffGram
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XMLDiffLoader::*)(::System::Data::DataSet*, ::System::Xml::XmlReader*)>(&::System::Data::XMLDiffLoader::LoadDiffGram)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x605650c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::XMLDiffLoader*>(), { "LoadDiffGram", {}, { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XMLDiffLoader.CreateTablesHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XMLDiffLoader::*)(::System::Data::DataTable*)>(&::System::Data::XMLDiffLoader::CreateTablesHierarchy)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x6056d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XMLDiffLoader*>(), { "CreateTablesHierarchy", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XMLDiffLoader.LoadDiffGram
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XMLDiffLoader::*)(::System::Data::DataTable*, ::System::Xml::XmlReader*)>(&::System::Data::XMLDiffLoader::LoadDiffGram)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x605708c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::XMLDiffLoader*>(), { "LoadDiffGram", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XMLDiffLoader.ProcessDiffs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XMLDiffLoader::*)(::System::Data::DataSet*, ::System::Xml::XmlReader*)>(&::System::Data::XMLDiffLoader::ProcessDiffs)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x6056698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::XMLDiffLoader*>(), { "ProcessDiffs", {}, { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XMLDiffLoader.ProcessDiffs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XMLDiffLoader::*)(::System::Collections::ArrayList*, ::System::Xml::XmlReader*)>(
    &::System::Data::XMLDiffLoader::ProcessDiffs)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x6057274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XMLDiffLoader*>(),
                                                             { "ProcessDiffs", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XMLDiffLoader.ProcessErrors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XMLDiffLoader::*)(::System::Data::DataSet*, ::System::Xml::XmlReader*)>(&::System::Data::XMLDiffLoader::ProcessErrors)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x6056980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::XMLDiffLoader*>(), { "ProcessErrors", {}, { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XMLDiffLoader.ProcessErrors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XMLDiffLoader::*)(::System::Collections::ArrayList*, ::System::Xml::XmlReader*)>(
    &::System::Data::XMLDiffLoader::ProcessErrors)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x6057550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XMLDiffLoader*>(),
                                                             { "ProcessErrors", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XMLDiffLoader.GetTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::XMLDiffLoader::*)(::StringW, ::StringW)>(&::System::Data::XMLDiffLoader::GetTable)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6058858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XMLDiffLoader*>(), { "GetTable", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XMLDiffLoader.ReadOldRowData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::XMLDiffLoader::*)(::System::Data::DataSet*, ::by_ref<::System::Data::DataTable*>, ::by_ref<int32_t>,
                                                                                                  ::System::Xml::XmlReader*)>(&::System::Data::XMLDiffLoader::ReadOldRowData)> {
  constexpr static std::size_t size = 0xde4;
  constexpr static std::size_t addrs = 0x6057a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::XMLDiffLoader*>(), { "ReadOldRowData",
                                                                                              {},
                                                                                              { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::by_ref<::System::Data::DataTable*>>(),
                                                                                                ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XMLDiffLoader.SkipWhitespaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XMLDiffLoader::*)(::System::Xml::XmlReader*)>(&::System::Data::XMLDiffLoader::SkipWhitespaces)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6057a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XMLDiffLoader*>(), { "SkipWhitespaces", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XMLDiffLoader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XMLDiffLoader::*)()>(&::System::Data::XMLDiffLoader::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6058a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XMLDiffLoader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ArrayList*& System::Data::XMLDiffLoader::__cordl_internal_get__tables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tables;
}
constexpr ::System::Collections::ArrayList* const& System::Data::XMLDiffLoader::__cordl_internal_get__tables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tables;
}
constexpr void System::Data::XMLDiffLoader::__cordl_internal_set__tables(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tables = value;
}
constexpr ::System::Data::DataSet*& System::Data::XMLDiffLoader::__cordl_internal_get__dataSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSet;
}
constexpr ::System::Data::DataSet* const& System::Data::XMLDiffLoader::__cordl_internal_get__dataSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSet;
}
constexpr void System::Data::XMLDiffLoader::__cordl_internal_set__dataSet(::System::Data::DataSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataSet = value;
}
constexpr ::System::Data::DataTable*& System::Data::XMLDiffLoader::__cordl_internal_get__dataTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataTable;
}
constexpr ::System::Data::DataTable* const& System::Data::XMLDiffLoader::__cordl_internal_get__dataTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataTable;
}
constexpr void System::Data::XMLDiffLoader::__cordl_internal_set__dataTable(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataTable = value;
}
inline void System::Data::XMLDiffLoader::LoadDiffGram(::System::Data::DataSet* ds, ::System::Xml::XmlReader* dataTextReader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::XMLDiffLoader*>(), { "LoadDiffGram", {}, { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ds, dataTextReader);
}
inline void System::Data::XMLDiffLoader::CreateTablesHierarchy(::System::Data::DataTable* dt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XMLDiffLoader*>(), { "CreateTablesHierarchy", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void System::Data::XMLDiffLoader::LoadDiffGram(::System::Data::DataTable* dt, ::System::Xml::XmlReader* dataTextReader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::XMLDiffLoader*>(), { "LoadDiffGram", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt, dataTextReader);
}
inline void System::Data::XMLDiffLoader::ProcessDiffs(::System::Data::DataSet* ds, ::System::Xml::XmlReader* ssync) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::XMLDiffLoader*>(), { "ProcessDiffs", {}, { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ds, ssync);
}
inline void System::Data::XMLDiffLoader::ProcessDiffs(::System::Collections::ArrayList* tableList, ::System::Xml::XmlReader* ssync) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XMLDiffLoader*>(),
                                                           { "ProcessDiffs", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tableList, ssync);
}
inline void System::Data::XMLDiffLoader::ProcessErrors(::System::Data::DataSet* ds, ::System::Xml::XmlReader* ssync) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::XMLDiffLoader*>(), { "ProcessErrors", {}, { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ds, ssync);
}
inline void System::Data::XMLDiffLoader::ProcessErrors(::System::Collections::ArrayList* dt, ::System::Xml::XmlReader* ssync) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XMLDiffLoader*>(),
                                                           { "ProcessErrors", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt, ssync);
}
inline ::System::Data::DataTable* System::Data::XMLDiffLoader::GetTable(::StringW tableName, ::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XMLDiffLoader*>(), { "GetTable", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method, tableName, ns);
}
inline int32_t System::Data::XMLDiffLoader::ReadOldRowData(::System::Data::DataSet* ds, ::by_ref<::System::Data::DataTable*> table, ::by_ref<int32_t> pos, ::System::Xml::XmlReader* row) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XMLDiffLoader*>(), { "ReadOldRowData",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::by_ref<::System::Data::DataTable*>>(),
                                                                                                     ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, ds, table, pos, row);
}
inline void System::Data::XMLDiffLoader::SkipWhitespaces(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XMLDiffLoader*>(), { "SkipWhitespaces", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void System::Data::XMLDiffLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XMLDiffLoader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Data::XMLDiffLoader* System::Data::XMLDiffLoader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::XMLDiffLoader*>());
}
// Ctor Parameters []
constexpr ::System::Data::XMLDiffLoader::XMLDiffLoader() {}
