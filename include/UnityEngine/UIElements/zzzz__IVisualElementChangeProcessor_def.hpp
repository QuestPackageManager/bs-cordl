#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IVisualElementChangeProcessor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IVisualElementChangeProcessor)
namespace UnityEngine::UIElements {
class AuthoringChanges;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IVisualElementChangeProcessor;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::IVisualElementChangeProcessor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::IVisualElementChangeProcessor*, "UnityEngine.UIElements", "IVisualElementChangeProcessor");
// [VisibleToOtherModules(new[] { "UnityEditor.UIToolkitAuthoringModule" })]
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IVisualElementChangeProcessor
class CORDL_TYPE IVisualElementChangeProcessor {
public:
  // Declarations
  /// @brief Method BeginProcessing, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void BeginProcessing(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method EndProcessing, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void EndProcessing(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method ProcessChanges, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ProcessChanges(::UnityEngine::UIElements::BaseVisualElementPanel* panel, ::UnityEngine::UIElements::AuthoringChanges* changes);

  // Ctor Parameters [CppParam { name: "", ty: "IVisualElementChangeProcessor", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVisualElementChangeProcessor(IVisualElementChangeProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4002 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
