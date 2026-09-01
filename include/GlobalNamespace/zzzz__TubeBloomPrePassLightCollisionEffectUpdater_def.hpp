#pragma once
// IWYU pragma private; include "GlobalNamespace\TubeBloomPrePassLightCollisionEffectUpdater.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TubeBloomPrePassLightCollisionEffect_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccessArray_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RaycastCommand_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TubeBloomPrePassLightCollisionEffectUpdater)
namespace GlobalNamespace {
struct TubeBloomPrePassLightCollisionEffectUpdater_EffectData;
}
namespace GlobalNamespace {
struct TubeBloomPrePassLightCollisionEffectUpdater_ExtractScaleJob;
}
namespace GlobalNamespace {
struct TubeBloomPrePassLightCollisionEffectUpdater_InitialiseRaycastsJob;
}
namespace GlobalNamespace {
struct TubeBloomPrePassLightCollisionEffectUpdater_UpdateHitPointsJob;
}
namespace GlobalNamespace {
class TubeBloomPrePassLightCollisionEffect;
}
namespace UnityEngine::Jobs {
class IJobParallelForTransform;
}
namespace UnityEngine::Jobs {
struct TransformAccess;
}
// Forward declare root types
namespace GlobalNamespace {
class TubeBloomPrePassLightCollisionEffectUpdater;
}
namespace GlobalNamespace {
struct TubeBloomPrePassLightCollisionEffectUpdater_EffectData;
}
namespace GlobalNamespace {
struct TubeBloomPrePassLightCollisionEffectUpdater_ExtractScaleJob;
}
namespace GlobalNamespace {
struct TubeBloomPrePassLightCollisionEffectUpdater_InitialiseRaycastsJob;
}
namespace GlobalNamespace {
struct TubeBloomPrePassLightCollisionEffectUpdater_UpdateHitPointsJob;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater*);
MARK_VAL_T(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData);
MARK_VAL_T(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_ExtractScaleJob);
MARK_VAL_T(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_InitialiseRaycastsJob);
MARK_VAL_T(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_UpdateHitPointsJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater*, "", "TubeBloomPrePassLightCollisionEffectUpdater");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData, "", "TubeBloomPrePassLightCollisionEffectUpdater/EffectData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_ExtractScaleJob, "", "TubeBloomPrePassLightCollisionEffectUpdater/ExtractScaleJob");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_InitialiseRaycastsJob, "", "TubeBloomPrePassLightCollisionEffectUpdater/InitialiseRaycastsJob");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_UpdateHitPointsJob, "", "TubeBloomPrePassLightCollisionEffectUpdater/UpdateHitPointsJob");
// Dependencies Unity.Mathematics.float3
namespace GlobalNamespace {
// Is value type: true
// CS Name: TubeBloomPrePassLightCollisionEffectUpdater/EffectData
struct CORDL_TYPE TubeBloomPrePassLightCollisionEffectUpdater_EffectData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TubeBloomPrePassLightCollisionEffectUpdater_EffectData();

  // Ctor Parameters [CppParam { name: "environmentLayerMask", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "showHit", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "useScale", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hit", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "length", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "scale", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }]
  constexpr TubeBloomPrePassLightCollisionEffectUpdater_EffectData(int32_t environmentLayerMask, bool showHit, bool useScale, bool hit, float_t length, ::Unity::Mathematics::float3 scale) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5950 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field environmentLayerMask, offset: 0x0, size: 0x4, def value: None
  int32_t environmentLayerMask;

  /// @brief Field showHit, offset: 0x4, size: 0x1, def value: None
  bool showHit;

  /// @brief Field useScale, offset: 0x5, size: 0x1, def value: None
  bool useScale;

  /// @brief Field hit, offset: 0x6, size: 0x1, def value: None
  bool hit;

  /// @brief Field length, offset: 0x8, size: 0x4, def value: None
  float_t length;

  /// @brief Field scale, offset: 0xc, size: 0xc, def value: None
  ::Unity::Mathematics::float3 scale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData, environmentLayerMask) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData, showHit) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData, useScale) == 0x5, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData, hit) == 0x6, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData, length) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData, scale) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies TubeBloomPrePassLightCollisionEffectUpdater::EffectData, Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: TubeBloomPrePassLightCollisionEffectUpdater/ExtractScaleJob
