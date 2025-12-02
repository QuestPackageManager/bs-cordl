#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/SpatialAnchorLoaderBuildingBlock.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SpatialAnchorLoaderBuildingBlock)
namespace Meta::XR::BuildingBlocks {
class SpatialAnchorCoreBuildingBlock;
}
namespace Meta::XR::BuildingBlocks {
class SpatialAnchorSpawnerBuildingBlock;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace Meta::XR::BuildingBlocks {
class SpatialAnchorLoaderBuildingBlock;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock);
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::BuildingBlocks {
// Is value type: false
// CS Name: Meta.XR.BuildingBlocks.SpatialAnchorLoaderBuildingBlock
class CORDL_TYPE SpatialAnchorLoaderBuildingBlock : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _spatialAnchorCore, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__spatialAnchorCore, put = __cordl_internal_set__spatialAnchorCore)) ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>
      _spatialAnchorCore;

  /// @brief Field _spatialAnchorSpawner, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__spatialAnchorSpawner, put = __cordl_internal_set__spatialAnchorSpawner)) ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock>
      _spatialAnchorSpawner;

  /// @brief Method Awake, addr 0x581f98c, size 0x5c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method LoadAnchorsFromDefaultLocalStorage, addr 0x581fb70, size 0x210, virtual true, abstract: false, final false
  inline void LoadAnchorsFromDefaultLocalStorage();

  /// @brief Method LoadAndInstantiateAnchors, addr 0x581fb40, size 0x30, virtual true, abstract: false, final false
  inline void LoadAndInstantiateAnchors(::System::Collections::Generic::List_1<::System::Guid>* uuids);

  static inline ::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock* New_ctor();

  constexpr ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> const& __cordl_internal_get__spatialAnchorCore() const;

  constexpr ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>& __cordl_internal_get__spatialAnchorCore();

  constexpr ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock> const& __cordl_internal_get__spatialAnchorSpawner() const;

  constexpr ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock>& __cordl_internal_get__spatialAnchorSpawner();

  constexpr void __cordl_internal_set__spatialAnchorCore(::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> value);

  constexpr void __cordl_internal_set__spatialAnchorSpawner(::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock> value);

  /// @brief Method .ctor, addr 0x581ff7c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpatialAnchorLoaderBuildingBlock();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpatialAnchorLoaderBuildingBlock", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpatialAnchorLoaderBuildingBlock(SpatialAnchorLoaderBuildingBlock&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpatialAnchorLoaderBuildingBlock", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpatialAnchorLoaderBuildingBlock(SpatialAnchorLoaderBuildingBlock const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21143 };

  /// @brief Field _spatialAnchorCore, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> ____spatialAnchorCore;

  /// @brief Field _spatialAnchorSpawner, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock> ____spatialAnchorSpawner;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock, ____spatialAnchorCore) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock, ____spatialAnchorSpawner) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock, 0x30>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
NEED_NO_BOX(::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock*, "Meta.XR.BuildingBlocks", "SpatialAnchorLoaderBuildingBlock");
