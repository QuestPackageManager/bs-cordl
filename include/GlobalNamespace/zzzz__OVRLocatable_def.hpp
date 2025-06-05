#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRLocatable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IOVRAnchorComponent_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRLocatable)
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
struct OVRLocatable_TrackingSpacePose;
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
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRLocatable;
}
namespace GlobalNamespace {
struct OVRLocatable_TrackingSpacePose;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRLocatable);
MARK_VAL_T(::GlobalNamespace::OVRLocatable_TrackingSpacePose);
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

  /// @brief Method ComputeWorldPosition, addr 0x3f9d820, size 0x29c, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::Vector3> ComputeWorldPosition(::UnityEngine::Camera* camera);

  /// @brief Method ComputeWorldRotation, addr 0x3f9e038, size 0x2e8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::Quaternion> ComputeWorldRotation(::UnityEngine::Camera* camera);

  /// @brief Method .ctor, addr 0x3f9d490, size 0x18c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::GlobalNamespace::OVRPlugin_SpaceLocationFlags flags);

  /// @brief Method get_IsPositionTracked, addr 0x3f9d768, size 0x5c, virtual false, abstract: false, final false
  inline bool get_IsPositionTracked();

  /// @brief Method get_IsRotationTracked, addr 0x3f9d7c4, size 0x5c, virtual false, abstract: false, final false
  inline bool get_IsRotationTracked();

  /// @brief Method get_Position, addr 0x3f9d748, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::Vector3> get_Position();

  /// @brief Method get_Rotation, addr 0x3f9d754, size 0x14, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::Quaternion> get_Rotation();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRLocatable_TrackingSpacePose();

  // Ctor Parameters [CppParam { name: "_Position_k__BackingField", ty: "::System::Nullable_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "_Rotation_k__BackingField",
  // ty: "::System::Nullable_1<::UnityEngine::Quaternion>", modifiers: "", def_value: None }, CppParam { name: "_flags", ty: "::GlobalNamespace::OVRPlugin_SpaceLocationFlags", modifiers: "",
  // def_value: None }]
  constexpr OVRLocatable_TrackingSpacePose(::System::Nullable_1<::UnityEngine::Vector3> _Position_k__BackingField, ::System::Nullable_1<::UnityEngine::Quaternion> _Rotation_k__BackingField,
                                           ::GlobalNamespace::OVRPlugin_SpaceLocationFlags _flags) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7828 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <Position>k__BackingField, offset: 0x0, size: 0x10, def value: None
  ::System::Nullable_1<::UnityEngine::Vector3> _Position_k__BackingField;

  /// @brief Field <Rotation>k__BackingField, offset: 0x10, size: 0x14, def value: None
  ::System::Nullable_1<::UnityEngine::Quaternion> _Rotation_k__BackingField;

  /// @brief Field _flags, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OVRPlugin_SpaceLocationFlags _flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRLocatable_TrackingSpacePose, _Position_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRLocatable_TrackingSpacePose, _Rotation_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRLocatable_TrackingSpacePose, _flags) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRLocatable_TrackingSpacePose, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IOVRAnchorComponent`1<T>, System.IEquatable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRLocatable
struct CORDL_TYPE OVRLocatable {
public:
  // Declarations
  using TrackingSpacePose = ::GlobalNamespace::OVRLocatable_TrackingSpacePose;

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

  /// @brief Method Equals, addr 0x3f9d19c, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x3f9d058, size 0x68, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::OVRLocatable other);

  /// @brief Method GetHashCode, addr 0x3f9d22c, size 0x90, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IOVRAnchorComponent<OVRLocatable>.FromAnchor, addr 0x3f9cd7c, size 0x30, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRLocatable IOVRAnchorComponent_OVRLocatable__FromAnchor(::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method IOVRAnchorComponent<OVRLocatable>.get_Handle, addr 0x3f9cd28, size 0x54, virtual true, abstract: false, final true
  inline uint64_t IOVRAnchorComponent_OVRLocatable__get_Handle();

  /// @brief Method IOVRAnchorComponent<OVRLocatable>.get_Type, addr 0x3f9ccd0, size 0x50, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRPlugin_SpaceComponentType IOVRAnchorComponent_OVRLocatable__get_Type();

  /// @brief Method SetEnabledAsync, addr 0x3f9cf58, size 0x100, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRTask_1<bool> SetEnabledAsync(bool enabled, double_t timeout);

  /// @brief Method ToString, addr 0x3f9d2bc, size 0xa8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryGetSceneAnchorPose, addr 0x3f9d36c, size 0x11c, virtual false, abstract: false, final false
  inline bool TryGetSceneAnchorPose(::ByRef<::GlobalNamespace::OVRLocatable_TrackingSpacePose> pose);

  /// @brief Method TryGetSpatialAnchorPose, addr 0x3f9d61c, size 0x11c, virtual false, abstract: false, final false
  inline bool TryGetSpatialAnchorPose(::ByRef<::GlobalNamespace::OVRLocatable_TrackingSpacePose> pose);

  /// @brief Method .ctor, addr 0x3f9cdac, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRAnchor anchor);

  static inline ::GlobalNamespace::OVRLocatable getStaticF_Null();

  /// @brief Method get_Handle, addr 0x3f9d364, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_Handle();

  /// @brief Method get_IsEnabled, addr 0x3f9ce6c, size 0xec, virtual true, abstract: false, final true
  inline bool get_IsEnabled();

  /// @brief Method get_IsNull, addr 0x3f9ce10, size 0x5c, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_Type, addr 0x3f9cd20, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_SpaceComponentType get_Type();

  /// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRLocatable>"
  constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRLocatable>* i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRLocatable_();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRLocatable>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::OVRLocatable>* i___System__IEquatable_1___GlobalNamespace__OVRLocatable_();

  /// @brief Method op_Equality, addr 0x3f9d0c0, size 0x6c, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::OVRLocatable lhs, ::GlobalNamespace::OVRLocatable rhs);

  /// @brief Method op_Inequality, addr 0x3f9d12c, size 0x70, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::OVRLocatable lhs, ::GlobalNamespace::OVRLocatable rhs);

  static inline void setStaticF_Null(::GlobalNamespace::OVRLocatable value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRLocatable();

  // Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr OVRLocatable(uint64_t _Handle_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7829 };

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
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRLocatable, "", "OVRLocatable");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRLocatable_TrackingSpacePose, "", "OVRLocatable/TrackingSpacePose");
