#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OVRExtensions)
namespace GlobalNamespace {
template <typename T> struct OVREnumerable_1;
}
namespace GlobalNamespace {
struct OVRPose;
}
namespace GlobalNamespace {
struct __OVRPlugin__Colorf;
}
namespace GlobalNamespace {
struct __OVRPlugin__Frustumf;
}
namespace GlobalNamespace {
struct __OVRPlugin__Posef;
}
namespace GlobalNamespace {
struct __OVRPlugin__Quatf;
}
namespace GlobalNamespace {
struct __OVRPlugin__Size3f;
}
namespace GlobalNamespace {
struct __OVRPlugin__Sizef;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceStorageLocation;
}
namespace GlobalNamespace {
struct __OVRPlugin__Vector2f;
}
namespace GlobalNamespace {
struct __OVRPlugin__Vector3f;
}
namespace GlobalNamespace {
struct __OVRPlugin__Vector4f;
}
namespace GlobalNamespace {
struct __OVRSpace__StorageLocation;
}
namespace GlobalNamespace {
struct __OVRTracker__Frustum;
}
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
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
// CS Name: ::OVRExtensions*
class CORDL_TYPE OVRExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToHMDMatrix34, addr 0x2b10f14, size 0x15c, virtual false, abstract: false, final false
  static inline ::OVR::OpenVR::HmdMatrix34_t ConvertToHMDMatrix34(::UnityEngine::Matrix4x4 m);

  /// @brief Method CopyFrom, addr 0x2b11378, size 0x200, virtual false, abstract: false, final false
  static inline void CopyFrom(::UnityEngine::Gradient* gradient, ::UnityEngine::Gradient* otherGradient);

  /// @brief Method Equals, addr 0x2b11168, size 0x210, virtual false, abstract: false, final false
  static inline bool Equals(::UnityEngine::Gradient* gradient, ::UnityEngine::Gradient* otherGradient);

  /// @brief Method FindChildRecursive, addr 0x2b11070, size 0xf8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> FindChildRecursive(::UnityEngine::Transform* parent, ::StringW name);

  /// @brief Method FromColorf, addr 0x2b10ec8, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color FromColorf(::GlobalNamespace::__OVRPlugin__Colorf c);

  /// @brief Method FromFlippedXQuatf, addr 0x2b10ef8, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion FromFlippedXQuatf(::GlobalNamespace::__OVRPlugin__Quatf q);

  /// @brief Method FromFlippedXVector2f, addr 0x2b0b27c, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 FromFlippedXVector2f(::GlobalNamespace::__OVRPlugin__Vector2f v);

  /// @brief Method FromFlippedXVector3f, addr 0x2b0b854, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 FromFlippedXVector3f(::GlobalNamespace::__OVRPlugin__Vector3f v);

  /// @brief Method FromFlippedZQuatf, addr 0x2b09c98, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion FromFlippedZQuatf(::GlobalNamespace::__OVRPlugin__Quatf q);

  /// @brief Method FromFlippedZVector3f, addr 0x2b09a08, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 FromFlippedZVector3f(::GlobalNamespace::__OVRPlugin__Vector3f v);

  /// @brief Method FromOVRPose, addr 0x2b08334, size 0x68, virtual false, abstract: false, final false
  static inline void FromOVRPose(::UnityEngine::Transform* t, ::GlobalNamespace::OVRPose pose, bool isLocal);

  /// @brief Method FromQuatf, addr 0x2b10ef4, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion FromQuatf(::GlobalNamespace::__OVRPlugin__Quatf q);

  /// @brief Method FromSize3f, addr 0x2b0b850, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 FromSize3f(::GlobalNamespace::__OVRPlugin__Size3f v);

  /// @brief Method FromSizef, addr 0x2b0b278, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 FromSizef(::GlobalNamespace::__OVRPlugin__Sizef v);

  /// @brief Method FromVector2f, addr 0x2b10ed4, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 FromVector2f(::GlobalNamespace::__OVRPlugin__Vector2f v);

  /// @brief Method FromVector3f, addr 0x2b0d798, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 FromVector3f(::GlobalNamespace::__OVRPlugin__Vector3f v);

  /// @brief Method FromVector4f, addr 0x2b10eec, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 FromVector4f(::GlobalNamespace::__OVRPlugin__Vector4f v);

  /// @brief Method ToColorf, addr 0x2b10ecc, size 0x4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__OVRPlugin__Colorf ToColorf(::UnityEngine::Color c);

  /// @brief Method ToFlippedXQuatf, addr 0x2b10f08, size 0xc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__OVRPlugin__Quatf ToFlippedXQuatf(::UnityEngine::Quaternion q);

  /// @brief Method ToFlippedXVector3f, addr 0x2b10ee4, size 0x8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__OVRPlugin__Vector3f ToFlippedXVector3f(::UnityEngine::Vector3 v);

  /// @brief Method ToFlippedZQuatf, addr 0x2b09044, size 0xc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__OVRPlugin__Quatf ToFlippedZQuatf(::UnityEngine::Quaternion q);

  /// @brief Method ToFlippedZVector3f, addr 0x2b09050, size 0x8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__OVRPlugin__Vector3f ToFlippedZVector3f(::UnityEngine::Vector3 v);

  /// @brief Method ToFrustum, addr 0x2b10eb4, size 0x14, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__OVRTracker__Frustum ToFrustum(::GlobalNamespace::__OVRPlugin__Frustumf f);

  /// @brief Method ToHeadSpacePose, addr 0x2b10d0c, size 0x120, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPose ToHeadSpacePose(::GlobalNamespace::OVRPose trackingSpacePose);

  /// @brief Method ToHeadSpacePose, addr 0x2b10ae4, size 0x1d8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPose ToHeadSpacePose(::UnityEngine::Transform* transform, ::UnityEngine::Camera* camera);

  /// @brief Method ToNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::NativeArray_1<T> ToNativeArray(::System::Collections::Generic::IEnumerable_1<T>* enumerable, ::Unity::Collections::Allocator allocator);

  /// @brief Method ToNonAlloc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::GlobalNamespace::OVREnumerable_1<T> ToNonAlloc(::System::Collections::Generic::IEnumerable_1<T>* enumerable);

  /// @brief Method ToOVRPose, addr 0x2b04974, size 0x28, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPose ToOVRPose(::GlobalNamespace::__OVRPlugin__Posef p);

  /// @brief Method ToOVRPose, addr 0x2b10e2c, size 0x88, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPose ToOVRPose(::UnityEngine::Transform* t, bool isLocal);

  /// @brief Method ToQuatf, addr 0x2b10f04, size 0x4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__OVRPlugin__Quatf ToQuatf(::UnityEngine::Quaternion q);

  /// @brief Method ToSize3f, addr 0x2b10edc, size 0x4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__OVRPlugin__Size3f ToSize3f(::UnityEngine::Vector3 v);

  /// @brief Method ToSizef, addr 0x2b10ed0, size 0x4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__OVRPlugin__Sizef ToSizef(::UnityEngine::Vector2 v);

  /// @brief Method ToSpaceStorageLocation, addr 0x2b11578, size 0xb4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation ToSpaceStorageLocation(::GlobalNamespace::__OVRSpace__StorageLocation storageLocation);

  /// @brief Method ToTrackingSpacePose, addr 0x2b091fc, size 0x12c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPose ToTrackingSpacePose(::UnityEngine::Transform* transform, ::UnityEngine::Camera* camera);

  /// @brief Method ToVector2f, addr 0x2b10ed8, size 0x4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__OVRPlugin__Vector2f ToVector2f(::UnityEngine::Vector2 v);

  /// @brief Method ToVector3f, addr 0x2b10ee0, size 0x4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__OVRPlugin__Vector3f ToVector3f(::UnityEngine::Vector3 v);

  /// @brief Method ToVector4f, addr 0x2b10ef0, size 0x4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__OVRPlugin__Vector4f ToVector4f(::UnityEngine::Vector4 v);

  /// @brief Method ToWorldSpacePose, addr 0x2b10cbc, size 0x50, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPose ToWorldSpacePose(::GlobalNamespace::OVRPose trackingSpacePose);

  /// @brief Method ToWorldSpacePose, addr 0x2b047bc, size 0x1b8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPose ToWorldSpacePose(::GlobalNamespace::OVRPose trackingSpacePose, ::UnityEngine::Camera* mainCamera);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRExtensions(OVRExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRExtensions(OVRExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRExtensions*, "", "OVRExtensions");
