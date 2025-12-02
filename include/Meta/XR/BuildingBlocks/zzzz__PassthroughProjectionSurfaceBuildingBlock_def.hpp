#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/PassthroughProjectionSurfaceBuildingBlock.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PassthroughProjectionSurfaceBuildingBlock)
namespace UnityEngine {
class MeshFilter;
}
// Forward declare root types
namespace Meta::XR::BuildingBlocks {
class PassthroughProjectionSurfaceBuildingBlock;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock);
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::BuildingBlocks {
// Is value type: false
// CS Name: Meta.XR.BuildingBlocks.PassthroughProjectionSurfaceBuildingBlock
class CORDL_TYPE PassthroughProjectionSurfaceBuildingBlock : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field projectionObject, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_projectionObject, put = __cordl_internal_set_projectionObject)) ::UnityW<::UnityEngine::MeshFilter> projectionObject;

  static inline ::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock* New_ctor();

  /// @brief Method Start, addr 0x581e314, size 0x1f4, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get_projectionObject() const;

  constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get_projectionObject();

  constexpr void __cordl_internal_set_projectionObject(::UnityW<::UnityEngine::MeshFilter> value);

  /// @brief Method .ctor, addr 0x581e508, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PassthroughProjectionSurfaceBuildingBlock();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PassthroughProjectionSurfaceBuildingBlock", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PassthroughProjectionSurfaceBuildingBlock(PassthroughProjectionSurfaceBuildingBlock&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PassthroughProjectionSurfaceBuildingBlock", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PassthroughProjectionSurfaceBuildingBlock(PassthroughProjectionSurfaceBuildingBlock const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21136 };

  /// @brief Field projectionObject, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ___projectionObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock, ___projectionObject) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock, 0x28>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
NEED_NO_BOX(::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock*, "Meta.XR.BuildingBlocks", "PassthroughProjectionSurfaceBuildingBlock");
