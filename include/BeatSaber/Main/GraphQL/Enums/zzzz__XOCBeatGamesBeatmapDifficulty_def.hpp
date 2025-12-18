#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/Enums/XOCBeatGamesBeatmapDifficulty.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XOCBeatGamesBeatmapDifficulty)
// Forward declare root types
namespace BeatSaber::Main::GraphQL::Enums {
struct XOCBeatGamesBeatmapDifficulty;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty);
// Dependencies
namespace BeatSaber::Main::GraphQL::Enums {
// Is value type: true
// CS Name: BeatSaber.Main.GraphQL.Enums.XOCBeatGamesBeatmapDifficulty
struct CORDL_TYPE XOCBeatGamesBeatmapDifficulty {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XOCBeatGamesBeatmapDifficulty_Unwrapped
  enum struct __XOCBeatGamesBeatmapDifficulty_Unwrapped : int32_t {
    __E___UnknownValue = static_cast<int32_t>(0x0),
    __E_Easy = static_cast<int32_t>(0x1),
    __E_Normal = static_cast<int32_t>(0x2),
    __E_Hard = static_cast<int32_t>(0x3),
    __E_Expert = static_cast<int32_t>(0x4),
    __E_ExpertPlus = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XOCBeatGamesBeatmapDifficulty_Unwrapped() const noexcept {
    return static_cast<__XOCBeatGamesBeatmapDifficulty_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XOCBeatGamesBeatmapDifficulty();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XOCBeatGamesBeatmapDifficulty(int32_t value__) noexcept;

  /// @brief Field Easy value: I32(1)
  static ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty const Easy;

  /// @brief Field Expert value: I32(4)
  static ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty const Expert;

  /// @brief Field ExpertPlus value: I32(5)
  static ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty const ExpertPlus;

  /// @brief Field Hard value: I32(3)
  static ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty const Hard;

  /// @brief Field Normal value: I32(2)
  static ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty const Normal;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20949 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field __UnknownValue value: I32(0)
  static ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty const __UnknownValue;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty, 0x4>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Enums
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty, "BeatSaber.Main.GraphQL.Enums", "XOCBeatGamesBeatmapDifficulty");
