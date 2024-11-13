#pragma once
// IWYU pragma private; include "GlobalNamespace/IMissionNodesManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMissionNodesManager)
namespace GlobalNamespace {
class IMissionNode;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IMissionNodesManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IMissionNodesManager);
// Type: ::IMissionNodesManager
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IMissionNodesManager*
class CORDL_TYPE IMissionNodesManager {
public:
  // Declarations
  __declspec(property(get = get_allMissionNodes)) ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::IMissionNode*>* allMissionNodes;

  __declspec(property(get = get_finalMissionNode)) ::GlobalNamespace::IMissionNode* finalMissionNode;

  /// @brief Method get_allMissionNodes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::IMissionNode*>* get_allMissionNodes();

  /// @brief Method get_finalMissionNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::IMissionNode* get_finalMissionNode();

  // Ctor Parameters [CppParam { name: "", ty: "IMissionNodesManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMissionNodesManager(IMissionNodesManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMissionNodesManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMissionNodesManager(IMissionNodesManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13004 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IMissionNodesManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IMissionNodesManager*, "", "IMissionNodesManager");
