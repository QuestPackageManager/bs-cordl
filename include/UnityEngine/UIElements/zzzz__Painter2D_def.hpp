#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Painter2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__MemoryLabel_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__FillGradient_def.hpp"
#include "UnityEngine/UIElements/zzzz__SafeHandleAccess_def.hpp"
#include "UnityEngine/UIElements/zzzz__TempMeshAllocator_def.hpp"
#include "UnityEngine/UIElements/zzzz__UnsafeMeshGenerationNode_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Painter2D)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
namespace UnityEngine::UIElements::UIR {
class DetachedAllocator;
}
namespace UnityEngine::UIElements::UIR {
class MeshGenerationCallback;
}
namespace UnityEngine::UIElements {
struct Painter2D_Painter2DJobData;
}
namespace UnityEngine::UIElements {
struct Painter2D_Painter2DJob;
}
namespace UnityEngine::UIElements {
class VectorImage;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Painter2D;
}
namespace UnityEngine::UIElements {
struct Painter2D_Painter2DJob;
}
namespace UnityEngine::UIElements {
struct Painter2D_Painter2DJobData;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::Painter2D*);
MARK_VAL_T(::UnityEngine::UIElements::Painter2D_Painter2DJob);
MARK_VAL_T(::UnityEngine::UIElements::Painter2D_Painter2DJobData);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Painter2D*, "UnityEngine.UIElements", "Painter2D");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Painter2D_Painter2DJob, "UnityEngine.UIElements", "Painter2D/Painter2DJob");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Painter2D_Painter2DJobData, "UnityEngine.UIElements", "Painter2D/Painter2DJobData");
// Dependencies System.IntPtr, UnityEngine.UIElements.UnsafeMeshGenerationNode
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.Painter2D/Painter2DJobData
struct CORDL_TYPE Painter2D_Painter2DJobData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Painter2D_Painter2DJobData();

  // Ctor Parameters [CppParam { name: "node", ty: "::UnityEngine::UIElements::UnsafeMeshGenerationNode", modifiers: "", def_value: None, comment: None }, CppParam { name: "snapshotIndex", ty:
  // "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "vectorImagePtr", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "texturePtr", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
  constexpr Painter2D_Painter2DJobData(::UnityEngine::UIElements::UnsafeMeshGenerationNode node, int32_t snapshotIndex, ::System::IntPtr vectorImagePtr, ::System::IntPtr texturePtr) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4721 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field node, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UnsafeMeshGenerationNode node;

  /// @brief Field snapshotIndex, offset: 0x8, size: 0x4, def value: None
  int32_t snapshotIndex;

  /// @brief Field vectorImagePtr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr vectorImagePtr;

  /// @brief Field texturePtr, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr texturePtr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Painter2D_Painter2DJobData, node) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Painter2D_Painter2DJobData, snapshotIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Painter2D_Painter2DJobData, vectorImagePtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Painter2D_Painter2DJobData, texturePtr) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::Painter2D_Painter2DJobData) == 0x20, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.IntPtr, Unity.Collections.NativeSlice`1<T>, UnityEngine.UIElements.Painter2D::Painter2DJobData, UnityEngine.UIElements.TempMeshAllocator
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.Painter2D/Painter2DJob
struct CORDL_TYPE Painter2D_Painter2DJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method Execute, addr 0x7275c04, size 0x3bc, virtual true, abstract: false, final true
  inline void Execute(int32_t i);

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Painter2D_Painter2DJob();

  // Ctor Parameters [CppParam { name: "painterHandle", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "allocator", ty:
  // "::UnityEngine::UIElements::TempMeshAllocator", modifiers: "", def_value: None, comment: None }, CppParam { name: "jobParameters", ty:
  // "::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Painter2D_Painter2DJobData>", modifiers: "", def_value: None, comment: None }]
  constexpr Painter2D_Painter2DJob(::System::IntPtr painterHandle, ::UnityEngine::UIElements::TempMeshAllocator allocator,
                                   ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Painter2D_Painter2DJobData> jobParameters) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4722 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// [NativeDisableUnsafePtrRestriction]
  /// @brief Field painterHandle, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr painterHandle;

  /// [ReadOnly]
  /// @brief Field allocator, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::TempMeshAllocator allocator;

  /// [ReadOnly]
  /// @brief Field jobParameters, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Painter2D_Painter2DJobData> jobParameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Painter2D_Painter2DJob, painterHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Painter2D_Painter2DJob, allocator) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Painter2D_Painter2DJob, jobParameters) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::Painter2D_Painter2DJob) == 0x20, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object, Unity.Collections.MemoryLabel, Unity.Collections.NativeArray`1<T>, Unity.Profiling.ProfilerMarker, UnityEngine.UIElements.FillGradient,
