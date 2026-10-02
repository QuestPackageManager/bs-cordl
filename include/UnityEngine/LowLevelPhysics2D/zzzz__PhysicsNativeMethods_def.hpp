#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsNativeMethods.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccessArray_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsBody_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsWorld_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicsNativeMethods)
namespace UnityEngine::Jobs {
class IJobParallelForTransform;
}
namespace UnityEngine::Jobs {
struct TransformAccessArray;
}
namespace UnityEngine::Jobs {
struct TransformAccess;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsLowLevelScripting2D_PhysicsBuffer;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsNativeMethods_FastWriteTransformsJob;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsNativeMethods_Slow3DWriteTransformsJob;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsNativeMethods_WriteTransformTweensJob;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWorld_TransformPlane;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWorld_TransformWriteMode;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWorld;
}
// Forward declare root types
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsNativeMethods;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsNativeMethods_FastWriteTransformsJob;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsNativeMethods_Slow3DWriteTransformsJob;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsNativeMethods_WriteTransformTweensJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_FastWriteTransformsJob);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_Slow3DWriteTransformsJob);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_WriteTransformTweensJob);
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods, "UnityEngine.LowLevelPhysics2D", "PhysicsNativeMethods");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_FastWriteTransformsJob, "UnityEngine.LowLevelPhysics2D", "PhysicsNativeMethods/FastWriteTransformsJob");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_Slow3DWriteTransformsJob, "UnityEngine.LowLevelPhysics2D", "PhysicsNativeMethods/Slow3DWriteTransformsJob");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_WriteTransformTweensJob, "UnityEngine.LowLevelPhysics2D", "PhysicsNativeMethods/WriteTransformTweensJob");
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.LowLevelPhysics2D.PhysicsBody::TransformWriteTween, UnityEngine.LowLevelPhysics2D.PhysicsWorld::TransformPlane
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsNativeMethods/FastWriteTransformsJob
struct CORDL_TYPE PhysicsNativeMethods_FastWriteTransformsJob {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
  constexpr operator ::UnityEngine::Jobs::IJobParallelForTransform*();

  /// @brief Method Execute, addr 0x6fd97c0, size 0x228, virtual true, abstract: false, final true
  inline void Execute(int32_t index, ::UnityEngine::Jobs::TransformAccess transform);

  /// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
  constexpr ::UnityEngine::Jobs::IJobParallelForTransform* i___UnityEngine__Jobs__IJobParallelForTransform();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsNativeMethods_FastWriteTransformsJob();

  // Ctor Parameters [CppParam { name: "TransformWriteTweens", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "TransformPlane", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "TransformTweening", ty: "bool", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsNativeMethods_FastWriteTransformsJob(::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween> TransformWriteTweens,
                                                        ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane TransformPlane, bool TransformTweening) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21582 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field TransformWriteTweens, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween> TransformWriteTweens;

  /// [ReadOnly]
  /// @brief Field TransformPlane, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane TransformPlane;

  /// [ReadOnly]
  /// @brief Field TransformTweening, offset: 0x14, size: 0x1, def value: None
  bool TransformTweening;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_FastWriteTransformsJob, TransformWriteTweens) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_FastWriteTransformsJob, TransformPlane) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_FastWriteTransformsJob, TransformTweening) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_FastWriteTransformsJob) == 0x18, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.LowLevelPhysics2D.PhysicsBody::TransformWriteTween, UnityEngine.LowLevelPhysics2D.PhysicsWorld::TransformPlane
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsNativeMethods/Slow3DWriteTransformsJob
struct CORDL_TYPE PhysicsNativeMethods_Slow3DWriteTransformsJob {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
  constexpr operator ::UnityEngine::Jobs::IJobParallelForTransform*();

  /// @brief Method Execute, addr 0x6fd99e8, size 0x27c, virtual true, abstract: false, final true
  inline void Execute(int32_t index, ::UnityEngine::Jobs::TransformAccess transform);

  /// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
  constexpr ::UnityEngine::Jobs::IJobParallelForTransform* i___UnityEngine__Jobs__IJobParallelForTransform();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsNativeMethods_Slow3DWriteTransformsJob();

  // Ctor Parameters [CppParam { name: "TransformWriteTweens", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "TransformPlane", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "TransformTweening", ty: "bool", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsNativeMethods_Slow3DWriteTransformsJob(::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween> TransformWriteTweens,
                                                          ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane TransformPlane, bool TransformTweening) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21583 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field TransformWriteTweens, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween> TransformWriteTweens;

  /// [ReadOnly]
  /// @brief Field TransformPlane, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane TransformPlane;

  /// [ReadOnly]
  /// @brief Field TransformTweening, offset: 0x14, size: 0x1, def value: None
  bool TransformTweening;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_Slow3DWriteTransformsJob, TransformWriteTweens) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_Slow3DWriteTransformsJob, TransformPlane) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_Slow3DWriteTransformsJob, TransformTweening) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_Slow3DWriteTransformsJob) == 0x18, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.LowLevelPhysics2D.PhysicsBody::TransformWriteTween, UnityEngine.LowLevelPhysics2D.PhysicsWorld::TransformPlane,
