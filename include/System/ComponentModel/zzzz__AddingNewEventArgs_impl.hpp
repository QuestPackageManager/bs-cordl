#pragma once
// IWYU pragma private; include "System\ComponentModel\AddingNewEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/ComponentModel/zzzz__AddingNewEventArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::AddingNewEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::AddingNewEventArgs::*)()>(&::System::ComponentModel::AddingNewEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x63b4f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::AddingNewEventArgs*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AddingNewEventArgs.get_NewObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::AddingNewEventArgs::*)()>(&::System::ComponentModel::AddingNewEventArgs::get_NewObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63b4f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::AddingNewEventArgs*>(), { "get_NewObject", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::ComponentModel::AddingNewEventArgs::__cordl_internal_get__NewObject_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NewObject_k__BackingField;
}
constexpr ::System::Object* const& System::ComponentModel::AddingNewEventArgs::__cordl_internal_get__NewObject_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NewObject_k__BackingField;
}
constexpr void System::ComponentModel::AddingNewEventArgs::__cordl_internal_set__NewObject_k__BackingField(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____NewObject_k__BackingField = value;
}
inline void System::ComponentModel::AddingNewEventArgs::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::AddingNewEventArgs*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::AddingNewEventArgs::get_NewObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::AddingNewEventArgs*>(), { "get_NewObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::ComponentModel::AddingNewEventArgs* System::ComponentModel::AddingNewEventArgs::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::AddingNewEventArgs*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::AddingNewEventArgs::AddingNewEventArgs() {}
