#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerActiveHand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerActiveHand)
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerActiveHand;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultiplayerActiveHand);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MultiplayerActiveHand, "", "MultiplayerActiveHand");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: MultiplayerActiveHand
struct CORDL_TYPE MultiplayerActiveHand {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __MultiplayerActiveHand_Unwrapped
  enum struct __MultiplayerActiveHand_Unwrapped : uint8_t {
    __E_None = static_cast<uint8_t>(0x0u),
    __E_Left = static_cast<uint8_t>(0x1u),
    __E_Right = static_cast<uint8_t>(0x2u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MultiplayerActiveHand_Unwrapped() const noexcept {
    return static_cast<__MultiplayerActiveHand_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerActiveHand();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr MultiplayerActiveHand(uint8_t value__) noexcept;

  /// @brief Field Left value: U8(1)
  static ::GlobalNamespace::MultiplayerActiveHand const Left;

  /// @brief Field None value: U8(0)
  static ::GlobalNamespace::MultiplayerActiveHand const None;

  /// @brief Field Right value: U8(2)
  static ::GlobalNamespace::MultiplayerActiveHand const Right;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18951 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerActiveHand, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MultiplayerActiveHand) == 0x1, "Size mismatch!");

} // namespace GlobalNamespace
