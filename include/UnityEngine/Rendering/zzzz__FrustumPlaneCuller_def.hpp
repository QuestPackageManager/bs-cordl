#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FrustumPlaneCuller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FrustumPlaneCuller)
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
struct AABB;
}
namespace UnityEngine::Rendering {
struct BatchCullingContext;
}
namespace UnityEngine::Rendering {
struct FrustumPlaneCuller_PlanePacket4;
}
namespace UnityEngine::Rendering {
struct FrustumPlaneCuller_SplitInfo;
}
namespace UnityEngine::Rendering {
struct ReceiverSphereCuller;
}
namespace UnityEngine {
struct Plane;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct FrustumPlaneCuller;
}
namespace UnityEngine::Rendering {
struct FrustumPlaneCuller_PlanePacket4;
}
namespace UnityEngine::Rendering {
struct FrustumPlaneCuller_SplitInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::FrustumPlaneCuller);
MARK_VAL_T(::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4);
MARK_VAL_T(::UnityEngine::Rendering::FrustumPlaneCuller_SplitInfo);
// Dependencies Unity.Mathematics.float4
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.FrustumPlaneCuller/PlanePacket4
struct CORDL_TYPE FrustumPlaneCuller_PlanePacket4 {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x65f1a70, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1<::UnityEngine::Plane> planes, int32_t offset, int32_t limit);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FrustumPlaneCuller_PlanePacket4();

  // Ctor Parameters [CppParam { name: "nx", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "ny", ty: "::Unity::Mathematics::float4", modifiers: "", def_value:
  // None }, CppParam { name: "nz", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "d", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None },
  // CppParam { name: "nxAbs", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "nyAbs", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None },
  // CppParam { name: "nzAbs", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }]
  constexpr FrustumPlaneCuller_PlanePacket4(::Unity::Mathematics::float4 nx, ::Unity::Mathematics::float4 ny, ::Unity::Mathematics::float4 nz, ::Unity::Mathematics::float4 d,
                                            ::Unity::Mathematics::float4 nxAbs, ::Unity::Mathematics::float4 nyAbs, ::Unity::Mathematics::float4 nzAbs) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17564 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  /// @brief Field nx, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::float4 nx;

  /// @brief Field ny, offset: 0x10, size: 0x10, def value: None
  ::Unity::Mathematics::float4 ny;

  /// @brief Field nz, offset: 0x20, size: 0x10, def value: None
  ::Unity::Mathematics::float4 nz;

  /// @brief Field d, offset: 0x30, size: 0x10, def value: None
  ::Unity::Mathematics::float4 d;

  /// @brief Field nxAbs, offset: 0x40, size: 0x10, def value: None
  ::Unity::Mathematics::float4 nxAbs;

  /// @brief Field nyAbs, offset: 0x50, size: 0x10, def value: None
  ::Unity::Mathematics::float4 nyAbs;

  /// @brief Field nzAbs, offset: 0x60, size: 0x10, def value: None
  ::Unity::Mathematics::float4 nzAbs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4, nx) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4, ny) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4, nz) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4, d) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4, nxAbs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4, nyAbs) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4, nzAbs) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4, 0x70>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.FrustumPlaneCuller/SplitInfo
struct CORDL_TYPE FrustumPlaneCuller_SplitInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr FrustumPlaneCuller_SplitInfo();

  // Ctor Parameters [CppParam { name: "packetCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FrustumPlaneCuller_SplitInfo(int32_t packetCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17565 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field packetCount, offset: 0x0, size: 0x4, def value: None
  int32_t packetCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::FrustumPlaneCuller_SplitInfo, packetCount) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::FrustumPlaneCuller_SplitInfo, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeList`1<T>, UnityEngine.Rendering.FrustumPlaneCuller::PlanePacket4, UnityEngine.Rendering.FrustumPlaneCuller::SplitInfo
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.FrustumPlaneCuller
struct CORDL_TYPE FrustumPlaneCuller {
public:
  // Declarations
  using PlanePacket4 = ::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4;

  using SplitInfo = ::UnityEngine::Rendering::FrustumPlaneCuller_SplitInfo;

  /// @brief Method ComputeSplitVisibilityMask, addr 0x65f1b38, size 0x17c, virtual false, abstract: false, final false
  static inline uint32_t ComputeSplitVisibilityMask(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4> planePackets,
                                                    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::FrustumPlaneCuller_SplitInfo> splitInfos,
                                                    ::ByRef<::UnityEngine::Rendering::AABB> bounds);

  /// @brief Method Create, addr 0x65f15c4, size 0x440, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::FrustumPlaneCuller Create(::ByRef<::UnityEngine::Rendering::BatchCullingContext> cc, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> receiverPlanes,
                                                                    ::ByRef<::UnityEngine::Rendering::ReceiverSphereCuller> receiverSphereCuller, ::Unity::Collections::Allocator allocator);

  /// @brief Method Dispose, addr 0x65f1534, size 0x90, virtual false, abstract: false, final false
  inline void Dispose(::Unity::Jobs::JobHandle job);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FrustumPlaneCuller();

  // Ctor Parameters [CppParam { name: "planePackets", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4>", modifiers: "", def_value: None }, CppParam {
  // name: "splitInfos", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::FrustumPlaneCuller_SplitInfo>", modifiers: "", def_value: None }]
  constexpr FrustumPlaneCuller(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4> planePackets,
                               ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::FrustumPlaneCuller_SplitInfo> splitInfos) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17566 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field planePackets, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4> planePackets;

  /// @brief Field splitInfos, offset: 0x8, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::FrustumPlaneCuller_SplitInfo> splitInfos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::FrustumPlaneCuller, planePackets) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FrustumPlaneCuller, splitInfos) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::FrustumPlaneCuller, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::FrustumPlaneCuller, "UnityEngine.Rendering", "FrustumPlaneCuller");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4, "UnityEngine.Rendering", "FrustumPlaneCuller/PlanePacket4");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::FrustumPlaneCuller_SplitInfo, "UnityEngine.Rendering", "FrustumPlaneCuller/SplitInfo");
