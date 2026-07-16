#pragma once
// IWYU pragma private; include "System/Data/DataRowChangeEventArgs.hpp"
#include "System/Data/zzzz__DataRowAction_impl.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Data/zzzz__DataRowChangeEventArgs_def.hpp"
#include "System/Data/zzzz__DataRowAction_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
//  Writing Method size for method: ::System::Data::DataRowChangeEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRowChangeEventArgs::*)(::System::Data::DataRow*, ::System::Data::DataRowAction)>(
    &::System::Data::DataRowChangeEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x602802c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowChangeEventArgs*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowAction>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataRow*& System::Data::DataRowChangeEventArgs::__cordl_internal_get__Row_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Row_k__BackingField;
}
constexpr ::System::Data::DataRow* const& System::Data::DataRowChangeEventArgs::__cordl_internal_get__Row_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Row_k__BackingField;
}
constexpr void System::Data::DataRowChangeEventArgs::__cordl_internal_set__Row_k__BackingField(::System::Data::DataRow* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Row_k__BackingField = value;
}
constexpr ::System::Data::DataRowAction& System::Data::DataRowChangeEventArgs::__cordl_internal_get__Action_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Action_k__BackingField;
}
constexpr ::System::Data::DataRowAction const& System::Data::DataRowChangeEventArgs::__cordl_internal_get__Action_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Action_k__BackingField;
}
constexpr void System::Data::DataRowChangeEventArgs::__cordl_internal_set__Action_k__BackingField(::System::Data::DataRowAction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Action_k__BackingField = value;
}
inline void System::Data::DataRowChangeEventArgs::_ctor(::System::Data::DataRow* row, ::System::Data::DataRowAction action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowChangeEventArgs*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowAction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row, action);
}
inline ::System::Data::DataRowChangeEventArgs* System::Data::DataRowChangeEventArgs::New_ctor(::System::Data::DataRow* row, ::System::Data::DataRowAction action) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataRowChangeEventArgs*>(row, action));
}
// Ctor Parameters []
constexpr ::System::Data::DataRowChangeEventArgs::DataRowChangeEventArgs() {}
