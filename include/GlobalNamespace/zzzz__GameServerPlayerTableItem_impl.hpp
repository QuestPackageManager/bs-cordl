#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameServerPlayerTableItem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerPlayerTableItem::*)(::StringW, ::StringW, ::StringW, bool)>(
    &::GlobalNamespace::GameServerPlayerTableItem::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2355bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableItem*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GameServerPlayerTableItem::__get_playerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___playerName;
}
constexpr ::StringW const& GlobalNamespace::GameServerPlayerTableItem::__get_playerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___playerName;
}
constexpr void GlobalNamespace::GameServerPlayerTableItem::__set_playerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::GameServerPlayerTableItem::__get_suggestedLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___suggestedLevel;
}
constexpr ::StringW const& GlobalNamespace::GameServerPlayerTableItem::__get_suggestedLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___suggestedLevel;
}
constexpr void GlobalNamespace::GameServerPlayerTableItem::__set_suggestedLevel(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___suggestedLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::GameServerPlayerTableItem::__get_suggestedModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___suggestedModifiers;
}
constexpr ::StringW const& GlobalNamespace::GameServerPlayerTableItem::__get_suggestedModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___suggestedModifiers;
}
constexpr void GlobalNamespace::GameServerPlayerTableItem::__set_suggestedModifiers(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___suggestedModifiers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::GameServerPlayerTableItem::__get_isReady() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___isReady;
}
constexpr bool const& GlobalNamespace::GameServerPlayerTableItem::__get_isReady() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___isReady;
}
constexpr void GlobalNamespace::GameServerPlayerTableItem::__set_isReady(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___isReady = value;
}
inline ::GlobalNamespace::GameServerPlayerTableItem* GlobalNamespace::GameServerPlayerTableItem::New_ctor(::StringW playerName, ::StringW suggestedLevel, ::StringW suggestedModifiers, bool isReady) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameServerPlayerTableItem*>(playerName, suggestedLevel, suggestedModifiers, isReady));
}
inline void GlobalNamespace::GameServerPlayerTableItem::_ctor(::StringW playerName, ::StringW suggestedLevel, ::StringW suggestedModifiers, bool isReady) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableItem*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerName, suggestedLevel, suggestedModifiers, isReady);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameServerPlayerTableItem::GameServerPlayerTableItem() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
