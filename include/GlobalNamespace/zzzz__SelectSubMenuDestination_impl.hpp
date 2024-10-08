#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectSubMenuDestination.hpp"
#include "GlobalNamespace/zzzz__MenuDestination_impl.hpp"
#include "GlobalNamespace/zzzz__SelectSubMenuDestination_impl.hpp"
#include "GlobalNamespace/zzzz__SelectSubMenuDestination_def.hpp"
#include "GlobalNamespace/zzzz__SelectSubMenuDestination_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SelectSubMenuDestination__Destination::__SelectSubMenuDestination__Destination(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SelectSubMenuDestination__Destination::__SelectSubMenuDestination__Destination() {}
constexpr ::GlobalNamespace::__SelectSubMenuDestination__Destination GlobalNamespace::__SelectSubMenuDestination__Destination::MainMenu{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__SelectSubMenuDestination__Destination GlobalNamespace::__SelectSubMenuDestination__Destination::Campaign{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__SelectSubMenuDestination__Destination GlobalNamespace::__SelectSubMenuDestination__Destination::SoloFreePlay{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__SelectSubMenuDestination__Destination GlobalNamespace::__SelectSubMenuDestination__Destination::PartyFreePlay{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__SelectSubMenuDestination__Destination GlobalNamespace::__SelectSubMenuDestination__Destination::Settings{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__SelectSubMenuDestination__Destination GlobalNamespace::__SelectSubMenuDestination__Destination::Tutorial{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::__SelectSubMenuDestination__Destination GlobalNamespace::__SelectSubMenuDestination__Destination::Multiplayer{ static_cast<int32_t>(0x6) };
//  Writing Method size for method: ::GlobalNamespace::SelectSubMenuDestination._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectSubMenuDestination::*)(::GlobalNamespace::__SelectSubMenuDestination__Destination)>(
    &::GlobalNamespace::SelectSubMenuDestination::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x266d058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectSubMenuDestination*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectSubMenuDestination__Destination>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__SelectSubMenuDestination__Destination& GlobalNamespace::SelectSubMenuDestination::__cordl_internal_get_menuDestination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___menuDestination;
}
constexpr ::GlobalNamespace::__SelectSubMenuDestination__Destination const& GlobalNamespace::SelectSubMenuDestination::__cordl_internal_get_menuDestination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___menuDestination;
}
constexpr void GlobalNamespace::SelectSubMenuDestination::__cordl_internal_set_menuDestination(::GlobalNamespace::__SelectSubMenuDestination__Destination value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___menuDestination = value;
}
inline ::GlobalNamespace::SelectSubMenuDestination* GlobalNamespace::SelectSubMenuDestination::New_ctor(::GlobalNamespace::__SelectSubMenuDestination__Destination menuDestination) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SelectSubMenuDestination*>(menuDestination));
}
inline void GlobalNamespace::SelectSubMenuDestination::_ctor(::GlobalNamespace::__SelectSubMenuDestination__Destination menuDestination) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectSubMenuDestination*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectSubMenuDestination__Destination>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, menuDestination);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectSubMenuDestination::SelectSubMenuDestination() {}
