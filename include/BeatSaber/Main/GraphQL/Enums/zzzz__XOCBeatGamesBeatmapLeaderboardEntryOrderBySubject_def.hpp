#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/Enums/XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject)
// Forward declare root types
namespace BeatSaber::Main::GraphQL::Enums {
struct XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject);
// Dependencies
namespace BeatSaber::Main::GraphQL::Enums {
// Is value type: true
// CS Name: BeatSaber.Main.GraphQL.Enums.XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject
struct CORDL_TYPE XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject_Unwrapped
  enum struct __XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject_Unwrapped : int32_t {
    __E___UnknownValue = static_cast<int32_t>(0x0),
    __E_ACCURACY_SCORE = static_cast<int32_t>(0x1),
    __E_CUT_ANGLE = static_cast<int32_t>(0x2),
    __E_MAX_PERFECT_COMBO = static_cast<int32_t>(0x3),
    __E_SCORE = static_cast<int32_t>(0x4),
    __E_SWING_SCORE = static_cast<int32_t>(0x5),
    __E_TIMESTAMP = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject_Unwrapped() const noexcept {
    return static_cast<__XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject(int32_t value__) noexcept;

  /// @brief Field ACCURACY_SCORE value: I32(1)
  static ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject const ACCURACY_SCORE;

  /// @brief Field CUT_ANGLE value: I32(2)
  static ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject const CUT_ANGLE;

  /// @brief Field MAX_PERFECT_COMBO value: I32(3)
  static ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject const MAX_PERFECT_COMBO;

  /// @brief Field SCORE value: I32(4)
  static ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject const SCORE;

  /// @brief Field SWING_SCORE value: I32(5)
  static ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject const SWING_SCORE;

  /// @brief Field TIMESTAMP value: I32(6)
  static ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject const TIMESTAMP;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20950 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field __UnknownValue value: I32(0)
  static ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject const __UnknownValue;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject, 0x4>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Enums
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject, "BeatSaber.Main.GraphQL.Enums", "XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject");
