#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/LevelStartSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelStartSource)
// Forward declare root types
namespace BeatSaber::Destinations {
struct LevelStartSource;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Destinations::LevelStartSource);
DEFINE_IL2CPP_CLASS(::BeatSaber::Destinations::LevelStartSource, "BeatSaber.Destinations", "LevelStartSource");
// Dependencies
namespace BeatSaber::Destinations {
// Is value type: true
// CS Name: BeatSaber.Destinations.LevelStartSource
struct CORDL_TYPE LevelStartSource {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LevelStartSource_Unwrapped
  enum struct __LevelStartSource_Unwrapped : int32_t {
    __E_Unspecified = static_cast<int32_t>(0x0),
    __E_UnityEditor = static_cast<int32_t>(0x1),
    __E_Test = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LevelStartSource_Unwrapped() const noexcept {
    return static_cast<__LevelStartSource_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelStartSource();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr LevelStartSource(int32_t value__) noexcept;

  /// @brief Field Test value: I32(2)
  static ::BeatSaber::Destinations::LevelStartSource const Test;

  /// @brief Field UnityEditor value: I32(1)
  static ::BeatSaber::Destinations::LevelStartSource const UnityEditor;

  /// @brief Field Unspecified value: I32(0)
  static ::BeatSaber::Destinations::LevelStartSource const Unspecified;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23899 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Destinations::LevelStartSource, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Destinations::LevelStartSource) == 0x4, "Size mismatch!");

} // namespace BeatSaber::Destinations
