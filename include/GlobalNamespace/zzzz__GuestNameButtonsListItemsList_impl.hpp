#pragma once
// IWYU pragma private; include "GlobalNamespace/GuestNameButtonsListItemsList.hpp"
#include "HMUI/zzzz__UIItemsList_1_impl.hpp"
#include "GlobalNamespace/zzzz__GuestNameButtonsListItemsList_def.hpp"
#include "GlobalNamespace/zzzz__GuestNameButtonsListItem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GuestNameButtonsListItemsList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GuestNameButtonsListItemsList::*)()>(&::GlobalNamespace::GuestNameButtonsListItemsList::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5a08d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GuestNameButtonsListItemsList*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GuestNameButtonsListItemsList::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GuestNameButtonsListItemsList*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GuestNameButtonsListItemsList* GlobalNamespace::GuestNameButtonsListItemsList::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GuestNameButtonsListItemsList*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GuestNameButtonsListItemsList::GuestNameButtonsListItemsList() {}
