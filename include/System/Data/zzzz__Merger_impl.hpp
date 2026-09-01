#pragma once
// IWYU pragma private; include "System\Data\Merger.hpp"
#include "System/Data/zzzz__MissingSchemaAction_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__Merger_def.hpp"
#include "System/Data/zzzz__DataKey_def.hpp"
#include "System/Data/zzzz__DataRelation_def.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__MissingSchemaAction_def.hpp"
#include "System/Data/zzzz__PropertyCollection_def.hpp"
//  Writing Method size for method: ::System::Data::Merger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Merger::*)(::System::Data::DataSet*, bool, ::System::Data::MissingSchemaAction)>(&::System::Data::Merger::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x60481f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Merger*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Data::MissingSchemaAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Merger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Merger::*)(::System::Data::DataTable*, bool, ::System::Data::MissingSchemaAction)>(&::System::Data::Merger::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6048210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Merger*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Data::MissingSchemaAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Merger.MergeDataSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Merger::*)(::System::Data::DataSet*)>(&::System::Data::Merger::MergeDataSet)> {
  constexpr static std::size_t size = 0xf70;
  constexpr static std::size_t addrs = 0x6048230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Merger*>(), { "MergeDataSet", {}, { ::i2c::type_of<::System::Data::DataSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Merger.MergeTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Merger::*)(::System::Data::DataTable*)>(&::System::Data::Merger::MergeTable)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x6049d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Merger*>(), { "MergeTable", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Merger.MergeTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Merger::*)(::System::Data::DataTable*, ::System::Data::DataTable*)>(&::System::Data::Merger::MergeTable)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x6049f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::Merger*>(), { "MergeTable", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Merger.MergeSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::Merger::*)(::System::Data::DataTable*)>(&::System::Data::Merger::MergeSchema)> {
  constexpr static std::size_t size = 0x6f4;
  constexpr static std::size_t addrs = 0x604a520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Merger*>(), { "MergeSchema", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Merger.MergeTableData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Merger::*)(::System::Data::DataTable*)>(&::System::Data::Merger::MergeTableData)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x60491a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Merger*>(), { "MergeTableData", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Merger.MergeConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Merger::*)(::System::Data::DataSet*)>(&::System::Data::Merger::MergeConstraints)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6049254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Merger*>(), { "MergeConstraints", {}, { ::i2c::type_of<::System::Data::DataSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Merger.MergeConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Merger::*)(::System::Data::DataTable*)>(&::System::Data::Merger::MergeConstraints)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x604ac14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Merger*>(), { "MergeConstraints", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Merger.MergeRelation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Merger::*)(::System::Data::DataRelation*)>(&::System::Data::Merger::MergeRelation)> {
  constexpr static std::size_t size = 0x7e0;
  constexpr static std::size_t addrs = 0x60492c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Merger*>(), { "MergeRelation", {}, { ::i2c::type_of<::System::Data::DataRelation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Merger.MergeExtendedProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Merger::*)(::System::Data::PropertyCollection*, ::System::Data::PropertyCollection*)>(
    &::System::Data::Merger::MergeExtendedProperties)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x6049aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Merger*>(),
                                                { "MergeExtendedProperties", {}, { ::i2c::type_of<::System::Data::PropertyCollection*>(), ::i2c::type_of<::System::Data::PropertyCollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Merger.GetSrcKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataKey (::System::Data::Merger::*)(::System::Data::DataTable*, ::System::Data::DataTable*)>(
    &::System::Data::Merger::GetSrcKey)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x604a3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::Merger*>(), { "GetSrcKey", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataSet*& System::Data::Merger::__cordl_internal_get__dataSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSet;
}
constexpr ::System::Data::DataSet* const& System::Data::Merger::__cordl_internal_get__dataSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSet;
}
constexpr void System::Data::Merger::__cordl_internal_set__dataSet(::System::Data::DataSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataSet = value;
}
constexpr ::System::Data::DataTable*& System::Data::Merger::__cordl_internal_get__dataTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataTable;
}
constexpr ::System::Data::DataTable* const& System::Data::Merger::__cordl_internal_get__dataTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataTable;
}
constexpr void System::Data::Merger::__cordl_internal_set__dataTable(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataTable = value;
}
constexpr bool& System::Data::Merger::__cordl_internal_get__preserveChanges() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preserveChanges;
}
constexpr bool const& System::Data::Merger::__cordl_internal_get__preserveChanges() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preserveChanges;
}
constexpr void System::Data::Merger::__cordl_internal_set__preserveChanges(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____preserveChanges = value;
}
constexpr ::System::Data::MissingSchemaAction& System::Data::Merger::__cordl_internal_get__missingSchemaAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missingSchemaAction;
}
constexpr ::System::Data::MissingSchemaAction const& System::Data::Merger::__cordl_internal_get__missingSchemaAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missingSchemaAction;
}
constexpr void System::Data::Merger::__cordl_internal_set__missingSchemaAction(::System::Data::MissingSchemaAction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missingSchemaAction = value;
}
constexpr bool& System::Data::Merger::__cordl_internal_get__isStandAlonetable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isStandAlonetable;
}
constexpr bool const& System::Data::Merger::__cordl_internal_get__isStandAlonetable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isStandAlonetable;
}
constexpr void System::Data::Merger::__cordl_internal_set__isStandAlonetable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isStandAlonetable = value;
}
constexpr bool& System::Data::Merger::__cordl_internal_get__IgnoreNSforTableLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IgnoreNSforTableLookup;
}
constexpr bool const& System::Data::Merger::__cordl_internal_get__IgnoreNSforTableLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IgnoreNSforTableLookup;
}
constexpr void System::Data::Merger::__cordl_internal_set__IgnoreNSforTableLookup(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IgnoreNSforTableLookup = value;
}
inline void System::Data::Merger::_ctor(::System::Data::DataSet* dataSet, bool preserveChanges, ::System::Data::MissingSchemaAction missingSchemaAction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Merger*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Data::MissingSchemaAction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSet, preserveChanges, missingSchemaAction);
}
inline void System::Data::Merger::_ctor(::System::Data::DataTable* dataTable, bool preserveChanges, ::System::Data::MissingSchemaAction missingSchemaAction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Merger*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Data::MissingSchemaAction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataTable, preserveChanges, missingSchemaAction);
}
inline void System::Data::Merger::MergeDataSet(::System::Data::DataSet* source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Merger*>(), { "MergeDataSet", {}, { ::i2c::type_of<::System::Data::DataSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void System::Data::Merger::MergeTable(::System::Data::DataTable* src) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Merger*>(), { "MergeTable", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src);
}
inline void System::Data::Merger::MergeTable(::System::Data::DataTable* src, ::System::Data::DataTable* dst) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::Merger*>(), { "MergeTable", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, dst);
}
inline ::System::Data::DataTable* System::Data::Merger::MergeSchema(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Merger*>(), { "MergeSchema", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method, table);
}
inline void System::Data::Merger::MergeTableData(::System::Data::DataTable* src) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Merger*>(), { "MergeTableData", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src);
}
inline void System::Data::Merger::MergeConstraints(::System::Data::DataSet* source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Merger*>(), { "MergeConstraints", {}, { ::i2c::type_of<::System::Data::DataSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void System::Data::Merger::MergeConstraints(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Merger*>(), { "MergeConstraints", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline void System::Data::Merger::MergeRelation(::System::Data::DataRelation* relation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Merger*>(), { "MergeRelation", {}, { ::i2c::type_of<::System::Data::DataRelation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, relation);
}
inline void System::Data::Merger::MergeExtendedProperties(::System::Data::PropertyCollection* src, ::System::Data::PropertyCollection* dst) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Merger*>(),
                                              { "MergeExtendedProperties", {}, { ::i2c::type_of<::System::Data::PropertyCollection*>(), ::i2c::type_of<::System::Data::PropertyCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, dst);
}
inline ::System::Data::DataKey System::Data::Merger::GetSrcKey(::System::Data::DataTable* src, ::System::Data::DataTable* dst) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::Merger*>(), { "GetSrcKey", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataKey>(this, ___internal_method, src, dst);
}
inline ::System::Data::Merger* System::Data::Merger::New_ctor(::System::Data::DataSet* dataSet, bool preserveChanges, ::System::Data::MissingSchemaAction missingSchemaAction) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::Merger*>(dataSet, preserveChanges, missingSchemaAction));
}
inline ::System::Data::Merger* System::Data::Merger::New_ctor(::System::Data::DataTable* dataTable, bool preserveChanges, ::System::Data::MissingSchemaAction missingSchemaAction) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::Merger*>(dataTable, preserveChanges, missingSchemaAction));
}
// Ctor Parameters []
constexpr ::System::Data::Merger::Merger() {}
