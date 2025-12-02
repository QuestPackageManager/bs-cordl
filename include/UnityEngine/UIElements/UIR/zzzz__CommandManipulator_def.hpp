#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/CommandManipulator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
class RenderChain;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class CommandManipulator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::CommandManipulator);
// Dependencies System.Object
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.CommandManipulator
class CORDL_TYPE CommandManipulator : public ::System::Object {
public:
  // Declarations
  /// @brief Method DisableElementRendering, addr 0x6aa0e9c, size 0x23c, virtual false, abstract: false, final false
  static inline void DisableElementRendering(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve, bool renderingDisabled);

  /// @brief Method FindHeadCommandInsertionPoint, addr 0x6aa0b98, size 0x17c, virtual false, abstract: false, final false
  static inline void FindHeadCommandInsertionPoint(::UnityEngine::UIElements::VisualElement* ve, ::ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> prev,
                                                   ::ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> next);

  /// @brief Method FindTailCommandInsertionPoint, addr 0x6aa0d14, size 0xe4, virtual false, abstract: false, final false
  static inline void FindTailCommandInsertionPoint(::UnityEngine::UIElements::VisualElement* ve, ::ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> prev,
                                                   ::ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> next);

  /// @brief Method InjectCommandInBetween, addr 0x6aa0df8, size 0xa4, virtual false, abstract: false, final false
  static inline void InjectCommandInBetween(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::UIR::RenderChainCommand* cmd,
                                            ::UnityEngine::UIElements::UIR::RenderChainCommand* prev, ::UnityEngine::UIElements::UIR::RenderChainCommand* next);

  /// @brief Method IsParentOrAncestorOf, addr 0x6aa060c, size 0x34, virtual false, abstract: false, final false
  static inline bool IsParentOrAncestorOf(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method RemoveChain, addr 0x6aa0aa4, size 0xf4, virtual false, abstract: false, final false
  static inline void RemoveChain(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::UIR::RenderChainCommand* first,
                                 ::UnityEngine::UIElements::UIR::RenderChainCommand* last);

  /// @brief Method RemoveSingleCommand, addr 0x6aa10d8, size 0x35c, virtual false, abstract: false, final false
  static inline void RemoveSingleCommand(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve,
                                         ::UnityEngine::UIElements::UIR::RenderChainCommand* cmd);

  /// @brief Method ReplaceCommands, addr 0x6aa0640, size 0x1bc, virtual false, abstract: false, final false
  static inline void ReplaceCommands(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::EntryProcessor* processor);

  /// @brief Method ResetCommands, addr 0x6aa07fc, size 0x2a8, virtual false, abstract: false, final false
  static inline void ResetCommands(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandManipulator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandManipulator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandManipulator(CommandManipulator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandManipulator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandManipulator(CommandManipulator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5283 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::CommandManipulator, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::CommandManipulator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::CommandManipulator*, "UnityEngine.UIElements.UIR", "CommandManipulator");
