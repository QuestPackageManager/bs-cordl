#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DefaultMaterialType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultMaterialType)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct DefaultMaterialType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::DefaultMaterialType);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.DefaultMaterialType
struct CORDL_TYPE DefaultMaterialType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DefaultMaterialType_Unwrapped
  enum struct __DefaultMaterialType_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_Particle = static_cast<int32_t>(0x1),
    __E_Terrain = static_cast<int32_t>(0x2),
    __E_Sprite = static_cast<int32_t>(0x3),
    __E_SpriteMask = static_cast<int32_t>(0x4),
    __E_Decal = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DefaultMaterialType_Unwrapped() const noexcept {
    return static_cast<__DefaultMaterialType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultMaterialType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DefaultMaterialType(int32_t value__) noexcept;

  /// @brief Field Decal value: I32(5)
  static ::UnityEngine::Rendering::Universal::DefaultMaterialType const Decal;

  /// @brief Field Default value: I32(0)
  static ::UnityEngine::Rendering::Universal::DefaultMaterialType const Default;

  /// @brief Field Particle value: I32(1)
  static ::UnityEngine::Rendering::Universal::DefaultMaterialType const Particle;

  /// @brief Field Sprite value: I32(3)
  static ::UnityEngine::Rendering::Universal::DefaultMaterialType const Sprite;

  /// @brief Field SpriteMask value: I32(4)
  static ::UnityEngine::Rendering::Universal::DefaultMaterialType const SpriteMask;

  /// @brief Field Terrain value: I32(2)
  static ::UnityEngine::Rendering::Universal::DefaultMaterialType const Terrain;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12574 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DefaultMaterialType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DefaultMaterialType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DefaultMaterialType, "UnityEngine.Rendering.Universal", "DefaultMaterialType");
