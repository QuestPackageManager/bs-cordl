#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/LoadReason.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoadReason)
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct LoadReason;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason);
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.LoadReason
struct CORDL_TYPE LoadReason {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LoadReason_Unwrapped
  enum struct __LoadReason_Unwrapped : int32_t {
    __E_InvalidReason = static_cast<int32_t>(0x0),
    __E_LoadImported = static_cast<int32_t>(0x1),
    __E_LoadPreviouslyWritten = static_cast<int32_t>(0x2),
    __E_ClearImported = static_cast<int32_t>(0x3),
    __E_ClearCreated = static_cast<int32_t>(0x4),
    __E_FullyRewritten = static_cast<int32_t>(0x5),
    __E_Count = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LoadReason_Unwrapped() const noexcept {
    return static_cast<__LoadReason_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LoadReason();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LoadReason(int32_t value__) noexcept;

  /// @brief Field ClearCreated value: I32(4)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason const ClearCreated;

  /// @brief Field ClearImported value: I32(3)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason const ClearImported;

  /// @brief Field Count value: I32(6)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason const Count;

  /// @brief Field FullyRewritten value: I32(5)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason const FullyRewritten;

  /// @brief Field InvalidReason value: I32(0)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason const InvalidReason;

  /// @brief Field LoadImported value: I32(1)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason const LoadImported;

  /// @brief Field LoadPreviouslyWritten value: I32(2)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason const LoadPreviouslyWritten;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12468 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason, "UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler", "LoadReason");
