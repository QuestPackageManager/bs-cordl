#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphState)
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraphState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphState);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::RenderGraphState, "UnityEngine.Rendering.RenderGraphModule", "RenderGraphState");
// [Flags]
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphState
struct CORDL_TYPE RenderGraphState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderGraphState_Unwrapped
  enum struct __RenderGraphState_Unwrapped : int32_t {
    __E_Idle = static_cast<int32_t>(0x0),
    __E_RecordingGraph = static_cast<int32_t>(0x1),
    __E_RecordingPass = static_cast<int32_t>(0x2),
    __E_Executing = static_cast<int32_t>(0x4),
    __E_Active = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderGraphState_Unwrapped() const noexcept {
    return static_cast<__RenderGraphState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr RenderGraphState(int32_t value__) noexcept;

  /// @brief Field Active value: I32(7)
  static ::UnityEngine::Rendering::RenderGraphModule::RenderGraphState const Active;

  /// @brief Field Executing value: I32(4)
  static ::UnityEngine::Rendering::RenderGraphModule::RenderGraphState const Executing;

  /// @brief Field Idle value: I32(0)
  static ::UnityEngine::Rendering::RenderGraphModule::RenderGraphState const Idle;

  /// @brief Field RecordingGraph value: I32(1)
  static ::UnityEngine::Rendering::RenderGraphModule::RenderGraphState const RecordingGraph;

  /// @brief Field RecordingPass value: I32(2)
  static ::UnityEngine::Rendering::RenderGraphModule::RenderGraphState const RecordingPass;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9322 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphState) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
