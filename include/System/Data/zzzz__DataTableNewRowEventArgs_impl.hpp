#pragma once
// IWYU pragma private; include "System\Data\DataTableNewRowEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Data/zzzz__DataTableNewRowEventArgs_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
//  Writing Method size for method: ::System::Data::DataTableNewRowEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTableNewRowEventArgs::*)(::System::Data::DataRow*)>(&::System::Data::DataTableNewRowEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6030ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableNewRowEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataRow*& System::Data::DataTableNewRowEventArgs::__cordl_internal_get__Row_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Row_k__BackingField;
}
constexpr ::System::Data::DataRow* const& System::Data::DataTableNewRowEventArgs::__cordl_internal_get__Row_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Row_k__BackingField;
}
constexpr void System::Data::DataTableNewRowEventArgs::__cordl_internal_set__Row_k__BackingField(::System::Data::DataRow* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Row_k__BackingField = value;
}
inline void System::Data::DataTableNewRowEventArgs::_ctor(::System::Data::DataRow* dataRow) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableNewRowEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataRow);
}
inline ::System::Data::DataTableNewRowEventArgs* System::Data::DataTableNewRowEventArgs::New_ctor(::System::Data::DataRow* dataRow) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataTableNewRowEventArgs*>(dataRow));
}
// Ctor Parameters []
constexpr ::System::Data::DataTableNewRowEventArgs::DataTableNewRowEventArgs() {}