struct CORDL_TYPE TubeBloomPrePassLightCollisionEffectUpdater_ExtractScaleJob {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
  constexpr operator ::UnityEngine::Jobs::IJobParallelForTransform*();

  /// @brief Method Execute, addr 0x59a3760, size 0xc0, virtual true, abstract: false, final true
  inline void Execute(int32_t index, ::UnityEngine::Jobs::TransformAccess transform);

  /// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
  constexpr ::UnityEngine::Jobs::IJobParallelForTransform* i___UnityEngine__Jobs__IJobParallelForTransform();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TubeBloomPrePassLightCollisionEffectUpdater_ExtractScaleJob();

  // Ctor Parameters [CppParam { name: "effectData", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData>", modifiers: "", def_value:
  // None }]
  constexpr TubeBloomPrePassLightCollisionEffectUpdater_ExtractScaleJob(
      ::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData> effectData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5951 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field effectData, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData> effectData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_ExtractScaleJob, effectData) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_ExtractScaleJob) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies TubeBloomPrePassLightCollisionEffectUpdater::EffectData, Unity.Collections.NativeArray`1<T>, UnityEngine.RaycastCommand
namespace GlobalNamespace {
// Is value type: true
// CS Name: TubeBloomPrePassLightCollisionEffectUpdater/InitialiseRaycastsJob
struct CORDL_TYPE TubeBloomPrePassLightCollisionEffectUpdater_InitialiseRaycastsJob {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
  constexpr operator ::UnityEngine::Jobs::IJobParallelForTransform*();

  /// @brief Method Execute, addr 0x59a3820, size 0x120, virtual true, abstract: false, final true
  inline void Execute(int32_t index, ::UnityEngine::Jobs::TransformAccess transform);

  /// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
  constexpr ::UnityEngine::Jobs::IJobParallelForTransform* i___UnityEngine__Jobs__IJobParallelForTransform();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TubeBloomPrePassLightCollisionEffectUpdater_InitialiseRaycastsJob();

  // Ctor Parameters [CppParam { name: "effectData", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData>", modifiers: "", def_value:
  // None }, CppParam { name: "raycastCommands", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>", modifiers: "", def_value: None }]
  constexpr TubeBloomPrePassLightCollisionEffectUpdater_InitialiseRaycastsJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData> effectData,
                                                                              ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand> raycastCommands) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5952 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field effectData, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData> effectData;

  /// @brief Field raycastCommands, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand> raycastCommands;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_InitialiseRaycastsJob, effectData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_InitialiseRaycastsJob, raycastCommands) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_InitialiseRaycastsJob) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies TubeBloomPrePassLightCollisionEffectUpdater::EffectData, Unity.Collections.NativeArray`1<T>, UnityEngine.RaycastHit
namespace GlobalNamespace {
// Is value type: true
// CS Name: TubeBloomPrePassLightCollisionEffectUpdater/UpdateHitPointsJob
struct CORDL_TYPE TubeBloomPrePassLightCollisionEffectUpdater_UpdateHitPointsJob {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
  constexpr operator ::UnityEngine::Jobs::IJobParallelForTransform*();

  /// @brief Method Execute, addr 0x59a3940, size 0x1b8, virtual true, abstract: false, final true
  inline void Execute(int32_t index, ::UnityEngine::Jobs::TransformAccess transform);

  /// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
  constexpr ::UnityEngine::Jobs::IJobParallelForTransform* i___UnityEngine__Jobs__IJobParallelForTransform();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TubeBloomPrePassLightCollisionEffectUpdater_UpdateHitPointsJob();

  // Ctor Parameters [CppParam { name: "effectData", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData>", modifiers: "", def_value:
  // None }, CppParam { name: "raycastHits", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>", modifiers: "", def_value: None }]
  constexpr TubeBloomPrePassLightCollisionEffectUpdater_UpdateHitPointsJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData> effectData,
                                                                           ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> raycastHits) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5953 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field effectData, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData> effectData;

