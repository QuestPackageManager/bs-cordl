#pragma once
// IWYU pragma private; include "System/Data/DataRowBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__DataRowBuilder_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
//  Writing Method size for method: ::System::Data::DataRowBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRowBuilder::*)(::System::Data::DataTable*, int32_t)>(&::System::Data::DataRowBuilder::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6028020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowBuilder*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataTable*& System::Data::DataRowBuilder::__cordl_internal_get__table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr ::System::Data::DataTable* const& System::Data::DataRowBuilder::__cordl_internal_get__table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr void System::Data::DataRowBuilder::__cordl_internal_set__table(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____table = value;
}
constexpr int32_t& System::Data::DataRowBuilder::__cordl_internal_get__record() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____record;
}
constexpr int32_t const& System::Data::DataRowBuilder::__cordl_internal_get__record() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____record;
}
constexpr void System::Data::DataRowBuilder::__cordl_internal_set__record(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____record = value;
}
inline void System::Data::DataRowBuilder::_ctor(::System::Data::DataTable* table, int32_t record) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowBuilder*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, record);
}
inline ::System::Data::DataRowBuilder* System::Data::DataRowBuilder::New_ctor(::System::Data::DataTable* table, int32_t record) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataRowBuilder*>(table, record));
}
// Ctor Parameters []
constexpr ::System::Data::DataRowBuilder::DataRowBuilder() {}
