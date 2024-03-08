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
namespace GlobalNamespace {
template <typename T> class IOVRAnchorComponent_1;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1;
}
namespace GlobalNamespace {
struct __OVRLocatable__TrackingSpacePose;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceComponentType;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceLocationFlags;
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
struct __OVRLocatable__TrackingSpacePose;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRLocatable);
MARK_VAL_T(::GlobalNamespace::__OVRLocatable__TrackingSpacePose);
// Type: ::TrackingSpacePose
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRLocatable::TrackingSpacePose
struct CORDL_TYPE __OVRLocatable__TrackingSpacePose {
public:
  // Declarations
  __declspec(property(get = get_IsPositionTracked)) bool IsPositionTracked;

  __declspec(property(get = get_IsRotationTracked)) bool IsRotationTracked;

  __declspec(property(get = get_Position))::System::Nullable_1<::UnityEngine::Vector3> Position;

  __declspec(property(get = get_Rotation))::System::Nullable_1<::UnityEngine::Quaternion> Rotation;

  /// @brief Method ComputeWorldPosition, addr 0x2867864, size 0x2b4, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::Vector3> ComputeWorldPosition(::UnityEngine::Camera* camera);

  /// @brief Method ComputeWorldRotation, addr 0x286803c, size 0x2fc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::Quaternion> ComputeWorldRotation(::UnityEngine::Camera* camera);

  /// @brief Method .ctor, addr 0x28674f4, size 0x190, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::GlobalNamespace::__OVRPlugin__SpaceLocationFlags flags);

  /// @brief Method get_IsPositionTracked, addr 0x28677ac, size 0x5c, virtual false, abstract: false, final false
  inline bool get_IsPositionTracked();

  /// @brief Method get_IsRotationTracked, addr 0x2867808, size 0x5c, virtual false, abstract: false, final false
  inline bool get_IsRotationTracked();

  /// @brief Method get_Position, addr 0x286778c, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::Vector3> get_Position();

  /// @brief Method get_Rotation, addr 0x2867798, size 0x14, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::Quaternion> get_Rotation();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRLocatable__TrackingSpacePose();

  // Ctor Parameters [CppParam { name: "_Position_k__BackingField", ty: "::System::Nullable_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "_Rotation_k__BackingField",
  // ty: "::System::Nullable_1<::UnityEngine::Quaternion>", modifiers: "", def_value: None }, CppParam { name: "_flags", ty: "::GlobalNamespace::__OVRPlugin__SpaceLocationFlags", modifiers: "",
  // def_value: None }]
  constexpr __OVRLocatable__TrackingSpacePose(::System::Nullable_1<::UnityEngine::Vector3> _Position_k__BackingField, ::System::Nullable_1<::UnityEngine::Quaternion> _Rotation_k__BackingField,
                                              ::GlobalNamespace::__OVRPlugin__SpaceLocationFlags _flags) noexcept;

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

static_assert(offsetof(::GlobalNamespace::__OVRLocatable__TrackingSpacePose, _Position_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRLocatable__TrackingSpacePose, _Rotation_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRLocatable__TrackingSpacePose, _flags) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRLocatable
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRLocatable
struct CORDL_TYPE OVRLocatable {
public:
  // Declarations
  using TrackingSpacePose = ::GlobalNamespace::__OVRLocatable__TrackingSpacePose;

  __declspec(property(get = get_Handle)) uint64_t Handle;

  __declspec(property(get = IOVRAnchorComponent_OVRLocatable__get_Handle)) uint64_t IOVRAnchorComponent_OVRLocatable__Handle;

  __declspec(property(get = IOVRAnchorComponent_OVRLocatable__get_Type))::GlobalNamespace::__OVRPlugin__SpaceComponentType IOVRAnchorComponent_OVRLocatable__Type;

  __declspec(property(get = get_IsEnabled)) bool IsEnabled;

  __declspec(property(get = get_IsNull)) bool IsNull;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null))::GlobalNamespace::OVRLocatable Null;

  __declspec(property(get = get_Type))::GlobalNamespace::__OVRPlugin__SpaceComponentType Type;

  /// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRLocatable>"
  constexpr operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRLocatable>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRLocatable>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::OVRLocatable>*();

  /// @brief Method Equals, addr 0x28672a8, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2867280, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::OVRLocatable other);

  /// @brief Method GetHashCode, addr 0x2867320, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IOVRAnchorComponent<OVRLocatable>.FromAnchor, addr 0x28670d8, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRLocatable IOVRAnchorComponent_OVRLocatable__FromAnchor(::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method IOVRAnchorComponent<OVRLocatable>.get_Handle, addr 0x28670d0, size 0x8, virtual true, abstract: false, final true
  inline uint64_t IOVRAnchorComponent_OVRLocatable__get_Handle();

  /// @brief Method IOVRAnchorComponent<OVRLocatable>.get_Type, addr 0x28670c0, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType IOVRAnchorComponent_OVRLocatable__get_Type();

  /// @brief Method SetEnabledAsync, addr 0x28671a4, size 0xdc, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRTask_1<bool> SetEnabledAsync(bool enabled, double_t timeout);

  /// @brief Method ToString, addr 0x2867368, size 0x84, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryGetSceneAnchorPose, addr 0x28673f4, size 0xf8, virtual false, abstract: false, final false
  inline bool TryGetSceneAnchorPose(ByRef<::GlobalNamespace::__OVRLocatable__TrackingSpacePose> pose);

  /// @brief Method TryGetSpatialAnchorPose, addr 0x2867684, size 0xf8, virtual false, abstract: false, final false
  inline bool TryGetSpatialAnchorPose(ByRef<::GlobalNamespace::__OVRLocatable__TrackingSpacePose> pose);

  /// @brief Method .ctor, addr 0x28670e0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRAnchor anchor);

  static inline ::GlobalNamespace::OVRLocatable getStaticF_Null();

  /// @brief Method get_Handle, addr 0x28673ec, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_Handle();

  /// @brief Method get_IsEnabled, addr 0x28670fc, size 0xa8, virtual true, abstract: false, final true
  inline bool get_IsEnabled();

  /// @brief Method get_IsNull, addr 0x28670ec, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_Type, addr 0x28670c8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType get_Type();

  /// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRLocatable>"
  constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRLocatable>* i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRLocatable_();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRLocatable>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::OVRLocatable>* i___System__IEquatable_1___GlobalNamespace__OVRLocatable_();

  /// @brief Method op_Equality, addr 0x2867290, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::OVRLocatable lhs, ::GlobalNamespace::OVRLocatable rhs);

  /// @brief Method op_Inequality, addr 0x286729c, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::OVRLocatable lhs, ::GlobalNamespace::OVRLocatable rhs);

  static inline void setStaticF_Null(::GlobalNamespace::OVRLocatable value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRLocatable();

  // Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr OVRLocatable(uint64_t _Handle_k__BackingField) noexcept;

  /// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
  uint64_t _Handle_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRLocatable, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRLocatable, _Handle_k__BackingField) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRLocatable, "", "OVRLocatable");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRLocatable__TrackingSpacePose, "", "OVRLocatable/TrackingSpacePose");
