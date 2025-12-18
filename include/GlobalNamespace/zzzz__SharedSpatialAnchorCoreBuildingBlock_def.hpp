#pragma once
// IWYU pragma private; include "GlobalNamespace/SharedSpatialAnchorCoreBuildingBlock.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/BuildingBlocks/zzzz__BuildingBlock_def.hpp"
CORDL_MODULE_EXPORT(SharedSpatialAnchorCoreBuildingBlock)
// Forward declare root types
namespace GlobalNamespace {
class SharedSpatialAnchorCoreBuildingBlock;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SharedSpatialAnchorCoreBuildingBlock);
// Dependencies Meta.XR.BuildingBlocks.BuildingBlock
namespace GlobalNamespace {
// Is value type: false
// CS Name: SharedSpatialAnchorCoreBuildingBlock
class CORDL_TYPE SharedSpatialAnchorCoreBuildingBlock : public ::Meta::XR::BuildingBlocks::BuildingBlock {
public:
  // Declarations
  static inline ::GlobalNamespace::SharedSpatialAnchorCoreBuildingBlock* New_ctor();

  /// @brief Method .ctor, addr 0x5883834, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedSpatialAnchorCoreBuildingBlock();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SharedSpatialAnchorCoreBuildingBlock", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SharedSpatialAnchorCoreBuildingBlock(SharedSpatialAnchorCoreBuildingBlock&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SharedSpatialAnchorCoreBuildingBlock", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SharedSpatialAnchorCoreBuildingBlock(SharedSpatialAnchorCoreBuildingBlock const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21155 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SharedSpatialAnchorCoreBuildingBlock, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SharedSpatialAnchorCoreBuildingBlock);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SharedSpatialAnchorCoreBuildingBlock*, "", "SharedSpatialAnchorCoreBuildingBlock");
