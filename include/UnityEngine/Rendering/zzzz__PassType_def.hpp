#pragma once
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
// Type: UnityEngine.Rendering::PassType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::PassType
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
  constexpr operator int32_t() const noexcept {
    return static_cast<__PassType_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PassType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PassType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Deferred value: static_cast<int32_t>(0xa)
  static ::UnityEngine::Rendering::PassType const Deferred;

  /// @brief Field ForwardAdd value: static_cast<int32_t>(0x5)
  static ::UnityEngine::Rendering::PassType const ForwardAdd;

  /// @brief Field ForwardBase value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Rendering::PassType const ForwardBase;

  /// @brief Field GrabPass value: static_cast<int32_t>(0xf)
  static ::UnityEngine::Rendering::PassType const GrabPass;

  /// @brief Field LightPrePassBase value: static_cast<int32_t>(0x6)
  static ::UnityEngine::Rendering::PassType const LightPrePassBase;

  /// @brief Field LightPrePassFinal value: static_cast<int32_t>(0x7)
  static ::UnityEngine::Rendering::PassType const LightPrePassFinal;

  /// @brief Field Meta value: static_cast<int32_t>(0xb)
  static ::UnityEngine::Rendering::PassType const Meta;

  /// @brief Field MotionVectors value: static_cast<int32_t>(0xc)
  static ::UnityEngine::Rendering::PassType const MotionVectors;

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::PassType const Normal;

  /// @brief Field ScriptableRenderPipeline value: static_cast<int32_t>(0xd)
  static ::UnityEngine::Rendering::PassType const ScriptableRenderPipeline;

  /// @brief Field ScriptableRenderPipelineDefaultUnlit value: static_cast<int32_t>(0xe)
  static ::UnityEngine::Rendering::PassType const ScriptableRenderPipelineDefaultUnlit;

  /// @brief Field ShadowCaster value: static_cast<int32_t>(0x8)
  static ::UnityEngine::Rendering::PassType const ShadowCaster;

  /// @brief Field Vertex value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::PassType const Vertex;

  /// @brief Field VertexLM value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::PassType const VertexLM;

  /// @brief Field VertexLMRGBM value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Rendering::PassType const VertexLMRGBM;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::PassType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PassType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::PassType, "UnityEngine.Rendering", "PassType");
