#pragma once
// IWYU pragma private; include "System\MonoListItem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__MonoListItem_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::MonoListItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::MonoListItem::*)()>(&::System::MonoListItem::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c96dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoListItem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::MonoListItem*& System::MonoListItem::__cordl_internal_get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr ::System::MonoListItem* const& System::MonoListItem::__cordl_internal_get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr void System::MonoListItem::__cordl_internal_set_next(::System::MonoListItem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___next = value;
}
constexpr ::System::Object*& System::MonoListItem::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::System::Object* const& System::MonoListItem::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void System::MonoListItem::__cordl_internal_set_data(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
inline void System::MonoListItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoListItem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::MonoListItem* System::MonoListItem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::MonoListItem*>());
}
// Ctor Parameters []
constexpr ::System::MonoListItem::MonoListItem() {}
