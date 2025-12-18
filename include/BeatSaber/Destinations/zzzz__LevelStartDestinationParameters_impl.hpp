#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/LevelStartDestinationParameters.hpp"
#include "BeatSaber/Destinations/zzzz__GameMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Destinations/zzzz__LevelStartDestinationParameters_def.hpp"
#include "BeatSaber/Destinations/zzzz__GameMode_def.hpp"
#include "BeatSaber/Destinations/zzzz__GameplayEnvironmentOverride_def.hpp"
#include "BeatSaber/Destinations/zzzz__SimpleBeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__GameplayAdditionalInformation_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__PracticeSettings_def.hpp"
//  Writing Method size for method: ::BeatSaber::Destinations::LevelStartDestinationParameters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Destinations::LevelStartDestinationParameters::*)()>(
    &::BeatSaber::Destinations::LevelStartDestinationParameters::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x31b1698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::LevelStartDestinationParameters*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::LevelStartDestinationParameters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Destinations::LevelStartDestinationParameters::*)(
    ::BeatSaber::Destinations::GameMode, ::BeatSaber::Destinations::SimpleBeatmapKey*, ::BeatSaber::Destinations::GameplayEnvironmentOverride*, ::GlobalNamespace::GameplayModifiers*,
    ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::PracticeSettings*, ::GlobalNamespace::GameplayAdditionalInformation*)>(
    &::BeatSaber::Destinations::LevelStartDestinationParameters::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x31b17c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::LevelStartDestinationParameters*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::GameMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::SimpleBeatmapKey*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::GameplayEnvironmentOverride*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PracticeSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayAdditionalInformation*>::get() })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Destinations::GameMode& BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_get_gameMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameMode;
}
constexpr ::BeatSaber::Destinations::GameMode const& BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_get_gameMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameMode;
}
constexpr void BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_set_gameMode(::BeatSaber::Destinations::GameMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameMode = value;
}
constexpr ::BeatSaber::Destinations::SimpleBeatmapKey*& BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_get_beatmapKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr ::BeatSaber::Destinations::SimpleBeatmapKey* const& BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_get_beatmapKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr void BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_set_beatmapKey(::BeatSaber::Destinations::SimpleBeatmapKey* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::Destinations::GameplayEnvironmentOverride*& BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_get_environmentOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentOverride;
}
constexpr ::BeatSaber::Destinations::GameplayEnvironmentOverride* const& BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_get_environmentOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentOverride;
}
constexpr void BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_set_environmentOverride(::BeatSaber::Destinations::GameplayEnvironmentOverride* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___environmentOverride)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameplayModifiers*& BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_get_gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr ::GlobalNamespace::GameplayModifiers* const& BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_get_gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr void BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameplayModifiers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSpecificSettings*& BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_get_customPlayerSpecificSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customPlayerSpecificSettings;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings* const& BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_get_customPlayerSpecificSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customPlayerSpecificSettings;
}
constexpr void BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_set_customPlayerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___customPlayerSpecificSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PracticeSettings*& BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_get_practiceSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___practiceSettings;
}
constexpr ::GlobalNamespace::PracticeSettings* const& BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_get_practiceSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___practiceSettings;
}
constexpr void BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_set_practiceSettings(::GlobalNamespace::PracticeSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___practiceSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameplayAdditionalInformation*& BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_get_additionalInformation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___additionalInformation;
}
constexpr ::GlobalNamespace::GameplayAdditionalInformation* const& BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_get_additionalInformation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___additionalInformation;
}
constexpr void BeatSaber::Destinations::LevelStartDestinationParameters::__cordl_internal_set_additionalInformation(::GlobalNamespace::GameplayAdditionalInformation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___additionalInformation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::Destinations::LevelStartDestinationParameters::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::LevelStartDestinationParameters*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::Destinations::LevelStartDestinationParameters::_ctor(::BeatSaber::Destinations::GameMode gameMode, ::BeatSaber::Destinations::SimpleBeatmapKey* beatmapKey,
                                                                            ::BeatSaber::Destinations::GameplayEnvironmentOverride* environmentOverride,
                                                                            ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                                            ::GlobalNamespace::PlayerSpecificSettings* customPlayerSpecificSettings,
                                                                            ::GlobalNamespace::PracticeSettings* practiceSettings,
                                                                            ::GlobalNamespace::GameplayAdditionalInformation* additionalInformation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::LevelStartDestinationParameters*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::GameMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::SimpleBeatmapKey*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::GameplayEnvironmentOverride*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PracticeSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayAdditionalInformation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameMode, beatmapKey, environmentOverride, gameplayModifiers, customPlayerSpecificSettings, practiceSettings,
                                                          additionalInformation);
}
inline ::BeatSaber::Destinations::LevelStartDestinationParameters* BeatSaber::Destinations::LevelStartDestinationParameters::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Destinations::LevelStartDestinationParameters*>());
}
inline ::BeatSaber::Destinations::LevelStartDestinationParameters*
BeatSaber::Destinations::LevelStartDestinationParameters::New_ctor(::BeatSaber::Destinations::GameMode gameMode, ::BeatSaber::Destinations::SimpleBeatmapKey* beatmapKey,
                                                                   ::BeatSaber::Destinations::GameplayEnvironmentOverride* environmentOverride, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                                   ::GlobalNamespace::PlayerSpecificSettings* customPlayerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings,
                                                                   ::GlobalNamespace::GameplayAdditionalInformation* additionalInformation) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Destinations::LevelStartDestinationParameters*>(gameMode, beatmapKey, environmentOverride, gameplayModifiers,
                                                                                                               customPlayerSpecificSettings, practiceSettings, additionalInformation));
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::LevelStartDestinationParameters::LevelStartDestinationParameters() {}
