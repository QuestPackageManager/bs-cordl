#pragma once
// IWYU pragma private; include "HMUI/EventSystemHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__EventSystemHelpers_def.hpp"
//  Writing Method size for method: ::HMUI::EventSystemHelpers.IsInputFieldSelected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::HMUI::EventSystemHelpers::IsInputFieldSelected)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x587b628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::EventSystemHelpers*>(), { "IsInputFieldSelected", {}, {} })));
    return ___internal_method;
  }
};
inline bool HMUI::EventSystemHelpers::IsInputFieldSelected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::EventSystemHelpers*>(), { "IsInputFieldSelected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::EventSystemHelpers::EventSystemHelpers() {}
