#pragma once
// IWYU pragma private; include "UnityEngine/LightProbesQuery.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightProbesQuery)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
class IJob;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Rendering {
struct SphericalHarmonicsL2;
}
namespace UnityEngine {
struct LightProbesQuery_LightProbesQueryDisposeJob;
}
namespace UnityEngine {
struct LightProbesQuery_LightProbesQueryDispose;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
struct LightProbesQuery;
}
namespace UnityEngine {
struct LightProbesQuery_LightProbesQueryDispose;
}
namespace UnityEngine {
struct LightProbesQuery_LightProbesQueryDisposeJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LightProbesQuery);
MARK_VAL_T(::UnityEngine::LightProbesQuery_LightProbesQueryDispose);
MARK_VAL_T(::UnityEngine::LightProbesQuery_LightProbesQueryDisposeJob);
// Dependencies System.IntPtr
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.LightProbesQuery/LightProbesQueryDispose
struct CORDL_TYPE LightProbesQuery_LightProbesQueryDispose {
public:
  // Declarations
  /// @brief Method Dispose, addr 0x685048c, size 0x70, virtual false, abstract: false, final false
  inline void Dispose();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LightProbesQuery_LightProbesQueryDispose();

  // Ctor Parameters [CppParam { name: "m_LightProbeContextWrapper", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr LightProbesQuery_LightProbesQueryDispose(::System::IntPtr m_LightProbeContextWrapper) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10105 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_LightProbeContextWrapper, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_LightProbeContextWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LightProbesQuery_LightProbesQueryDispose, m_LightProbeContextWrapper) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::LightProbesQuery_LightProbesQueryDispose, 0x8>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.LightProbesQuery::LightProbesQueryDispose
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.LightProbesQuery/LightProbesQueryDisposeJob
struct CORDL_TYPE LightProbesQuery_LightProbesQueryDisposeJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x68504fc, size 0x4, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LightProbesQuery_LightProbesQueryDisposeJob();

  // Ctor Parameters [CppParam { name: "Data", ty: "::UnityEngine::LightProbesQuery_LightProbesQueryDispose", modifiers: "", def_value: None }]
  constexpr LightProbesQuery_LightProbesQueryDisposeJob(::UnityEngine::LightProbesQuery_LightProbesQueryDispose Data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10106 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field Data, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::LightProbesQuery_LightProbesQueryDispose Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LightProbesQuery_LightProbesQueryDisposeJob, Data) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::LightProbesQuery_LightProbesQueryDisposeJob, 0x8>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.IntPtr, Unity.Collections.Allocator
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.LightProbesQuery
struct CORDL_TYPE LightProbesQuery {
public:
  // Declarations
  using LightProbesQueryDispose = ::UnityEngine::LightProbesQuery_LightProbesQueryDispose;

  using LightProbesQueryDisposeJob = ::UnityEngine::LightProbesQuery_LightProbesQueryDisposeJob;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method CalculateInterpolatedLightAndOcclusionProbes, addr 0x6850418, size 0x74, virtual false, abstract: false, final false
  static inline void CalculateInterpolatedLightAndOcclusionProbes(::System::IntPtr lightProbeContextWrapper, ::System::IntPtr positions, ::System::IntPtr tetrahedronIndices,
                                                                  ::System::IntPtr lightProbes, ::System::IntPtr occlusionProbes, int32_t count);

  /// @brief Method CalculateInterpolatedLightAndOcclusionProbes, addr 0x6850250, size 0x1c8, virtual false, abstract: false, final false
  inline void CalculateInterpolatedLightAndOcclusionProbes(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> positions, ::Unity::Collections::NativeArray_1<int32_t> tetrahedronIndices,
                                                           ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2> lightProbes,
                                                           ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> occlusionProbes);

  /// @brief Method Create, addr 0x684ffe4, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create();

  /// @brief Method Destroy, addr 0x6850118, size 0x3c, virtual false, abstract: false, final false
  static inline void Destroy(::System::IntPtr lightProbeContextWrapper);

  /// @brief Method Dispose, addr 0x6850154, size 0xfc, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle inputDeps);

  /// @brief Method Dispose, addr 0x685000c, size 0x10c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x684ff64, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::Allocator allocator);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LightProbesQuery();

  // Ctor Parameters [CppParam { name: "m_LightProbeContextWrapper", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty:
  // "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
  constexpr LightProbesQuery(::System::IntPtr m_LightProbeContextWrapper, ::Unity::Collections::Allocator m_AllocatorLabel) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10107 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_LightProbeContextWrapper, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_LightProbeContextWrapper;

  /// @brief Field m_AllocatorLabel, offset: 0x8, size: 0x4, def value: None
  ::Unity::Collections::Allocator m_AllocatorLabel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LightProbesQuery, m_LightProbeContextWrapper) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LightProbesQuery, m_AllocatorLabel) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::LightProbesQuery, 0x10>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LightProbesQuery, "UnityEngine", "LightProbesQuery");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LightProbesQuery_LightProbesQueryDispose, "UnityEngine", "LightProbesQuery/LightProbesQueryDispose");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LightProbesQuery_LightProbesQueryDisposeJob, "UnityEngine", "LightProbesQuery/LightProbesQueryDisposeJob");
