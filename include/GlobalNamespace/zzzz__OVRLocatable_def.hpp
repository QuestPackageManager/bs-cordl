#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRLocatable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRLocatable)
namespace GlobalNamespace {
template <typename T> class IOVRAnchorComponent_1;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
struct OVRLocatable_CopyPosesJob;
}
namespace GlobalNamespace {
struct OVRLocatable_GetSceneAnchorPosesJob;
}
namespace GlobalNamespace {
struct OVRLocatable_GetSpatialAnchorPosesJob;
}
namespace GlobalNamespace {
struct OVRLocatable_SetLocalSpaceTransformsJob;
}
namespace GlobalNamespace {
struct OVRLocatable_SetWorldSpaceTransformsJob;
}
namespace GlobalNamespace {
struct OVRLocatable_TrackingSpacePose;
}
namespace GlobalNamespace {
struct OVRLocatable_TransformPosesJob;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceComponentType;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceLocationFlags;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
class IJobFor;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Jobs {
class IJobParallelForTransform;
}
namespace UnityEngine::Jobs {
struct TransformAccessArray;
}
namespace UnityEngine::Jobs {
struct TransformAccess;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRLocatable;
}
namespace GlobalNamespace {
struct OVRLocatable_CopyPosesJob;
}
namespace GlobalNamespace {
struct OVRLocatable_GetSceneAnchorPosesJob;
}
namespace GlobalNamespace {
struct OVRLocatable_GetSpatialAnchorPosesJob;
}
namespace GlobalNamespace {
struct OVRLocatable_SetLocalSpaceTransformsJob;
}
namespace GlobalNamespace {
struct OVRLocatable_SetWorldSpaceTransformsJob;
}
namespace GlobalNamespace {
struct OVRLocatable_TrackingSpacePose;
}
namespace GlobalNamespace {
struct OVRLocatable_TransformPosesJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRLocatable);
MARK_VAL_T(::GlobalNamespace::OVRLocatable_CopyPosesJob);
MARK_VAL_T(::GlobalNamespace::OVRLocatable_GetSceneAnchorPosesJob);
MARK_VAL_T(::GlobalNamespace::OVRLocatable_GetSpatialAnchorPosesJob);
MARK_VAL_T(::GlobalNamespace::OVRLocatable_SetLocalSpaceTransformsJob);
MARK_VAL_T(::GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob);
MARK_VAL_T(::GlobalNamespace::OVRLocatable_TrackingSpacePose);
MARK_VAL_T(::GlobalNamespace::OVRLocatable_TransformPosesJob);
// Dependencies OVRPlugin::SpaceLocationFlags, System.Nullable`1<T>, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRLocatable/TrackingSpacePose
struct CORDL_TYPE OVRLocatable_TrackingSpacePose {
public:
  // Declarations
  __declspec(property(get = get_IsPositionTracked)) bool IsPositionTracked;

  __declspec(property(get = get_IsRotationTracked)) bool IsRotationTracked;

  __declspec(property(get = get_Position)) ::System::Nullable_1<::UnityEngine::Vector3> Position;

  __declspec(property(get = get_Rotation)) ::System::Nullable_1<::UnityEngine::Quaternion> Rotation;

  /// @brief Method ComputeWorldPosition, addr 0x5bfb3ec, size 0x288, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::Vector3> ComputeWorldPosition(::UnityEngine::Camera* camera);

  /// @brief Method ComputeWorldPosition, addr 0x5bfbf44, size 0x14c, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::Vector3> ComputeWorldPosition(::UnityEngine::Transform* trackingSpaceToWorldSpaceTransform);

  /// @brief Method ComputeWorldRotation, addr 0x5bfbc78, size 0x2cc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::Quaternion> ComputeWorldRotation(::UnityEngine::Camera* camera);

  /// @brief Method ComputeWorldRotation, addr 0x5bfc090, size 0x1e4, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::Quaternion> ComputeWorldRotation(::UnityEngine::Transform* trackingSpaceToWorldSpaceTransform);

