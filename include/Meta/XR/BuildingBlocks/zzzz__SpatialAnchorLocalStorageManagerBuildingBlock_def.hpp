#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/SpatialAnchorLocalStorageManagerBuildingBlock.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SpatialAnchorLocalStorageManagerBuildingBlock)
namespace GlobalNamespace {
struct OVRSpatialAnchor_OperationResult;
}
namespace GlobalNamespace {
class OVRSpatialAnchor;
}
namespace Meta::XR::BuildingBlocks {
class SpatialAnchorCoreBuildingBlock;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace Meta::XR::BuildingBlocks {
class SpatialAnchorLocalStorageManagerBuildingBlock;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock);
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::BuildingBlocks {
// Is value type: false
// CS Name: Meta.XR.BuildingBlocks.SpatialAnchorLocalStorageManagerBuildingBlock
class CORDL_TYPE SpatialAnchorLocalStorageManagerBuildingBlock : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _spatialAnchorCore, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__spatialAnchorCore, put = __cordl_internal_set__spatialAnchorCore)) ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>
      _spatialAnchorCore;

  /// @brief Method GetAnchorAnchorUuidFromLocalStorage, addr 0x58864e4, size 0x1fc, virtual false, abstract: false, final false
  inline void GetAnchorAnchorUuidFromLocalStorage(::System::Collections::Generic::List_1<::System::Guid>* uuids);

  static inline ::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock* New_ctor();

  /// @brief Method OnDestroy, addr 0x5886b18, size 0x28, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RemoveAnchorFromLocalStorage, addr 0x5886914, size 0x1b8, virtual false, abstract: false, final false
  inline void RemoveAnchorFromLocalStorage(::GlobalNamespace::OVRSpatialAnchor* anchor, ::GlobalNamespace::OVRSpatialAnchor_OperationResult result);

  /// @brief Method Reset, addr 0x5886acc, size 0x4c, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SaveAnchorUuidToLocalStorage, addr 0x58867f4, size 0x120, virtual false, abstract: false, final false
  inline void SaveAnchorUuidToLocalStorage(::GlobalNamespace::OVRSpatialAnchor* anchor, ::GlobalNamespace::OVRSpatialAnchor_OperationResult result);

  /// @brief Method Start, addr 0x58866e4, size 0x110, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> const& __cordl_internal_get__spatialAnchorCore() const;

  constexpr ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>& __cordl_internal_get__spatialAnchorCore();

  constexpr void __cordl_internal_set__spatialAnchorCore(::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> value);

  /// @brief Method .ctor, addr 0x5886b40, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpatialAnchorLocalStorageManagerBuildingBlock();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpatialAnchorLocalStorageManagerBuildingBlock", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpatialAnchorLocalStorageManagerBuildingBlock(SpatialAnchorLocalStorageManagerBuildingBlock&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpatialAnchorLocalStorageManagerBuildingBlock", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpatialAnchorLocalStorageManagerBuildingBlock(SpatialAnchorLocalStorageManagerBuildingBlock const&) = delete;

  /// @brief Field NumUuidsPlayerPref offset 0xffffffff size 0x8
  static constexpr ::ConstString NumUuidsPlayerPref{ u"numUuids" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21171 };

  /// @brief Field _spatialAnchorCore, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> ____spatialAnchorCore;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock, ____spatialAnchorCore) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock, 0x28>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
NEED_NO_BOX(::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*, "Meta.XR.BuildingBlocks", "SpatialAnchorLocalStorageManagerBuildingBlock");
