#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OccluderDepthPyramidConstants.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OccluderDepthPyramidConstants)
namespace UnityEngine::Rendering {
struct OccluderDepthPyramidConstants___InvViewProjMatrix_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct OccluderDepthPyramidConstants___MipOffsetAndSize_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct OccluderDepthPyramidConstants___SilhouettePlanes_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct OccluderDepthPyramidConstants___SrcOffset_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct OccluderDepthPyramidConstants;
}
namespace UnityEngine::Rendering {
struct OccluderDepthPyramidConstants___InvViewProjMatrix_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct OccluderDepthPyramidConstants___MipOffsetAndSize_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct OccluderDepthPyramidConstants___SilhouettePlanes_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct OccluderDepthPyramidConstants___SrcOffset_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::OccluderDepthPyramidConstants);
MARK_VAL_T(::UnityEngine::Rendering::OccluderDepthPyramidConstants___InvViewProjMatrix_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::Rendering::OccluderDepthPyramidConstants___MipOffsetAndSize_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::Rendering::OccluderDepthPyramidConstants___SilhouettePlanes_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::Rendering::OccluderDepthPyramidConstants___SrcOffset_e__FixedBuffer);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.OccluderDepthPyramidConstants/<_InvViewProjMatrix>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE OccluderDepthPyramidConstants___InvViewProjMatrix_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OccluderDepthPyramidConstants___InvViewProjMatrix_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
  constexpr OccluderDepthPyramidConstants___InvViewProjMatrix_e__FixedBuffer(float_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17732 };

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
static_assert(offsetof(::UnityEngine::Rendering::OccluderDepthPyramidConstants___InvViewProjMatrix_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OccluderDepthPyramidConstants___InvViewProjMatrix_e__FixedBuffer, 0x180>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.OccluderDepthPyramidConstants/<_MipOffsetAndSize>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE OccluderDepthPyramidConstants___MipOffsetAndSize_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OccluderDepthPyramidConstants___MipOffsetAndSize_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr OccluderDepthPyramidConstants___MipOffsetAndSize_e__FixedBuffer(uint32_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17733 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  uint32_t FixedElementField;

  /// @brief Size padding 0x50 - 0x4 = 0x4c, packed as 0x4c
  uint8_t _cordl_size_padding[0x4c];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OccluderDepthPyramidConstants___MipOffsetAndSize_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OccluderDepthPyramidConstants___MipOffsetAndSize_e__FixedBuffer, 0x50>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.OccluderDepthPyramidConstants/<_SilhouettePlanes>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE OccluderDepthPyramidConstants___SilhouettePlanes_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OccluderDepthPyramidConstants___SilhouettePlanes_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
  constexpr OccluderDepthPyramidConstants___SilhouettePlanes_e__FixedBuffer(float_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17734 };

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
static_assert(offsetof(::UnityEngine::Rendering::OccluderDepthPyramidConstants___SilhouettePlanes_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OccluderDepthPyramidConstants___SilhouettePlanes_e__FixedBuffer, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.OccluderDepthPyramidConstants/<_SrcOffset>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE OccluderDepthPyramidConstants___SrcOffset_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OccluderDepthPyramidConstants___SrcOffset_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr OccluderDepthPyramidConstants___SrcOffset_e__FixedBuffer(uint32_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17735 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  uint32_t FixedElementField;

  /// @brief Size padding 0x60 - 0x4 = 0x5c, packed as 0x5c
  uint8_t _cordl_size_padding[0x5c];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OccluderDepthPyramidConstants___SrcOffset_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OccluderDepthPyramidConstants___SrcOffset_e__FixedBuffer, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.OccluderDepthPyramidConstants::<_InvViewProjMatrix>e__FixedBuffer, UnityEngine.Rendering.OccluderDepthPyramidConstants::<_MipOffsetAndSize>e__FixedBuffer,
// UnityEngine.Rendering.OccluderDepthPyramidConstants::<_SilhouettePlanes>e__FixedBuffer, UnityEngine.Rendering.OccluderDepthPyramidConstants::<_SrcOffset>e__FixedBuffer
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.OccluderDepthPyramidConstants
struct CORDL_TYPE OccluderDepthPyramidConstants {
public:
  // Declarations
  using __InvViewProjMatrix_e__FixedBuffer = ::UnityEngine::Rendering::OccluderDepthPyramidConstants___InvViewProjMatrix_e__FixedBuffer;

  using __MipOffsetAndSize_e__FixedBuffer = ::UnityEngine::Rendering::OccluderDepthPyramidConstants___MipOffsetAndSize_e__FixedBuffer;

  using __SilhouettePlanes_e__FixedBuffer = ::UnityEngine::Rendering::OccluderDepthPyramidConstants___SilhouettePlanes_e__FixedBuffer;

  using __SrcOffset_e__FixedBuffer = ::UnityEngine::Rendering::OccluderDepthPyramidConstants___SrcOffset_e__FixedBuffer;

  // Ctor Parameters []
  // @brief default ctor
  constexpr OccluderDepthPyramidConstants();

  // Ctor Parameters [CppParam { name: "_InvViewProjMatrix", ty: "::UnityEngine::Rendering::OccluderDepthPyramidConstants___InvViewProjMatrix_e__FixedBuffer", modifiers: "", def_value: None },
  // CppParam { name: "_SilhouettePlanes", ty: "::UnityEngine::Rendering::OccluderDepthPyramidConstants___SilhouettePlanes_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name:
  // "_SrcOffset", ty: "::UnityEngine::Rendering::OccluderDepthPyramidConstants___SrcOffset_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "_MipOffsetAndSize", ty:
  // "::UnityEngine::Rendering::OccluderDepthPyramidConstants___MipOffsetAndSize_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "_OccluderMipLayoutSizeX", ty: "uint32_t",
  // modifiers: "", def_value: None }, CppParam { name: "_OccluderMipLayoutSizeY", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_OccluderDepthPyramidPad0", ty: "uint32_t",
  // modifiers: "", def_value: None }, CppParam { name: "_OccluderDepthPyramidPad1", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_SrcSliceIndices", ty: "uint32_t", modifiers:
  // "", def_value: None }, CppParam { name: "_DstSubviewIndices", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_MipCount", ty: "uint32_t", modifiers: "", def_value: None },
  // CppParam { name: "_SilhouettePlaneCount", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr OccluderDepthPyramidConstants(::UnityEngine::Rendering::OccluderDepthPyramidConstants___InvViewProjMatrix_e__FixedBuffer _InvViewProjMatrix,
                                          ::UnityEngine::Rendering::OccluderDepthPyramidConstants___SilhouettePlanes_e__FixedBuffer _SilhouettePlanes,
                                          ::UnityEngine::Rendering::OccluderDepthPyramidConstants___SrcOffset_e__FixedBuffer _SrcOffset,
                                          ::UnityEngine::Rendering::OccluderDepthPyramidConstants___MipOffsetAndSize_e__FixedBuffer _MipOffsetAndSize, uint32_t _OccluderMipLayoutSizeX,
                                          uint32_t _OccluderMipLayoutSizeY, uint32_t _OccluderDepthPyramidPad0, uint32_t _OccluderDepthPyramidPad1, uint32_t _SrcSliceIndices,
                                          uint32_t _DstSubviewIndices, uint32_t _MipCount, uint32_t _SilhouettePlaneCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17736 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2b0 };

  /// @brief Field _InvViewProjMatrix, offset: 0x0, size: 0x180, def value: None
  ::UnityEngine::Rendering::OccluderDepthPyramidConstants___InvViewProjMatrix_e__FixedBuffer _InvViewProjMatrix;

  /// @brief Field _SilhouettePlanes, offset: 0x180, size: 0x60, def value: None
  ::UnityEngine::Rendering::OccluderDepthPyramidConstants___SilhouettePlanes_e__FixedBuffer _SilhouettePlanes;

  /// @brief Field _SrcOffset, offset: 0x1e0, size: 0x60, def value: None
  ::UnityEngine::Rendering::OccluderDepthPyramidConstants___SrcOffset_e__FixedBuffer _SrcOffset;

  /// @brief Field _MipOffsetAndSize, offset: 0x240, size: 0x50, def value: None
  ::UnityEngine::Rendering::OccluderDepthPyramidConstants___MipOffsetAndSize_e__FixedBuffer _MipOffsetAndSize;

  /// @brief Field _OccluderMipLayoutSizeX, offset: 0x290, size: 0x4, def value: None
  uint32_t _OccluderMipLayoutSizeX;

  /// @brief Field _OccluderMipLayoutSizeY, offset: 0x294, size: 0x4, def value: None
  uint32_t _OccluderMipLayoutSizeY;

  /// @brief Field _OccluderDepthPyramidPad0, offset: 0x298, size: 0x4, def value: None
  uint32_t _OccluderDepthPyramidPad0;

  /// @brief Field _OccluderDepthPyramidPad1, offset: 0x29c, size: 0x4, def value: None
  uint32_t _OccluderDepthPyramidPad1;

  /// @brief Field _SrcSliceIndices, offset: 0x2a0, size: 0x4, def value: None
  uint32_t _SrcSliceIndices;

  /// @brief Field _DstSubviewIndices, offset: 0x2a4, size: 0x4, def value: None
  uint32_t _DstSubviewIndices;

  /// @brief Field _MipCount, offset: 0x2a8, size: 0x4, def value: None
  uint32_t _MipCount;

  /// @brief Field _SilhouettePlaneCount, offset: 0x2ac, size: 0x4, def value: None
  uint32_t _SilhouettePlaneCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OccluderDepthPyramidConstants, _InvViewProjMatrix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderDepthPyramidConstants, _SilhouettePlanes) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderDepthPyramidConstants, _SrcOffset) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderDepthPyramidConstants, _MipOffsetAndSize) == 0x240, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderDepthPyramidConstants, _OccluderMipLayoutSizeX) == 0x290, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderDepthPyramidConstants, _OccluderMipLayoutSizeY) == 0x294, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderDepthPyramidConstants, _OccluderDepthPyramidPad0) == 0x298, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderDepthPyramidConstants, _OccluderDepthPyramidPad1) == 0x29c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderDepthPyramidConstants, _SrcSliceIndices) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderDepthPyramidConstants, _DstSubviewIndices) == 0x2a4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderDepthPyramidConstants, _MipCount) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderDepthPyramidConstants, _SilhouettePlaneCount) == 0x2ac, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OccluderDepthPyramidConstants, 0x2b0>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OccluderDepthPyramidConstants, "UnityEngine.Rendering", "OccluderDepthPyramidConstants");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OccluderDepthPyramidConstants___InvViewProjMatrix_e__FixedBuffer, "UnityEngine.Rendering",
                       "OccluderDepthPyramidConstants/<_InvViewProjMatrix>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OccluderDepthPyramidConstants___MipOffsetAndSize_e__FixedBuffer, "UnityEngine.Rendering",
                       "OccluderDepthPyramidConstants/<_MipOffsetAndSize>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OccluderDepthPyramidConstants___SilhouettePlanes_e__FixedBuffer, "UnityEngine.Rendering",
                       "OccluderDepthPyramidConstants/<_SilhouettePlanes>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OccluderDepthPyramidConstants___SrcOffset_e__FixedBuffer, "UnityEngine.Rendering", "OccluderDepthPyramidConstants/<_SrcOffset>e__FixedBuffer");
