#pragma once
// IWYU pragma private; include "GlobalNamespace/GameMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameMode)
// Forward declare root types
namespace GlobalNamespace {
struct GameMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameMode, "", "GameMode");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameMode
struct CORDL_TYPE GameMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GameMode_Unwrapped
  enum struct __GameMode_Unwrapped : int32_t {
    __E_Solo = static_cast<int32_t>(0x0),
    __E_Practice = static_cast<int32_t>(0x1),
    __E_Multiplayer = static_cast<int32_t>(0x2),
    __E_Campaign = static_cast<int32_t>(0x3),
    __E_Party = static_cast<int32_t>(0x4),
    __E_Development = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GameMode_Unwrapped() const noexcept {
    return static_cast<__GameMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr GameMode(int32_t value__) noexcept;

  /// @brief Field Campaign value: I32(3)
  static ::GlobalNamespace::GameMode const Campaign;

  /// @brief Field Development value: I32(5)
  static ::GlobalNamespace::GameMode const Development;

  /// @brief Field Multiplayer value: I32(2)
  static ::GlobalNamespace::GameMode const Multiplayer;

  /// @brief Field Party value: I32(4)
  static ::GlobalNamespace::GameMode const Party;

  /// @brief Field Practice value: I32(1)
  static ::GlobalNamespace::GameMode const Practice;

  /// @brief Field Solo value: I32(0)
  static ::GlobalNamespace::GameMode const Solo;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14316 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameMode) == 0x4, "Size mismatch!");

} // namespace GlobalNamespace
