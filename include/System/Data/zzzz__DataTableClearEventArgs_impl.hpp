#pragma once
// IWYU pragma private; include "System/Data/DataTableClearEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Data/zzzz__DataTableClearEventArgs_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
//  Writing Method size for method: ::System::Data::DataTableClearEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTableClearEventArgs::*)(::System::Data::DataTable*)>(&::System::Data::DataTableClearEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6029380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableClearEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataTable*& System::Data::DataTableClearEventArgs::__cordl_internal_get__Table_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Table_k__BackingField;
}
constexpr ::System::Data::DataTable* const& System::Data::DataTableClearEventArgs::__cordl_internal_get__Table_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Table_k__BackingField;
}
constexpr void System::Data::DataTableClearEventArgs::__cordl_internal_set__Table_k__BackingField(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Table_k__BackingField = value;
}
inline void System::Data::DataTableClearEventArgs::_ctor(::System::Data::DataTable* dataTable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableClearEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataTable);
}
inline ::System::Data::DataTableClearEventArgs* System::Data::DataTableClearEventArgs::New_ctor(::System::Data::DataTable* dataTable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataTableClearEventArgs*>(dataTable));
}
// Ctor Parameters []
constexpr ::System::Data::DataTableClearEventArgs::DataTableClearEventArgs() {}
