#pragma once
// IWYU pragma private; include "GlobalNamespace\LevelSelectionOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LevelSelectionOptions)
// Forward declare root types
namespace GlobalNamespace {
struct LevelSelectionOptions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LevelSelectionOptions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LevelSelectionOptions, "", "LevelSelectionOptions");
// Dependencies BeatmapCharacteristic, BeatmapDifficulty, System.Nullable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: LevelSelectionOptions
struct CORDL_TYPE LevelSelectionOptions {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelSelectionOptions();

  // Ctor Parameters [CppParam { name: "preferredCharacteristic", ty: "::System::Nullable_1<::GlobalNamespace::BeatmapCharacteristic>", modifiers: "", def_value: None }, CppParam { name:
  // "preferredDifficulty", ty: "::System::Nullable_1<::GlobalNamespace::BeatmapDifficulty>", modifiers: "", def_value: None }, CppParam { name: "sortAlphabetically", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "isFiltered", ty: "bool", modifiers: "", def_value: None }]
  constexpr LevelSelectionOptions(::System::Nullable_1<::GlobalNamespace::BeatmapCharacteristic> preferredCharacteristic,
                                  ::System::Nullable_1<::GlobalNamespace::BeatmapDifficulty> preferredDifficulty, bool sortAlphabetically, bool isFiltered) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6941 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field preferredCharacteristic, offset: 0x0, size: 0x8, def value: None
  ::System::Nullable_1<::GlobalNamespace::BeatmapCharacteristic> preferredCharacteristic;

  /// @brief Field preferredDifficulty, offset: 0x8, size: 0x8, def value: None
  ::System::Nullable_1<::GlobalNamespace::BeatmapDifficulty> preferredDifficulty;

  /// @brief Field sortAlphabetically, offset: 0x10, size: 0x1, def value: None
  bool sortAlphabetically;

  /// @brief Field isFiltered, offset: 0x11, size: 0x1, def value: None
  bool isFiltered;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelSelectionOptions, preferredCharacteristic) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionOptions, preferredDifficulty) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionOptions, sortAlphabetically) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionOptions, isFiltered) == 0x11, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LevelSelectionOptions) == 0x14, "Size mismatch!");

} // namespace GlobalNamespace
