#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GraphicsTier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsTier)
// Forward declare root types
namespace UnityEngine::Rendering {
struct GraphicsTier;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::GraphicsTier);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GraphicsTier
struct CORDL_TYPE GraphicsTier {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GraphicsTier_Unwrapped
  enum struct __GraphicsTier_Unwrapped : int32_t {
    __E_Tier1 = static_cast<int32_t>(0x0),
    __E_Tier2 = static_cast<int32_t>(0x1),
    __E_Tier3 = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GraphicsTier_Unwrapped() const noexcept {
    return static_cast<__GraphicsTier_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicsTier();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GraphicsTier(int32_t value__) noexcept;

  /// @brief Field Tier1 value: I32(0)
  static ::UnityEngine::Rendering::GraphicsTier const Tier1;

  /// @brief Field Tier2 value: I32(1)
  static ::UnityEngine::Rendering::GraphicsTier const Tier2;

  /// @brief Field Tier3 value: I32(2)
  static ::UnityEngine::Rendering::GraphicsTier const Tier3;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11198 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GraphicsTier, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GraphicsTier, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GraphicsTier, "UnityEngine.Rendering", "GraphicsTier");
