#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(OVRExtensions)
namespace GlobalNamespace {
template <typename T> struct OVREnumerable_1;
}
namespace GlobalNamespace {
struct OVRPlugin_Colorf;
}
namespace GlobalNamespace {
struct OVRPlugin_Frustumf;
}
namespace GlobalNamespace {
struct OVRPlugin_Posef;
}
namespace GlobalNamespace {
struct OVRPlugin_Quatf;
}
namespace GlobalNamespace {
struct OVRPlugin_Size3f;
}
namespace GlobalNamespace {
struct OVRPlugin_Sizef;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceStorageLocation;
}
namespace GlobalNamespace {
struct OVRPlugin_Vector2f;
}
namespace GlobalNamespace {
struct OVRPlugin_Vector3f;
}
namespace GlobalNamespace {
struct OVRPlugin_Vector4f;
}
namespace GlobalNamespace {
struct OVRPose;
}
namespace GlobalNamespace {
struct OVRSpace_StorageLocation;
}
namespace GlobalNamespace {
struct OVRTracker_Frustum;
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
MARK_REF_T(::GlobalNamespace::OVRExtensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRExtensions*, "", "OVRExtensions");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRExtensions
class CORDL_TYPE OVRExtensions : public ::System::Object {
public:
  // Declarations
  /// [Extension]
  /// @brief Method ConvertToHMDMatrix34, addr 0x62370ec, size 0x50, virtual false, abstract: false, final false
  static inline ::OVR::OpenVR::HmdMatrix34_t ConvertToHMDMatrix34(::UnityEngine::Matrix4x4 m);

  /// [Extension]
  /// @brief Method CopyFrom, addr 0x6237434, size 0x208, virtual false, abstract: false, final false
  static inline void CopyFrom(::UnityEngine::Gradient* gradient, ::UnityEngine::Gradient* otherGradient);

  /// [Extension]
  /// @brief Method Equals, addr 0x623723c, size 0x1f8, virtual false, abstract: false, final false
  static inline bool Equals(::UnityEngine::Gradient* gradient, ::UnityEngine::Gradient* otherGradient);

  /// [Extension]
  /// @brief Method FindChildRecursive, addr 0x623713c, size 0x100, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> FindChildRecursive(::UnityEngine::Transform* parent, ::StringW name);

  /// [Extension]
  /// @brief Method FromColorf, addr 0x6237094, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color FromColorf(::GlobalNamespace::OVRPlugin_Colorf c);

  /// [Extension]
  /// @brief Method FromFlippedXQuatf, addr 0x62370c4, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion FromFlippedXQuatf(::GlobalNamespace::OVRPlugin_Quatf q);

  /// [Extension]
  /// @brief Method FromFlippedXVector2f, addr 0x622cf54, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 FromFlippedXVector2f(::GlobalNamespace::OVRPlugin_Vector2f v);

  /// [Extension]
  /// @brief Method FromFlippedXVector3f, addr 0x622d924, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 FromFlippedXVector3f(::GlobalNamespace::OVRPlugin_Vector3f v);

  /// [Extension]
  /// @brief Method FromFlippedZQuatf, addr 0x6228e90, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion FromFlippedZQuatf(::GlobalNamespace::OVRPlugin_Quatf q);

  /// [Extension]
  /// @brief Method FromFlippedZVector3f, addr 0x6228bf4, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 FromFlippedZVector3f(::GlobalNamespace::OVRPlugin_Vector3f v);

  /// [Extension]
  /// @brief Method FromOVRPose, addr 0x6234804, size 0x80, virtual false, abstract: false, final false
  static inline void FromOVRPose(::UnityEngine::Transform* t, ::GlobalNamespace::OVRPose pose, bool isLocal);

  /// [Extension]
  /// @brief Method FromQuatf, addr 0x62370c0, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion FromQuatf(::GlobalNamespace::OVRPlugin_Quatf q);

  /// [Extension]
  /// @brief Method FromSize3f, addr 0x622d920, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 FromSize3f(::GlobalNamespace::OVRPlugin_Size3f v);

  /// [Extension]
  /// @brief Method FromSizef, addr 0x622cf50, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 FromSizef(::GlobalNamespace::OVRPlugin_Sizef v);

  /// [Extension]
  /// @brief Method FromVector2f, addr 0x62370a0, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 FromVector2f(::GlobalNamespace::OVRPlugin_Vector2f v);

  /// [Extension]
  /// @brief Method FromVector3f, addr 0x6232a8c, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 FromVector3f(::GlobalNamespace::OVRPlugin_Vector3f v);

  /// [Extension]
  /// @brief Method FromVector4f, addr 0x62370b8, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 FromVector4f(::GlobalNamespace::OVRPlugin_Vector4f v);

