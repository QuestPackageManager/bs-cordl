#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRScenePlane.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IOVRSceneComponent_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRScenePlane)
namespace GlobalNamespace {
class OVRSceneAnchor;
}
namespace GlobalNamespace {
struct OVRScenePlane_GetBoundaryJob;
}
namespace GlobalNamespace {
struct OVRScenePlane_GetBoundaryLengthJob;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRScenePlane;
}
namespace GlobalNamespace {
struct OVRScenePlane_GetBoundaryJob;
}
namespace GlobalNamespace {
struct OVRScenePlane_GetBoundaryLengthJob;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRScenePlane);
MARK_VAL_T(::GlobalNamespace::OVRScenePlane_GetBoundaryJob);
MARK_VAL_T(::GlobalNamespace::OVRScenePlane_GetBoundaryLengthJob);
// Dependencies OVRSpace, Unity.Collections.NativeArray`1<T>, Unity.Jobs.IJob
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRScenePlane/GetBoundaryLengthJob
struct CORDL_TYPE OVRScenePlane_GetBoundaryLengthJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x400ddb0, size 0x84, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRScenePlane_GetBoundaryLengthJob();

  // Ctor Parameters [CppParam { name: "Space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: None }, CppParam { name: "Length", ty: "::Unity::Collections::NativeArray_1<int32_t>",
  // modifiers: "", def_value: None }]
  constexpr OVRScenePlane_GetBoundaryLengthJob(::GlobalNamespace::OVRSpace Space, ::Unity::Collections::NativeArray_1<int32_t> Length) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8285 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field Space, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::OVRSpace Space;

  /// @brief Field Length, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> Length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRScenePlane_GetBoundaryLengthJob, Space) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane_GetBoundaryLengthJob, Length) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRScenePlane_GetBoundaryLengthJob, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRSpace, Unity.Collections.NativeArray`1<T>, Unity.Jobs.IJob, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRScenePlane/GetBoundaryJob
struct CORDL_TYPE OVRScenePlane_GetBoundaryJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x400deec, size 0xa8, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Method HasBoundaryChanged, addr 0x400de34, size 0xa4, virtual false, abstract: false, final false
  inline bool HasBoundaryChanged();

  /// @brief Method SetNaN, addr 0x400ded8, size 0x14, virtual false, abstract: false, final false
  static inline void SetNaN(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> array);

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRScenePlane_GetBoundaryJob();

  // Ctor Parameters [CppParam { name: "Space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: None }, CppParam { name: "Boundary", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>", modifiers: "", def_value: None }, CppParam { name: "PreviousBoundary", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>", modifiers: "", def_value: None }]
  constexpr OVRScenePlane_GetBoundaryJob(::GlobalNamespace::OVRSpace Space, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> Boundary,
                                         ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> PreviousBoundary) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8286 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field Space, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::OVRSpace Space;

  /// @brief Field Boundary, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> Boundary;

  /// @brief Field PreviousBoundary, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> PreviousBoundary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRScenePlane_GetBoundaryJob, Space) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane_GetBoundaryJob, Boundary) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane_GetBoundaryJob, PreviousBoundary) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRScenePlane_GetBoundaryJob, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IOVRSceneComponent, System.Nullable`1<T>, Unity.Collections.NativeArray`1<T>, Unity.Jobs.JobHandle, UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRScenePlane
