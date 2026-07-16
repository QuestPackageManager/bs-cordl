#pragma once
// IWYU pragma private; include "GlobalNamespace/GameServerListItem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameServerListItem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameServerListItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerListItem::*)(::StringW, int32_t, int32_t, bool)>(&::GlobalNamespace::GameServerListItem::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x37325a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerListItem*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GameServerListItem::__cordl_internal_get_serverName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverName;
}
constexpr ::StringW const& GlobalNamespace::GameServerListItem::__cordl_internal_get_serverName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverName;
}
constexpr void GlobalNamespace::GameServerListItem::__cordl_internal_set_serverName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serverName = value;
}
constexpr int32_t& GlobalNamespace::GameServerListItem::__cordl_internal_get_capacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___capacity;
}
constexpr int32_t const& GlobalNamespace::GameServerListItem::__cordl_internal_get_capacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___capacity;
}
constexpr void GlobalNamespace::GameServerListItem::__cordl_internal_set_capacity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___capacity = value;
}
constexpr int32_t& GlobalNamespace::GameServerListItem::__cordl_internal_get_occupied() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occupied;
}
constexpr int32_t const& GlobalNamespace::GameServerListItem::__cordl_internal_get_occupied() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occupied;
}
constexpr void GlobalNamespace::GameServerListItem::__cordl_internal_set_occupied(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___occupied = value;
}
constexpr bool& GlobalNamespace::GameServerListItem::__cordl_internal_get_password() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___password;
}
constexpr bool const& GlobalNamespace::GameServerListItem::__cordl_internal_get_password() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___password;
}
constexpr void GlobalNamespace::GameServerListItem::__cordl_internal_set_password(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___password = value;
}
inline void GlobalNamespace::GameServerListItem::_ctor(::StringW serverName, int32_t capacity, int32_t occupied, bool password) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerListItem*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serverName, capacity, occupied, password);
}
inline ::GlobalNamespace::GameServerListItem* GlobalNamespace::GameServerListItem::New_ctor(::StringW serverName, int32_t capacity, int32_t occupied, bool password) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameServerListItem*>(serverName, capacity, occupied, password));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameServerListItem::GameServerListItem() {}
