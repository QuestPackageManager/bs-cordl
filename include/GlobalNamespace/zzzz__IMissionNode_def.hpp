#pragma once
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
// Type: ::IMissionNode
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10865))
// CS Name: ::IMissionNode*
class CORDL_TYPE IMissionNode {
public:
  // Declarations
  __declspec(property(get = get_missionId))::StringW missionId;

  __declspec(property(get = get_missionData))::UnityW<::GlobalNamespace::MissionDataSO> missionData;

  /// @brief Method get_missionId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_missionId();

  /// @brief Method get_missionData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::GlobalNamespace::MissionDataSO> get_missionData();

  // Ctor Parameters [CppParam { name: "", ty: "IMissionNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMissionNode(IMissionNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMissionNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMissionNode(IMissionNode const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IMissionNode);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IMissionNode*, "", "IMissionNode");
