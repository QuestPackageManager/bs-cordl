#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalScaleMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DecalScaleMode)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct DecalScaleMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::DecalScaleMode);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.DecalScaleMode
struct CORDL_TYPE DecalScaleMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DecalScaleMode_Unwrapped
  enum struct __DecalScaleMode_Unwrapped : int32_t {
    __E_ScaleInvariant = static_cast<int32_t>(0x0),
    __E_InheritFromHierarchy = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DecalScaleMode_Unwrapped() const noexcept {
    return static_cast<__DecalScaleMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalScaleMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DecalScaleMode(int32_t value__) noexcept;

  /// @brief Field InheritFromHierarchy value: I32(1)
  static ::UnityEngine::Rendering::Universal::DecalScaleMode const InheritFromHierarchy;

  /// @brief Field ScaleInvariant value: I32(0)
  static ::UnityEngine::Rendering::Universal::DecalScaleMode const ScaleInvariant;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12654 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalScaleMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalScaleMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalScaleMode, "UnityEngine.Rendering.Universal", "DecalScaleMode");
