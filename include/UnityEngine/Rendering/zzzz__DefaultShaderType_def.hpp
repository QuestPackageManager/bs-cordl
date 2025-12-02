#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DefaultShaderType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultShaderType)
// Forward declare root types
namespace UnityEngine::Rendering {
struct DefaultShaderType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::DefaultShaderType);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.DefaultShaderType
struct CORDL_TYPE DefaultShaderType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DefaultShaderType_Unwrapped
  enum struct __DefaultShaderType_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_AutodeskInteractive = static_cast<int32_t>(0x1),
    __E_AutodeskInteractiveTransparent = static_cast<int32_t>(0x2),
    __E_AutodeskInteractiveMasked = static_cast<int32_t>(0x3),
    __E_TerrainDetailLit = static_cast<int32_t>(0x4),
    __E_TerrainDetailGrass = static_cast<int32_t>(0x5),
    __E_TerrainDetailGrassBillboard = static_cast<int32_t>(0x6),
    __E_SpeedTree7 = static_cast<int32_t>(0x7),
    __E_SpeedTree8 = static_cast<int32_t>(0x8),
    __E_SpeedTree9 = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DefaultShaderType_Unwrapped() const noexcept {
    return static_cast<__DefaultShaderType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultShaderType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DefaultShaderType(int32_t value__) noexcept;

  /// @brief Field AutodeskInteractive value: I32(1)
  static ::UnityEngine::Rendering::DefaultShaderType const AutodeskInteractive;

  /// @brief Field AutodeskInteractiveMasked value: I32(3)
  static ::UnityEngine::Rendering::DefaultShaderType const AutodeskInteractiveMasked;

  /// @brief Field AutodeskInteractiveTransparent value: I32(2)
  static ::UnityEngine::Rendering::DefaultShaderType const AutodeskInteractiveTransparent;

  /// @brief Field Default value: I32(0)
  static ::UnityEngine::Rendering::DefaultShaderType const Default;

  /// @brief Field SpeedTree7 value: I32(7)
  static ::UnityEngine::Rendering::DefaultShaderType const SpeedTree7;

  /// @brief Field SpeedTree8 value: I32(8)
  static ::UnityEngine::Rendering::DefaultShaderType const SpeedTree8;

  /// @brief Field SpeedTree9 value: I32(9)
  static ::UnityEngine::Rendering::DefaultShaderType const SpeedTree9;

  /// @brief Field TerrainDetailGrass value: I32(5)
  static ::UnityEngine::Rendering::DefaultShaderType const TerrainDetailGrass;

  /// @brief Field TerrainDetailGrassBillboard value: I32(6)
  static ::UnityEngine::Rendering::DefaultShaderType const TerrainDetailGrassBillboard;

  /// @brief Field TerrainDetailLit value: I32(4)
  static ::UnityEngine::Rendering::DefaultShaderType const TerrainDetailLit;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10737 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DefaultShaderType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DefaultShaderType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DefaultShaderType, "UnityEngine.Rendering", "DefaultShaderType");
