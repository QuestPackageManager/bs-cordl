#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIDocument.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UIDocument)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class IRuntimePanel;
}
namespace UnityEngine::UIElements {
class PanelSettings;
}
namespace UnityEngine::UIElements {
class RuntimePanel;
}
namespace UnityEngine::UIElements {
class UIDocumentList;
}
namespace UnityEngine::UIElements {
struct UIDocument_WorldSpaceSizeMode;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct UIDocument_WorldSpaceSizeMode;
}
namespace UnityEngine::UIElements {
class UIDocument;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIDocument);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIDocument/WorldSpaceSizeMode
struct CORDL_TYPE UIDocument_WorldSpaceSizeMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UIDocument_WorldSpaceSizeMode_Unwrapped
  enum struct __UIDocument_WorldSpaceSizeMode_Unwrapped : int32_t {
    __E_Dynamic = static_cast<int32_t>(0x0),
    __E_Fixed = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UIDocument_WorldSpaceSizeMode_Unwrapped() const noexcept {
    return static_cast<__UIDocument_WorldSpaceSizeMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UIDocument_WorldSpaceSizeMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UIDocument_WorldSpaceSizeMode(int32_t value__) noexcept;

  /// @brief Field Dynamic value: I32(0)
  static ::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode const Dynamic;

  /// @brief Field Fixed value: I32(1)
  static ::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode const Fixed;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4598 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.UIElements.UIDocument::WorldSpaceSizeMode
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIDocument
class CORDL_TYPE UIDocument : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using WorldSpaceSizeMode = ::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode;

  __declspec(property(get = get_firstChildInserIndex)) int32_t firstChildInserIndex;

  /// @brief Field m_ChildrenContent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ChildrenContent, put = __cordl_internal_set_m_ChildrenContent)) ::UnityEngine::UIElements::UIDocumentList* m_ChildrenContent;

  /// @brief Field m_ChildrenContentCopy, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ChildrenContentCopy,
                      put = __cordl_internal_set_m_ChildrenContentCopy)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIDocument>>* m_ChildrenContentCopy;

  /// @brief Field m_FirstChildInsertIndex, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FirstChildInsertIndex, put = __cordl_internal_set_m_FirstChildInsertIndex)) int32_t m_FirstChildInsertIndex;

  /// @brief Field m_PanelSettings, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PanelSettings, put = __cordl_internal_set_m_PanelSettings)) ::UnityW<::UnityEngine::UIElements::PanelSettings> m_PanelSettings;

  /// @brief Field m_ParentUI, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ParentUI, put = __cordl_internal_set_m_ParentUI)) ::UnityW<::UnityEngine::UIElements::UIDocument> m_ParentUI;

  /// @brief Field m_PreviousPanelSettings, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviousPanelSettings, put = __cordl_internal_set_m_PreviousPanelSettings)) ::UnityW<::UnityEngine::UIElements::PanelSettings>
      m_PreviousPanelSettings;

  /// @brief Field m_RootHasWorldTransform, offset 0x7c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RootHasWorldTransform, put = __cordl_internal_set_m_RootHasWorldTransform)) bool m_RootHasWorldTransform;

  /// @brief Field m_RootVisualElement, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RootVisualElement, put = __cordl_internal_set_m_RootVisualElement)) ::UnityEngine::UIElements::VisualElement* m_RootVisualElement;

  /// @brief Field m_RuntimePanel, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RuntimePanel, put = __cordl_internal_set_m_RuntimePanel)) ::UnityEngine::UIElements::RuntimePanel* m_RuntimePanel;

  /// @brief Field m_SortingOrder, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SortingOrder, put = __cordl_internal_set_m_SortingOrder)) float_t m_SortingOrder;

  /// @brief Field m_UIDocumentCreationIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UIDocumentCreationIndex, put = __cordl_internal_set_m_UIDocumentCreationIndex)) int32_t m_UIDocumentCreationIndex;

  /// @brief Field m_WorldSpaceHeight, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_m_WorldSpaceHeight, put = __cordl_internal_set_m_WorldSpaceHeight)) float_t m_WorldSpaceHeight;

  /// @brief Field m_WorldSpaceSizeMode, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_m_WorldSpaceSizeMode, put = __cordl_internal_set_m_WorldSpaceSizeMode)) ::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode m_WorldSpaceSizeMode;

  /// @brief Field m_WorldSpaceWidth, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_m_WorldSpaceWidth, put = __cordl_internal_set_m_WorldSpaceWidth)) float_t m_WorldSpaceWidth;

  __declspec(property(get = get_panelSettings, put = set_panelSettings)) ::UnityW<::UnityEngine::UIElements::PanelSettings> panelSettings;

  __declspec(property(get = get_parentUI, put = set_parentUI)) ::UnityW<::UnityEngine::UIElements::UIDocument> parentUI;

  __declspec(property(get = get_pixelsPerUnit)) float_t pixelsPerUnit;

  __declspec(property(get = get_rootVisualElement)) ::UnityEngine::UIElements::VisualElement* rootVisualElement;

  __declspec(property(get = get_runtimePanel)) ::UnityEngine::UIElements::IRuntimePanel* runtimePanel;

  /// @brief Field s_CurrentUIDocumentCounter, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_CurrentUIDocumentCounter, put = setStaticF_s_CurrentUIDocumentCounter)) int32_t s_CurrentUIDocumentCounter;

  __declspec(property(get = get_sortingOrder, put = set_sortingOrder)) float_t sortingOrder;

  /// @brief Field sourceAsset, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_sourceAsset, put = __cordl_internal_set_sourceAsset)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> sourceAsset;

  __declspec(property(get = get_visualTreeAsset, put = set_visualTreeAsset)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> visualTreeAsset;

  __declspec(property(get = get_worldSpaceSizeMode)) ::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode worldSpaceSizeMode;

  /// @brief Method AddChildAndInsertContentToVisualTree, addr 0x6b7bb1c, size 0x94, virtual false, abstract: false, final false
  inline void AddChildAndInsertContentToVisualTree(::UnityEngine::UIElements::UIDocument* child);

  /// @brief Method AddOrRemoveRendererComponent, addr 0x6b7a74c, size 0x158, virtual false, abstract: false, final false
  inline void AddOrRemoveRendererComponent();

  /// @brief Method AddRootVisualElementToTree, addr 0x6b7a2a8, size 0xd8, virtual false, abstract: false, final false
  inline void AddRootVisualElementToTree();

  /// @brief Method ApplySortingOrder, addr 0x6b7a2a4, size 0x4, virtual false, abstract: false, final false
  inline void ApplySortingOrder();

  /// @brief Method Awake, addr 0x6b7a400, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ClearTransform, addr 0x6b7af14, size 0x27c, virtual false, abstract: false, final false
  inline void ClearTransform();

  /// @brief Method ComputeTransform, addr 0x6b7b330, size 0x3ac, virtual false, abstract: false, final false
  inline void ComputeTransform(::UnityEngine::Transform* transform, ::ByRef<::UnityEngine::Matrix4x4> matrix);

  /// @brief Method FindUIDocumentParent, addr 0x6b7b940, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::UIDocument> FindUIDocumentParent();

  /// @brief Method LateUpdate, addr 0x6b7a65c, size 0xf0, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::UnityEngine::UIElements::UIDocument* New_ctor();

  /// @brief Method OnDisable, addr 0x6b7c128, size 0x90, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x6b7a498, size 0x118, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnTransformChildrenChanged, addr 0x6b7c1b8, size 0x1ec, virtual false, abstract: false, final false
  inline void OnTransformChildrenChanged();

  /// @brief Method OnTransformParentChanged, addr 0x6b7c44c, size 0x4, virtual false, abstract: false, final false
  inline void OnTransformParentChanged();

  /// @brief Method ReactToHierarchyChanged, addr 0x6b7c3a4, size 0xa8, virtual false, abstract: false, final false
  inline void ReactToHierarchyChanged();

  /// @brief Method RecreateUI, addr 0x6b79e90, size 0x3e4, virtual false, abstract: false, final false
  inline void RecreateUI();

  /// @brief Method RemoveChild, addr 0x6b7b930, size 0x10, virtual false, abstract: false, final false
  inline void RemoveChild(::UnityEngine::UIElements::UIDocument* child);

  /// @brief Method RemoveFromHierarchy, addr 0x6b7bbb0, size 0xd0, virtual false, abstract: false, final false
  inline void RemoveFromHierarchy();

  /// @brief Method Reset, addr 0x6b7ba14, size 0x108, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method ResolveRuntimePanel, addr 0x6b7a5b0, size 0x94, virtual false, abstract: false, final false
  inline void ResolveRuntimePanel();

  /// @brief Method SanitizeRendererBounds, addr 0x6b7b25c, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds SanitizeRendererBounds(::UnityEngine::Bounds b);

  /// @brief Method SetNoTransform, addr 0x6b7b6e4, size 0x24c, virtual false, abstract: false, final false
  static inline void SetNoTransform(::UnityEngine::UIElements::VisualElement* visualElement);

  /// @brief Method SetTransform, addr 0x6b7a8a4, size 0x3bc, virtual false, abstract: false, final false
  inline void SetTransform();

  /// @brief Method SetupFromHierarchy, addr 0x6b7a404, size 0x94, virtual false, abstract: false, final false
  inline void SetupFromHierarchy();

  /// @brief Method SetupRootClassList, addr 0x6b7bc80, size 0x108, virtual false, abstract: false, final false
  inline void SetupRootClassList();

  /// @brief Method UpdateCutRenderChainFlag, addr 0x6b7b190, size 0xac, virtual false, abstract: false, final false
  inline void UpdateCutRenderChainFlag();

  /// @brief Method UpdateRenderer, addr 0x6b7ac60, size 0x2b4, virtual false, abstract: false, final false
  inline void UpdateRenderer();

  /// @brief Method UpdateWorldSpaceSize, addr 0x6b7bd88, size 0x3a0, virtual false, abstract: false, final false
  inline void UpdateWorldSpaceSize();

  constexpr ::UnityEngine::UIElements::UIDocumentList* const& __cordl_internal_get_m_ChildrenContent() const;

  constexpr ::UnityEngine::UIElements::UIDocumentList*& __cordl_internal_get_m_ChildrenContent();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIDocument>>* const& __cordl_internal_get_m_ChildrenContentCopy() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIDocument>>*& __cordl_internal_get_m_ChildrenContentCopy();

  constexpr int32_t const& __cordl_internal_get_m_FirstChildInsertIndex() const;

  constexpr int32_t& __cordl_internal_get_m_FirstChildInsertIndex();

  constexpr ::UnityW<::UnityEngine::UIElements::PanelSettings> const& __cordl_internal_get_m_PanelSettings() const;

  constexpr ::UnityW<::UnityEngine::UIElements::PanelSettings>& __cordl_internal_get_m_PanelSettings();

  constexpr ::UnityW<::UnityEngine::UIElements::UIDocument> const& __cordl_internal_get_m_ParentUI() const;

  constexpr ::UnityW<::UnityEngine::UIElements::UIDocument>& __cordl_internal_get_m_ParentUI();

  constexpr ::UnityW<::UnityEngine::UIElements::PanelSettings> const& __cordl_internal_get_m_PreviousPanelSettings() const;

  constexpr ::UnityW<::UnityEngine::UIElements::PanelSettings>& __cordl_internal_get_m_PreviousPanelSettings();

  constexpr bool const& __cordl_internal_get_m_RootHasWorldTransform() const;

  constexpr bool& __cordl_internal_get_m_RootHasWorldTransform();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_RootVisualElement() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_RootVisualElement();

  constexpr ::UnityEngine::UIElements::RuntimePanel* const& __cordl_internal_get_m_RuntimePanel() const;

  constexpr ::UnityEngine::UIElements::RuntimePanel*& __cordl_internal_get_m_RuntimePanel();

  constexpr float_t const& __cordl_internal_get_m_SortingOrder() const;

  constexpr float_t& __cordl_internal_get_m_SortingOrder();

  constexpr int32_t const& __cordl_internal_get_m_UIDocumentCreationIndex() const;

  constexpr int32_t& __cordl_internal_get_m_UIDocumentCreationIndex();

  constexpr float_t const& __cordl_internal_get_m_WorldSpaceHeight() const;

  constexpr float_t& __cordl_internal_get_m_WorldSpaceHeight();

  constexpr ::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode const& __cordl_internal_get_m_WorldSpaceSizeMode() const;

  constexpr ::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode& __cordl_internal_get_m_WorldSpaceSizeMode();

  constexpr float_t const& __cordl_internal_get_m_WorldSpaceWidth() const;

  constexpr float_t& __cordl_internal_get_m_WorldSpaceWidth();

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& __cordl_internal_get_sourceAsset() const;

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& __cordl_internal_get_sourceAsset();

  constexpr void __cordl_internal_set_m_ChildrenContent(::UnityEngine::UIElements::UIDocumentList* value);

  constexpr void __cordl_internal_set_m_ChildrenContentCopy(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIDocument>>* value);

  constexpr void __cordl_internal_set_m_FirstChildInsertIndex(int32_t value);

  constexpr void __cordl_internal_set_m_PanelSettings(::UnityW<::UnityEngine::UIElements::PanelSettings> value);

  constexpr void __cordl_internal_set_m_ParentUI(::UnityW<::UnityEngine::UIElements::UIDocument> value);

  constexpr void __cordl_internal_set_m_PreviousPanelSettings(::UnityW<::UnityEngine::UIElements::PanelSettings> value);

  constexpr void __cordl_internal_set_m_RootHasWorldTransform(bool value);

  constexpr void __cordl_internal_set_m_RootVisualElement(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_RuntimePanel(::UnityEngine::UIElements::RuntimePanel* value);

  constexpr void __cordl_internal_set_m_SortingOrder(float_t value);

  constexpr void __cordl_internal_set_m_UIDocumentCreationIndex(int32_t value);

  constexpr void __cordl_internal_set_m_WorldSpaceHeight(float_t value);

  constexpr void __cordl_internal_set_m_WorldSpaceSizeMode(::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode value);

  constexpr void __cordl_internal_set_m_WorldSpaceWidth(float_t value);

  constexpr void __cordl_internal_set_sourceAsset(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value);

  /// @brief Method .ctor, addr 0x6b7a380, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_s_CurrentUIDocumentCounter();

  /// @brief Method get_firstChildInserIndex, addr 0x6b7a274, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_firstChildInserIndex();

  /// @brief Method get_panelSettings, addr 0x6b79bf4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::PanelSettings> get_panelSettings();

  /// @brief Method get_parentUI, addr 0x6b79e70, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::UIDocument> get_parentUI();

  /// @brief Method get_pixelsPerUnit, addr 0x6b7b23c, size 0x18, virtual false, abstract: false, final false
  inline float_t get_pixelsPerUnit();

  /// @brief Method get_rootVisualElement, addr 0x6b79bec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_rootVisualElement();

  /// @brief Method get_runtimePanel, addr 0x6b7a644, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IRuntimePanel* get_runtimePanel();

  /// @brief Method get_sortingOrder, addr 0x6b7a284, size 0x8, virtual false, abstract: false, final false
  inline float_t get_sortingOrder();

  /// @brief Method get_visualTreeAsset, addr 0x6b79e80, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> get_visualTreeAsset();

  /// @brief Method get_worldSpaceSizeMode, addr 0x6b7a27c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode get_worldSpaceSizeMode();

  static inline void setStaticF_s_CurrentUIDocumentCounter(int32_t value);

  /// @brief Method set_panelSettings, addr 0x6b79bfc, size 0x274, virtual false, abstract: false, final false
  inline void set_panelSettings(::UnityEngine::UIElements::PanelSettings* value);

  /// @brief Method set_parentUI, addr 0x6b79e78, size 0x8, virtual false, abstract: false, final false
  inline void set_parentUI(::UnityEngine::UIElements::UIDocument* value);

  /// @brief Method set_sortingOrder, addr 0x6b7a28c, size 0x18, virtual false, abstract: false, final false
  inline void set_sortingOrder(float_t value);

  /// @brief Method set_visualTreeAsset, addr 0x6b79e88, size 0x8, virtual false, abstract: false, final false
  inline void set_visualTreeAsset(::UnityEngine::UIElements::VisualTreeAsset* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIDocument();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIDocument", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIDocument(UIDocument&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIDocument", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIDocument(UIDocument const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4599 };

  /// @brief Field k_DefaultSortingOrder offset 0xffffffff size 0x4
  static constexpr int32_t k_DefaultSortingOrder{ static_cast<int32_t>(0x0) };

  /// @brief Field k_RootStyleClassName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_RootStyleClassName{ u"unity-ui-document__root" };

  /// @brief Field k_VisualElementNameSuffix offset 0xffffffff size 0x8
  static constexpr ::ConstString k_VisualElementNameSuffix{ u"-container" };

  /// @brief Field m_UIDocumentCreationIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_UIDocumentCreationIndex;

  /// @brief Field m_PanelSettings, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::PanelSettings> ___m_PanelSettings;

  /// @brief Field m_PreviousPanelSettings, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::PanelSettings> ___m_PreviousPanelSettings;

  /// @brief Field m_ParentUI, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::UIDocument> ___m_ParentUI;

  /// @brief Field m_ChildrenContent, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIDocumentList* ___m_ChildrenContent;

  /// @brief Field m_ChildrenContentCopy, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIDocument>>* ___m_ChildrenContentCopy;

  /// @brief Field sourceAsset, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> ___sourceAsset;

  /// @brief Field m_RootVisualElement, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_RootVisualElement;

  /// @brief Field m_RuntimePanel, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::UIElements::RuntimePanel* ___m_RuntimePanel;

  /// @brief Field m_FirstChildInsertIndex, offset: 0x68, size: 0x4, def value: None
  int32_t ___m_FirstChildInsertIndex;

  /// @brief Field m_SortingOrder, offset: 0x6c, size: 0x4, def value: None
  float_t ___m_SortingOrder;

  /// @brief Field m_WorldSpaceSizeMode, offset: 0x70, size: 0x4, def value: None
  ::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode ___m_WorldSpaceSizeMode;

  /// @brief Field m_WorldSpaceWidth, offset: 0x74, size: 0x4, def value: None
  float_t ___m_WorldSpaceWidth;

  /// @brief Field m_WorldSpaceHeight, offset: 0x78, size: 0x4, def value: None
  float_t ___m_WorldSpaceHeight;

  /// @brief Field m_RootHasWorldTransform, offset: 0x7c, size: 0x1, def value: None
  bool ___m_RootHasWorldTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_UIDocumentCreationIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_PanelSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_PreviousPanelSettings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_ParentUI) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_ChildrenContent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_ChildrenContentCopy) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___sourceAsset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_RootVisualElement) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_RuntimePanel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_FirstChildInsertIndex) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_SortingOrder) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_WorldSpaceSizeMode) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_WorldSpaceWidth) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_WorldSpaceHeight) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_RootHasWorldTransform) == 0x7c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIDocument, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode, "UnityEngine.UIElements", "UIDocument/WorldSpaceSizeMode");
NEED_NO_BOX(::UnityEngine::UIElements::UIDocument);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIDocument*, "UnityEngine.UIElements", "UIDocument");
