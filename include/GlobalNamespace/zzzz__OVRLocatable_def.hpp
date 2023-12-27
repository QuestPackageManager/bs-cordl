#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRLocatable)
namespace System {
class Object;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceComponentType;
}
namespace GlobalNamespace {
struct __OVRLocatable__TrackingSpacePose;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
template <typename T> class IOVRAnchorComponent_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceLocationFlags;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRLocatable;
}
namespace GlobalNamespace {
struct __OVRLocatable__TrackingSpacePose;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRLocatable);
MARK_VAL_T(::GlobalNamespace::__OVRLocatable__TrackingSpacePose);
// Type: ::TrackingSpacePose
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 412 }), TypeDefinitionIndex(TypeDefinitionIndex(7783)),
// TypeDefinitionIndex(TypeDefinitionIndex(2448)), TypeDefinitionIndex(TypeDefinitionIndex(10249)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 3342 }),
// TypeDefinitionIndex(TypeDefinitionIndex(10252))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7512)) CS Name: ::OVRLocatable::TrackingSpacePose
struct CORDL_TYPE __OVRLocatable__TrackingSpacePose {
public:
  // Declarations
  __declspec(property(get = get_Position))::System::Nullable_1<::UnityEngine::Vector3> Position;

  __declspec(property(get = get_Rotation))::System::Nullable_1<::UnityEngine::Quaternion> Rotation;

  __declspec(property(get = get_IsPositionTracked)) bool IsPositionTracked;

  __declspec(property(get = get_IsRotationTracked)) bool IsRotationTracked;

  /// @brief Method get_Position addr 0x2712468 size 0xc virtual false final false
  inline ::System::Nullable_1<::UnityEngine::Vector3> get_Position();

  /// @brief Method get_Rotation addr 0x2712474 size 0x14 virtual false final false
  inline ::System::Nullable_1<::UnityEngine::Quaternion> get_Rotation();

  /// @brief Method get_IsPositionTracked addr 0x2712488 size 0x5c virtual false final false
  inline bool get_IsPositionTracked();

  /// @brief Method get_IsRotationTracked addr 0x27124e4 size 0x5c virtual false final false
  inline bool get_IsRotationTracked();

