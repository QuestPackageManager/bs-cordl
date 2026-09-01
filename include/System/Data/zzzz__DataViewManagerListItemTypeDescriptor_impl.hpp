#pragma once
// IWYU pragma private; include "System\Data\DataViewManagerListItemTypeDescriptor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__DataViewManagerListItemTypeDescriptor_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__DataViewManager_def.hpp"
#include "System/Data/zzzz__DataView_def.hpp"
//  Writing Method size for method: ::System::Data::DataViewManagerListItemTypeDescriptor.GetDataView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataView* (::System::Data::DataViewManagerListItemTypeDescriptor::*)(::System::Data::DataTable*)>(
    &::System::Data::DataViewManagerListItemTypeDescriptor::GetDataView)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6031300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(), { "GetDataView", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataViewManager*& System::Data::DataViewManagerListItemTypeDescriptor::__cordl_internal_get__dataViewManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataViewManager;
}
constexpr ::System::Data::DataViewManager* const& System::Data::DataViewManagerListItemTypeDescriptor::__cordl_internal_get__dataViewManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataViewManager;
}
constexpr void System::Data::DataViewManagerListItemTypeDescriptor::__cordl_internal_set__dataViewManager(::System::Data::DataViewManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataViewManager = value;
}
inline ::System::Data::DataView* System::Data::DataViewManagerListItemTypeDescriptor::GetDataView(::System::Data::DataTable* table) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(), { "GetDataView", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataView*>(this, ___internal_method, table);
}
// Ctor Parameters []
constexpr ::System::Data::DataViewManagerListItemTypeDescriptor::DataViewManagerListItemTypeDescriptor() {}
