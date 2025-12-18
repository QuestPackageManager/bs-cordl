#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphProfileId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphProfileId)
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraphProfileId;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphProfileId);
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphProfileId
struct CORDL_TYPE RenderGraphProfileId {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderGraphProfileId_Unwrapped
  enum struct __RenderGraphProfileId_Unwrapped : int32_t {
    __E_CompileRenderGraph = static_cast<int32_t>(0x0),
    __E_ExecuteRenderGraph = static_cast<int32_t>(0x1),
    __E_ComputeHashRenderGraph = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderGraphProfileId_Unwrapped() const noexcept {
    return static_cast<__RenderGraphProfileId_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphProfileId();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderGraphProfileId(int32_t value__) noexcept;

  /// @brief Field CompileRenderGraph value: I32(0)
  static ::UnityEngine::Rendering::RenderGraphModule::RenderGraphProfileId const CompileRenderGraph;

  /// @brief Field ComputeHashRenderGraph value: I32(2)
  static ::UnityEngine::Rendering::RenderGraphModule::RenderGraphProfileId const ComputeHashRenderGraph;

  /// @brief Field ExecuteRenderGraph value: I32(1)
  static ::UnityEngine::Rendering::RenderGraphModule::RenderGraphProfileId const ExecuteRenderGraph;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12410 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphProfileId, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RenderGraphProfileId, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RenderGraphProfileId, "UnityEngine.Rendering.RenderGraphModule", "RenderGraphProfileId");
