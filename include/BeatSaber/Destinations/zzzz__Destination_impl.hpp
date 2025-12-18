#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/Destination.hpp"
#include "BeatSaber/Destinations/zzzz__DestinationTarget_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Destinations/zzzz__Destination_def.hpp"
#include "BeatSaber/Destinations/zzzz__DestinationTarget_def.hpp"
#include "BeatSaber/Destinations/zzzz__LevelStartDestinationParameters_def.hpp"
//  Writing Method size for method: ::BeatSaber::Destinations::Destination._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Destinations::Destination::*)(
    ::BeatSaber::Destinations::DestinationTarget, ::BeatSaber::Destinations::LevelStartDestinationParameters*, ::ArrayW<::StringW, ::Array<::StringW>*>, bool, bool)>(
    &::BeatSaber::Destinations::Destination::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x31b17dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::Destination*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::DestinationTarget>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::LevelStartDestinationParameters*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Destinations::DestinationTarget& BeatSaber::Destinations::Destination::__cordl_internal_get_stage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stage;
}
constexpr ::BeatSaber::Destinations::DestinationTarget const& BeatSaber::Destinations::Destination::__cordl_internal_get_stage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stage;
}
constexpr void BeatSaber::Destinations::Destination::__cordl_internal_set_stage(::BeatSaber::Destinations::DestinationTarget value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stage = value;
}
constexpr ::BeatSaber::Destinations::LevelStartDestinationParameters*& BeatSaber::Destinations::Destination::__cordl_internal_get_levelStartParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelStartParameters;
}
constexpr ::BeatSaber::Destinations::LevelStartDestinationParameters* const& BeatSaber::Destinations::Destination::__cordl_internal_get_levelStartParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelStartParameters;
}
constexpr void BeatSaber::Destinations::Destination::__cordl_internal_set_levelStartParameters(::BeatSaber::Destinations::LevelStartDestinationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelStartParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& BeatSaber::Destinations::Destination::__cordl_internal_get_arguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arguments;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& BeatSaber::Destinations::Destination::__cordl_internal_get_arguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arguments;
}
constexpr void BeatSaber::Destinations::Destination::__cordl_internal_set_arguments(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___arguments)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& BeatSaber::Destinations::Destination::__cordl_internal_get_requiresHealthWarning() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requiresHealthWarning;
}
constexpr bool const& BeatSaber::Destinations::Destination::__cordl_internal_get_requiresHealthWarning() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requiresHealthWarning;
}
constexpr void BeatSaber::Destinations::Destination::__cordl_internal_set_requiresHealthWarning(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requiresHealthWarning = value;
}
constexpr bool& BeatSaber::Destinations::Destination::__cordl_internal_get_loadMenu() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadMenu;
}
constexpr bool const& BeatSaber::Destinations::Destination::__cordl_internal_get_loadMenu() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadMenu;
}
constexpr void BeatSaber::Destinations::Destination::__cordl_internal_set_loadMenu(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loadMenu = value;
}
inline void BeatSaber::Destinations::Destination::_ctor(::BeatSaber::Destinations::DestinationTarget stage, ::BeatSaber::Destinations::LevelStartDestinationParameters* levelStartDestination,
                                                        ::ArrayW<::StringW, ::Array<::StringW>*> arguments, bool requiresHealthWarning, bool loadMenu) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::Destination*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::DestinationTarget>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::LevelStartDestinationParameters*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stage, levelStartDestination, arguments, requiresHealthWarning, loadMenu);
}
inline ::BeatSaber::Destinations::Destination* BeatSaber::Destinations::Destination::New_ctor(::BeatSaber::Destinations::DestinationTarget stage,
                                                                                              ::BeatSaber::Destinations::LevelStartDestinationParameters* levelStartDestination,
                                                                                              ::ArrayW<::StringW, ::Array<::StringW>*> arguments, bool requiresHealthWarning, bool loadMenu) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Destinations::Destination*>(stage, levelStartDestination, arguments, requiresHealthWarning, loadMenu));
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::Destination::Destination() {}
