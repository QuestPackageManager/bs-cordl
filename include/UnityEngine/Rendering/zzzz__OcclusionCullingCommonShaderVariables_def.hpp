#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OcclusionCullingCommonShaderVariables.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OcclusionCullingCommonShaderVariables)
namespace UnityEngine::Rendering {
struct InstanceOcclusionTestSubviewSettings;
}
namespace UnityEngine::Rendering {
struct OccluderContext;
}
namespace UnityEngine::Rendering {
struct OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct OcclusionCullingCommonShaderVariables;
}
namespace UnityEngine::Rendering {
struct OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables);
MARK_VAL_T(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.OcclusionCullingCommonShaderVariables/<_FacingDirWorldSpace>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
  constexpr OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer(float_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17751 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  float_t FixedElementField;

  /// @brief Size padding 0x60 - 0x4 = 0x5c, packed as 0x5c
  uint8_t _cordl_size_padding[0x5c];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.OcclusionCullingCommonShaderVariables/<_OccluderMipBounds>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer(uint32_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17752 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  uint32_t FixedElementField;

  /// @brief Size padding 0x80 - 0x4 = 0x7c, packed as 0x7c
  uint8_t _cordl_size_padding[0x7c];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.OcclusionCullingCommonShaderVariables/<_RadialDirWorldSpace>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
  constexpr OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer(float_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17753 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  float_t FixedElementField;

  /// @brief Size padding 0x60 - 0x4 = 0x5c, packed as 0x5c
  uint8_t _cordl_size_padding[0x5c];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.OcclusionCullingCommonShaderVariables/<_ViewOriginWorldSpace>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
  constexpr OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer(float_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17754 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  float_t FixedElementField;

  /// @brief Size padding 0x60 - 0x4 = 0x5c, packed as 0x5c
  uint8_t _cordl_size_padding[0x5c];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.OcclusionCullingCommonShaderVariables/<_ViewProjMatrix>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
  constexpr OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer(float_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17755 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x180 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  float_t FixedElementField;

  /// @brief Size padding 0x180 - 0x4 = 0x17c, packed as 0x17c
  uint8_t _cordl_size_padding[0x17c];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer, 0x180>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.OcclusionCullingCommonShaderVariables::<_FacingDirWorldSpace>e__FixedBuffer,
// UnityEngine.Rendering.OcclusionCullingCommonShaderVariables::<_OccluderMipBounds>e__FixedBuffer, UnityEngine.Rendering.OcclusionCullingCommonShaderVariables::<_RadialDirWorldSpace>e__FixedBuffer,
// UnityEngine.Rendering.OcclusionCullingCommonShaderVariables::<_ViewOriginWorldSpace>e__FixedBuffer, UnityEngine.Rendering.OcclusionCullingCommonShaderVariables::<_ViewProjMatrix>e__FixedBuffer,
// UnityEngine.Vector4
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.OcclusionCullingCommonShaderVariables
struct CORDL_TYPE OcclusionCullingCommonShaderVariables {
public:
  // Declarations
  using __FacingDirWorldSpace_e__FixedBuffer = ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer;

  using __OccluderMipBounds_e__FixedBuffer = ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer;

  using __RadialDirWorldSpace_e__FixedBuffer = ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer;

  using __ViewOriginWorldSpace_e__FixedBuffer = ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer;

  using __ViewProjMatrix_e__FixedBuffer = ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer;

  /// @brief Method .ctor, addr 0x667c080, size 0x328, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::UnityEngine::Rendering::OccluderContext> occluderCtx, ::ByRef<::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings> subviewSettings,
                    bool occlusionOverlayCountVisible, bool overrideOcclusionTestToAlwaysPass);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OcclusionCullingCommonShaderVariables();

  // Ctor Parameters [CppParam { name: "_OccluderMipBounds", ty: "::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer", modifiers: "", def_value: None },
  // CppParam { name: "_ViewProjMatrix", ty: "::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name:
  // "_ViewOriginWorldSpace", ty: "::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name:
  // "_FacingDirWorldSpace", ty: "::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name:
  // "_RadialDirWorldSpace", ty: "::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name:
  // "_DepthSizeInOccluderPixels", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_OccluderDepthPyramidSize", ty: "::UnityEngine::Vector4", modifiers: "", def_value:
  // None }, CppParam { name: "_OccluderMipLayoutSizeX", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_OccluderMipLayoutSizeY", ty: "uint32_t", modifiers: "", def_value: None },
  // CppParam { name: "_OcclusionTestDebugFlags", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_OcclusionCullingCommonPad0", ty: "uint32_t", modifiers: "", def_value: None },
  // CppParam { name: "_OcclusionTestCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_OccluderSubviewIndices", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "_CullingSplitIndices", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_CullingSplitMask", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OcclusionCullingCommonShaderVariables(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer _OccluderMipBounds,
                                                  ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer _ViewProjMatrix,
                                                  ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer _ViewOriginWorldSpace,
                                                  ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer _FacingDirWorldSpace,
                                                  ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer _RadialDirWorldSpace,
                                                  ::UnityEngine::Vector4 _DepthSizeInOccluderPixels, ::UnityEngine::Vector4 _OccluderDepthPyramidSize, uint32_t _OccluderMipLayoutSizeX,
                                                  uint32_t _OccluderMipLayoutSizeY, uint32_t _OcclusionTestDebugFlags, uint32_t _OcclusionCullingCommonPad0, int32_t _OcclusionTestCount,
                                                  int32_t _OccluderSubviewIndices, int32_t _CullingSplitIndices, int32_t _CullingSplitMask) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17756 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x360 };

  /// @brief Field _OccluderMipBounds, offset: 0x0, size: 0x80, def value: None
  ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer _OccluderMipBounds;

  /// @brief Field _ViewProjMatrix, offset: 0x80, size: 0x180, def value: None
  ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer _ViewProjMatrix;

  /// @brief Field _ViewOriginWorldSpace, offset: 0x200, size: 0x60, def value: None
  ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer _ViewOriginWorldSpace;

  /// @brief Field _FacingDirWorldSpace, offset: 0x260, size: 0x60, def value: None
  ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer _FacingDirWorldSpace;

  /// @brief Field _RadialDirWorldSpace, offset: 0x2c0, size: 0x60, def value: None
  ::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer _RadialDirWorldSpace;

  /// @brief Field _DepthSizeInOccluderPixels, offset: 0x320, size: 0x10, def value: None
  ::UnityEngine::Vector4 _DepthSizeInOccluderPixels;

  /// @brief Field _OccluderDepthPyramidSize, offset: 0x330, size: 0x10, def value: None
  ::UnityEngine::Vector4 _OccluderDepthPyramidSize;

  /// @brief Field _OccluderMipLayoutSizeX, offset: 0x340, size: 0x4, def value: None
  uint32_t _OccluderMipLayoutSizeX;

  /// @brief Field _OccluderMipLayoutSizeY, offset: 0x344, size: 0x4, def value: None
  uint32_t _OccluderMipLayoutSizeY;

  /// @brief Field _OcclusionTestDebugFlags, offset: 0x348, size: 0x4, def value: None
  uint32_t _OcclusionTestDebugFlags;

  /// @brief Field _OcclusionCullingCommonPad0, offset: 0x34c, size: 0x4, def value: None
  uint32_t _OcclusionCullingCommonPad0;

  /// @brief Field _OcclusionTestCount, offset: 0x350, size: 0x4, def value: None
  int32_t _OcclusionTestCount;

  /// @brief Field _OccluderSubviewIndices, offset: 0x354, size: 0x4, def value: None
  int32_t _OccluderSubviewIndices;

  /// @brief Field _CullingSplitIndices, offset: 0x358, size: 0x4, def value: None
  int32_t _CullingSplitIndices;

  /// @brief Field _CullingSplitMask, offset: 0x35c, size: 0x4, def value: None
  int32_t _CullingSplitMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _OccluderMipBounds) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _ViewProjMatrix) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _ViewOriginWorldSpace) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _FacingDirWorldSpace) == 0x260, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _RadialDirWorldSpace) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _DepthSizeInOccluderPixels) == 0x320, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _OccluderDepthPyramidSize) == 0x330, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _OccluderMipLayoutSizeX) == 0x340, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _OccluderMipLayoutSizeY) == 0x344, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _OcclusionTestDebugFlags) == 0x348, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _OcclusionCullingCommonPad0) == 0x34c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _OcclusionTestCount) == 0x350, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _OccluderSubviewIndices) == 0x354, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _CullingSplitIndices) == 0x358, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, _CullingSplitMask) == 0x35c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, 0x360>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables, "UnityEngine.Rendering", "OcclusionCullingCommonShaderVariables");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer, "UnityEngine.Rendering",
                       "OcclusionCullingCommonShaderVariables/<_FacingDirWorldSpace>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer, "UnityEngine.Rendering",
                       "OcclusionCullingCommonShaderVariables/<_OccluderMipBounds>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer, "UnityEngine.Rendering",
                       "OcclusionCullingCommonShaderVariables/<_RadialDirWorldSpace>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer, "UnityEngine.Rendering",
                       "OcclusionCullingCommonShaderVariables/<_ViewOriginWorldSpace>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer, "UnityEngine.Rendering",
                       "OcclusionCullingCommonShaderVariables/<_ViewProjMatrix>e__FixedBuffer");
