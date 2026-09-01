#pragma once
// IWYU pragma private; include "System\Xml\Linq\XObjectChangeEventArgs.hpp"
#include "System/Xml/Linq/zzzz__XObjectChange_impl.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Xml/Linq/zzzz__XObjectChangeEventArgs_def.hpp"
#include "System/Xml/Linq/zzzz__XObjectChange_def.hpp"
//  Writing Method size for method: ::System::Xml::Linq::XObjectChangeEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XObjectChangeEventArgs::*)(::System::Xml::Linq::XObjectChange)>(
    &::System::Xml::Linq::XObjectChangeEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x61ab9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObjectChangeEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XObjectChange>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Linq::XObjectChange& System::Xml::Linq::XObjectChangeEventArgs::__cordl_internal_get__objectChange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectChange;
}
constexpr ::System::Xml::Linq::XObjectChange const& System::Xml::Linq::XObjectChangeEventArgs::__cordl_internal_get__objectChange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectChange;
}
constexpr void System::Xml::Linq::XObjectChangeEventArgs::__cordl_internal_set__objectChange(::System::Xml::Linq::XObjectChange value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectChange = value;
}
inline void System::Xml::Linq::XObjectChangeEventArgs::setStaticF_Add(::System::Xml::Linq::XObjectChangeEventArgs* value) {
  ::cordl_internals::setStaticField<::System::Xml::Linq::XObjectChangeEventArgs*, "Add", ::System::Xml::Linq::XObjectChangeEventArgs*>(
      std::forward<::System::Xml::Linq::XObjectChangeEventArgs*>(value));
}
inline ::System::Xml::Linq::XObjectChangeEventArgs* System::Xml::Linq::XObjectChangeEventArgs::getStaticF_Add() {
  return ::cordl_internals::getStaticField<::System::Xml::Linq::XObjectChangeEventArgs*, "Add", ::System::Xml::Linq::XObjectChangeEventArgs*>();
}
inline void System::Xml::Linq::XObjectChangeEventArgs::setStaticF_Remove(::System::Xml::Linq::XObjectChangeEventArgs* value) {
  ::cordl_internals::setStaticField<::System::Xml::Linq::XObjectChangeEventArgs*, "Remove", ::System::Xml::Linq::XObjectChangeEventArgs*>(
      std::forward<::System::Xml::Linq::XObjectChangeEventArgs*>(value));
}
inline ::System::Xml::Linq::XObjectChangeEventArgs* System::Xml::Linq::XObjectChangeEventArgs::getStaticF_Remove() {
  return ::cordl_internals::getStaticField<::System::Xml::Linq::XObjectChangeEventArgs*, "Remove", ::System::Xml::Linq::XObjectChangeEventArgs*>();
}
inline void System::Xml::Linq::XObjectChangeEventArgs::setStaticF_Name(::System::Xml::Linq::XObjectChangeEventArgs* value) {
  ::cordl_internals::setStaticField<::System::Xml::Linq::XObjectChangeEventArgs*, "Name", ::System::Xml::Linq::XObjectChangeEventArgs*>(
      std::forward<::System::Xml::Linq::XObjectChangeEventArgs*>(value));
}
inline ::System::Xml::Linq::XObjectChangeEventArgs* System::Xml::Linq::XObjectChangeEventArgs::getStaticF_Name() {
  return ::cordl_internals::getStaticField<::System::Xml::Linq::XObjectChangeEventArgs*, "Name", ::System::Xml::Linq::XObjectChangeEventArgs*>();
}
inline void System::Xml::Linq::XObjectChangeEventArgs::setStaticF_Value(::System::Xml::Linq::XObjectChangeEventArgs* value) {
  ::cordl_internals::setStaticField<::System::Xml::Linq::XObjectChangeEventArgs*, "Value", ::System::Xml::Linq::XObjectChangeEventArgs*>(
      std::forward<::System::Xml::Linq::XObjectChangeEventArgs*>(value));
}
inline ::System::Xml::Linq::XObjectChangeEventArgs* System::Xml::Linq::XObjectChangeEventArgs::getStaticF_Value() {
  return ::cordl_internals::getStaticField<::System::Xml::Linq::XObjectChangeEventArgs*, "Value", ::System::Xml::Linq::XObjectChangeEventArgs*>();
}
inline void System::Xml::Linq::XObjectChangeEventArgs::_ctor(::System::Xml::Linq::XObjectChange objectChange) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObjectChangeEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XObjectChange>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectChange);
}
inline ::System::Xml::Linq::XObjectChangeEventArgs* System::Xml::Linq::XObjectChangeEventArgs::New_ctor(::System::Xml::Linq::XObjectChange objectChange) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Linq::XObjectChangeEventArgs*>(objectChange));
}
// Ctor Parameters []
constexpr ::System::Xml::Linq::XObjectChangeEventArgs::XObjectChangeEventArgs() {}
