#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphPassType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphPassType)
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraphPassType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType);
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphPassType
struct CORDL_TYPE RenderGraphPassType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderGraphPassType_Unwrapped
  enum struct __RenderGraphPassType_Unwrapped : int32_t {
    __E_Legacy = static_cast<int32_t>(0x0),
    __E_Unsafe = static_cast<int32_t>(0x1),
    __E_Raster = static_cast<int32_t>(0x2),
    __E_Compute = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderGraphPassType_Unwrapped() const noexcept {
    return static_cast<__RenderGraphPassType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphPassType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderGraphPassType(int32_t value__) noexcept;

  /// @brief Field Compute value: I32(3)
  static ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType const Compute;

  /// @brief Field Legacy value: I32(0)
  static ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType const Legacy;

  /// @brief Field Raster value: I32(2)
  static ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType const Raster;

  /// @brief Field Unsafe value: I32(1)
  static ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType const Unsafe;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12405 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType, "UnityEngine.Rendering.RenderGraphModule", "RenderGraphPassType");