  /// @brief Method .ctor, addr 0x5bf9fc8, size 0x170, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::GlobalNamespace::OVRPlugin_SpaceLocationFlags flags);

  /// @brief Method get_IsPositionTracked, addr 0x5bfb334, size 0x5c, virtual false, abstract: false, final false
  inline bool get_IsPositionTracked();

  /// @brief Method get_IsRotationTracked, addr 0x5bfb390, size 0x5c, virtual false, abstract: false, final false
  inline bool get_IsRotationTracked();

  /// @brief Method get_Position, addr 0x5bfb314, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::Vector3> get_Position();

  /// @brief Method get_Rotation, addr 0x5bfb320, size 0x14, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::Quaternion> get_Rotation();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRLocatable_TrackingSpacePose();

  // Ctor Parameters [CppParam { name: "_Position_k__BackingField", ty: "::System::Nullable_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "_Rotation_k__BackingField",
  // ty: "::System::Nullable_1<::UnityEngine::Quaternion>", modifiers: "", def_value: None }, CppParam { name: "Flags", ty: "::GlobalNamespace::OVRPlugin_SpaceLocationFlags", modifiers: "", def_value:
  // None }]
  constexpr OVRLocatable_TrackingSpacePose(::System::Nullable_1<::UnityEngine::Vector3> _Position_k__BackingField, ::System::Nullable_1<::UnityEngine::Quaternion> _Rotation_k__BackingField,
                                           ::GlobalNamespace::OVRPlugin_SpaceLocationFlags Flags) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7076 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field localToWorldPoseDeprecationMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString localToWorldPoseDeprecationMessage{
    u"Using this method after \'await locatable.SetEnabledAsync(true);\' is error-prone. OVRTask finishes the execution before OVRCameraRig.Update(), so camera will still use a pose from the "
    u"previous frame. This results in descrepancy when localizing anchors against the stale camera pose.\nUse an overload with the \'trackingSpaceToWorldSpaceTransform\' parameter instead."
  };

  /// @brief Field <Position>k__BackingField, offset: 0x0, size: 0x10, def value: None
  ::System::Nullable_1<::UnityEngine::Vector3> _Position_k__BackingField;

  /// @brief Field <Rotation>k__BackingField, offset: 0x10, size: 0x14, def value: None
  ::System::Nullable_1<::UnityEngine::Quaternion> _Rotation_k__BackingField;

  /// @brief Field Flags, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OVRPlugin_SpaceLocationFlags Flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRLocatable_TrackingSpacePose, _Position_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRLocatable_TrackingSpacePose, _Rotation_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRLocatable_TrackingSpacePose, Flags) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRLocatable_TrackingSpacePose, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRLocatable
struct CORDL_TYPE OVRLocatable {
public:
  // Declarations
  using CopyPosesJob = ::GlobalNamespace::OVRLocatable_CopyPosesJob;

  using GetSceneAnchorPosesJob = ::GlobalNamespace::OVRLocatable_GetSceneAnchorPosesJob;

  using GetSpatialAnchorPosesJob = ::GlobalNamespace::OVRLocatable_GetSpatialAnchorPosesJob;

  using SetLocalSpaceTransformsJob = ::GlobalNamespace::OVRLocatable_SetLocalSpaceTransformsJob;

  using SetWorldSpaceTransformsJob = ::GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob;

  using TrackingSpacePose = ::GlobalNamespace::OVRLocatable_TrackingSpacePose;

  using TransformPosesJob = ::GlobalNamespace::OVRLocatable_TransformPosesJob;

  __declspec(property(get = get_Handle)) uint64_t Handle;

  __declspec(property(get = IOVRAnchorComponent_OVRLocatable__get_Handle)) uint64_t IOVRAnchorComponent_OVRLocatable__Handle;

  __declspec(property(get = IOVRAnchorComponent_OVRLocatable__get_Type)) ::GlobalNamespace::OVRPlugin_SpaceComponentType IOVRAnchorComponent_OVRLocatable__Type;

  __declspec(property(get = get_IsEnabled)) bool IsEnabled;

