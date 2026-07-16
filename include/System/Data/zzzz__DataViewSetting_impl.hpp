#pragma once
// IWYU pragma private; include "System/Data/DataViewSetting.hpp"
#include "System/Data/zzzz__DataViewRowState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__DataViewSetting_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__DataViewManager_def.hpp"
#include "System/Data/zzzz__DataViewRowState_def.hpp"
//  Writing Method size for method: ::System::Data::DataViewSetting._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewSetting::*)()>(&::System::Data::DataViewSetting::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60302b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewSetting*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewSetting.get_ApplyDefaultSort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataViewSetting::*)()>(&::System::Data::DataViewSetting::get_ApplyDefaultSort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60302d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewSetting*>(), { "get_ApplyDefaultSort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewSetting.SetDataViewManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewSetting::*)(::System::Data::DataViewManager*)>(&::System::Data::DataViewSetting::SetDataViewManager)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60302d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewSetting*>(), { "SetDataViewManager", {}, { ::i2c::type_of<::System::Data::DataViewManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewSetting.SetDataTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewSetting::*)(::System::Data::DataTable*)>(&::System::Data::DataViewSetting::SetDataTable)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60302ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewSetting*>(), { "SetDataTable", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewSetting.get_RowFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataViewSetting::*)()>(&::System::Data::DataViewSetting::get_RowFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6030300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewSetting*>(), { "get_RowFilter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewSetting.get_RowStateFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataViewRowState (::System::Data::DataViewSetting::*)()>(&::System::Data::DataViewSetting::get_RowStateFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6030308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewSetting*>(), { "get_RowStateFilter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewSetting.get_Sort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataViewSetting::*)()>(&::System::Data::DataViewSetting::get_Sort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6030310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewSetting*>(), { "get_Sort", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataViewManager*& System::Data::DataViewSetting::__cordl_internal_get__dataViewManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataViewManager;
}
constexpr ::System::Data::DataViewManager* const& System::Data::DataViewSetting::__cordl_internal_get__dataViewManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataViewManager;
}
constexpr void System::Data::DataViewSetting::__cordl_internal_set__dataViewManager(::System::Data::DataViewManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataViewManager = value;
}
constexpr ::System::Data::DataTable*& System::Data::DataViewSetting::__cordl_internal_get__table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr ::System::Data::DataTable* const& System::Data::DataViewSetting::__cordl_internal_get__table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr void System::Data::DataViewSetting::__cordl_internal_set__table(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____table = value;
}
constexpr ::StringW& System::Data::DataViewSetting::__cordl_internal_get__sort() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sort;
}
constexpr ::StringW const& System::Data::DataViewSetting::__cordl_internal_get__sort() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sort;
}
constexpr void System::Data::DataViewSetting::__cordl_internal_set__sort(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sort = value;
}
constexpr ::StringW& System::Data::DataViewSetting::__cordl_internal_get__rowFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowFilter;
}
constexpr ::StringW const& System::Data::DataViewSetting::__cordl_internal_get__rowFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowFilter;
}
constexpr void System::Data::DataViewSetting::__cordl_internal_set__rowFilter(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rowFilter = value;
}
constexpr ::System::Data::DataViewRowState& System::Data::DataViewSetting::__cordl_internal_get__rowStateFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowStateFilter;
}
constexpr ::System::Data::DataViewRowState const& System::Data::DataViewSetting::__cordl_internal_get__rowStateFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowStateFilter;
}
constexpr void System::Data::DataViewSetting::__cordl_internal_set__rowStateFilter(::System::Data::DataViewRowState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rowStateFilter = value;
}
constexpr bool& System::Data::DataViewSetting::__cordl_internal_get__applyDefaultSort() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applyDefaultSort;
}
constexpr bool const& System::Data::DataViewSetting::__cordl_internal_get__applyDefaultSort() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applyDefaultSort;
}
constexpr void System::Data::DataViewSetting::__cordl_internal_set__applyDefaultSort(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____applyDefaultSort = value;
}
inline void System::Data::DataViewSetting::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewSetting*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Data::DataViewSetting::get_ApplyDefaultSort() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewSetting*>(), { "get_ApplyDefaultSort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::DataViewSetting::SetDataViewManager(::System::Data::DataViewManager* dataViewManager) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewSetting*>(), { "SetDataViewManager", {}, { ::i2c::type_of<::System::Data::DataViewManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataViewManager);
}
inline void System::Data::DataViewSetting::SetDataTable(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewSetting*>(), { "SetDataTable", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline ::StringW System::Data::DataViewSetting::get_RowFilter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewSetting*>(), { "get_RowFilter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Data::DataViewRowState System::Data::DataViewSetting::get_RowStateFilter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewSetting*>(), { "get_RowStateFilter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataViewRowState>(this, ___internal_method);
}
inline ::StringW System::Data::DataViewSetting::get_Sort() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewSetting*>(), { "get_Sort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Data::DataViewSetting* System::Data::DataViewSetting::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataViewSetting*>());
}
// Ctor Parameters []
constexpr ::System::Data::DataViewSetting::DataViewSetting() {}
