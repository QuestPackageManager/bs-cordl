#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelSelectionOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LevelSelectionOptions)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct LevelSelectionOptions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LevelSelectionOptions);
// Type: ::LevelSelectionOptions
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 34, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LevelSelectionOptions
struct CORDL_TYPE LevelSelectionOptions {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelSelectionOptions();

  // Ctor Parameters [CppParam { name: "preferredCharacteristic", ty: "::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>", modifiers: "", def_value: None }, CppParam { name: "preferredDifficulty",
  // ty: "::System::Nullable_1<::GlobalNamespace::BeatmapDifficulty>", modifiers: "", def_value: None }, CppParam { name: "sortAlphabetically", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "isFiltered", ty: "bool", modifiers: "", def_value: None }]
  constexpr LevelSelectionOptions(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> preferredCharacteristic, ::System::Nullable_1<::GlobalNamespace::BeatmapDifficulty> preferredDifficulty,
                                  bool sortAlphabetically, bool isFiltered) noexcept;

  /// @brief Field preferredCharacteristic, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> preferredCharacteristic;

  /// @brief Field preferredDifficulty, offset: 0x8, size: 0x8, def value: None
  ::System::Nullable_1<::GlobalNamespace::BeatmapDifficulty> preferredDifficulty;

  /// @brief Field sortAlphabetically, offset: 0x10, size: 0x1, def value: None
  bool sortAlphabetically;

  /// @brief Field isFiltered, offset: 0x11, size: 0x1, def value: None
  bool isFiltered;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4886 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelSelectionOptions, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionOptions, preferredCharacteristic) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionOptions, preferredDifficulty) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionOptions, sortAlphabetically) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionOptions, isFiltered) == 0x11, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelSelectionOptions, "", "LevelSelectionOptions");
