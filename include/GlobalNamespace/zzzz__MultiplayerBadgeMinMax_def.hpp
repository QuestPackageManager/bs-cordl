#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerBadgeMinMax)
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerBadgeMinMax;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultiplayerBadgeMinMax);
// Type: ::MultiplayerBadgeMinMax
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5109))
// CS Name: ::MultiplayerBadgeMinMax
struct CORDL_TYPE MultiplayerBadgeMinMax {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MultiplayerBadgeMinMax_Unwrapped
  enum struct __MultiplayerBadgeMinMax_Unwrapped : int32_t {
    __E_Min = static_cast<int32_t>(0x0),
    __E_Max = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MultiplayerBadgeMinMax_Unwrapped() const noexcept {
    return static_cast<__MultiplayerBadgeMinMax_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MultiplayerBadgeMinMax(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerBadgeMinMax();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Min value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::MultiplayerBadgeMinMax const Min;

  /// @brief Field Max value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::MultiplayerBadgeMinMax const Max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBadgeMinMax, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgeMinMax, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgeMinMax, "", "MultiplayerBadgeMinMax");
