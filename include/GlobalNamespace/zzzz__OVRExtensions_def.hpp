#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OVRExtensions)
namespace GlobalNamespace {
struct __OVRTracker__Frustum;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
struct __OVRPlugin__Colorf;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
struct __OVRPlugin__Quatf;
}
namespace UnityEngine {
class Gradient;
}
namespace GlobalNamespace {
struct __OVRSpace__StorageLocation;
}
namespace UnityEngine {
struct Vector4;
}
namespace GlobalNamespace {
struct OVRPose;
}
namespace GlobalNamespace {
struct __OVRPlugin__Frustumf;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceStorageLocation;
}
namespace GlobalNamespace {
struct __OVRPlugin__Posef;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
struct __OVRPlugin__Vector3f;
}
namespace GlobalNamespace {
struct __OVRPlugin__Vector4f;
}
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRExtensions);
// Type: ::OVRExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8437))
// CS Name: ::OVRExtensions*
class CORDL_TYPE OVRExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToTrackingSpacePose addr 0x25c11f8 size 0x12c virtual false final false
  static inline ::GlobalNamespace::OVRPose ToTrackingSpacePose(::UnityEngine::Transform* transform, ::UnityEngine::Camera* camera);

  /// @brief Method ToWorldSpacePose addr 0x25c13b0 size 0x50 virtual false final false
  static inline ::GlobalNamespace::OVRPose ToWorldSpacePose(::GlobalNamespace::OVRPose trackingSpacePose);

  /// @brief Method ToWorldSpacePose addr 0x25b9b5c size 0x1b8 virtual false final false
  static inline ::GlobalNamespace::OVRPose ToWorldSpacePose(::GlobalNamespace::OVRPose trackingSpacePose, ::UnityEngine::Camera* mainCamera);

  /// @brief Method ToHeadSpacePose addr 0x25c1400 size 0x120 virtual false final false
  static inline ::GlobalNamespace::OVRPose ToHeadSpacePose(::GlobalNamespace::OVRPose trackingSpacePose);

  /// @brief Method ToHeadSpacePose addr 0x25c1324 size 0x8c virtual false final false
  static inline ::GlobalNamespace::OVRPose ToHeadSpacePose(::UnityEngine::Transform* transform, ::UnityEngine::Camera* camera);

  /// @brief Method ToOVRPose addr 0x25c1520 size 0x88 virtual false final false
  static inline ::GlobalNamespace::OVRPose ToOVRPose(::UnityEngine::Transform* t, bool isLocal);

  /// @brief Method FromOVRPose addr 0x25bd594 size 0x68 virtual false final false
  static inline void FromOVRPose(::UnityEngine::Transform* t, ::GlobalNamespace::OVRPose pose, bool isLocal);

  /// @brief Method ToOVRPose addr 0x25b9d14 size 0x28 virtual false final false
  static inline ::GlobalNamespace::OVRPose ToOVRPose(::GlobalNamespace::__OVRPlugin__Posef p);

  /// @brief Method ToFrustum addr 0x25c15a8 size 0x14 virtual false final false
  static inline ::GlobalNamespace::__OVRTracker__Frustum ToFrustum(::GlobalNamespace::__OVRPlugin__Frustumf f);

  /// @brief Method FromColorf addr 0x25c15bc size 0x4 virtual false final false
  static inline ::UnityEngine::Color FromColorf(::GlobalNamespace::__OVRPlugin__Colorf c);

  /// @brief Method ToColorf addr 0x25c15c0 size 0x4 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Colorf ToColorf(::UnityEngine::Color c);

  /// @brief Method FromVector3f addr 0x25be2d0 size 0x4 virtual false final false
  static inline ::UnityEngine::Vector3 FromVector3f(::GlobalNamespace::__OVRPlugin__Vector3f v);

  /// @brief Method FromFlippedXVector3f addr 0x25c15c4 size 0x8 virtual false final false
  static inline ::UnityEngine::Vector3 FromFlippedXVector3f(::GlobalNamespace::__OVRPlugin__Vector3f v);

  /// @brief Method FromFlippedZVector3f addr 0x25be068 size 0x8 virtual false final false
  static inline ::UnityEngine::Vector3 FromFlippedZVector3f(::GlobalNamespace::__OVRPlugin__Vector3f v);

  /// @brief Method ToVector3f addr 0x25c15cc size 0x4 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Vector3f ToVector3f(::UnityEngine::Vector3 v);

  /// @brief Method ToFlippedXVector3f addr 0x25c15d0 size 0x8 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Vector3f ToFlippedXVector3f(::UnityEngine::Vector3 v);

  /// @brief Method ToFlippedZVector3f addr 0x25be158 size 0x8 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Vector3f ToFlippedZVector3f(::UnityEngine::Vector3 v);

  /// @brief Method FromVector4f addr 0x25c15d8 size 0x4 virtual false final false
  static inline ::UnityEngine::Vector4 FromVector4f(::GlobalNamespace::__OVRPlugin__Vector4f v);

  /// @brief Method ToVector4f addr 0x25c15dc size 0x4 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Vector4f ToVector4f(::UnityEngine::Vector4 v);

  /// @brief Method FromQuatf addr 0x25c15e0 size 0x4 virtual false final false
  static inline ::UnityEngine::Quaternion FromQuatf(::GlobalNamespace::__OVRPlugin__Quatf q);

  /// @brief Method FromFlippedXQuatf addr 0x25c15e4 size 0xc virtual false final false
  static inline ::UnityEngine::Quaternion FromFlippedXQuatf(::GlobalNamespace::__OVRPlugin__Quatf q);

  /// @brief Method FromFlippedZQuatf addr 0x25c15f0 size 0xc virtual false final false
  static inline ::UnityEngine::Quaternion FromFlippedZQuatf(::GlobalNamespace::__OVRPlugin__Quatf q);

  /// @brief Method ToQuatf addr 0x25c15fc size 0x4 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Quatf ToQuatf(::UnityEngine::Quaternion q);

  /// @brief Method ToFlippedXQuatf addr 0x25c1600 size 0xc virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Quatf ToFlippedXQuatf(::UnityEngine::Quaternion q);

  /// @brief Method ToFlippedZQuatf addr 0x25c160c size 0xc virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Quatf ToFlippedZQuatf(::UnityEngine::Quaternion q);

  /// @brief Method ConvertToHMDMatrix34 addr 0x25c1618 size 0x15c virtual false final false
  static inline ::OVR::OpenVR::HmdMatrix34_t ConvertToHMDMatrix34(::UnityEngine::Matrix4x4 m);

  /// @brief Method FindChildRecursive addr 0x25c1774 size 0xf8 virtual false final false
  static inline ::UnityEngine::Transform* FindChildRecursive(::UnityEngine::Transform* parent, ::StringW name);

  /// @brief Method Equals addr 0x25c186c size 0x210 virtual false final false
  static inline bool Equals(::UnityEngine::Gradient* gradient, ::UnityEngine::Gradient* otherGradient);

  /// @brief Method CopyFrom addr 0x25c1a7c size 0x200 virtual false final false
  static inline void CopyFrom(::UnityEngine::Gradient* gradient, ::UnityEngine::Gradient* otherGradient);

  /// @brief Method ToSpaceStorageLocation addr 0x25c1c7c size 0xb4 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation ToSpaceStorageLocation(::GlobalNamespace::__OVRSpace__StorageLocation storageLocation);

  // Ctor Parameters [CppParam { name: "", ty: "OVRExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRExtensions(OVRExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRExtensions(OVRExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRExtensions*, "", "OVRExtensions");