// UnityEngine.UIElements.Painter2D::Painter2DJobData, UnityEngine.UIElements.SafeHandleAccess
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Painter2D
class CORDL_TYPE Painter2D : public ::System::Object {
public:
  // Declarations
  using Painter2DJob = ::UnityEngine::UIElements::Painter2D_Painter2DJob;

  using Painter2DJobData = ::UnityEngine::UIElements::Painter2D_Painter2DJobData;

  /// @brief Field <isPainterActive>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__isPainterActive_k__BackingField, put = setStaticF__isPainterActive_k__BackingField)) bool _isPainterActive_k__BackingField;

  /// @brief Field k_MemoryLabel, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_k_MemoryLabel, put = setStaticF_k_MemoryLabel)) ::Unity::Collections::MemoryLabel k_MemoryLabel;

  /// @brief Field m_CachedDashPattern, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CachedDashPattern, put = __cordl_internal_set_m_CachedDashPattern)) ::System::Collections::Generic::List_1<float_t>* m_CachedDashPattern;

  /// @brief Field m_CachedFillGradient, offset 0x28, size 0x38
  __declspec(property(get = __cordl_internal_get_m_CachedFillGradient, put = __cordl_internal_set_m_CachedFillGradient)) ::UnityEngine::UIElements::FillGradient m_CachedFillGradient;

  /// @brief Field m_CachedFillTexture, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CachedFillTexture, put = __cordl_internal_set_m_CachedFillTexture)) ::UnityW<::UnityEngine::Texture2D> m_CachedFillTexture;

  /// @brief Field m_CachedStrokeFillGradient, offset 0x68, size 0x38
  __declspec(property(get = __cordl_internal_get_m_CachedStrokeFillGradient, put = __cordl_internal_set_m_CachedStrokeFillGradient)) ::UnityEngine::UIElements::FillGradient m_CachedStrokeFillGradient;

  /// @brief Field m_Ctx, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ctx, put = __cordl_internal_set_m_Ctx)) Il2CppObject* m_Ctx;

  /// @brief Field m_DetachedAllocator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DetachedAllocator, put = __cordl_internal_set_m_DetachedAllocator)) ::UnityEngine::UIElements::UIR::DetachedAllocator* m_DetachedAllocator;

  /// @brief Field m_Disposed, offset 0xc8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Disposed, put = __cordl_internal_set_m_Disposed)) bool m_Disposed;

  /// @brief Field m_Handle, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Handle, put = __cordl_internal_set_m_Handle)) ::UnityEngine::UIElements::SafeHandleAccess m_Handle;

  /// @brief Field m_JobParameters, offset 0xb8, size 0x10
  __declspec(property(get = __cordl_internal_get_m_JobParameters,
                      put = __cordl_internal_set_m_JobParameters)) ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Painter2D_Painter2DJobData>
      m_JobParameters;

