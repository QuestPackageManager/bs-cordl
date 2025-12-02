#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PassType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PassType)
// Forward declare root types
namespace UnityEngine::Rendering {
struct PassType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PassType);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.PassType
struct CORDL_TYPE PassType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PassType_Unwrapped
  enum struct __PassType_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Vertex = static_cast<int32_t>(0x1),
    __E_VertexLM = static_cast<int32_t>(0x2),
    __E_VertexLMRGBM = static_cast<int32_t>(0x3),
    __E_ForwardBase = static_cast<int32_t>(0x4),
    __E_ForwardAdd = static_cast<int32_t>(0x5),
    __E_LightPrePassBase = static_cast<int32_t>(0x6),
    __E_LightPrePassFinal = static_cast<int32_t>(0x7),
    __E_ShadowCaster = static_cast<int32_t>(0x8),
    __E_Deferred = static_cast<int32_t>(0xa),
    __E_Meta = static_cast<int32_t>(0xb),
    __E_MotionVectors = static_cast<int32_t>(0xc),
    __E_ScriptableRenderPipeline = static_cast<int32_t>(0xd),
    __E_ScriptableRenderPipelineDefaultUnlit = static_cast<int32_t>(0xe),
    __E_GrabPass = static_cast<int32_t>(0xf),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PassType_Unwrapped() const noexcept {
    return static_cast<__PassType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PassType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PassType(int32_t value__) noexcept;

  /// @brief Field Deferred value: I32(10)
  static ::UnityEngine::Rendering::PassType const Deferred;

  /// @brief Field ForwardAdd value: I32(5)
  static ::UnityEngine::Rendering::PassType const ForwardAdd;

  /// @brief Field ForwardBase value: I32(4)
  static ::UnityEngine::Rendering::PassType const ForwardBase;

  /// @brief Field GrabPass value: I32(15)
  static ::UnityEngine::Rendering::PassType const GrabPass;

  /// @brief Field LightPrePassBase value: I32(6)
  static ::UnityEngine::Rendering::PassType const LightPrePassBase;

  /// @brief Field LightPrePassFinal value: I32(7)
  static ::UnityEngine::Rendering::PassType const LightPrePassFinal;

  /// @brief Field Meta value: I32(11)
  static ::UnityEngine::Rendering::PassType const Meta;

  /// @brief Field MotionVectors value: I32(12)
  static ::UnityEngine::Rendering::PassType const MotionVectors;

  /// @brief Field Normal value: I32(0)
  static ::UnityEngine::Rendering::PassType const Normal;

  /// @brief Field ScriptableRenderPipeline value: I32(13)
  static ::UnityEngine::Rendering::PassType const ScriptableRenderPipeline;

  /// @brief Field ScriptableRenderPipelineDefaultUnlit value: I32(14)
  static ::UnityEngine::Rendering::PassType const ScriptableRenderPipelineDefaultUnlit;

  /// @brief Field ShadowCaster value: I32(8)
  static ::UnityEngine::Rendering::PassType const ShadowCaster;

  /// @brief Field Vertex value: I32(1)
  static ::UnityEngine::Rendering::PassType const Vertex;

  /// @brief Field VertexLM value: I32(2)
  static ::UnityEngine::Rendering::PassType const VertexLM;

  /// @brief Field VertexLMRGBM value: I32(3)
  static ::UnityEngine::Rendering::PassType const VertexLMRGBM;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10698 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PassType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::PassType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::PassType, "UnityEngine.Rendering", "PassType");
