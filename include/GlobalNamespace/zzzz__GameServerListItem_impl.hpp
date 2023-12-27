#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameServerListItem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameServerListItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerListItem::*)(::StringW, int32_t, int32_t, bool)>(
    &::GlobalNamespace::GameServerListItem::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2355b74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerListItem*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GameServerListItem::__get_serverName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___serverName;
}
constexpr ::StringW const& GlobalNamespace::GameServerListItem::__get_serverName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___serverName;
}
constexpr void GlobalNamespace::GameServerListItem::__set_serverName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serverName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::GameServerListItem::__get_capacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___capacity;
}
constexpr int32_t const& GlobalNamespace::GameServerListItem::__get_capacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___capacity;
}
constexpr void GlobalNamespace::GameServerListItem::__set_capacity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___capacity = value;
}
constexpr int32_t& GlobalNamespace::GameServerListItem::__get_occupied() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___occupied;
}
constexpr int32_t const& GlobalNamespace::GameServerListItem::__get_occupied() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___occupied;
}
constexpr void GlobalNamespace::GameServerListItem::__set_occupied(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___occupied = value;
}
constexpr bool& GlobalNamespace::GameServerListItem::__get_password() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___password;
}
constexpr bool const& GlobalNamespace::GameServerListItem::__get_password() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___password;
}
constexpr void GlobalNamespace::GameServerListItem::__set_password(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___password = value;
}
inline ::GlobalNamespace::GameServerListItem* GlobalNamespace::GameServerListItem::New_ctor(::StringW serverName, int32_t capacity, int32_t occupied, bool password) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameServerListItem*>(serverName, capacity, occupied, password));
}
inline void GlobalNamespace::GameServerListItem::_ctor(::StringW serverName, int32_t capacity, int32_t occupied, bool password) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerListItem*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serverName, capacity, occupied, password);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameServerListItem::GameServerListItem() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
