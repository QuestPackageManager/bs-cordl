#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/Enums/XOCBeatGamesHealthCheckStatusValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XOCBeatGamesHealthCheckStatusValue)
// Forward declare root types
namespace BeatSaber::Main::GraphQL::Enums {
struct XOCBeatGamesHealthCheckStatusValue;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue);
// Dependencies
namespace BeatSaber::Main::GraphQL::Enums {
// Is value type: true
// CS Name: BeatSaber.Main.GraphQL.Enums.XOCBeatGamesHealthCheckStatusValue
struct CORDL_TYPE XOCBeatGamesHealthCheckStatusValue {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XOCBeatGamesHealthCheckStatusValue_Unwrapped
  enum struct __XOCBeatGamesHealthCheckStatusValue_Unwrapped : int32_t {
    __E___UnknownValue = static_cast<int32_t>(0x0),
    __E_DOWN = static_cast<int32_t>(0x1),
    __E_UP = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XOCBeatGamesHealthCheckStatusValue_Unwrapped() const noexcept {
    return static_cast<__XOCBeatGamesHealthCheckStatusValue_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XOCBeatGamesHealthCheckStatusValue();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XOCBeatGamesHealthCheckStatusValue(int32_t value__) noexcept;

  /// @brief Field DOWN value: I32(1)
  static ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue const DOWN;

  /// @brief Field UP value: I32(2)
  static ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue const UP;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20926 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field __UnknownValue value: I32(0)
  static ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue const __UnknownValue;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue, 0x4>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::Enums
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue, "BeatSaber.Main.GraphQL.Enums", "XOCBeatGamesHealthCheckStatusValue");
