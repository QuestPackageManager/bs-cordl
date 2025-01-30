#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionNodesHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MissionNodesHelper)
namespace GlobalNamespace {
class MissionNode;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionNodesHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionNodesHelper);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionNodesHelper
class CORDL_TYPE MissionNodesHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method CycleDetection, addr 0x3c0e094, size 0x7c, virtual false, abstract: false, final false
  static inline bool CycleDetection(::GlobalNamespace::MissionNode* node);

  /// @brief Method CycleDetection, addr 0x3c0e110, size 0x158, virtual false, abstract: false, final false
  static inline bool CycleDetection(::GlobalNamespace::MissionNode* node, int32_t layer, ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::MissionNode>, int32_t>* layers);

  /// @brief Method FinalNodeIsFinal, addr 0x3c0e2e8, size 0x138, virtual false, abstract: false, final false
  static inline bool FinalNodeIsFinal(::GlobalNamespace::MissionNode* finalNode, ::GlobalNamespace::MissionNode* node,
                                      ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MissionNode>>* visitedNodes);

  /// @brief Method FinalNodeIsFinal, addr 0x3c0e268, size 0x80, virtual false, abstract: false, final false
  static inline bool FinalNodeIsFinal(::GlobalNamespace::MissionNode* finalNode, ::GlobalNamespace::MissionNode* rootNode);

  /// @brief Method GetAllNodesFromRoot, addr 0x3c0df3c, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MissionNode>>* GetAllNodesFromRoot(::GlobalNamespace::MissionNode* root);

  static inline ::GlobalNamespace::MissionNodesHelper* New_ctor();

  /// @brief Method VisitAllTree, addr 0x3c0dfbc, size 0xd8, virtual false, abstract: false, final false
  static inline void VisitAllTree(::GlobalNamespace::MissionNode* node, ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MissionNode>>* visitedNodes);

  /// @brief Method .ctor, addr 0x3c0e420, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionNodesHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionNodesHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionNodesHelper(MissionNodesHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionNodesHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionNodesHelper(MissionNodesHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4823 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionNodesHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionNodesHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionNodesHelper*, "", "MissionNodesHelper");
