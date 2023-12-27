#pragma once
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerModeSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSettings::*)()>(&::GlobalNamespace::MultiplayerModeSettings::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2362f4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSettings*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MultiplayerModeSettings::__get_createServerPlayersCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___createServerPlayersCount;
}
constexpr int32_t const& GlobalNamespace::MultiplayerModeSettings::__get_createServerPlayersCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___createServerPlayersCount;
}
constexpr void GlobalNamespace::MultiplayerModeSettings::__set_createServerPlayersCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___createServerPlayersCount = value;
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask& GlobalNamespace::MultiplayerModeSettings::__get_quickPlayBeatmapDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___quickPlayBeatmapDifficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask const& GlobalNamespace::MultiplayerModeSettings::__get_quickPlayBeatmapDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___quickPlayBeatmapDifficulty;
}
constexpr void GlobalNamespace::MultiplayerModeSettings::__set_quickPlayBeatmapDifficulty(::GlobalNamespace::BeatmapDifficultyMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___quickPlayBeatmapDifficulty = value;
}
constexpr ::StringW& GlobalNamespace::MultiplayerModeSettings::__get_quickPlaySongPackMaskSerializedName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___quickPlaySongPackMaskSerializedName;
}
constexpr ::StringW const& GlobalNamespace::MultiplayerModeSettings::__get_quickPlaySongPackMaskSerializedName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___quickPlaySongPackMaskSerializedName;
}
constexpr void GlobalNamespace::MultiplayerModeSettings::__set_quickPlaySongPackMaskSerializedName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___quickPlaySongPackMaskSerializedName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MultiplayerModeSettings::__get_quickPlayEnableLevelSelection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___quickPlayEnableLevelSelection;
}
constexpr bool const& GlobalNamespace::MultiplayerModeSettings::__get_quickPlayEnableLevelSelection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___quickPlayEnableLevelSelection;
}
constexpr void GlobalNamespace::MultiplayerModeSettings::__set_quickPlayEnableLevelSelection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___quickPlayEnableLevelSelection = value;
}
inline ::GlobalNamespace::MultiplayerModeSettings* GlobalNamespace::MultiplayerModeSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerModeSettings*>());
}
inline void GlobalNamespace::MultiplayerModeSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSettings*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerModeSettings::MultiplayerModeSettings() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
