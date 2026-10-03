#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/ExtendedFeatureFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExtendedFeatureFlags)
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
struct ExtendedFeatureFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags, "UnityEngine.Rendering.RenderGraphModule", "ExtendedFeatureFlags");
// [Flags]
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.ExtendedFeatureFlags
struct CORDL_TYPE ExtendedFeatureFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ExtendedFeatureFlags_Unwrapped
  enum struct __ExtendedFeatureFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_TileProperties = static_cast<int32_t>(0x1),
    __E_MultiviewRenderRegionsCompatible = static_cast<int32_t>(0x2),
    __E_MultisampledShaderResolve = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ExtendedFeatureFlags_Unwrapped() const noexcept {
    return static_cast<__ExtendedFeatureFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ExtendedFeatureFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr ExtendedFeatureFlags(int32_t value__) noexcept;

  /// @brief Field MultisampledShaderResolve value: I32(4)
  static ::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags const MultisampledShaderResolve;

  /// @brief Field MultiviewRenderRegionsCompatible value: I32(2)
  static ::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags const MultiviewRenderRegionsCompatible;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags const None;

  /// @brief Field TileProperties value: I32(1)
  static ::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags const TileProperties;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9321 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
