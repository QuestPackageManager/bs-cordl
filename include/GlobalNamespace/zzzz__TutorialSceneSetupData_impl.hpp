#pragma once
// IWYU pragma private; include "GlobalNamespace\TutorialSceneSetupData.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TutorialSceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialSceneSetupData::*)(::GlobalNamespace::PlayerSpecificSettings*)>(
    &::GlobalNamespace::TutorialSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590dda8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSceneSetupData*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PlayerSpecificSettings*& GlobalNamespace::TutorialSceneSetupData::__cordl_internal_get_playerSpecificSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings* const& GlobalNamespace::TutorialSceneSetupData::__cordl_internal_get_playerSpecificSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr void GlobalNamespace::TutorialSceneSetupData::__cordl_internal_set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerSpecificSettings = value;
}
inline void GlobalNamespace::TutorialSceneSetupData::_ctor(::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSceneSetupData*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerSpecificSettings);
}
inline ::GlobalNamespace::TutorialSceneSetupData* GlobalNamespace::TutorialSceneSetupData::New_ctor(::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TutorialSceneSetupData*>(playerSpecificSettings));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialSceneSetupData::TutorialSceneSetupData() {}
