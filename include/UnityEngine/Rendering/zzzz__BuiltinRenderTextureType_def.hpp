#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuiltinRenderTextureType)
// Forward declare root types
namespace UnityEngine::Rendering {
struct BuiltinRenderTextureType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BuiltinRenderTextureType);
// Type: UnityEngine.Rendering::BuiltinRenderTextureType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10261))
// CS Name: ::UnityEngine.Rendering::BuiltinRenderTextureType
struct CORDL_TYPE BuiltinRenderTextureType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BuiltinRenderTextureType_Unwrapped
  enum struct __BuiltinRenderTextureType_Unwrapped : int32_t {
    __E_PropertyName = static_cast<int32_t>(0xfffffffc),
    __E_BufferPtr = static_cast<int32_t>(0xfffffffd),
    __E_RenderTexture = static_cast<int32_t>(0xfffffffe),
    __E_BindableTexture = static_cast<int32_t>(0xffffffff),
    __E_None = static_cast<int32_t>(0x0),
    __E_CurrentActive = static_cast<int32_t>(0x1),
    __E_CameraTarget = static_cast<int32_t>(0x2),
    __E_Depth = static_cast<int32_t>(0x3),
    __E_DepthNormals = static_cast<int32_t>(0x4),
    __E_ResolvedDepth = static_cast<int32_t>(0x5),
    __E_PrepassNormalsSpec = static_cast<int32_t>(0x7),
    __E_PrepassLight = static_cast<int32_t>(0x8),
    __E_PrepassLightSpec = static_cast<int32_t>(0x9),
    __E_GBuffer0 = static_cast<int32_t>(0xa),
    __E_GBuffer1 = static_cast<int32_t>(0xb),
    __E_GBuffer2 = static_cast<int32_t>(0xc),
    __E_GBuffer3 = static_cast<int32_t>(0xd),
    __E_Reflections = static_cast<int32_t>(0xe),
    __E_MotionVectors = static_cast<int32_t>(0xf),
    __E_GBuffer4 = static_cast<int32_t>(0x10),
    __E_GBuffer5 = static_cast<int32_t>(0x11),
    __E_GBuffer6 = static_cast<int32_t>(0x12),
    __E_GBuffer7 = static_cast<int32_t>(0x13),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BuiltinRenderTextureType_Unwrapped() const noexcept {
    return static_cast<__BuiltinRenderTextureType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BuiltinRenderTextureType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr BuiltinRenderTextureType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field PropertyName value: static_cast<int32_t>(0xfffffffc)
  static ::UnityEngine::Rendering::BuiltinRenderTextureType const PropertyName;

  /// @brief Field BufferPtr value: static_cast<int32_t>(0xfffffffd)
  static ::UnityEngine::Rendering::BuiltinRenderTextureType const BufferPtr;

  /// @brief Field RenderTexture value: static_cast<int32_t>(0xfffffffe)
  static ::UnityEngine::Rendering::BuiltinRenderTextureType const RenderTexture;

  /// @brief Field BindableTexture value: static_cast<int32_t>(0xffffffff)
  static ::UnityEngine::Rendering::BuiltinRenderTextureType const BindableTexture;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::BuiltinRenderTextureType const None;

  /// @brief Field CurrentActive value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::BuiltinRenderTextureType const CurrentActive;

  /// @brief Field CameraTarget value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::BuiltinRenderTextureType const CameraTarget;

  /// @brief Field Depth value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Rendering::BuiltinRenderTextureType const Depth;

  /// @brief Field DepthNormals value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Rendering::BuiltinRenderTextureType const DepthNormals;

  /// @brief Field ResolvedDepth value: static_cast<int32_t>(0x5)
  static ::UnityEngine::Rendering::BuiltinRenderTextureType const ResolvedDepth;

  /// @brief Field PrepassNormalsSpec value: static_cast<int32_t>(0x7)
  static ::UnityEngine::Rendering::BuiltinRenderTextureType const PrepassNormalsSpec;

  /// @brief Field PrepassLight value: static_cast<int32_t>(0x8)
  static ::UnityEngine::Rendering::BuiltinRenderTextureType const PrepassLight;

  /// @brief Field PrepassLightSpec value: static_cast<int32_t>(0x9)
  static ::UnityEngine::Rendering::BuiltinRenderTextureType const PrepassLightSpec;

  /// @brief Field GBuffer0 value: static_cast<int32_t>(0xa)
  static ::UnityEngine::Rendering::BuiltinRenderTextureType const GBuffer0;

  /// @brief Field GBuffer1 value: static_cast<int32_t>(0xb)
  static ::UnityEngine::Rendering::BuiltinRenderTextureType const GBuffer1;

  /// @brief Field GBuffer2 value: static_cast<int32_t>(0xc)
  static ::UnityEngine::Rendering::BuiltinRenderTextureType const GBuffer2;

  /// @brief Field GBuffer3 value: static_cast<int32_t>(0xd)
  static ::UnityEngine::Rendering::BuiltinRenderTextureType const GBuffer3;

  /// @brief Field Reflections value: static_cast<int32_t>(0xe)
  static ::UnityEngine::Rendering::BuiltinRenderTextureType const Reflections;

  /// @brief Field MotionVectors value: static_cast<int32_t>(0xf)
  static ::UnityEngine::Rendering::BuiltinRenderTextureType const MotionVectors;

  /// @brief Field GBuffer4 value: static_cast<int32_t>(0x10)
  static ::UnityEngine::Rendering::BuiltinRenderTextureType const GBuffer4;

  /// @brief Field GBuffer5 value: static_cast<int32_t>(0x11)
  static ::UnityEngine::Rendering::BuiltinRenderTextureType const GBuffer5;

  /// @brief Field GBuffer6 value: static_cast<int32_t>(0x12)
  static ::UnityEngine::Rendering::BuiltinRenderTextureType const GBuffer6;

  /// @brief Field GBuffer7 value: static_cast<int32_t>(0x13)
  static ::UnityEngine::Rendering::BuiltinRenderTextureType const GBuffer7;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BuiltinRenderTextureType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BuiltinRenderTextureType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BuiltinRenderTextureType, "UnityEngine.Rendering", "BuiltinRenderTextureType");
