#pragma once
// IWYU pragma private; include "System/Data/MergeFailedEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Data/zzzz__MergeFailedEventArgs_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
//  Writing Method size for method: ::System::Data::MergeFailedEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::MergeFailedEventArgs::*)(::System::Data::DataTable*, ::StringW)>(&::System::Data::MergeFailedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6042814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::MergeFailedEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::MergeFailedEventArgs.get_Conflict
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::MergeFailedEventArgs::*)()>(&::System::Data::MergeFailedEventArgs::get_Conflict)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x604287c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::MergeFailedEventArgs*>(), { "get_Conflict", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataTable*& System::Data::MergeFailedEventArgs::__cordl_internal_get__Table_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Table_k__BackingField;
}
constexpr ::System::Data::DataTable* const& System::Data::MergeFailedEventArgs::__cordl_internal_get__Table_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Table_k__BackingField;
}
constexpr void System::Data::MergeFailedEventArgs::__cordl_internal_set__Table_k__BackingField(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Table_k__BackingField = value;
}
constexpr ::StringW& System::Data::MergeFailedEventArgs::__cordl_internal_get__Conflict_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Conflict_k__BackingField;
}
constexpr ::StringW const& System::Data::MergeFailedEventArgs::__cordl_internal_get__Conflict_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Conflict_k__BackingField;
}
constexpr void System::Data::MergeFailedEventArgs::__cordl_internal_set__Conflict_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Conflict_k__BackingField = value;
}
inline void System::Data::MergeFailedEventArgs::_ctor(::System::Data::DataTable* table, ::StringW conflict) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::MergeFailedEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, conflict);
}
inline ::StringW System::Data::MergeFailedEventArgs::get_Conflict() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::MergeFailedEventArgs*>(), { "get_Conflict", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Data::MergeFailedEventArgs* System::Data::MergeFailedEventArgs::New_ctor(::System::Data::DataTable* table, ::StringW conflict) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::MergeFailedEventArgs*>(table, conflict));
}
// Ctor Parameters []
constexpr ::System::Data::MergeFailedEventArgs::MergeFailedEventArgs() {}
