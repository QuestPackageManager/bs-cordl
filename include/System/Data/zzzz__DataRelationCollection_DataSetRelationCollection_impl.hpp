#pragma once
// IWYU pragma private; include "System\Data\DataRelationCollection_DataSetRelationCollection.hpp"
#include "System/Data/zzzz__DataRelationCollection_impl.hpp"
#include "System/Data/zzzz__DataRelation_impl.hpp"
#include "System/Data/zzzz__DataRelationCollection_DataSetRelationCollection_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Data/zzzz__DataRelation_def.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DataRelationCollection_DataSetRelationCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DataRelationCollection_DataSetRelationCollection::*)(::System::Data::DataSet*)>(
    &::GlobalNamespace::DataRelationCollection_DataSetRelationCollection::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6029914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataSetRelationCollection*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DataRelationCollection_DataSetRelationCollection.get_List
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::GlobalNamespace::DataRelationCollection_DataSetRelationCollection::*)()>(
    &::GlobalNamespace::DataRelationCollection_DataSetRelationCollection::get_List)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60299b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataSetRelationCollection*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataSetRelationCollection*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DataRelationCollection_DataSetRelationCollection.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DataRelationCollection_DataSetRelationCollection::*)()>(
    &::GlobalNamespace::DataRelationCollection_DataSetRelationCollection::Clear)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x60299b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataSetRelationCollection*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataSetRelationCollection*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DataRelationCollection_DataSetRelationCollection.GetDataSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataSet* (::GlobalNamespace::DataRelationCollection_DataSetRelationCollection::*)()>(
    &::GlobalNamespace::DataRelationCollection_DataSetRelationCollection::GetDataSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60299ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataSetRelationCollection*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataSetRelationCollection*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DataRelationCollection_DataSetRelationCollection.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRelation* (::GlobalNamespace::DataRelationCollection_DataSetRelationCollection::*)(int32_t)>(
    &::GlobalNamespace::DataRelationCollection_DataSetRelationCollection::get_Item)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x60299f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataSetRelationCollection*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataSetRelationCollection*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DataRelationCollection_DataSetRelationCollection.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRelation* (::GlobalNamespace::DataRelationCollection_DataSetRelationCollection::*)(::StringW)>(
    &::GlobalNamespace::DataRelationCollection_DataSetRelationCollection::get_Item)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6029af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataSetRelationCollection*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataSetRelationCollection*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DataRelationCollection_DataSetRelationCollection.AddCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DataRelationCollection_DataSetRelationCollection::*)(::System::Data::DataRelation*)>(
    &::GlobalNamespace::DataRelationCollection_DataSetRelationCollection::AddCore)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0x6029bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataSetRelationCollection*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataSetRelationCollection*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DataRelationCollection_DataSetRelationCollection.RemoveCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DataRelationCollection_DataSetRelationCollection::*)(::System::Data::DataRelation*)>(
    &::GlobalNamespace::DataRelationCollection_DataSetRelationCollection::RemoveCore)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x602a154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataSetRelationCollection*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataSetRelationCollection*>(), 21 }));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataSet*& GlobalNamespace::DataRelationCollection_DataSetRelationCollection::__cordl_internal_get__dataSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSet;
}
constexpr ::System::Data::DataSet* const& GlobalNamespace::DataRelationCollection_DataSetRelationCollection::__cordl_internal_get__dataSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSet;
}
constexpr void GlobalNamespace::DataRelationCollection_DataSetRelationCollection::__cordl_internal_set__dataSet(::System::Data::DataSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataSet = value;
}
constexpr ::System::Collections::ArrayList*& GlobalNamespace::DataRelationCollection_DataSetRelationCollection::__cordl_internal_get__relations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relations;
}
constexpr ::System::Collections::ArrayList* const& GlobalNamespace::DataRelationCollection_DataSetRelationCollection::__cordl_internal_get__relations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relations;
}
constexpr void GlobalNamespace::DataRelationCollection_DataSetRelationCollection::__cordl_internal_set__relations(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____relations = value;
}
constexpr ::ArrayW<::System::Data::DataRelation*>& GlobalNamespace::DataRelationCollection_DataSetRelationCollection::__cordl_internal_get__delayLoadingRelations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayLoadingRelations;
}
constexpr ::ArrayW<::System::Data::DataRelation*> const& GlobalNamespace::DataRelationCollection_DataSetRelationCollection::__cordl_internal_get__delayLoadingRelations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayLoadingRelations;
}
constexpr void GlobalNamespace::DataRelationCollection_DataSetRelationCollection::__cordl_internal_set__delayLoadingRelations(::ArrayW<::System::Data::DataRelation*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____delayLoadingRelations = value;
}
inline void GlobalNamespace::DataRelationCollection_DataSetRelationCollection::_ctor(::System::Data::DataSet* dataSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataSetRelationCollection*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSet);
}
inline ::System::Collections::ArrayList* GlobalNamespace::DataRelationCollection_DataSetRelationCollection::get_List() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataSetRelationCollection*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method);
}
inline void GlobalNamespace::DataRelationCollection_DataSetRelationCollection::Clear() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataSetRelationCollection*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Data::DataSet* GlobalNamespace::DataRelationCollection_DataSetRelationCollection::GetDataSet() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataSetRelationCollection*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataSet*>(this, ___internal_method);
}
inline ::System::Data::DataRelation* GlobalNamespace::DataRelationCollection_DataSetRelationCollection::get_Item(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataSetRelationCollection*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRelation*>(this, ___internal_method, index);
}
inline ::System::Data::DataRelation* GlobalNamespace::DataRelationCollection_DataSetRelationCollection::get_Item(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataSetRelationCollection*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRelation*>(this, ___internal_method, name);
}
inline void GlobalNamespace::DataRelationCollection_DataSetRelationCollection::AddCore(::System::Data::DataRelation* relation) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataSetRelationCollection*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, relation);
}
inline void GlobalNamespace::DataRelationCollection_DataSetRelationCollection::RemoveCore(::System::Data::DataRelation* relation) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::DataRelationCollection_DataSetRelationCollection*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, relation);
}
inline ::GlobalNamespace::DataRelationCollection_DataSetRelationCollection* GlobalNamespace::DataRelationCollection_DataSetRelationCollection::New_ctor(::System::Data::DataSet* dataSet) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DataRelationCollection_DataSetRelationCollection*>(dataSet));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DataRelationCollection_DataSetRelationCollection::DataRelationCollection_DataSetRelationCollection() {}