  /// [Extension]
  /// @brief Method ToColorf, addr 0x6237098, size 0x4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPlugin_Colorf ToColorf(::UnityEngine::Color c);

  /// [Extension]
  /// @brief Method ToFlippedXQuatf, addr 0x62370d4, size 0xc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPlugin_Quatf ToFlippedXQuatf(::UnityEngine::Quaternion q);

  /// [Extension]
  /// @brief Method ToFlippedXVector3f, addr 0x62370b0, size 0x8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPlugin_Vector3f ToFlippedXVector3f(::UnityEngine::Vector3 v);

  /// [Extension]
  /// @brief Method ToFlippedZQuatf, addr 0x62370e0, size 0xc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPlugin_Quatf ToFlippedZQuatf(::UnityEngine::Quaternion q);

  /// [Extension]
  /// @brief Method ToFlippedZVector3f, addr 0x6232598, size 0x8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPlugin_Vector3f ToFlippedZVector3f(::UnityEngine::Vector3 v);

  /// [Extension]
  /// @brief Method ToFrustum, addr 0x6237080, size 0x14, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTracker_Frustum ToFrustum(::GlobalNamespace::OVRPlugin_Frustumf f);

  /// [Extension]
  /// @brief Method ToHeadSpacePose, addr 0x6236ea0, size 0x118, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPose ToHeadSpacePose(::GlobalNamespace::OVRPose trackingSpacePose);

  /// [Extension]
  /// @brief Method ToHeadSpacePose, addr 0x6236a38, size 0x18c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPose ToHeadSpacePose(::UnityEngine::Transform* transform, ::UnityEngine::Camera* camera);

  /// [Extension]
  /// @brief Method ToNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Collections::NativeArray_1<T> ToNativeArray(::System::Collections::Generic::IEnumerable_1<T>* enumerable, ::Unity::Collections::Allocator allocator);

  /// [Extension]
  /// @brief Method ToNonAlloc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::GlobalNamespace::OVREnumerable_1<T> ToNonAlloc(/* [NoEnumeration] */ ::System::Collections::Generic::IEnumerable_1<T>* enumerable);

  /// [Extension]
  /// @brief Method ToOVRPose, addr 0x6237058, size 0x28, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPose ToOVRPose(::GlobalNamespace::OVRPlugin_Posef p);

  /// [Extension]
  /// @brief Method ToOVRPose, addr 0x6236fb8, size 0xa0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPose ToOVRPose(::UnityEngine::Transform* t, bool isLocal);

  /// [Extension]
  /// @brief Method ToQuatf, addr 0x62370d0, size 0x4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPlugin_Quatf ToQuatf(::UnityEngine::Quaternion q);

  /// [Extension]
  /// @brief Method ToSize3f, addr 0x62370a8, size 0x4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPlugin_Size3f ToSize3f(::UnityEngine::Vector3 v);

  /// [Extension]
  /// @brief Method ToSizef, addr 0x623709c, size 0x4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPlugin_Sizef ToSizef(::UnityEngine::Vector2 v);

  /// [Extension]
  /// [Obsolete("Anchor APIs that specify a storage location are obsolete.")]
  /// @brief Method ToSpaceStorageLocation, addr 0x6226b0c, size 0xac, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPlugin_SpaceStorageLocation ToSpaceStorageLocation(::GlobalNamespace::OVRSpace_StorageLocation storageLocation);

  /// [Extension]
  /// @brief Method ToTrackingSpacePose, addr 0x6236928, size 0x110, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPose ToTrackingSpacePose(::UnityEngine::Transform* transform, ::UnityEngine::Camera* camera);

  /// [Extension]
  /// @brief Method ToVector2f, addr 0x62370a4, size 0x4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPlugin_Vector2f ToVector2f(::UnityEngine::Vector2 v);

  /// [Extension]
  /// @brief Method ToVector3f, addr 0x62370ac, size 0x4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPlugin_Vector3f ToVector3f(::UnityEngine::Vector3 v);

  /// [Extension]
  /// @brief Method ToVector4f, addr 0x62370bc, size 0x4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPlugin_Vector4f ToVector4f(::UnityEngine::Vector4 v);

  /// [Extension]
  /// [Obsolete("ToWorldSpacePose should be invoked with an explicit mainCamera parameter")]
  /// @brief Method ToWorldSpacePose, addr 0x6236cc0, size 0x50, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPose ToWorldSpacePose(::GlobalNamespace::OVRPose trackingSpacePose);

  /// [Extension]
  /// @brief Method ToWorldSpacePose, addr 0x6236d10, size 0x190, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPose ToWorldSpacePose(::GlobalNamespace::OVRPose trackingSpacePose, ::UnityEngine::Camera* mainCamera);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRExtensions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRExtensions(OVRExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRExtensions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRExtensions(OVRExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7250 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRExtensions) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
