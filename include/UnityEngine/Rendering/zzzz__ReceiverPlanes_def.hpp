#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ReceiverPlanes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReceiverPlanes)
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Rendering {
struct BatchCullingContext;
}
namespace UnityEngine {
struct Plane;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ReceiverPlanes;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ReceiverPlanes);
// Dependencies Unity.Collections.NativeList`1<T>, UnityEngine.Plane
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ReceiverPlanes
struct CORDL_TYPE ReceiverPlanes {
public:
  // Declarations
  /// @brief Method Create, addr 0x65f0c8c, size 0x8a8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ReceiverPlanes Create(::ByRef<::UnityEngine::Rendering::BatchCullingContext> cc, ::Unity::Collections::Allocator allocator);

  /// @brief Method CreateEmptyForTesting, addr 0x65f0bc0, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ReceiverPlanes CreateEmptyForTesting(::Unity::Collections::Allocator allocator);

  /// @brief Method Dispose, addr 0x65f0c28, size 0x64, virtual false, abstract: false, final false
  inline void Dispose(::Unity::Jobs::JobHandle job);

  /// @brief Method IsSignBitSet, addr 0x65f0a60, size 0xc, virtual false, abstract: false, final false
  static inline bool IsSignBitSet(float_t x);

  /// @brief Method LightFacingFrustumPlaneSubArray, addr 0x65f0a6c, size 0x88, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> LightFacingFrustumPlaneSubArray();

  /// @brief Method SilhouettePlaneSubArray, addr 0x65f0af4, size 0xcc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> SilhouettePlaneSubArray();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ReceiverPlanes();

  // Ctor Parameters [CppParam { name: "planes", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Plane>", modifiers: "", def_value: None }, CppParam { name: "lightFacingPlaneCount", ty:
  // "int32_t", modifiers: "", def_value: None }]
  constexpr ReceiverPlanes(::Unity::Collections::NativeList_1<::UnityEngine::Plane> planes, int32_t lightFacingPlaneCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17563 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field planes, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Plane> planes;

  /// @brief Field lightFacingPlaneCount, offset: 0x8, size: 0x4, def value: None
  int32_t lightFacingPlaneCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ReceiverPlanes, planes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ReceiverPlanes, lightFacingPlaneCount) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ReceiverPlanes, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ReceiverPlanes, "UnityEngine.Rendering", "ReceiverPlanes");
