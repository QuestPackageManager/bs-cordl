#pragma once
// IWYU pragma private; include "System/Data/DataRelationCollection_DataTableRelationCollection.hpp"
#include "System/Data/zzzz__DataRelationCollection_impl.hpp"
#include "System/Data/zzzz__DataRelationCollection_DataTableRelationCollection_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/ComponentModel/zzzz__CollectionChangeEventHandler_def.hpp"
#include "System/Data/zzzz__DataRelation_def.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DataRelationCollection_DataTableRelationCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DataRelationCollection_DataTableRelationCollection::*)(::System::Data::DataTable*, bool)>(
    &::GlobalNamespace::DataRelationCollection_DataTableRelationCollection::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x60239fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DataRelationCollection_DataTableRelationCollection.get_List
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::GlobalNamespace::DataRelationCollection_DataTableRelationCollection::*)()>(
    &::GlobalNamespace::DataRelationCollection_DataTableRelationCollection::get_List)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6023aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DataRelationCollection_DataTableRelationCollection.EnsureDataSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DataRelationCollection_DataTableRelationCollection::*)()>(
    &::GlobalNamespace::DataRelationCollection_DataTableRelationCollection::EnsureDataSet)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6023aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(), { "EnsureDataSet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DataRelationCollection_DataTableRelationCollection.GetDataSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataSet* (::GlobalNamespace::DataRelationCollection_DataTableRelationCollection::*)()>(
    &::GlobalNamespace::DataRelationCollection_DataTableRelationCollection::GetDataSet)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6023af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DataRelationCollection_DataTableRelationCollection.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRelation* (::GlobalNamespace::DataRelationCollection_DataTableRelationCollection::*)(int32_t)>(
    &::GlobalNamespace::DataRelationCollection_DataTableRelationCollection::get_Item)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6023b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DataRelationCollection_DataTableRelationCollection.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRelation* (::GlobalNamespace::DataRelationCollection_DataTableRelationCollection::*)(::StringW)>(
    &::GlobalNamespace::DataRelationCollection_DataTableRelationCollection::get_Item)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6023c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DataRelationCollection_DataTableRelationCollection.add_RelationPropertyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DataRelationCollection_DataTableRelationCollection::*)(::System::ComponentModel::CollectionChangeEventHandler*)>(
    &::GlobalNamespace::DataRelationCollection_DataTableRelationCollection::add_RelationPropertyChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6023d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(),
                                                             { "add_RelationPropertyChanged", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DataRelationCollection_DataTableRelationCollection.remove_RelationPropertyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DataRelationCollection_DataTableRelationCollection::*)(::System::ComponentModel::CollectionChangeEventHandler*)>(
    &::GlobalNamespace::DataRelationCollection_DataTableRelationCollection::remove_RelationPropertyChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6023db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(),
                                                             { "remove_RelationPropertyChanged", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DataRelationCollection_DataTableRelationCollection.AddCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DataRelationCollection_DataTableRelationCollection::*)(::System::Data::DataRelation*)>(
    &::GlobalNamespace::DataRelationCollection_DataTableRelationCollection::AddCache)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6023e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(),
                                                                                           { "AddCache", {}, { ::i2c::type_of<::System::Data::DataRelation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DataRelationCollection_DataTableRelationCollection.AddCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DataRelationCollection_DataTableRelationCollection::*)(::System::Data::DataRelation*)>(
    &::GlobalNamespace::DataRelationCollection_DataTableRelationCollection::AddCore)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6023ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DataRelationCollection_DataTableRelationCollection.RemoveCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DataRelationCollection_DataTableRelationCollection::*)(::System::Data::DataRelation*)>(
    &::GlobalNamespace::DataRelationCollection_DataTableRelationCollection::RemoveCache)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6023f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(),
                                                                                           { "RemoveCache", {}, { ::i2c::type_of<::System::Data::DataRelation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DataRelationCollection_DataTableRelationCollection.RemoveCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DataRelationCollection_DataTableRelationCollection::*)(::System::Data::DataRelation*)>(
    &::GlobalNamespace::DataRelationCollection_DataTableRelationCollection::RemoveCore)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6024034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(), 21 }));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataTable*& GlobalNamespace::DataRelationCollection_DataTableRelationCollection::__cordl_internal_get__table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr ::System::Data::DataTable* const& GlobalNamespace::DataRelationCollection_DataTableRelationCollection::__cordl_internal_get__table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr void GlobalNamespace::DataRelationCollection_DataTableRelationCollection::__cordl_internal_set__table(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____table = value;
}
constexpr ::System::Collections::ArrayList*& GlobalNamespace::DataRelationCollection_DataTableRelationCollection::__cordl_internal_get__relations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relations;
}
constexpr ::System::Collections::ArrayList* const& GlobalNamespace::DataRelationCollection_DataTableRelationCollection::__cordl_internal_get__relations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relations;
}
constexpr void GlobalNamespace::DataRelationCollection_DataTableRelationCollection::__cordl_internal_set__relations(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____relations = value;
}
constexpr bool& GlobalNamespace::DataRelationCollection_DataTableRelationCollection::__cordl_internal_get__fParentCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fParentCollection;
}
constexpr bool const& GlobalNamespace::DataRelationCollection_DataTableRelationCollection::__cordl_internal_get__fParentCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fParentCollection;
}
constexpr void GlobalNamespace::DataRelationCollection_DataTableRelationCollection::__cordl_internal_set__fParentCollection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fParentCollection = value;
}
constexpr ::System::ComponentModel::CollectionChangeEventHandler*& GlobalNamespace::DataRelationCollection_DataTableRelationCollection::__cordl_internal_get_RelationPropertyChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RelationPropertyChanged;
}
constexpr ::System::ComponentModel::CollectionChangeEventHandler* const& GlobalNamespace::DataRelationCollection_DataTableRelationCollection::__cordl_internal_get_RelationPropertyChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RelationPropertyChanged;
}
constexpr void GlobalNamespace::DataRelationCollection_DataTableRelationCollection::__cordl_internal_set_RelationPropertyChanged(::System::ComponentModel::CollectionChangeEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RelationPropertyChanged = value;
}
inline void GlobalNamespace::DataRelationCollection_DataTableRelationCollection::_ctor(::System::Data::DataTable* table, bool fParentCollection) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, fParentCollection);
}
inline ::System::Collections::ArrayList* GlobalNamespace::DataRelationCollection_DataTableRelationCollection::get_List() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method);
}
inline void GlobalNamespace::DataRelationCollection_DataTableRelationCollection::EnsureDataSet() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(), { "EnsureDataSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Data::DataSet* GlobalNamespace::DataRelationCollection_DataTableRelationCollection::GetDataSet() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataSet*>(this, ___internal_method);
}
inline ::System::Data::DataRelation* GlobalNamespace::DataRelationCollection_DataTableRelationCollection::get_Item(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRelation*>(this, ___internal_method, index);
}
inline ::System::Data::DataRelation* GlobalNamespace::DataRelationCollection_DataTableRelationCollection::get_Item(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRelation*>(this, ___internal_method, name);
}
inline void GlobalNamespace::DataRelationCollection_DataTableRelationCollection::add_RelationPropertyChanged(::System::ComponentModel::CollectionChangeEventHandler* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(),
                                                           { "add_RelationPropertyChanged", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::DataRelationCollection_DataTableRelationCollection::remove_RelationPropertyChanged(::System::ComponentModel::CollectionChangeEventHandler* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(),
                                                           { "remove_RelationPropertyChanged", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::DataRelationCollection_DataTableRelationCollection::AddCache(::System::Data::DataRelation* relation) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(),
                                                                                         { "AddCache", {}, { ::i2c::type_of<::System::Data::DataRelation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, relation);
}
inline void GlobalNamespace::DataRelationCollection_DataTableRelationCollection::AddCore(::System::Data::DataRelation* relation) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, relation);
}
inline void GlobalNamespace::DataRelationCollection_DataTableRelationCollection::RemoveCache(::System::Data::DataRelation* relation) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(),
                                                                                         { "RemoveCache", {}, { ::i2c::type_of<::System::Data::DataRelation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, relation);
}
inline void GlobalNamespace::DataRelationCollection_DataTableRelationCollection::RemoveCore(::System::Data::DataRelation* relation) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, relation);
}
inline ::GlobalNamespace::DataRelationCollection_DataTableRelationCollection* GlobalNamespace::DataRelationCollection_DataTableRelationCollection::New_ctor(::System::Data::DataTable* table,
                                                                                                                                                            bool fParentCollection) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*>(table, fParentCollection));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DataRelationCollection_DataTableRelationCollection::DataRelationCollection_DataTableRelationCollection() {}
