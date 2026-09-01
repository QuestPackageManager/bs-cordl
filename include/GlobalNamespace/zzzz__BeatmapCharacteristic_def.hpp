#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapCharacteristic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapCharacteristic)
// Forward declare root types
namespace GlobalNamespace {
struct BeatmapCharacteristic;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BeatmapCharacteristic);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapCharacteristic, "", "BeatmapCharacteristic");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapCharacteristic
struct CORDL_TYPE BeatmapCharacteristic {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BeatmapCharacteristic_Unwrapped
  enum struct __BeatmapCharacteristic_Unwrapped : int32_t {
    __E_Standard = static_cast<int32_t>(0x0),
    __E_OneSaber = static_cast<int32_t>(0x1),
    __E_Legacy = static_cast<int32_t>(0x2),
    __E_NoArrows = static_cast<int32_t>(0x3),
    __E_Degree360 = static_cast<int32_t>(0x4),
    __E_Degree90 = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BeatmapCharacteristic_Unwrapped() const noexcept {
    return static_cast<__BeatmapCharacteristic_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCharacteristic();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BeatmapCharacteristic(int32_t value__) noexcept;

  /// @brief Field Degree360 value: I32(4)
  static ::GlobalNamespace::BeatmapCharacteristic const Degree360;

  /// @brief Field Degree90 value: I32(5)
  static ::GlobalNamespace::BeatmapCharacteristic const Degree90;

  /// @brief Field Legacy value: I32(2)
  static ::GlobalNamespace::BeatmapCharacteristic const Legacy;

  /// @brief Field NoArrows value: I32(3)
  static ::GlobalNamespace::BeatmapCharacteristic const NoArrows;

  /// @brief Field OneSaber value: I32(1)
  static ::GlobalNamespace::BeatmapCharacteristic const OneSaber;

  /// @brief Field Standard value: I32(0)
  static ::GlobalNamespace::BeatmapCharacteristic const Standard;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14875 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristic, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatmapCharacteristic) == 0x4, "Size mismatch!");

} // namespace GlobalNamespace
