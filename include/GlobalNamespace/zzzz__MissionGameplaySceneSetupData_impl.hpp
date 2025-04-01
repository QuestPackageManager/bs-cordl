#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionGameplaySceneSetupData.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__MissionGameplaySceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionGameplaySceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionGameplaySceneSetupData::*)(
    ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>, bool, ::ByRef<::GlobalNamespace::BeatmapKey>, ::GlobalNamespace::BeatmapLevel*,
    ::GlobalNamespace::GameplayModifiers*, ::StringW)>(&::GlobalNamespace::MissionGameplaySceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3b3650c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionGameplaySceneSetupData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>& GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_get_missionObjectives() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionObjectives;
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> const&
GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_get_missionObjectives() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionObjectives;
}
constexpr void
GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_set_missionObjectives(::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___missionObjectives)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_get_autoRestart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoRestart;
}
constexpr bool const& GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_get_autoRestart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoRestart;
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_set_autoRestart(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoRestart = value;
}
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_get_beatmapKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_get_beatmapKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapKey = value;
}
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_get_beatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr ::GlobalNamespace::BeatmapLevel* const& GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_get_beatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_get_gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr ::GlobalNamespace::GameplayModifiers* const& GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_get_gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameplayModifiers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_get_backButtonText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backButtonText;
}
constexpr ::StringW const& GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_get_backButtonText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backButtonText;
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__cordl_internal_set_backButtonText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___backButtonText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MissionGameplaySceneSetupData::_ctor(::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> missionObjectives, bool autoRestart,
                                                                  ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                  ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::StringW backButtonText) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionGameplaySceneSetupData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, missionObjectives, autoRestart, beatmapKey, beatmapLevel, gameplayModifiers, backButtonText);
}
inline ::GlobalNamespace::MissionGameplaySceneSetupData*
GlobalNamespace::MissionGameplaySceneSetupData::New_ctor(::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> missionObjectives, bool autoRestart,
                                                         ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                         ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::StringW backButtonText) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MissionGameplaySceneSetupData*>(missionObjectives, autoRestart, beatmapKey, beatmapLevel, gameplayModifiers, backButtonText));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionGameplaySceneSetupData::MissionGameplaySceneSetupData() {}
