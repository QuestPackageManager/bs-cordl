#pragma once
// IWYU pragma private; include "GlobalNamespace/OVREnumExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OVREnumExtensions)
namespace GlobalNamespace {
struct OVRHandSkeletonVersion;
}
namespace GlobalNamespace {
struct OVRHand_Hand;
}
namespace GlobalNamespace {
struct OVRMesh_MeshType;
}
namespace GlobalNamespace {
struct OVRSkeleton_SkeletonType;
}
// Forward declare root types
namespace GlobalNamespace {
class OVREnumExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVREnumExtensions);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVREnumExtensions
class CORDL_TYPE OVREnumExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method AsHandType, addr 0x5d4c9c4, size 0x20, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRHand_Hand AsHandType(::GlobalNamespace::OVRMesh_MeshType meshType);

  /// @brief Method AsHandType, addr 0x5d4c8ec, size 0x20, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRHand_Hand AsHandType(::GlobalNamespace::OVRSkeleton_SkeletonType skeletonType);

  /// @brief Method AsMeshType, addr 0x5d4c94c, size 0x14, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRMesh_MeshType AsMeshType(::GlobalNamespace::OVRHand_Hand hand);

  /// @brief Method AsMeshType, addr 0x5d4c97c, size 0x2c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRMesh_MeshType AsMeshType(::GlobalNamespace::OVRHand_Hand hand, ::GlobalNamespace::OVRHandSkeletonVersion version);

  /// @brief Method AsSkeletonType, addr 0x5d4c90c, size 0x14, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRSkeleton_SkeletonType AsSkeletonType(::GlobalNamespace::OVRHand_Hand hand);

  /// @brief Method AsSkeletonType, addr 0x5d4c920, size 0x2c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRSkeleton_SkeletonType AsSkeletonType(::GlobalNamespace::OVRHand_Hand hand, ::GlobalNamespace::OVRHandSkeletonVersion version);

  /// @brief Method IsHand, addr 0x5d4c9b4, size 0x10, virtual false, abstract: false, final false
  static inline bool IsHand(::GlobalNamespace::OVRMesh_MeshType meshType);

  /// @brief Method IsHand, addr 0x5d4c8b4, size 0x10, virtual false, abstract: false, final false
  static inline bool IsHand(::GlobalNamespace::OVRSkeleton_SkeletonType skeletonType);

  /// @brief Method IsLeft, addr 0x5d4c9a8, size 0xc, virtual false, abstract: false, final false
  static inline bool IsLeft(::GlobalNamespace::OVRMesh_MeshType type);

  /// @brief Method IsLeft, addr 0x5d4c8e0, size 0xc, virtual false, abstract: false, final false
  static inline bool IsLeft(::GlobalNamespace::OVRSkeleton_SkeletonType type);

  /// @brief Method IsOVRHandMesh, addr 0x5d4c970, size 0xc, virtual false, abstract: false, final false
  static inline bool IsOVRHandMesh(::GlobalNamespace::OVRMesh_MeshType meshType);

  /// @brief Method IsOVRHandSkeleton, addr 0x5d4c8d4, size 0xc, virtual false, abstract: false, final false
  static inline bool IsOVRHandSkeleton(::GlobalNamespace::OVRSkeleton_SkeletonType skeletonType);

  /// @brief Method IsOpenXRHandMesh, addr 0x5d4c960, size 0x10, virtual false, abstract: false, final false
  static inline bool IsOpenXRHandMesh(::GlobalNamespace::OVRMesh_MeshType meshType);

  /// @brief Method IsOpenXRHandSkeleton, addr 0x5d4c8c4, size 0x10, virtual false, abstract: false, final false
  static inline bool IsOpenXRHandSkeleton(::GlobalNamespace::OVRSkeleton_SkeletonType skeletonType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVREnumExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVREnumExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVREnumExtensions(OVREnumExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVREnumExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVREnumExtensions(OVREnumExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7893 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVREnumExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVREnumExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVREnumExtensions*, "", "OVREnumExtensions");
