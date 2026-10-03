#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/CommandManipulator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CommandManipulator)
namespace UnityEngine::UIElements::UIR {
class EntryProcessor;
}
namespace UnityEngine::UIElements::UIR {
class RenderChainCommand;
}
namespace UnityEngine::UIElements::UIR {
class RenderData;
}
namespace UnityEngine::UIElements::UIR {
class RenderTreeManager;
}
namespace UnityEngine::UIElements::UIR {
class RenderTree;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class CommandManipulator;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UIR::CommandManipulator*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::CommandManipulator*, "UnityEngine.UIElements.UIR", "CommandManipulator");
// Dependencies System.Object
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.CommandManipulator
class CORDL_TYPE CommandManipulator : public ::System::Object {
public:
  // Declarations
  /// @brief Method DisableElementRendering, addr 0x716383c, size 0x234, virtual false, abstract: false, final false
  static inline void DisableElementRendering(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager, ::UnityEngine::UIElements::VisualElement* ve, bool renderingDisabled);

  /// @brief Method FindHeadCommandInsertionPoint, addr 0x7163234, size 0xb0, virtual false, abstract: false, final false
  static inline void FindHeadCommandInsertionPoint(::UnityEngine::UIElements::UIR::RenderData* renderData, ::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*> prev,
                                                   ::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*> next);

  /// @brief Method FindPrevCommand, addr 0x7163480, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::UIR::RenderChainCommand* FindPrevCommand(::UnityEngine::UIElements::UIR::RenderData* candidate, bool searchFromHead);

  /// @brief Method FindTailCommandInsertionPoint, addr 0x71633d0, size 0xb0, virtual false, abstract: false, final false
  static inline void FindTailCommandInsertionPoint(::UnityEngine::UIElements::UIR::RenderData* renderData, ::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*> prev,
                                                   ::by_ref<::UnityEngine::UIElements::UIR::RenderChainCommand*> next);

  /// @brief Method InjectCommandInBetween, addr 0x7163790, size 0xac, virtual false, abstract: false, final false
  static inline void InjectCommandInBetween(::UnityEngine::UIElements::UIR::RenderChainCommand* cmd, bool isHeadCommand, ::UnityEngine::UIElements::UIR::RenderChainCommand* prev,
                                            ::UnityEngine::UIElements::UIR::RenderChainCommand* next);

  /// @brief Method RemoveChain, addr 0x716313c, size 0xf8, virtual false, abstract: false, final false
  static inline void RemoveChain(::UnityEngine::UIElements::UIR::RenderTree* renderTree, ::UnityEngine::UIElements::UIR::RenderChainCommand* first,
                                 ::UnityEngine::UIElements::UIR::RenderChainCommand* last);

  /// @brief Method RemoveSingleCommand, addr 0x7163a70, size 0x368, virtual false, abstract: false, final false
  static inline void RemoveSingleCommand(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager, ::UnityEngine::UIElements::UIR::RenderData* renderData,
                                         ::UnityEngine::UIElements::UIR::RenderChainCommand* cmd);

  /// @brief Method ReplaceHeadCommands, addr 0x7163050, size 0xec, virtual false, abstract: false, final false
  static inline void ReplaceHeadCommands(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager, ::UnityEngine::UIElements::UIR::RenderData* renderData,
                                         ::UnityEngine::UIElements::UIR::EntryProcessor* processor);

  /// @brief Method ReplaceTailCommands, addr 0x71632e4, size 0xec, virtual false, abstract: false, final false
  static inline void ReplaceTailCommands(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager, ::UnityEngine::UIElements::UIR::RenderData* renderData,
                                         ::UnityEngine::UIElements::UIR::EntryProcessor* processor);

  /// @brief Method ResetCommands, addr 0x71634d8, size 0x2b8, virtual false, abstract: false, final false
  static inline void ResetCommands(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager, ::UnityEngine::UIElements::UIR::RenderData* renderData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandManipulator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandManipulator", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandManipulator(CommandManipulator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandManipulator", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandManipulator(CommandManipulator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5390 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::UIR::CommandManipulator) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
