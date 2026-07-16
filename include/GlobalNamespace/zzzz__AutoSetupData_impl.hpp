#pragma once
// IWYU pragma private; include "GlobalNamespace/AutoSetupData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AutoSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AutoSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AutoSetupData::*)()>(&::GlobalNamespace::AutoSetupData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x593c534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AutoSetupData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::AutoSetupData::__cordl_internal_get_selectBasedOnSuggestions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectBasedOnSuggestions;
}
constexpr bool const& GlobalNamespace::AutoSetupData::__cordl_internal_get_selectBasedOnSuggestions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectBasedOnSuggestions;
}
constexpr void GlobalNamespace::AutoSetupData::__cordl_internal_set_selectBasedOnSuggestions(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectBasedOnSuggestions = value;
}
constexpr bool& GlobalNamespace::AutoSetupData::__cordl_internal_get_autoStartWhenAllReady() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoStartWhenAllReady;
}
constexpr bool const& GlobalNamespace::AutoSetupData::__cordl_internal_get_autoStartWhenAllReady() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoStartWhenAllReady;
}
constexpr void GlobalNamespace::AutoSetupData::__cordl_internal_set_autoStartWhenAllReady(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoStartWhenAllReady = value;
}
constexpr bool& GlobalNamespace::AutoSetupData::__cordl_internal_get_forceAutoStartAfterSongSelection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceAutoStartAfterSongSelection;
}
constexpr bool const& GlobalNamespace::AutoSetupData::__cordl_internal_get_forceAutoStartAfterSongSelection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceAutoStartAfterSongSelection;
}
constexpr void GlobalNamespace::AutoSetupData::__cordl_internal_set_forceAutoStartAfterSongSelection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forceAutoStartAfterSongSelection = value;
}
constexpr bool& GlobalNamespace::AutoSetupData::__cordl_internal_get_randomSongIfNoneSuggested() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___randomSongIfNoneSuggested;
}
constexpr bool const& GlobalNamespace::AutoSetupData::__cordl_internal_get_randomSongIfNoneSuggested() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___randomSongIfNoneSuggested;
}
constexpr void GlobalNamespace::AutoSetupData::__cordl_internal_set_randomSongIfNoneSuggested(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___randomSongIfNoneSuggested = value;
}
inline void GlobalNamespace::AutoSetupData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AutoSetupData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AutoSetupData* GlobalNamespace::AutoSetupData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AutoSetupData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AutoSetupData::AutoSetupData() {}
