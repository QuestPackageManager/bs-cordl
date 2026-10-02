#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIDocumentRootElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TemplateContainer_def.hpp"
CORDL_MODULE_EXPORT(UIDocumentRootElement)
namespace UnityEngine::UIElements {
class UIDocument;
}
namespace UnityEngine::UIElements {
class UIRenderer;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIDocumentRootElement;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UIDocumentRootElement*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIDocumentRootElement*, "UnityEngine.UIElements", "UIDocumentRootElement");
// [VisibleToOtherModules(new[] { "UnityEditor.UIToolkitAuthoringModule" })]
// Dependencies UnityEngine.UIElements.TemplateContainer
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIDocumentRootElement
class CORDL_TYPE UIDocumentRootElement : public ::UnityEngine::UIElements::TemplateContainer {
public:
  // Declarations
  /// @brief Field <uiRenderer>k__BackingField, offset 0x2f8, size 0x8
  __declspec(property(get = __cordl_internal_get__uiRenderer_k__BackingField, put = __cordl_internal_set__uiRenderer_k__BackingField)) ::UnityW<::UnityEngine::UIElements::UIRenderer>
      _uiRenderer_k__BackingField;

  /// @brief Field document, offset 0x2f0, size 0x8
  __declspec(property(get = __cordl_internal_get_document, put = __cordl_internal_set_document)) ::UnityW<::UnityEngine::UIElements::UIDocument> document;

  __declspec(property(get = get_uiRenderer, put = set_uiRenderer)) ::UnityW<::UnityEngine::UIElements::UIRenderer> uiRenderer;

  static inline ::UnityEngine::UIElements::UIDocumentRootElement* New_ctor(::UnityEngine::UIElements::UIDocument* document, ::UnityEngine::UIElements::VisualTreeAsset* sourceAsset);

  constexpr ::UnityW<::UnityEngine::UIElements::UIRenderer> const& __cordl_internal_get__uiRenderer_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::UIElements::UIRenderer>& __cordl_internal_get__uiRenderer_k__BackingField();

  constexpr ::UnityW<::UnityEngine::UIElements::UIDocument> const& __cordl_internal_get_document() const;

  constexpr ::UnityW<::UnityEngine::UIElements::UIDocument>& __cordl_internal_get_document();

  constexpr void __cordl_internal_set__uiRenderer_k__BackingField(::UnityW<::UnityEngine::UIElements::UIRenderer> value);

  constexpr void __cordl_internal_set_document(::UnityW<::UnityEngine::UIElements::UIDocument> value);

  /// @brief Method .ctor, addr 0x7248bc4, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::UIDocument* document, ::UnityEngine::UIElements::VisualTreeAsset* sourceAsset);

  /// [CompilerGenerated]
  /// @brief Method get_uiRenderer, addr 0x7248bb4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::UIRenderer> get_uiRenderer();

  /// [CompilerGenerated]
  /// @brief Method set_uiRenderer, addr 0x7248bbc, size 0x8, virtual false, abstract: false, final false
  inline void set_uiRenderer(::UnityEngine::UIElements::UIRenderer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIDocumentRootElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIDocumentRootElement", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIDocumentRootElement(UIDocumentRootElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIDocumentRootElement", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIDocumentRootElement(UIDocumentRootElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4634 };

  /// @brief Field document, offset: 0x2f0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::UIDocument> ___document;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <uiRenderer>k__BackingField, offset: 0x2f8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::UIRenderer> ____uiRenderer_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIDocumentRootElement, ___document) == 0x2f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocumentRootElement, ____uiRenderer_k__BackingField) == 0x2f8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UIDocumentRootElement) == 0x300, "Size mismatch!");

} // namespace UnityEngine::UIElements
