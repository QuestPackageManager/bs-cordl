#pragma once
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayServerControlSettings_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayServerMode_impl.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_impl.hpp"
#include "GlobalNamespace/zzzz__SongSelectionMode_impl.hpp"
#include "GlobalNamespace/zzzz__CreateServerFormData_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerControlSettings_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerMode_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__SongSelectionMode_def.hpp"
// Ctor Parameters [CppParam { name: "usePassword", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "password", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "maxPlayers", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "allowInviteOthers", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "netDiscoverable", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "difficulties", ty: "::GlobalNamespace::BeatmapDifficultyMask", modifiers: "", def_value: Some("{}") },
// CppParam { name: "modifiers", ty: "::GlobalNamespace::GameplayModifierMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "songPacks", ty: "::GlobalNamespace::SongPackMask", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "gameplayServerMode", ty: "::GlobalNamespace::GameplayServerMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "songSelectionMode", ty:
// "::GlobalNamespace::SongSelectionMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "gameplayServerControlSettings", ty: "::GlobalNamespace::GameplayServerControlSettings", modifiers:
// "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::CreateServerFormData::CreateServerFormData(bool usePassword, ::StringW password, int32_t maxPlayers, bool allowInviteOthers, bool netDiscoverable,
                                                                        ::GlobalNamespace::BeatmapDifficultyMask difficulties, ::GlobalNamespace::GameplayModifierMask modifiers,
                                                                        ::GlobalNamespace::SongPackMask songPacks, ::GlobalNamespace::GameplayServerMode gameplayServerMode,
                                                                        ::GlobalNamespace::SongSelectionMode songSelectionMode,
                                                                        ::GlobalNamespace::GameplayServerControlSettings gameplayServerControlSettings) noexcept {
  this->usePassword = usePassword;
  this->password = password;
  this->maxPlayers = maxPlayers;
  this->allowInviteOthers = allowInviteOthers;
  this->netDiscoverable = netDiscoverable;
  this->difficulties = difficulties;
  this->modifiers = modifiers;
  this->songPacks = songPacks;
  this->gameplayServerMode = gameplayServerMode;
  this->songSelectionMode = songSelectionMode;
  this->gameplayServerControlSettings = gameplayServerControlSettings;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CreateServerFormData::CreateServerFormData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
