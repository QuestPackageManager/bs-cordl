#pragma once
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerModeSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSettings::*)()>(&::GlobalNamespace::MultiplayerModeSettings::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x13e36d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSettings*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___quickPlaySongPackMaskSerializedName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline ::GlobalNamespace::MultiplayerModeSettings* GlobalNamespace::MultiplayerModeSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerModeSettings*>());
}
inline void GlobalNamespace::MultiplayerModeSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSettings*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerModeSettings::MultiplayerModeSettings() {}
