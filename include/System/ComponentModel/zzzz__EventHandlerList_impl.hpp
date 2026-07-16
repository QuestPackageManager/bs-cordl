#pragma once
// IWYU pragma private; include "System/ComponentModel/EventHandlerList.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__EventHandlerList_def.hpp"
#include "System/ComponentModel/zzzz__Component_def.hpp"
#include "System/ComponentModel/zzzz__EventHandlerList_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
constexpr ::System::ComponentModel::EventHandlerList_ListEntry*& System::ComponentModel::EventHandlerList_ListEntry::__cordl_internal_get__next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
constexpr ::System::ComponentModel::EventHandlerList_ListEntry* const& System::ComponentModel::EventHandlerList_ListEntry::__cordl_internal_get__next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
constexpr void System::ComponentModel::EventHandlerList_ListEntry::__cordl_internal_set__next(::System::ComponentModel::EventHandlerList_ListEntry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____next = value;
}
constexpr ::System::Object*& System::ComponentModel::EventHandlerList_ListEntry::__cordl_internal_get__key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key;
}
constexpr ::System::Object* const& System::ComponentModel::EventHandlerList_ListEntry::__cordl_internal_get__key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key;
}
constexpr void System::ComponentModel::EventHandlerList_ListEntry::__cordl_internal_set__key(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____key = value;
}
constexpr ::System::Delegate*& System::ComponentModel::EventHandlerList_ListEntry::__cordl_internal_get__handler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handler;
}
constexpr ::System::Delegate* const& System::ComponentModel::EventHandlerList_ListEntry::__cordl_internal_get__handler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handler;
}
constexpr void System::ComponentModel::EventHandlerList_ListEntry::__cordl_internal_set__handler(::System::Delegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handler = value;
}
// Ctor Parameters []
constexpr ::System::ComponentModel::EventHandlerList_ListEntry::EventHandlerList_ListEntry() {}
//  Writing Method size for method: ::System::ComponentModel::EventHandlerList.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (::System::ComponentModel::EventHandlerList::*)(::System::Object*)>(&::System::ComponentModel::EventHandlerList::get_Item)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x63af36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::EventHandlerList*>(), { "get_Item", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventHandlerList.Find
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventHandlerList_ListEntry* (::System::ComponentModel::EventHandlerList::*)(::System::Object*)>(
    &::System::ComponentModel::EventHandlerList::Find)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x63af3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::EventHandlerList*>(), { "Find", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::EventHandlerList_ListEntry*& System::ComponentModel::EventHandlerList::__cordl_internal_get__head() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____head;
}
constexpr ::System::ComponentModel::EventHandlerList_ListEntry* const& System::ComponentModel::EventHandlerList::__cordl_internal_get__head() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____head;
}
constexpr void System::ComponentModel::EventHandlerList::__cordl_internal_set__head(::System::ComponentModel::EventHandlerList_ListEntry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____head = value;
}
constexpr ::System::ComponentModel::Component*& System::ComponentModel::EventHandlerList::__cordl_internal_get__parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
constexpr ::System::ComponentModel::Component* const& System::ComponentModel::EventHandlerList::__cordl_internal_get__parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
constexpr void System::ComponentModel::EventHandlerList::__cordl_internal_set__parent(::System::ComponentModel::Component* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parent = value;
}
inline ::System::Delegate* System::ComponentModel::EventHandlerList::get_Item(::System::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::EventHandlerList*>(), { "get_Item", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(this, ___internal_method, key);
}
inline ::System::ComponentModel::EventHandlerList_ListEntry* System::ComponentModel::EventHandlerList::Find(::System::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::EventHandlerList*>(), { "Find", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventHandlerList_ListEntry*>(this, ___internal_method, key);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::EventHandlerList::EventHandlerList() {}
