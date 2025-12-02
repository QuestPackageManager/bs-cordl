#pragma once
// IWYU pragma private; include "GlobalNamespace/SceneType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SceneType)
// Forward declare root types
namespace GlobalNamespace {
struct SceneType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SceneType);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: SceneType
struct CORDL_TYPE SceneType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SceneType_Unwrapped
  enum struct __SceneType_Unwrapped : int32_t {
    __E_Undefined = static_cast<int32_t>(0x0),
    __E_Menu = static_cast<int32_t>(0x1),
    __E_Game = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SceneType_Unwrapped() const noexcept {
    return static_cast<__SceneType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SceneType(int32_t value__) noexcept;

  /// @brief Field Game value: I32(2)
  static ::GlobalNamespace::SceneType const Game;

  /// @brief Field Menu value: I32(1)
  static ::GlobalNamespace::SceneType const Menu;

  /// @brief Field Undefined value: I32(0)
  static ::GlobalNamespace::SceneType const Undefined;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6749 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SceneType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SceneType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SceneType, "", "SceneType");
