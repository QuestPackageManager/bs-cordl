#pragma once
// IWYU pragma private; include "HMUI/ScreenModeSO.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "HMUI/zzzz__ScreenModeSO_def.hpp"
#include "HMUI/zzzz__ScreenModeData_def.hpp"
//  Writing Method size for method: ::HMUI::ScreenModeSO.get_data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HMUI::ScreenModeData* (::HMUI::ScreenModeSO::*)()>(&::HMUI::ScreenModeSO::get_data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f47d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenModeSO*>(), { "get_data", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScreenModeSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScreenModeSO::*)()>(&::HMUI::ScreenModeSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f47e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenModeSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::HMUI::ScreenModeData*& HMUI::ScreenModeSO::__cordl_internal_get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr ::HMUI::ScreenModeData* const& HMUI::ScreenModeSO::__cordl_internal_get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr void HMUI::ScreenModeSO::__cordl_internal_set__data(::HMUI::ScreenModeData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____data = value;
}
inline ::HMUI::ScreenModeData* HMUI::ScreenModeSO::get_data() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenModeSO*>(), { "get_data", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::HMUI::ScreenModeData*>(this, ___internal_method);
}
inline void HMUI::ScreenModeSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenModeSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::ScreenModeSO* HMUI::ScreenModeSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ScreenModeSO*>());
}
// Ctor Parameters []
constexpr ::HMUI::ScreenModeSO::ScreenModeSO() {}