  /// @brief Field raycastHits, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> raycastHits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_UpdateHitPointsJob, effectData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_UpdateHitPointsJob, raycastHits) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_UpdateHitPointsJob) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies TubeBloomPrePassLightCollisionEffect, TubeBloomPrePassLightCollisionEffectUpdater::EffectData, Unity.Collections.NativeArray`1<T>, Unity.Jobs.JobHandle,
// UnityEngine.Jobs.TransformAccessArray, UnityEngine.MonoBehaviour, UnityEngine.RaycastCommand, UnityEngine.RaycastHit, UnityEngine.Transform
namespace GlobalNamespace {
// Is value type: false
// CS Name: TubeBloomPrePassLightCollisionEffectUpdater
class CORDL_TYPE TubeBloomPrePassLightCollisionEffectUpdater : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using EffectData = ::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData;

  using ExtractScaleJob = ::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_ExtractScaleJob;

  using InitialiseRaycastsJob = ::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_InitialiseRaycastsJob;

  using UpdateHitPointsJob = ::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_UpdateHitPointsJob;

  /// @brief Field _effectData, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get__effectData,
                      put = __cordl_internal_set__effectData)) ::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData>
      _effectData;

  /// @brief Field _effectTransforms, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__effectTransforms, put = __cordl_internal_set__effectTransforms)) ::UnityEngine::Jobs::TransformAccessArray _effectTransforms;

  /// @brief Field _effects, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__effects, put = __cordl_internal_set__effects)) ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLightCollisionEffect>> _effects;

  /// @brief Field _finalJobHandle, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__finalJobHandle, put = __cordl_internal_set__finalJobHandle)) ::Unity::Jobs::JobHandle _finalJobHandle;

  /// @brief Field _hitPointRoots, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__hitPointRoots, put = __cordl_internal_set__hitPointRoots)) ::ArrayW<::UnityW<::UnityEngine::Transform>> _hitPointRoots;

  /// @brief Field _hitPointTransforms, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__hitPointTransforms, put = __cordl_internal_set__hitPointTransforms)) ::UnityEngine::Jobs::TransformAccessArray _hitPointTransforms;

  /// @brief Field _numEffects, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__numEffects, put = __cordl_internal_set__numEffects)) int32_t _numEffects;

  /// @brief Field _raycastCommands, offset 0x70, size 0x10
  __declspec(property(get = __cordl_internal_get__raycastCommands, put = __cordl_internal_set__raycastCommands)) ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand> _raycastCommands;

  /// @brief Field _raycastResults, offset 0x80, size 0x10
  __declspec(property(get = __cordl_internal_get__raycastResults, put = __cordl_internal_set__raycastResults)) ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> _raycastResults;

  /// @brief Field _scalingTransforms, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__scalingTransforms, put = __cordl_internal_set__scalingTransforms)) ::UnityEngine::Jobs::TransformAccessArray _scalingTransforms;

  /// @brief Method Add, addr 0x59a29d0, size 0x1b8, virtual false, abstract: false, final false
  inline void Add(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect* effect);

  /// @brief Method Awake, addr 0x59a300c, size 0x74, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ExpandCapacity, addr 0x59a3080, size 0x204, virtual false, abstract: false, final false
  inline void ExpandCapacity(int32_t size);

  /// @brief Method LateUpdate, addr 0x59a34ec, size 0x130, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater* New_ctor();

  /// @brief Method OnDestroy, addr 0x59a361c, size 0x140, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Remove, addr 0x59a2d68, size 0x190, virtual false, abstract: false, final false
  inline void Remove(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect* effect);

  /// @brief Method Update, addr 0x59a3284, size 0x268, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData> const& __cordl_internal_get__effectData() const;

  constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData>& __cordl_internal_get__effectData();

  constexpr ::UnityEngine::Jobs::TransformAccessArray const& __cordl_internal_get__effectTransforms() const;

  constexpr ::UnityEngine::Jobs::TransformAccessArray& __cordl_internal_get__effectTransforms();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLightCollisionEffect>> const& __cordl_internal_get__effects() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLightCollisionEffect>>& __cordl_internal_get__effects();

  constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get__finalJobHandle() const;

  constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get__finalJobHandle();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__hitPointRoots() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__hitPointRoots();

  constexpr ::UnityEngine::Jobs::TransformAccessArray const& __cordl_internal_get__hitPointTransforms() const;

  constexpr ::UnityEngine::Jobs::TransformAccessArray& __cordl_internal_get__hitPointTransforms();

  constexpr int32_t const& __cordl_internal_get__numEffects() const;

  constexpr int32_t& __cordl_internal_get__numEffects();

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand> const& __cordl_internal_get__raycastCommands() const;

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>& __cordl_internal_get__raycastCommands();

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> const& __cordl_internal_get__raycastResults() const;

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>& __cordl_internal_get__raycastResults();

  constexpr ::UnityEngine::Jobs::TransformAccessArray const& __cordl_internal_get__scalingTransforms() const;

  constexpr ::UnityEngine::Jobs::TransformAccessArray& __cordl_internal_get__scalingTransforms();

  constexpr void __cordl_internal_set__effectData(::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData> value);

  constexpr void __cordl_internal_set__effectTransforms(::UnityEngine::Jobs::TransformAccessArray value);

  constexpr void __cordl_internal_set__effects(::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLightCollisionEffect>> value);

  constexpr void __cordl_internal_set__finalJobHandle(::Unity::Jobs::JobHandle value);

  constexpr void __cordl_internal_set__hitPointRoots(::ArrayW<::UnityW<::UnityEngine::Transform>> value);

  constexpr void __cordl_internal_set__hitPointTransforms(::UnityEngine::Jobs::TransformAccessArray value);

  constexpr void __cordl_internal_set__numEffects(int32_t value);

  constexpr void __cordl_internal_set__raycastCommands(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand> value);

  constexpr void __cordl_internal_set__raycastResults(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> value);

  constexpr void __cordl_internal_set__scalingTransforms(::UnityEngine::Jobs::TransformAccessArray value);

  /// @brief Method .ctor, addr 0x59a375c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TubeBloomPrePassLightCollisionEffectUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TubeBloomPrePassLightCollisionEffectUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TubeBloomPrePassLightCollisionEffectUpdater(TubeBloomPrePassLightCollisionEffectUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TubeBloomPrePassLightCollisionEffectUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TubeBloomPrePassLightCollisionEffectUpdater(TubeBloomPrePassLightCollisionEffectUpdater const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5954 };

  /// @brief Field kInitialCapacity offset 0xffffffff size 0x4
  static constexpr int32_t kInitialCapacity{ static_cast<int32_t>(0x400) };

  /// @brief Field kTransformsPerRoot offset 0xffffffff size 0x4
  static constexpr int32_t kTransformsPerRoot{ static_cast<int32_t>(0x40) };

  /// @brief Field _numEffects, offset: 0x20, size: 0x4, def value: None
  int32_t ____numEffects;

  /// @brief Field _effects, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLightCollisionEffect>> ____effects;

  /// @brief Field _finalJobHandle, offset: 0x30, size: 0x10, def value: None
  ::Unity::Jobs::JobHandle ____finalJobHandle;

  /// @brief Field _hitPointRoots, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>> ____hitPointRoots;

  /// @brief Field _effectTransforms, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Jobs::TransformAccessArray ____effectTransforms;

  /// @brief Field _scalingTransforms, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Jobs::TransformAccessArray ____scalingTransforms;

  /// @brief Field _hitPointTransforms, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Jobs::TransformAccessArray ____hitPointTransforms;

  /// @brief Field _effectData, offset: 0x60, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData> ____effectData;

  /// @brief Field _raycastCommands, offset: 0x70, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand> ____raycastCommands;

  /// @brief Field _raycastResults, offset: 0x80, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> ____raycastResults;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater, ____numEffects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater, ____effects) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater, ____finalJobHandle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater, ____hitPointRoots) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater, ____effectTransforms) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater, ____scalingTransforms) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater, ____hitPointTransforms) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater, ____effectData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater, ____raycastCommands) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater, ____raycastResults) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater) == 0x90, "Size mismatch!");

} // namespace GlobalNamespace
