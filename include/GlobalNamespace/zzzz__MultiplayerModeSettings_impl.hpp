#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerModeSettings.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerModeSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerModeSettings::*)()>(&::GlobalNamespace::MultiplayerModeSettings::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3739268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerModeSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MultiplayerModeSettings::__cordl_internal_get_createServerPlayersCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createServerPlayersCount;
}
constexpr int32_t const& GlobalNamespace::MultiplayerModeSettings::__cordl_internal_get_createServerPlayersCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createServerPlayersCount;
}
constexpr void GlobalNamespace::MultiplayerModeSettings::__cordl_internal_set_createServerPlayersCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___createServerPlayersCount = value;
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask& GlobalNamespace::MultiplayerModeSettings::__cordl_internal_get_quickPlayBeatmapDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickPlayBeatmapDifficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask const& GlobalNamespace::MultiplayerModeSettings::__cordl_internal_get_quickPlayBeatmapDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickPlayBeatmapDifficulty;
}
constexpr void GlobalNamespace::MultiplayerModeSettings::__cordl_internal_set_quickPlayBeatmapDifficulty(::GlobalNamespace::BeatmapDifficultyMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___quickPlayBeatmapDifficulty = value;
}
constexpr ::StringW& GlobalNamespace::MultiplayerModeSettings::__cordl_internal_get_quickPlaySongPackMaskSerializedName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickPlaySongPackMaskSerializedName;
}
constexpr ::StringW const& GlobalNamespace::MultiplayerModeSettings::__cordl_internal_get_quickPlaySongPackMaskSerializedName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickPlaySongPackMaskSerializedName;
}
constexpr void GlobalNamespace::MultiplayerModeSettings::__cordl_internal_set_quickPlaySongPackMaskSerializedName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___quickPlaySongPackMaskSerializedName = value;
}
constexpr bool& GlobalNamespace::MultiplayerModeSettings::__cordl_internal_get_quickPlayEnableLevelSelection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickPlayEnableLevelSelection;
}
constexpr bool const& GlobalNamespace::MultiplayerModeSettings::__cordl_internal_get_quickPlayEnableLevelSelection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickPlayEnableLevelSelection;
}
constexpr void GlobalNamespace::MultiplayerModeSettings::__cordl_internal_set_quickPlayEnableLevelSelection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___quickPlayEnableLevelSelection = value;
}
inline void GlobalNamespace::MultiplayerModeSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerModeSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerModeSettings* GlobalNamespace::MultiplayerModeSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerModeSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerModeSettings::MultiplayerModeSettings() {}