  /// @brief Method .ctor addr 0x27121d0 size 0x190 virtual false final false
  inline void _ctor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::GlobalNamespace::__OVRPlugin__SpaceLocationFlags flags);

  /// @brief Method ComputeWorldPosition addr 0x2712540 size 0x2b4 virtual false final false
  inline ::System::Nullable_1<::UnityEngine::Vector3> ComputeWorldPosition(::UnityEngine::Camera* camera);

  /// @brief Method ComputeWorldRotation addr 0x2712d18 size 0x2fc virtual false final false
  inline ::System::Nullable_1<::UnityEngine::Quaternion> ComputeWorldRotation(::UnityEngine::Camera* camera);

  // Ctor Parameters [CppParam { name: "_Position_k__BackingField", ty: "::System::Nullable_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "_Rotation_k__BackingField",
  // ty: "::System::Nullable_1<::UnityEngine::Quaternion>", modifiers: "", def_value: None }, CppParam { name: "_flags", ty: "::GlobalNamespace::__OVRPlugin__SpaceLocationFlags", modifiers: "",
  // def_value: None }]
  constexpr __OVRLocatable__TrackingSpacePose(::System::Nullable_1<::UnityEngine::Vector3> _Position_k__BackingField, ::System::Nullable_1<::UnityEngine::Quaternion> _Rotation_k__BackingField,
                                              ::GlobalNamespace::__OVRPlugin__SpaceLocationFlags _flags) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRLocatable__TrackingSpacePose();

  /// @brief Field <Position>k__BackingField, offset: 0x0, size: 0x10, def value: None
  ::System::Nullable_1<::UnityEngine::Vector3> _Position_k__BackingField;

  /// @brief Field <Rotation>k__BackingField, offset: 0x10, size: 0x14, def value: None
  ::System::Nullable_1<::UnityEngine::Quaternion> _Rotation_k__BackingField;

  /// @brief Field _flags, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__SpaceLocationFlags _flags;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRLocatable__TrackingSpacePose, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRLocatable
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7513))
// CS Name: ::OVRLocatable
struct CORDL_TYPE OVRLocatable {
public:
  // Declarations
  using TrackingSpacePose = ::GlobalNamespace::__OVRLocatable__TrackingSpacePose;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null))::GlobalNamespace::OVRLocatable Null;

  __declspec(property(get = IOVRAnchorComponent_OVRLocatable__get_Type))::GlobalNamespace::__OVRPlugin__SpaceComponentType IOVRAnchorComponent_OVRLocatable__Type;

  __declspec(property(get = IOVRAnchorComponent_OVRLocatable__get_Handle)) uint64_t IOVRAnchorComponent_OVRLocatable__Handle;

  __declspec(property(get = get_IsNull)) bool IsNull;

  __declspec(property(get = get_IsEnabled)) bool IsEnabled;

  __declspec(property(get = get_Type))::GlobalNamespace::__OVRPlugin__SpaceComponentType Type;

  __declspec(property(get = get_Handle)) uint64_t Handle;

  /// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRLocatable>"
  constexpr operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRLocatable>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRLocatable>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::OVRLocatable>*();

  static inline void setStaticF_Null(::GlobalNamespace::OVRLocatable value);

  static inline ::GlobalNamespace::OVRLocatable getStaticF_Null();

  /// @brief Method IOVRAnchorComponent<OVRLocatable>.get_Type addr 0x2711d9c size 0x8 virtual true final true
  inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType IOVRAnchorComponent_OVRLocatable__get_Type();

  /// @brief Method IOVRAnchorComponent<OVRLocatable>.get_Handle addr 0x2711dac size 0x8 virtual true final true
  inline uint64_t IOVRAnchorComponent_OVRLocatable__get_Handle();

  /// @brief Method IOVRAnchorComponent<OVRLocatable>.FromAnchor addr 0x2711db4 size 0x8 virtual true final true
  inline ::GlobalNamespace::OVRLocatable IOVRAnchorComponent_OVRLocatable__FromAnchor(::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method get_IsNull addr 0x2711dc8 size 0x10 virtual true final true
  inline bool get_IsNull();

  /// @brief Method get_IsEnabled addr 0x2711dd8 size 0xa8 virtual true final true
  inline bool get_IsEnabled();

  /// @brief Method SetEnabledAsync addr 0x2711e80 size 0xdc virtual true final true
  inline ::GlobalNamespace::OVRTask_1<bool> SetEnabledAsync(bool enabled, double_t timeout);

  /// @brief Method Equals addr 0x2711f5c size 0x10 virtual true final true
  inline bool Equals(::GlobalNamespace::OVRLocatable other);

  /// @brief Method op_Equality addr 0x2711f6c size 0xc virtual false final false
  static inline bool op_Equality(::GlobalNamespace::OVRLocatable lhs, ::GlobalNamespace::OVRLocatable rhs);

  /// @brief Method op_Inequality addr 0x2711f78 size 0xc virtual false final false
  static inline bool op_Inequality(::GlobalNamespace::OVRLocatable lhs, ::GlobalNamespace::OVRLocatable rhs);

  /// @brief Method Equals addr 0x2711f84 size 0x78 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2711ffc size 0x48 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x2712044 size 0x84 virtual true final false
  inline ::StringW ToString();

  /// @brief Method get_Type addr 0x2711da4 size 0x8 virtual false final false
  inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType get_Type();

  /// @brief Method get_Handle addr 0x27120c8 size 0x8 virtual false final false
  inline uint64_t get_Handle();

  /// @brief Method .ctor addr 0x2711dbc size 0xc virtual false final false
  inline void _ctor(::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method TryGetSceneAnchorPose addr 0x27120d0 size 0xf8 virtual false final false
  inline bool TryGetSceneAnchorPose(ByRef<::GlobalNamespace::__OVRLocatable__TrackingSpacePose> pose);

  /// @brief Method TryGetSpatialAnchorPose addr 0x2712360 size 0xf8 virtual false final false
  inline bool TryGetSpatialAnchorPose(ByRef<::GlobalNamespace::__OVRLocatable__TrackingSpacePose> pose);

  // Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr OVRLocatable(uint64_t _Handle_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRLocatable();

  /// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
  uint64_t _Handle_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRLocatable, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRLocatable, "", "OVRLocatable");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRLocatable__TrackingSpacePose, "", "OVRLocatable/TrackingSpacePose");