class CORDL_TYPE OVRScenePlane : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using GetBoundaryJob = ::GlobalNamespace::OVRScenePlane_GetBoundaryJob;

  using GetBoundaryLengthJob = ::GlobalNamespace::OVRScenePlane_GetBoundaryLengthJob;

  __declspec(property(get = get_Boundary)) ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>* Boundary;

  __declspec(property(get = get_Dimensions)) ::UnityEngine::Vector2 Dimensions;

  __declspec(property(get = get_Height, put = set_Height)) float_t Height;

  __declspec(property(get = get_Offset, put = set_Offset)) ::UnityEngine::Vector2 Offset;

  __declspec(property(get = get_OffsetChildren, put = set_OffsetChildren)) bool OffsetChildren;

  __declspec(property(get = get_ScaleChildren, put = set_ScaleChildren)) bool ScaleChildren;

  __declspec(property(get = get_Width, put = set_Width)) float_t Width;

  /// @brief Field <Height>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__Height_k__BackingField, put = __cordl_internal_set__Height_k__BackingField)) float_t _Height_k__BackingField;

  /// @brief Field <Offset>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Offset_k__BackingField, put = __cordl_internal_set__Offset_k__BackingField)) ::UnityEngine::Vector2 _Offset_k__BackingField;

  /// @brief Field <Width>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__Width_k__BackingField, put = __cordl_internal_set__Width_k__BackingField)) float_t _Width_k__BackingField;

  /// @brief Field _boundary, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__boundary, put = __cordl_internal_set__boundary)) ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* _boundary;

  /// @brief Field _boundaryBuffer, offset 0x70, size 0x10
  __declspec(property(get = __cordl_internal_get__boundaryBuffer, put = __cordl_internal_set__boundaryBuffer)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> _boundaryBuffer;

  /// @brief Field _boundaryLength, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get__boundaryLength, put = __cordl_internal_set__boundaryLength)) ::Unity::Collections::NativeArray_1<int32_t> _boundaryLength;

  /// @brief Field _boundaryRequested, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get__boundaryRequested, put = __cordl_internal_set__boundaryRequested)) bool _boundaryRequested;

  /// @brief Field _jobHandle, offset 0x38, size 0x18
  __declspec(property(get = __cordl_internal_get__jobHandle, put = __cordl_internal_set__jobHandle)) ::System::Nullable_1<::Unity::Jobs::JobHandle> _jobHandle;

  /// @brief Field _offsetChildren, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get__offsetChildren, put = __cordl_internal_set__offsetChildren)) bool _offsetChildren;

  /// @brief Field _previousBoundary, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get__previousBoundary, put = __cordl_internal_set__previousBoundary)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> _previousBoundary;

  /// @brief Field _scaleChildren, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__scaleChildren, put = __cordl_internal_set__scaleChildren)) bool _scaleChildren;

  /// @brief Field _sceneAnchor, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneAnchor, put = __cordl_internal_set__sceneAnchor)) ::UnityW<::GlobalNamespace::OVRSceneAnchor> _sceneAnchor;

  /// @brief Convert operator to "::GlobalNamespace::IOVRSceneComponent"
  constexpr operator ::GlobalNamespace::IOVRSceneComponent*() noexcept;

  /// @brief Method Awake, addr 0x400d384, size 0xd4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method IOVRSceneComponent.Initialize, addr 0x400d45c, size 0x4, virtual true, abstract: false, final true
  inline void IOVRSceneComponent_Initialize();

  static inline ::GlobalNamespace::OVRScenePlane* New_ctor();

  /// @brief Method OnDisable, addr 0x400dc54, size 0xd8, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method RequestBoundary, addr 0x400a720, size 0x30, virtual false, abstract: false, final false
  inline void RequestBoundary();

  /// @brief Method ScheduleGetLengthJob, addr 0x400d460, size 0x184, virtual false, abstract: false, final false
  inline void ScheduleGetLengthJob();

  /// @brief Method SetChildOffset, addr 0x400d258, size 0x12c, virtual false, abstract: false, final false
  inline void SetChildOffset();

  /// @brief Method SetChildScale, addr 0x400d0d8, size 0x144, virtual false, abstract: false, final false
  inline void SetChildScale();

  /// @brief Method Start, addr 0x400d458, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x400d5e4, size 0x640, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateTransform, addr 0x400a5a4, size 0x17c, virtual false, abstract: false, final false
  inline void UpdateTransform();

  constexpr float_t const& __cordl_internal_get__Height_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__Height_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__Offset_k__BackingField() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__Offset_k__BackingField();

  constexpr float_t const& __cordl_internal_get__Width_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__Width_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* const& __cordl_internal_get__boundary() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& __cordl_internal_get__boundary();

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& __cordl_internal_get__boundaryBuffer() const;

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& __cordl_internal_get__boundaryBuffer();

  constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get__boundaryLength() const;

  constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get__boundaryLength();

  constexpr bool const& __cordl_internal_get__boundaryRequested() const;

  constexpr bool& __cordl_internal_get__boundaryRequested();

  constexpr ::System::Nullable_1<::Unity::Jobs::JobHandle> const& __cordl_internal_get__jobHandle() const;

  constexpr ::System::Nullable_1<::Unity::Jobs::JobHandle>& __cordl_internal_get__jobHandle();

  constexpr bool const& __cordl_internal_get__offsetChildren() const;

  constexpr bool& __cordl_internal_get__offsetChildren();

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& __cordl_internal_get__previousBoundary() const;

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& __cordl_internal_get__previousBoundary();

  constexpr bool const& __cordl_internal_get__scaleChildren() const;

  constexpr bool& __cordl_internal_get__scaleChildren();

  constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor> const& __cordl_internal_get__sceneAnchor() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor>& __cordl_internal_get__sceneAnchor();

  constexpr void __cordl_internal_set__Height_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__Offset_k__BackingField(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__Width_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__boundary(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* value);

  constexpr void __cordl_internal_set__boundaryBuffer(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> value);

  constexpr void __cordl_internal_set__boundaryLength(::Unity::Collections::NativeArray_1<int32_t> value);

  constexpr void __cordl_internal_set__boundaryRequested(bool value);

  constexpr void __cordl_internal_set__jobHandle(::System::Nullable_1<::Unity::Jobs::JobHandle> value);

  constexpr void __cordl_internal_set__offsetChildren(bool value);

  constexpr void __cordl_internal_set__previousBoundary(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> value);

  constexpr void __cordl_internal_set__scaleChildren(bool value);

  constexpr void __cordl_internal_set__sceneAnchor(::UnityW<::GlobalNamespace::OVRSceneAnchor> value);

  /// @brief Method .ctor, addr 0x400dd2c, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Boundary, addr 0x400d094, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>* get_Boundary();

  /// @brief Method get_Dimensions, addr 0x400d08c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_Dimensions();

  /// @brief Method get_Height, addr 0x400d06c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Height();

  /// @brief Method get_Offset, addr 0x400d07c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_Offset();

  /// @brief Method get_OffsetChildren, addr 0x400d21c, size 0x8, virtual false, abstract: false, final false
  inline bool get_OffsetChildren();

  /// @brief Method get_ScaleChildren, addr 0x400d09c, size 0x8, virtual false, abstract: false, final false
  inline bool get_ScaleChildren();

  /// @brief Method get_Width, addr 0x400d05c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Width();

  /// @brief Convert to "::GlobalNamespace::IOVRSceneComponent"
  constexpr ::GlobalNamespace::IOVRSceneComponent* i___GlobalNamespace__IOVRSceneComponent() noexcept;

  /// @brief Method set_Height, addr 0x400d074, size 0x8, virtual false, abstract: false, final false
  inline void set_Height(float_t value);

  /// @brief Method set_Offset, addr 0x400d084, size 0x8, virtual false, abstract: false, final false
  inline void set_Offset(::UnityEngine::Vector2 value);

  /// @brief Method set_OffsetChildren, addr 0x400d224, size 0x34, virtual false, abstract: false, final false
  inline void set_OffsetChildren(bool value);

  /// @brief Method set_ScaleChildren, addr 0x400d0a4, size 0x34, virtual false, abstract: false, final false
  inline void set_ScaleChildren(bool value);

  /// @brief Method set_Width, addr 0x400d064, size 0x8, virtual false, abstract: false, final false
  inline void set_Width(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRScenePlane();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRScenePlane", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRScenePlane(OVRScenePlane&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRScenePlane", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRScenePlane(OVRScenePlane const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8287 };

  /// @brief Field <Width>k__BackingField, offset: 0x20, size: 0x4, def value: None
  float_t ____Width_k__BackingField;

  /// @brief Field <Height>k__BackingField, offset: 0x24, size: 0x4, def value: None
  float_t ____Height_k__BackingField;

  /// @brief Field <Offset>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____Offset_k__BackingField;

  /// @brief Field _scaleChildren, offset: 0x30, size: 0x1, def value: None
  bool ____scaleChildren;

  /// @brief Field _offsetChildren, offset: 0x31, size: 0x1, def value: None
  bool ____offsetChildren;

  /// @brief Field _jobHandle, offset: 0x38, size: 0x18, def value: None
  ::System::Nullable_1<::Unity::Jobs::JobHandle> ____jobHandle;

  /// @brief Field _previousBoundary, offset: 0x50, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> ____previousBoundary;

  /// @brief Field _boundaryLength, offset: 0x60, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> ____boundaryLength;

  /// @brief Field _boundaryBuffer, offset: 0x70, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> ____boundaryBuffer;

  /// @brief Field _boundaryRequested, offset: 0x80, size: 0x1, def value: None
  bool ____boundaryRequested;

  /// @brief Field _sceneAnchor, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSceneAnchor> ____sceneAnchor;

  /// @brief Field _boundary, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* ____boundary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____Width_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____Height_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____Offset_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____scaleChildren) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____offsetChildren) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____jobHandle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____previousBoundary) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____boundaryLength) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____boundaryBuffer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____boundaryRequested) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____sceneAnchor) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____boundary) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRScenePlane, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRScenePlane);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRScenePlane*, "", "OVRScenePlane");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRScenePlane_GetBoundaryJob, "", "OVRScenePlane/GetBoundaryJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRScenePlane_GetBoundaryLengthJob, "", "OVRScenePlane/GetBoundaryLengthJob");
