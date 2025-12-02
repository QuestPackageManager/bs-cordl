#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/SpatialAnchorSpawnerBuildingBlock.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(SpatialAnchorSpawnerBuildingBlock)
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace Meta::XR::BuildingBlocks {
class SpatialAnchorCoreBuildingBlock;
}
namespace UnityEngine {
class GameObject;
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
namespace Meta::XR::BuildingBlocks {
class SpatialAnchorSpawnerBuildingBlock;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Meta::XR::BuildingBlocks {
// Is value type: false
// CS Name: Meta.XR.BuildingBlocks.SpatialAnchorSpawnerBuildingBlock
class CORDL_TYPE SpatialAnchorSpawnerBuildingBlock : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_AnchorPrefab, put = set_AnchorPrefab)) ::UnityW<::UnityEngine::GameObject> AnchorPrefab;

  __declspec(property(get = get_FollowHand, put = set_FollowHand)) bool FollowHand;

  /// @brief Field _anchorPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__anchorPrefab, put = __cordl_internal_set__anchorPrefab)) ::UnityW<::UnityEngine::GameObject> _anchorPrefab;

  /// @brief Field _anchorPrefabTransform, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__anchorPrefabTransform, put = __cordl_internal_set__anchorPrefabTransform)) ::UnityW<::UnityEngine::Transform> _anchorPrefabTransform;

  /// @brief Field _cameraRig, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__cameraRig, put = __cordl_internal_set__cameraRig)) ::UnityW<::GlobalNamespace::OVRCameraRig> _cameraRig;

  /// @brief Field _followHand, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__followHand, put = __cordl_internal_set__followHand)) bool _followHand;

  /// @brief Field _initialPosition, offset 0x48, size 0xc
  __declspec(property(get = __cordl_internal_get__initialPosition, put = __cordl_internal_set__initialPosition)) ::UnityEngine::Vector3 _initialPosition;

  /// @brief Field _initialRotation, offset 0x54, size 0x10
  __declspec(property(get = __cordl_internal_get__initialRotation, put = __cordl_internal_set__initialRotation)) ::UnityEngine::Quaternion _initialRotation;

  /// @brief Field _spatialAnchorCore, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__spatialAnchorCore, put = __cordl_internal_set__spatialAnchorCore)) ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>
      _spatialAnchorCore;

  /// @brief Method Awake, addr 0x5820644, size 0x98, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock* New_ctor();

  /// @brief Method SpawnSpatialAnchor, addr 0x5820870, size 0xc8, virtual false, abstract: false, final false
  inline void SpawnSpatialAnchor();

  /// @brief Method SpawnSpatialAnchor, addr 0x58206dc, size 0x1c, virtual false, abstract: false, final false
  inline void SpawnSpatialAnchor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__anchorPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__anchorPrefab();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__anchorPrefabTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__anchorPrefabTransform();

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get__cameraRig() const;

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get__cameraRig();

  constexpr bool const& __cordl_internal_get__followHand() const;

  constexpr bool& __cordl_internal_get__followHand();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__initialPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__initialPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__initialRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__initialRotation();

  constexpr ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> const& __cordl_internal_get__spatialAnchorCore() const;

  constexpr ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>& __cordl_internal_get__spatialAnchorCore();

  constexpr void __cordl_internal_set__anchorPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__anchorPrefabTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig> value);

  constexpr void __cordl_internal_set__followHand(bool value);

  constexpr void __cordl_internal_set__initialPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__initialRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__spatialAnchorCore(::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> value);

  /// @brief Method .ctor, addr 0x5820938, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AnchorPrefab, addr 0x58203e0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_AnchorPrefab();

  /// @brief Method get_FollowHand, addr 0x582063c, size 0x8, virtual false, abstract: false, final false
  inline bool get_FollowHand();

  /// @brief Method set_AnchorPrefab, addr 0x58203e8, size 0x104, virtual false, abstract: false, final false
  inline void set_AnchorPrefab(::UnityEngine::GameObject* value);

  /// @brief Method set_FollowHand, addr 0x58204ec, size 0x150, virtual false, abstract: false, final false
  inline void set_FollowHand(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpatialAnchorSpawnerBuildingBlock();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpatialAnchorSpawnerBuildingBlock", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpatialAnchorSpawnerBuildingBlock(SpatialAnchorSpawnerBuildingBlock&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpatialAnchorSpawnerBuildingBlock", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpatialAnchorSpawnerBuildingBlock(SpatialAnchorSpawnerBuildingBlock const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21145 };

  /// @brief Field _anchorPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____anchorPrefab;

  /// @brief Field _followHand, offset: 0x28, size: 0x1, def value: None
  bool ____followHand;

  /// @brief Field _spatialAnchorCore, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> ____spatialAnchorCore;

  /// @brief Field _cameraRig, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRCameraRig> ____cameraRig;

  /// @brief Field _anchorPrefabTransform, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____anchorPrefabTransform;

  /// @brief Field _initialPosition, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____initialPosition;

  /// @brief Field _initialRotation, offset: 0x54, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____initialRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock, ____anchorPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock, ____followHand) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock, ____spatialAnchorCore) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock, ____cameraRig) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock, ____anchorPrefabTransform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock, ____initialPosition) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock, ____initialRotation) == 0x54, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock, 0x68>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
NEED_NO_BOX(::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock*, "Meta.XR.BuildingBlocks", "SpatialAnchorSpawnerBuildingBlock");
