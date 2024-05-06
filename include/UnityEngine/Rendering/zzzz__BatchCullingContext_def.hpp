#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchVisibility_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODParameters_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchCullingContext)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Rendering {
struct BatchVisibility;
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
// SizeInfo { instance_size: 160, native_size: 160, calculated_instance_size: 160, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::BatchCullingContext
struct CORDL_TYPE BatchCullingContext {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3430e8c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1<::UnityEngine::Plane> inCullingPlanes, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility> inOutBatchVisibility,
                    ::Unity::Collections::NativeArray_1<int32_t> outVisibleIndices, ::Unity::Collections::NativeArray_1<int32_t> outVisibleIndicesY,
                    ::UnityEngine::Rendering::LODParameters inLodParameters, ::UnityEngine::Matrix4x4 inCullingMatrix, float_t inNearPlane);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchCullingContext();

  // Ctor Parameters [CppParam { name: "cullingPlanes", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Plane>", modifiers: "", def_value: None }, CppParam { name: "batchVisibility", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>", modifiers: "", def_value: None }, CppParam { name: "visibleIndices", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "visibleIndicesY", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value:
  // None }, CppParam { name: "lodParameters", ty: "::UnityEngine::Rendering::LODParameters", modifiers: "", def_value: None }, CppParam { name: "cullingMatrix", ty: "::UnityEngine::Matrix4x4",
  // modifiers: "", def_value: None }, CppParam { name: "nearPlane", ty: "float_t", modifiers: "", def_value: None }]
  constexpr BatchCullingContext(::Unity::Collections::NativeArray_1<::UnityEngine::Plane> cullingPlanes, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility> batchVisibility,
                                ::Unity::Collections::NativeArray_1<int32_t> visibleIndices, ::Unity::Collections::NativeArray_1<int32_t> visibleIndicesY,
                                ::UnityEngine::Rendering::LODParameters lodParameters, ::UnityEngine::Matrix4x4 cullingMatrix, float_t nearPlane) noexcept;

  /// @brief Field cullingPlanes, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> cullingPlanes;

  /// @brief Field batchVisibility, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility> batchVisibility;

  /// @brief Field visibleIndices, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> visibleIndices;

  /// @brief Field visibleIndicesY, offset: 0x30, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> visibleIndicesY;

  /// @brief Field lodParameters, offset: 0x40, size: 0x1c, def value: None
  ::UnityEngine::Rendering::LODParameters lodParameters;

  /// @brief Field cullingMatrix, offset: 0x5c, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 cullingMatrix;

  /// @brief Field nearPlane, offset: 0x9c, size: 0x4, def value: None
  float_t nearPlane;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchCullingContext, 0xa0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchCullingContext, cullingPlanes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchCullingContext, batchVisibility) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchCullingContext, visibleIndices) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchCullingContext, visibleIndicesY) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchCullingContext, lodParameters) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchCullingContext, cullingMatrix) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchCullingContext, nearPlane) == 0x9c, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchCullingContext, "UnityEngine.Rendering", "BatchCullingContext");
