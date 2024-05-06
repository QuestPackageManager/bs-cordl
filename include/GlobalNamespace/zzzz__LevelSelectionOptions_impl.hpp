#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelSelectionOptions.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "GlobalNamespace/zzzz__LevelSelectionOptions_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
// Ctor Parameters [CppParam { name: "preferredCharacteristic", ty: "::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "preferredDifficulty", ty: "::System::Nullable_1<::GlobalNamespace::BeatmapDifficulty>", modifiers: "", def_value: Some("{}") }, CppParam { name: "sortAlphabetically", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "isFiltered", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LevelSelectionOptions::LevelSelectionOptions(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> preferredCharacteristic,
                                                                          ::System::Nullable_1<::GlobalNamespace::BeatmapDifficulty> preferredDifficulty, bool sortAlphabetically,
                                                                          bool isFiltered) noexcept {
  this->preferredCharacteristic = preferredCharacteristic;
  this->preferredDifficulty = preferredDifficulty;
  this->sortAlphabetically = sortAlphabetically;
  this->isFiltered = isFiltered;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelSelectionOptions::LevelSelectionOptions() {}
