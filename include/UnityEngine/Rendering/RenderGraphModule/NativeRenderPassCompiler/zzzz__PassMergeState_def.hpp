#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/PassMergeState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PassMergeState)
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct PassMergeState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassMergeState);
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.PassMergeState
struct CORDL_TYPE PassMergeState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PassMergeState_Unwrapped
  enum struct __PassMergeState_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0xffffffff),
    __E_Begin = static_cast<int32_t>(0x0),
    __E_SubPass = static_cast<int32_t>(0x1),
    __E_End = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PassMergeState_Unwrapped() const noexcept {
    return static_cast<__PassMergeState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PassMergeState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PassMergeState(int32_t value__) noexcept;

  /// @brief Field Begin value: I32(0)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassMergeState const Begin;

  /// @brief Field End value: I32(2)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassMergeState const End;

  /// @brief Field None value: I32(-1)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassMergeState const None;

  /// @brief Field SubPass value: I32(1)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassMergeState const SubPass;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12461 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassMergeState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassMergeState, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassMergeState, "UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler", "PassMergeState");