// UnityEngine.LowLevelPhysics2D.PhysicsWorld::TransformWriteMode
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsNativeMethods/WriteTransformTweensJob
struct CORDL_TYPE PhysicsNativeMethods_WriteTransformTweensJob {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
  constexpr operator ::UnityEngine::Jobs::IJobParallelForTransform*();

  /// @brief Method Execute, addr 0x6fd9c64, size 0x410, virtual true, abstract: false, final true
  inline void Execute(int32_t index, ::UnityEngine::Jobs::TransformAccess transform);

  /// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
  constexpr ::UnityEngine::Jobs::IJobParallelForTransform* i___UnityEngine__Jobs__IJobParallelForTransform();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsNativeMethods_WriteTransformTweensJob();

  // Ctor Parameters [CppParam { name: "TransformWriteTweens", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "TransformWriteMode", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "TransformPlane", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane", modifiers: "", def_value: None, comment: None }, CppParam { name: "InterpolationTime", ty: "float_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "ExtrapolationTime", ty: "float_t", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsNativeMethods_WriteTransformTweensJob(::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween> TransformWriteTweens,
                                                         ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode TransformWriteMode,
                                                         ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane TransformPlane, float_t InterpolationTime, float_t ExtrapolationTime) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21584 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// [ReadOnly]
  /// @brief Field TransformWriteTweens, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween> TransformWriteTweens;

  /// [ReadOnly]
  /// @brief Field TransformWriteMode, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode TransformWriteMode;

  /// [ReadOnly]
  /// @brief Field TransformPlane, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane TransformPlane;

  /// [ReadOnly]
  /// @brief Field InterpolationTime, offset: 0x18, size: 0x4, def value: None
  float_t InterpolationTime;

  /// [ReadOnly]
  /// @brief Field ExtrapolationTime, offset: 0x1c, size: 0x4, def value: None
  float_t ExtrapolationTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_WriteTransformTweensJob, TransformWriteTweens) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_WriteTransformTweensJob, TransformWriteMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_WriteTransformTweensJob, TransformPlane) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_WriteTransformTweensJob, InterpolationTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_WriteTransformTweensJob, ExtrapolationTime) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_WriteTransformTweensJob) == 0x20, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// [RequiredByNativeCode(GenerateProxy = true)]
// [IsReadOnly]
// Dependencies UnityEngine.Jobs.TransformAccessArray
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsNativeMethods
struct CORDL_TYPE PhysicsNativeMethods {
public:
  // Declarations
  using FastWriteTransformsJob = ::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_FastWriteTransformsJob;

  using Slow3DWriteTransformsJob = ::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_Slow3DWriteTransformsJob;

  using WriteTransformTweensJob = ::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_WriteTransformTweensJob;

  /// @brief Field s_WorldTransformAccessArrays, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_WorldTransformAccessArrays, put = setStaticF_s_WorldTransformAccessArrays)) ::ArrayW<::UnityEngine::Jobs::TransformAccessArray> s_WorldTransformAccessArrays;

  /// [RequiredByNativeCode]
  /// @brief Method CreateWorldTransformAccessArray, addr 0x6fd8fcc, size 0xfc, virtual false, abstract: false, final false
  static inline void CreateWorldTransformAccessArray(::UnityEngine::LowLevelPhysics2D::PhysicsWorld world, int32_t capacity, int32_t desiredJobCount);

  /// [RequiredByNativeCode]
  /// @brief Method DestroyWorldTransformAccessArray, addr 0x6fd90c8, size 0xd8, virtual false, abstract: false, final false
  static inline void DestroyWorldTransformAccessArray(::UnityEngine::LowLevelPhysics2D::PhysicsWorld world);

  /// @brief Method GetWorldTransformAccessArray, addr 0x6fd91a0, size 0x104, virtual false, abstract: false, final false
  static inline ::UnityEngine::Jobs::TransformAccessArray GetWorldTransformAccessArray(::UnityEngine::LowLevelPhysics2D::PhysicsWorld world);

  /// [RequiredByNativeCode]
  /// @brief Method WriteTransformTweens, addr 0x6fd956c, size 0x1e4, virtual false, abstract: false, final false
  static inline void WriteTransformTweens(::UnityEngine::LowLevelPhysics2D::PhysicsWorld world, double_t lastSimulationTimestamp, float_t lastSimulationDeltaTime,
                                          ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode transformWriteMode,
                                          ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane,
                                          ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer transformWriteTweensBuffer);

  /// [RequiredByNativeCode]
  /// @brief Method WriteWorldTransforms, addr 0x6fd92a4, size 0x2c8, virtual false, abstract: false, final false
  static inline void WriteWorldTransforms(::UnityEngine::LowLevelPhysics2D::PhysicsWorld world, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode transformWriteMode,
                                          ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane, int32_t eventCount, bool transformTweening);

  static inline ::ArrayW<::UnityEngine::Jobs::TransformAccessArray> getStaticF_s_WorldTransformAccessArrays();

  static inline void setStaticF_s_WorldTransformAccessArrays(::ArrayW<::UnityEngine::Jobs::TransformAccessArray> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsNativeMethods();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21585 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods) == 0x1, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
