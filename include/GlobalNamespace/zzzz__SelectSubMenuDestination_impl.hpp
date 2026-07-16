#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectSubMenuDestination.hpp"
#include "GlobalNamespace/zzzz__MenuDestination_impl.hpp"
#include "GlobalNamespace/zzzz__SelectSubMenuDestination_def.hpp"
#include "GlobalNamespace/zzzz__SelectSubMenuDestination_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SelectSubMenuDestination_Destination::SelectSubMenuDestination_Destination(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectSubMenuDestination_Destination::SelectSubMenuDestination_Destination() {}
constexpr ::GlobalNamespace::SelectSubMenuDestination_Destination GlobalNamespace::SelectSubMenuDestination_Destination::MainMenu{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::SelectSubMenuDestination_Destination GlobalNamespace::SelectSubMenuDestination_Destination::Campaign{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::SelectSubMenuDestination_Destination GlobalNamespace::SelectSubMenuDestination_Destination::SoloFreePlay{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::SelectSubMenuDestination_Destination GlobalNamespace::SelectSubMenuDestination_Destination::PartyFreePlay{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::SelectSubMenuDestination_Destination GlobalNamespace::SelectSubMenuDestination_Destination::Settings{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::SelectSubMenuDestination_Destination GlobalNamespace::SelectSubMenuDestination_Destination::Tutorial{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::SelectSubMenuDestination_Destination GlobalNamespace::SelectSubMenuDestination_Destination::Multiplayer{ static_cast<int32_t>(0x6) };
//  Writing Method size for method: ::GlobalNamespace::SelectSubMenuDestination._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectSubMenuDestination::*)(::GlobalNamespace::SelectSubMenuDestination_Destination)>(
    &::GlobalNamespace::SelectSubMenuDestination::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3705170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectSubMenuDestination*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::SelectSubMenuDestination_Destination>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SelectSubMenuDestination_Destination& GlobalNamespace::SelectSubMenuDestination::__cordl_internal_get_menuDestination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___menuDestination;
}
constexpr ::GlobalNamespace::SelectSubMenuDestination_Destination const& GlobalNamespace::SelectSubMenuDestination::__cordl_internal_get_menuDestination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___menuDestination;
}
constexpr void GlobalNamespace::SelectSubMenuDestination::__cordl_internal_set_menuDestination(::GlobalNamespace::SelectSubMenuDestination_Destination value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___menuDestination = value;
}
inline void GlobalNamespace::SelectSubMenuDestination::_ctor(::GlobalNamespace::SelectSubMenuDestination_Destination menuDestination) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectSubMenuDestination*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::SelectSubMenuDestination_Destination>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, menuDestination);
}
inline ::GlobalNamespace::SelectSubMenuDestination* GlobalNamespace::SelectSubMenuDestination::New_ctor(::GlobalNamespace::SelectSubMenuDestination_Destination menuDestination) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SelectSubMenuDestination*>(menuDestination));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectSubMenuDestination::SelectSubMenuDestination() {}
