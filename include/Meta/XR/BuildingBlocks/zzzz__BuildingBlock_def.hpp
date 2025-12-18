#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/BuildingBlock.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BuildingBlock)
namespace Meta::XR::BuildingBlocks {
class InstallationRoutineCheckpoint;
}
// Forward declare root types
namespace Meta::XR::BuildingBlocks {
class BuildingBlock;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::BuildingBlocks::BuildingBlock);
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::BuildingBlocks {
// Is value type: false
// CS Name: Meta.XR.BuildingBlocks.BuildingBlock
class CORDL_TYPE BuildingBlock : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_BlockId)) ::StringW BlockId;

  __declspec(property(get = get_InstallationRoutineCheckpoint, put = set_InstallationRoutineCheckpoint)) ::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint* InstallationRoutineCheckpoint;

  __declspec(property(get = get_InstanceId)) ::StringW InstanceId;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field blockId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_blockId, put = __cordl_internal_set_blockId)) ::StringW blockId;

  /// @brief Field installationRoutineCheckpoint, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_installationRoutineCheckpoint,
                      put = __cordl_internal_set_installationRoutineCheckpoint)) ::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint* installationRoutineCheckpoint;

  /// @brief Field instanceId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_instanceId, put = __cordl_internal_set_instanceId)) ::StringW instanceId;

  /// @brief Field version, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) int32_t version;

  /// @brief Method Awake, addr 0x5883dc4, size 0xa8, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HasDuplicateInstanceId, addr 0x5883e6c, size 0x110, virtual false, abstract: false, final false
  inline bool HasDuplicateInstanceId();

  static inline ::Meta::XR::BuildingBlocks::BuildingBlock* New_ctor();

  /// @brief Method ResetInstanceId, addr 0x5883f7c, size 0x34, virtual false, abstract: false, final false
  inline void ResetInstanceId();

  /// @brief Method Start, addr 0x5883fb0, size 0xf0, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::StringW const& __cordl_internal_get_blockId() const;

  constexpr ::StringW& __cordl_internal_get_blockId();

  constexpr ::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint* const& __cordl_internal_get_installationRoutineCheckpoint() const;

  constexpr ::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint*& __cordl_internal_get_installationRoutineCheckpoint();

  constexpr ::StringW const& __cordl_internal_get_instanceId() const;

  constexpr ::StringW& __cordl_internal_get_instanceId();

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_blockId(::StringW value);

  constexpr void __cordl_internal_set_installationRoutineCheckpoint(::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint* value);

  constexpr void __cordl_internal_set_instanceId(::StringW value);

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x5883838, size 0x40, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BlockId, addr 0x5883d9c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_BlockId();

  /// @brief Method get_InstallationRoutineCheckpoint, addr 0x5883db4, size 0x8, virtual false, abstract: false, final false
  inline ::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint* get_InstallationRoutineCheckpoint();

  /// @brief Method get_InstanceId, addr 0x5883da4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_InstanceId();

  /// @brief Method get_Version, addr 0x5883dac, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Version();

  /// @brief Method set_InstallationRoutineCheckpoint, addr 0x5883dbc, size 0x8, virtual false, abstract: false, final false
  inline void set_InstallationRoutineCheckpoint(::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BuildingBlock();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BuildingBlock", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BuildingBlock(BuildingBlock&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BuildingBlock", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BuildingBlock(BuildingBlock const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21159 };

  /// @brief Field blockId, offset: 0x20, size: 0x8, def value: None
  ::StringW ___blockId;

  /// @brief Field instanceId, offset: 0x28, size: 0x8, def value: None
  ::StringW ___instanceId;

  /// @brief Field version, offset: 0x30, size: 0x4, def value: None
  int32_t ___version;

  /// @brief Field installationRoutineCheckpoint, offset: 0x38, size: 0x8, def value: None
  ::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint* ___installationRoutineCheckpoint;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::BuildingBlock, ___blockId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::BuildingBlock, ___instanceId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::BuildingBlock, ___version) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::BuildingBlock, ___installationRoutineCheckpoint) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::BuildingBlock, 0x40>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
NEED_NO_BOX(::Meta::XR::BuildingBlocks::BuildingBlock);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::BuildingBlock*, "Meta.XR.BuildingBlocks", "BuildingBlock");