  __declspec(property(get = get_IsNull)) bool IsNull;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Null, put = setStaticF_Null)) ::GlobalNamespace::OVRLocatable Null;

  __declspec(property(get = get_Type)) ::GlobalNamespace::OVRPlugin_SpaceComponentType Type;

  /// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRLocatable>"
  constexpr operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRLocatable>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRLocatable>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::OVRLocatable>*();

  /// @brief Method Equals, addr 0x5bf9cdc, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x5bf9b8c, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::OVRLocatable other);

  /// @brief Method GetHashCode, addr 0x5bf9d6c, size 0x68, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IOVRAnchorComponent<OVRLocatable>.FromAnchor, addr 0x5bf9698, size 0x30, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRLocatable IOVRAnchorComponent_OVRLocatable__FromAnchor(::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method IOVRAnchorComponent<OVRLocatable>.get_Handle, addr 0x5bf9640, size 0x58, virtual true, abstract: false, final true
  inline uint64_t IOVRAnchorComponent_OVRLocatable__get_Handle();

  /// @brief Method IOVRAnchorComponent<OVRLocatable>.get_Type, addr 0x5bf95e4, size 0x54, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRPlugin_SpaceComponentType IOVRAnchorComponent_OVRLocatable__get_Type();

  /// @brief Method ScheduleUpdateTransforms, addr 0x5bfa268, size 0x5e0, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleUpdateTransforms(::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable> locatables, ::UnityEngine::Jobs::TransformAccessArray transforms,
                                                                  ::UnityEngine::Transform* trackingSpaceToWorldSpaceTransform,
                                                                  ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose> posesOut, ::Unity::Jobs::JobHandle inputDeps);

  /// @brief Method SetEnabledAsync, addr 0x5bf9878, size 0x29c, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRTask_1<bool> SetEnabledAsync(bool enabled, double_t timeout);

  /// @brief Method SetEnabledSafeAsync, addr 0x5bf9b14, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<bool> SetEnabledSafeAsync(bool enabled, double_t timeout);

  /// @brief Method ToString, addr 0x5bf9dd4, size 0xc0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryGetSceneAnchorPose, addr 0x5bf9e9c, size 0x124, virtual false, abstract: false, final false
  inline bool TryGetSceneAnchorPose(::ByRef<::GlobalNamespace::OVRLocatable_TrackingSpacePose> pose);

  /// @brief Method TryGetSpatialAnchorPose, addr 0x5bfa138, size 0x124, virtual false, abstract: false, final false
  inline bool TryGetSpatialAnchorPose(::ByRef<::GlobalNamespace::OVRLocatable_TrackingSpacePose> pose);

  /// @brief Method UpdateSceneAnchorTransforms, addr 0x5bfa848, size 0xa34, virtual false, abstract: false, final false
  static inline void
  UpdateSceneAnchorTransforms(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRAnchor, ::UnityW<::UnityEngine::Transform>>>* anchors,
                              ::UnityEngine::Transform* trackingSpaceToWorldSpaceTransform,
                              ::System::Collections::Generic::List_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>* trackingSpacePoses);

  /// @brief Method <UpdateSceneAnchorTransforms>g__GetLocatableOrDefault|34_0, addr 0x5bfb27c, size 0x94, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRLocatable _UpdateSceneAnchorTransforms_g__GetLocatableOrDefault_34_0(::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method .ctor, addr 0x5bf96c8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRAnchor anchor);

  static inline ::GlobalNamespace::OVRLocatable getStaticF_Null();

  /// @brief Method get_Handle, addr 0x5bf9e94, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_Handle();

  /// @brief Method get_IsEnabled, addr 0x5bf9790, size 0xe8, virtual true, abstract: false, final true
  inline bool get_IsEnabled();

  /// @brief Method get_IsNull, addr 0x5bf9730, size 0x60, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_Type, addr 0x5bf9638, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_SpaceComponentType get_Type();

  /// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRLocatable>"
  constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRLocatable>* i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRLocatable_();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRLocatable>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::OVRLocatable>* i___System__IEquatable_1___GlobalNamespace__OVRLocatable_();

  /// @brief Method op_Equality, addr 0x5bf9bf8, size 0x70, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::OVRLocatable lhs, ::GlobalNamespace::OVRLocatable rhs);

  /// @brief Method op_Inequality, addr 0x5bf9c68, size 0x74, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::OVRLocatable lhs, ::GlobalNamespace::OVRLocatable rhs);

  static inline void setStaticF_Null(::GlobalNamespace::OVRLocatable value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRLocatable();

  // Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr OVRLocatable(uint64_t _Handle_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7083 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
  uint64_t _Handle_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRLocatable, _Handle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRLocatable, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRLocatable, OVRLocatable::TrackingSpacePose, Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRLocatable/GetSceneAnchorPosesJob
struct CORDL_TYPE OVRLocatable_GetSceneAnchorPosesJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobFor"
  constexpr operator ::Unity::Jobs::IJobFor*();

  /// @brief Method Unity.Jobs.IJobFor.Execute, addr 0x5bfc274, size 0xf0, virtual true, abstract: false, final true
  inline void Unity_Jobs_IJobFor_Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobFor"
  constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRLocatable_GetSceneAnchorPosesJob();

  // Ctor Parameters [CppParam { name: "Locatables", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable>", modifiers: "", def_value: None }, CppParam { name: "Poses", ty:
  // "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>", modifiers: "", def_value: None }]
  constexpr OVRLocatable_GetSceneAnchorPosesJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable> Locatables,
                                                ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose> Poses) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7077 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field Locatables, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable> Locatables;

  /// @brief Field Poses, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose> Poses;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRLocatable_GetSceneAnchorPosesJob, Locatables) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRLocatable_GetSceneAnchorPosesJob, Poses) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRLocatable_GetSceneAnchorPosesJob, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRLocatable, OVRLocatable::TrackingSpacePose, Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRLocatable/GetSpatialAnchorPosesJob
