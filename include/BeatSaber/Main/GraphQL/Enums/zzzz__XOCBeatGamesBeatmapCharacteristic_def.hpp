#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/Enums/XOCBeatGamesBeatmapCharacteristic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XOCBeatGamesBeatmapCharacteristic)
// Forward declare root types
namespace BeatSaber::Main::GraphQL::Enums {
struct XOCBeatGamesBeatmapCharacteristic;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic);
// Dependencies
namespace BeatSaber::Main::GraphQL::Enums {
// Is value type: true
// CS Name: BeatSaber.Main.GraphQL.Enums.XOCBeatGamesBeatmapCharacteristic
struct CORDL_TYPE XOCBeatGamesBeatmapCharacteristic {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XOCBeatGamesBeatmapCharacteristic_Unwrapped
  enum struct __XOCBeatGamesBeatmapCharacteristic_Unwrapped : int32_t {
    __E___UnknownValue = static_cast<int32_t>(0x0),
    __E_STANDARD = static_cast<int32_t>(0x1),
    __E_ONE_SABER = static_cast<int32_t>(0x2),
    __E_NO_ARROWS = static_cast<int32_t>(0x3),
    __E_DEGREE_360 = static_cast<int32_t>(0x4),
    __E_DEGREE_90 = static_cast<int32_t>(0x5),
    __E_LEGACY = static_cast<int32_t>(0x6),
    __E_EXTRA_1 = static_cast<int32_t>(0x7),
    __E_EXTRA_2 = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XOCBeatGamesBeatmapCharacteristic_Unwrapped() const noexcept {
    return static_cast<__XOCBeatGamesBeatmapCharacteristic_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XOCBeatGamesBeatmapCharacteristic();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XOCBeatGamesBeatmapCharacteristic(int32_t value__) noexcept;

  /// @brief Field DEGREE_360 value: I32(4)
  static ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic const DEGREE_360;

  /// @brief Field DEGREE_90 value: I32(5)
  static ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic const DEGREE_90;

  /// @brief Field EXTRA_1 value: I32(7)
  static ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic const EXTRA_1;

  /// @brief Field EXTRA_2 value: I32(8)
  static ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic const EXTRA_2;

  /// @brief Field LEGACY value: I32(6)
  static ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic const LEGACY;

  /// @brief Field NO_ARROWS value: I32(3)
  static ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic const NO_ARROWS;

  /// @brief Field ONE_SABER value: I32(2)
  static ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic const ONE_SABER;

  /// @brief Field STANDARD value: I32(1)
  static ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic const STANDARD;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20948 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field __UnknownValue value: I32(0)
  static ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic const __UnknownValue;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic, 0x4>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Enums
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic, "BeatSaber.Main.GraphQL.Enums", "XOCBeatGamesBeatmapCharacteristic");