  /// @brief Field m_JobSnapshots, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_JobSnapshots,
                      put = __cordl_internal_set_m_JobSnapshots)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Painter2D_Painter2DJobData>* m_JobSnapshots;

  /// @brief Field m_OnMeshGenerationDelegate, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnMeshGenerationDelegate,
                      put = __cordl_internal_set_m_OnMeshGenerationDelegate)) ::UnityEngine::UIElements::UIR::MeshGenerationCallback* m_OnMeshGenerationDelegate;

  /// @brief Field m_VectorImageToRelease, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VectorImageToRelease,
                      put = __cordl_internal_set_m_VectorImageToRelease)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::VectorImage>>* m_VectorImageToRelease;

  /// @brief Field s_ClipMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ClipMarker, put = setStaticF_s_ClipMarker)) ::Unity::Profiling::ProfilerMarker s_ClipMarker;

  /// @brief Field s_FillMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_FillMarker, put = setStaticF_s_FillMarker)) ::Unity::Profiling::ProfilerMarker s_FillMarker;

  /// @brief Field s_StrokeMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_StrokeMarker, put = setStaticF_s_StrokeMarker)) ::Unity::Profiling::ProfilerMarker s_StrokeMarker;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x7274870, size 0x68, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x7275540, size 0x25c, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::UnityEngine::UIElements::Painter2D* New_ctor();

  static inline ::UnityEngine::UIElements::Painter2D* New_ctor(Il2CppObject* ctx);

  /// @brief Method OnMeshGeneration, addr 0x7275a60, size 0x44, virtual false, abstract: false, final false
  inline void OnMeshGeneration(Il2CppObject* ctx, ::System::Object* data);

  /// @brief Method Reset, addr 0x7274688, size 0xb0, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method ScheduleJobs, addr 0x7275800, size 0x260, virtual false, abstract: false, final false
  inline void ScheduleJobs(Il2CppObject* mgc);

  constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get_m_CachedDashPattern() const;

  constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_m_CachedDashPattern();

  constexpr ::UnityEngine::UIElements::FillGradient const& __cordl_internal_get_m_CachedFillGradient() const;

  constexpr ::UnityEngine::UIElements::FillGradient& __cordl_internal_get_m_CachedFillGradient();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_m_CachedFillTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_m_CachedFillTexture();

  constexpr ::UnityEngine::UIElements::FillGradient const& __cordl_internal_get_m_CachedStrokeFillGradient() const;

  constexpr ::UnityEngine::UIElements::FillGradient& __cordl_internal_get_m_CachedStrokeFillGradient();

  constexpr Il2CppObject* const& __cordl_internal_get_m_Ctx() const;

  constexpr Il2CppObject*& __cordl_internal_get_m_Ctx();

  constexpr ::UnityEngine::UIElements::UIR::DetachedAllocator* const& __cordl_internal_get_m_DetachedAllocator() const;

  constexpr ::UnityEngine::UIElements::UIR::DetachedAllocator*& __cordl_internal_get_m_DetachedAllocator();

  constexpr bool const& __cordl_internal_get_m_Disposed() const;

  constexpr bool& __cordl_internal_get_m_Disposed();

  constexpr ::UnityEngine::UIElements::SafeHandleAccess const& __cordl_internal_get_m_Handle() const;

  constexpr ::UnityEngine::UIElements::SafeHandleAccess& __cordl_internal_get_m_Handle();

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Painter2D_Painter2DJobData> const& __cordl_internal_get_m_JobParameters() const;

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Painter2D_Painter2DJobData>& __cordl_internal_get_m_JobParameters();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Painter2D_Painter2DJobData>* const& __cordl_internal_get_m_JobSnapshots() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Painter2D_Painter2DJobData>*& __cordl_internal_get_m_JobSnapshots();

  constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback* const& __cordl_internal_get_m_OnMeshGenerationDelegate() const;

  constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback*& __cordl_internal_get_m_OnMeshGenerationDelegate();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::VectorImage>>* const& __cordl_internal_get_m_VectorImageToRelease() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::VectorImage>>*& __cordl_internal_get_m_VectorImageToRelease();

  constexpr void __cordl_internal_set_m_CachedDashPattern(::System::Collections::Generic::List_1<float_t>* value);

  constexpr void __cordl_internal_set_m_CachedFillGradient(::UnityEngine::UIElements::FillGradient value);

  constexpr void __cordl_internal_set_m_CachedFillTexture(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_m_CachedStrokeFillGradient(::UnityEngine::UIElements::FillGradient value);

  constexpr void __cordl_internal_set_m_Ctx(Il2CppObject* value);

  constexpr void __cordl_internal_set_m_DetachedAllocator(::UnityEngine::UIElements::UIR::DetachedAllocator* value);

  constexpr void __cordl_internal_set_m_Disposed(bool value);

  constexpr void __cordl_internal_set_m_Handle(::UnityEngine::UIElements::SafeHandleAccess value);

  constexpr void __cordl_internal_set_m_JobParameters(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Painter2D_Painter2DJobData> value);

  constexpr void __cordl_internal_set_m_JobSnapshots(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Painter2D_Painter2DJobData>* value);

  constexpr void __cordl_internal_set_m_OnMeshGenerationDelegate(::UnityEngine::UIElements::UIR::MeshGenerationCallback* value);

  constexpr void __cordl_internal_set_m_VectorImageToRelease(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::VectorImage>>* value);

  /// @brief Method .ctor, addr 0x727539c, size 0x1a4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x7274038, size 0x1a0, virtual false, abstract: false, final false
  inline void _ctor(Il2CppObject* ctx);

  static inline bool getStaticF__isPainterActive_k__BackingField();

  static inline ::Unity::Collections::MemoryLabel getStaticF_k_MemoryLabel();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ClipMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_FillMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_StrokeMarker();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF__isPainterActive_k__BackingField(bool value);

  static inline void setStaticF_k_MemoryLabel(::Unity::Collections::MemoryLabel value);

  static inline void setStaticF_s_ClipMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_FillMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_StrokeMarker(::Unity::Profiling::ProfilerMarker value);

  /// [CompilerGenerated]
  /// @brief Method set_isPainterActive, addr 0x727579c, size 0x64, virtual false, abstract: false, final false
  static inline void set_isPainterActive(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Painter2D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Painter2D", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Painter2D(Painter2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Painter2D", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Painter2D(Painter2D const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4723 };

  /// @brief Field m_Ctx, offset: 0x10, size: 0x8, def value: None
  Il2CppObject* ___m_Ctx;

  /// @brief Field m_DetachedAllocator, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::DetachedAllocator* ___m_DetachedAllocator;

  /// @brief Field m_Handle, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::SafeHandleAccess ___m_Handle;

  /// @brief Field m_CachedFillGradient, offset: 0x28, size: 0x38, def value: None
  ::UnityEngine::UIElements::FillGradient ___m_CachedFillGradient;

  /// @brief Field m_CachedFillTexture, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___m_CachedFillTexture;

  /// @brief Field m_CachedStrokeFillGradient, offset: 0x68, size: 0x38, def value: None
  ::UnityEngine::UIElements::FillGradient ___m_CachedStrokeFillGradient;

  /// @brief Field m_CachedDashPattern, offset: 0xa0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<float_t>* ___m_CachedDashPattern;

  /// @brief Field m_JobSnapshots, offset: 0xa8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Painter2D_Painter2DJobData>* ___m_JobSnapshots;

  /// @brief Field m_VectorImageToRelease, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::VectorImage>>* ___m_VectorImageToRelease;

  /// @brief Field m_JobParameters, offset: 0xb8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Painter2D_Painter2DJobData> ___m_JobParameters;

  /// @brief Field m_Disposed, offset: 0xc8, size: 0x1, def value: None
  bool ___m_Disposed;

  /// @brief Field m_OnMeshGenerationDelegate, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::MeshGenerationCallback* ___m_OnMeshGenerationDelegate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Painter2D, ___m_Ctx) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Painter2D, ___m_DetachedAllocator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Painter2D, ___m_Handle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Painter2D, ___m_CachedFillGradient) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Painter2D, ___m_CachedFillTexture) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Painter2D, ___m_CachedStrokeFillGradient) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Painter2D, ___m_CachedDashPattern) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Painter2D, ___m_JobSnapshots) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Painter2D, ___m_VectorImageToRelease) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Painter2D, ___m_JobParameters) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Painter2D, ___m_Disposed) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Painter2D, ___m_OnMeshGenerationDelegate) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::Painter2D) == 0xd8, "Size mismatch!");

} // namespace UnityEngine::UIElements
