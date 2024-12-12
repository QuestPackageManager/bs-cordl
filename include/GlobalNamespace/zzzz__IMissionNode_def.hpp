#pragma once
// IWYU pragma private; include "GlobalNamespace/IMissionNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IMissionNode)
namespace GlobalNamespace {
class MissionDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class IMissionNode;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IMissionNode);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IMissionNode
class CORDL_TYPE IMissionNode {
public:
  // Declarations
  __declspec(property(get = get_missionData)) ::UnityW<::GlobalNamespace::MissionDataSO> missionData;

  __declspec(property(get = get_missionId)) ::StringW missionId;

  /// @brief Method get_missionData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MissionDataSO> get_missionData();

  /// @brief Method get_missionId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_missionId();

  // Ctor Parameters [CppParam { name: "", ty: "IMissionNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMissionNode(IMissionNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13038 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IMissionNode);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IMissionNode*, "", "IMissionNode");