struct CORDL_TYPE OVRLocatable_GetSpatialAnchorPosesJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobFor"
  constexpr operator ::Unity::Jobs::IJobFor*();

  /// @brief Method Unity.Jobs.IJobFor.Execute, addr 0x5bfc364, size 0xf0, virtual true, abstract: false, final true
  inline void Unity_Jobs_IJobFor_Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobFor"
  constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRLocatable_GetSpatialAnchorPosesJob();

  // Ctor Parameters [CppParam { name: "Locatables", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable>", modifiers: "", def_value: None }, CppParam { name: "Poses", ty:
  // "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>", modifiers: "", def_value: None }]
  constexpr OVRLocatable_GetSpatialAnchorPosesJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable> Locatables,
                                                  ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose> Poses) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7078 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field Locatables, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable> Locatables;

  /// @brief Field Poses, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose> Poses;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRLocatable_GetSpatialAnchorPosesJob, Locatables) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRLocatable_GetSpatialAnchorPosesJob, Poses) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRLocatable_GetSpatialAnchorPosesJob, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRLocatable::TrackingSpacePose, Unity.Collections.NativeArray`1<T>, UnityEngine.Matrix4x4, UnityEngine.Quaternion
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRLocatable/TransformPosesJob
struct CORDL_TYPE OVRLocatable_TransformPosesJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobFor"
  constexpr operator ::Unity::Jobs::IJobFor*();

  /// @brief Method Unity.Jobs.IJobFor.Execute, addr 0x5bfc454, size 0x284, virtual true, abstract: false, final true
  inline void Unity_Jobs_IJobFor_Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobFor"
  constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRLocatable_TransformPosesJob();

  // Ctor Parameters [CppParam { name: "Poses", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>", modifiers: "", def_value: None }, CppParam { name:
  // "Transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "Rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }]
  constexpr OVRLocatable_TransformPosesJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose> Poses, ::UnityEngine::Matrix4x4 Transform,
                                           ::UnityEngine::Quaternion Rotation) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7079 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field Poses, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose> Poses;

  /// @brief Field Transform, offset: 0x10, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 Transform;

  /// @brief Field Rotation, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Quaternion Rotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRLocatable_TransformPosesJob, Poses) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRLocatable_TransformPosesJob, Transform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRLocatable_TransformPosesJob, Rotation) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRLocatable_TransformPosesJob, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRLocatable::TrackingSpacePose, Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRLocatable/SetWorldSpaceTransformsJob
