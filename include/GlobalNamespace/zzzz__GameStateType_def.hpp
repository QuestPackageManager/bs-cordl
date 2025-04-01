#pragma once
// IWYU pragma private; include "GlobalNamespace/GameStateType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameStateType)
// Forward declare root types
namespace GlobalNamespace {
struct GameStateType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameStateType);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameStateType
struct CORDL_TYPE GameStateType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GameStateType_Unwrapped
  enum struct __GameStateType_Unwrapped : int32_t {
    __E_EmptyServer = static_cast<int32_t>(0x0),
    __E_SelectingLevel = static_cast<int32_t>(0x1),
    __E_StartingLevel = static_cast<int32_t>(0x2),
    __E_RunningLevel = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GameStateType_Unwrapped() const noexcept {
    return static_cast<__GameStateType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameStateType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GameStateType(int32_t value__) noexcept;

  /// @brief Field EmptyServer value: I32(0)
  static ::GlobalNamespace::GameStateType const EmptyServer;

  /// @brief Field RunningLevel value: I32(3)
  static ::GlobalNamespace::GameStateType const RunningLevel;

  /// @brief Field SelectingLevel value: I32(1)
  static ::GlobalNamespace::GameStateType const SelectingLevel;

  /// @brief Field StartingLevel value: I32(2)
  static ::GlobalNamespace::GameStateType const StartingLevel;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14770 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameStateType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameStateType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameStateType, "", "GameStateType");
