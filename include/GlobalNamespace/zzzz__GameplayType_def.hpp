#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameplayType)
// Forward declare root types
namespace GlobalNamespace {
struct GameplayType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameplayType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameplayType, "", "GameplayType");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameplayType
struct CORDL_TYPE GameplayType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GameplayType_Unwrapped
  enum struct __GameplayType_Unwrapped : int32_t {
    __E_BeatSaber = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GameplayType_Unwrapped() const noexcept {
    return static_cast<__GameplayType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr GameplayType(int32_t value__) noexcept;

  /// @brief Field BeatSaber value: I32(0)
  static ::GlobalNamespace::GameplayType const BeatSaber;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14317 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameplayType) == 0x4, "Size mismatch!");

} // namespace GlobalNamespace
