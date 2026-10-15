#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelScore.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelScore)
// Forward declare root types
namespace GlobalNamespace {
struct LevelScore;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LevelScore);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LevelScore, "", "LevelScore");
// [IsReadOnly]
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: LevelScore
struct CORDL_TYPE LevelScore {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3a326c4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t multiplied, int32_t modified, int32_t maxMultiplied, int32_t maxModified);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelScore();

  // Ctor Parameters [CppParam { name: "multiplied", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "modified", ty: "int32_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "maxMultiplied", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxModified", ty: "int32_t", modifiers: "", def_value: None,
  // comment: None }]
  constexpr LevelScore(int32_t multiplied, int32_t modified, int32_t maxMultiplied, int32_t maxModified) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21960 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field multiplied, offset: 0x0, size: 0x4, def value: None
  int32_t multiplied;

  /// @brief Field modified, offset: 0x4, size: 0x4, def value: None
  int32_t modified;

  /// @brief Field maxMultiplied, offset: 0x8, size: 0x4, def value: None
  int32_t maxMultiplied;

  /// @brief Field maxModified, offset: 0xc, size: 0x4, def value: None
  int32_t maxModified;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelScore, multiplied) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelScore, modified) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelScore, maxMultiplied) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelScore, maxModified) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LevelScore) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