struct CORDL_TYPE OVRLocatable_SetWorldSpaceTransformsJob {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
  constexpr operator ::UnityEngine::Jobs::IJobParallelForTransform*();

  /// @brief Method UnityEngine.Jobs.IJobParallelForTransform.Execute, addr 0x5bfc6d8, size 0x148, virtual true, abstract: false, final true
  inline void UnityEngine_Jobs_IJobParallelForTransform_Execute(int32_t index, ::UnityEngine::Jobs::TransformAccess transform);

  /// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
  constexpr ::UnityEngine::Jobs::IJobParallelForTransform* i___UnityEngine__Jobs__IJobParallelForTransform();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRLocatable_SetWorldSpaceTransformsJob();

  // Ctor Parameters [CppParam { name: "Poses", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>", modifiers: "", def_value: None }]
  constexpr OVRLocatable_SetWorldSpaceTransformsJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose> Poses) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7080 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Poses, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose> Poses;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob, Poses) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRLocatable::TrackingSpacePose, Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRLocatable/SetLocalSpaceTransformsJob
struct CORDL_TYPE OVRLocatable_SetLocalSpaceTransformsJob {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
  constexpr operator ::UnityEngine::Jobs::IJobParallelForTransform*();

  /// @brief Method Execute, addr 0x5bfc820, size 0x148, virtual true, abstract: false, final true
  inline void Execute(int32_t index, ::UnityEngine::Jobs::TransformAccess transform);

  /// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
  constexpr ::UnityEngine::Jobs::IJobParallelForTransform* i___UnityEngine__Jobs__IJobParallelForTransform();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRLocatable_SetLocalSpaceTransformsJob();

  // Ctor Parameters [CppParam { name: "Poses", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>", modifiers: "", def_value: None }]
  constexpr OVRLocatable_SetLocalSpaceTransformsJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose> Poses) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7081 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Poses, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose> Poses;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRLocatable_SetLocalSpaceTransformsJob, Poses) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRLocatable_SetLocalSpaceTransformsJob, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRLocatable::TrackingSpacePose, Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRLocatable/CopyPosesJob
struct CORDL_TYPE OVRLocatable_CopyPosesJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobFor"
  constexpr operator ::Unity::Jobs::IJobFor*();

  /// @brief Method Execute, addr 0x5bfc968, size 0x2c, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobFor"
  constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRLocatable_CopyPosesJob();

  // Ctor Parameters [CppParam { name: "PosesIn", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>", modifiers: "", def_value: None }, CppParam { name:
  // "PosesOut", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>", modifiers: "", def_value: None }]
  constexpr OVRLocatable_CopyPosesJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose> PosesIn,
                                      ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose> PosesOut) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7082 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field PosesIn, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose> PosesIn;

  /// @brief Field PosesOut, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose> PosesOut;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRLocatable_CopyPosesJob, PosesIn) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRLocatable_CopyPosesJob, PosesOut) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRLocatable_CopyPosesJob, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRLocatable, "", "OVRLocatable");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRLocatable_CopyPosesJob, "", "OVRLocatable/CopyPosesJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRLocatable_GetSceneAnchorPosesJob, "", "OVRLocatable/GetSceneAnchorPosesJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRLocatable_GetSpatialAnchorPosesJob, "", "OVRLocatable/GetSpatialAnchorPosesJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRLocatable_SetLocalSpaceTransformsJob, "", "OVRLocatable/SetLocalSpaceTransformsJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob, "", "OVRLocatable/SetWorldSpaceTransformsJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRLocatable_TrackingSpacePose, "", "OVRLocatable/TrackingSpacePose");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRLocatable_TransformPosesJob, "", "OVRLocatable/TransformPosesJob");
