#pragma once
// IWYU pragma private; include "GlobalNamespace/GameDlcPurchaseResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameDlcPurchaseResult)
// Forward declare root types
namespace GlobalNamespace {
struct GameDlcPurchaseResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameDlcPurchaseResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameDlcPurchaseResult, "", "GameDlcPurchaseResult");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameDlcPurchaseResult
struct CORDL_TYPE GameDlcPurchaseResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GameDlcPurchaseResult_Unwrapped
  enum struct __GameDlcPurchaseResult_Unwrapped : int32_t {
    __E_Purchased = static_cast<int32_t>(0x0),
    __E_NotPurchased = static_cast<int32_t>(0x1),
    __E_Failed = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GameDlcPurchaseResult_Unwrapped() const noexcept {
    return static_cast<__GameDlcPurchaseResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameDlcPurchaseResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr GameDlcPurchaseResult(int32_t value__) noexcept;

  /// @brief Field Failed value: I32(2)
  static ::GlobalNamespace::GameDlcPurchaseResult const Failed;

  /// @brief Field NotPurchased value: I32(1)
  static ::GlobalNamespace::GameDlcPurchaseResult const NotPurchased;

  /// @brief Field Purchased value: I32(0)
  static ::GlobalNamespace::GameDlcPurchaseResult const Purchased;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14593 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameDlcPurchaseResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameDlcPurchaseResult) == 0x4, "Size mismatch!");

} // namespace GlobalNamespace
