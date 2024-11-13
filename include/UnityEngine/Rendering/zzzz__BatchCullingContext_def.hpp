#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchCullingContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingProjectionType_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchPackedCullingViewID_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingSplit_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODParameters_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchCullingContext)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Rendering {
struct BatchCullingFlags;
}
namespace UnityEngine::Rendering {
struct BatchCullingProjectionType;
}
namespace UnityEngine::Rendering {
struct BatchCullingViewType;
}
namespace UnityEngine::Rendering {
struct BatchPackedCullingViewID;
}
namespace UnityEngine::Rendering {
struct CullingSplit;
}
namespace UnityEngine::Rendering {
struct LODParameters;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Plane;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct BatchCullingContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BatchCullingContext);
// Type: UnityEngine.Rendering::BatchCullingContext
// SizeInfo { instance_size: 176, native_size: 176, calculated_instance_size: 176, calculated_native_size: 188, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::BatchCullingContext
struct CORDL_TYPE BatchCullingContext {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x48670f8, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1<::UnityEngine::Plane> inCullingPlanes, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit> inCullingSplits,
                    ::UnityEngine::Rendering::LODParameters inLodParameters, ::UnityEngine::Matrix4x4 inLocalToWorldMatrix, ::UnityEngine::Rendering::BatchCullingViewType inViewType,
                    ::UnityEngine::Rendering::BatchCullingProjectionType inProjectionType, ::UnityEngine::Rendering::BatchCullingFlags inBatchCullingFlags, uint64_t inViewID,
                    uint32_t inCullingLayerMask, uint64_t inSceneCullingMask, int32_t inReceiverPlaneOffset, int32_t inReceiverPlaneCount);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchCullingContext();

  // Ctor Parameters [CppParam { name: "cullingPlanes", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Plane>", modifiers: "", def_value: None }, CppParam { name: "cullingSplits", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit>", modifiers: "", def_value: None }, CppParam { name: "lodParameters", ty: "::UnityEngine::Rendering::LODParameters",
  // modifiers: "", def_value: None }, CppParam { name: "localToWorldMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "viewType", ty:
  // "::UnityEngine::Rendering::BatchCullingViewType", modifiers: "", def_value: None }, CppParam { name: "projectionType", ty: "::UnityEngine::Rendering::BatchCullingProjectionType", modifiers: "",
  // def_value: None }, CppParam { name: "cullingFlags", ty: "::UnityEngine::Rendering::BatchCullingFlags", modifiers: "", def_value: None }, CppParam { name: "viewID", ty:
  // "::UnityEngine::Rendering::BatchPackedCullingViewID", modifiers: "", def_value: None }, CppParam { name: "cullingLayerMask", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "sceneCullingMask", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "isOrthographic", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "receiverPlaneOffset",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "receiverPlaneCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BatchCullingContext(::Unity::Collections::NativeArray_1<::UnityEngine::Plane> cullingPlanes, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit> cullingSplits,
                                ::UnityEngine::Rendering::LODParameters lodParameters, ::UnityEngine::Matrix4x4 localToWorldMatrix, ::UnityEngine::Rendering::BatchCullingViewType viewType,
                                ::UnityEngine::Rendering::BatchCullingProjectionType projectionType, ::UnityEngine::Rendering::BatchCullingFlags cullingFlags,
                                ::UnityEngine::Rendering::BatchPackedCullingViewID viewID, uint32_t cullingLayerMask, uint64_t sceneCullingMask, uint8_t isOrthographic, int32_t receiverPlaneOffset,
                                int32_t receiverPlaneCount) noexcept;

  /// @brief Field cullingPlanes, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> cullingPlanes;

  /// @brief Field cullingSplits, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit> cullingSplits;

  /// @brief Field lodParameters, offset: 0x20, size: 0x1c, def value: None
  ::UnityEngine::Rendering::LODParameters lodParameters;

  /// @brief Field localToWorldMatrix, offset: 0x3c, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 localToWorldMatrix;

  /// @brief Field viewType, offset: 0x7c, size: 0x4, def value: None
  ::UnityEngine::Rendering::BatchCullingViewType viewType;

  /// @brief Field projectionType, offset: 0x80, size: 0x4, def value: None
  ::UnityEngine::Rendering::BatchCullingProjectionType projectionType;

  /// @brief Field cullingFlags, offset: 0x84, size: 0x4, def value: None
  ::UnityEngine::Rendering::BatchCullingFlags cullingFlags;

  /// @brief Field viewID, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::Rendering::BatchPackedCullingViewID viewID;

  /// @brief Field cullingLayerMask, offset: 0x90, size: 0x4, def value: None
  uint32_t cullingLayerMask;

  /// @brief Field sceneCullingMask, offset: 0x98, size: 0x8, def value: None
  uint64_t sceneCullingMask;

  /// @brief Field isOrthographic, offset: 0xa0, size: 0x1, def value: None
  uint8_t isOrthographic;

  /// @brief Field receiverPlaneOffset, offset: 0xa4, size: 0x4, def value: None
  int32_t receiverPlaneOffset;

  /// @brief Field receiverPlaneCount, offset: 0xa8, size: 0x4, def value: None
  int32_t receiverPlaneCount;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11216 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xb0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchCullingContext, 0xb0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchCullingContext, cullingPlanes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchCullingContext, cullingSplits) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchCullingContext, lodParameters) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchCullingContext, localToWorldMatrix) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchCullingContext, viewType) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchCullingContext, projectionType) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchCullingContext, cullingFlags) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchCullingContext, viewID) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchCullingContext, cullingLayerMask) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchCullingContext, sceneCullingMask) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchCullingContext, isOrthographic) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchCullingContext, receiverPlaneOffset) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchCullingContext, receiverPlaneCount) == 0xa8, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchCullingContext, "UnityEngine.Rendering", "BatchCullingContext");
