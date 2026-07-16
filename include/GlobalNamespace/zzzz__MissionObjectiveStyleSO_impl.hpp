#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionObjectiveStyleSO.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveStyleSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorStyleSO_def.hpp"
#include "GlobalNamespace/zzzz__TextStyleSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveStyleSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveStyleSO::*)()>(&::GlobalNamespace::MissionObjectiveStyleSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32c966c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveStyleSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TextStyleSO>& GlobalNamespace::MissionObjectiveStyleSO::__cordl_internal_get_titleTextStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___titleTextStyle;
}
constexpr ::UnityW<::GlobalNamespace::TextStyleSO> const& GlobalNamespace::MissionObjectiveStyleSO::__cordl_internal_get_titleTextStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___titleTextStyle;
}
constexpr void GlobalNamespace::MissionObjectiveStyleSO::__cordl_internal_set_titleTextStyle(::UnityW<::GlobalNamespace::TextStyleSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___titleTextStyle = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorStyleSO>& GlobalNamespace::MissionObjectiveStyleSO::__cordl_internal_get_titleColorStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___titleColorStyle;
}
constexpr ::UnityW<::GlobalNamespace::ColorStyleSO> const& GlobalNamespace::MissionObjectiveStyleSO::__cordl_internal_get_titleColorStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___titleColorStyle;
}
constexpr void GlobalNamespace::MissionObjectiveStyleSO::__cordl_internal_set_titleColorStyle(::UnityW<::GlobalNamespace::ColorStyleSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___titleColorStyle = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorStyleSO>& GlobalNamespace::MissionObjectiveStyleSO::__cordl_internal_get_backgroundColorStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundColorStyle;
}
constexpr ::UnityW<::GlobalNamespace::ColorStyleSO> const& GlobalNamespace::MissionObjectiveStyleSO::__cordl_internal_get_backgroundColorStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundColorStyle;
}
constexpr void GlobalNamespace::MissionObjectiveStyleSO::__cordl_internal_set_backgroundColorStyle(::UnityW<::GlobalNamespace::ColorStyleSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___backgroundColorStyle = value;
}
inline void GlobalNamespace::MissionObjectiveStyleSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveStyleSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionObjectiveStyleSO* GlobalNamespace::MissionObjectiveStyleSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionObjectiveStyleSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionObjectiveStyleSO::MissionObjectiveStyleSO() {}
