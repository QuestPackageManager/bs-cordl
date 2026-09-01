#pragma once
// IWYU pragma private; include "System\Data\DataViewSettingCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__DataViewSettingCollection_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__DataViewManager_def.hpp"
#include "System/Data/zzzz__DataViewSetting_def.hpp"
//  Writing Method size for method: ::System::Data::DataViewSettingCollection.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataViewSetting* (::System::Data::DataViewSettingCollection::*)(::System::Data::DataTable*)>(
    &::System::Data::DataViewSettingCollection::get_Item)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6035b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataViewSettingCollection*>(), { ::i2c::class_of<::System::Data::DataViewSettingCollection*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewSettingCollection.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewSettingCollection::*)(::System::Data::DataTable*, ::System::Data::DataViewSetting*)>(
    &::System::Data::DataViewSettingCollection::set_Item)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6035c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataViewSettingCollection*>(), { ::i2c::class_of<::System::Data::DataViewSettingCollection*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewSettingCollection.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewSettingCollection::*)(::System::Data::DataTable*)>(&::System::Data::DataViewSettingCollection::Remove)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6035cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewSettingCollection*>(), { "Remove", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataViewManager*& System::Data::DataViewSettingCollection::__cordl_internal_get__dataViewManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataViewManager;
}
constexpr ::System::Data::DataViewManager* const& System::Data::DataViewSettingCollection::__cordl_internal_get__dataViewManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataViewManager;
}
constexpr void System::Data::DataViewSettingCollection::__cordl_internal_set__dataViewManager(::System::Data::DataViewManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataViewManager = value;
}
constexpr ::System::Collections::Hashtable*& System::Data::DataViewSettingCollection::__cordl_internal_get__list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr ::System::Collections::Hashtable* const& System::Data::DataViewSettingCollection::__cordl_internal_get__list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr void System::Data::DataViewSettingCollection::__cordl_internal_set__list(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____list = value;
}
inline ::System::Data::DataViewSetting* System::Data::DataViewSettingCollection::get_Item(::System::Data::DataTable* table) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataViewSettingCollection*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataViewSetting*>(this, ___internal_method, table);
}
inline void System::Data::DataViewSettingCollection::set_Item(::System::Data::DataTable* table, ::System::Data::DataViewSetting* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataViewSettingCollection*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, value);
}
inline void System::Data::DataViewSettingCollection::Remove(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewSettingCollection*>(), { "Remove", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
// Ctor Parameters []
constexpr ::System::Data::DataViewSettingCollection::DataViewSettingCollection() {}
