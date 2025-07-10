#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIDocument.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UIDocument)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class PanelSettings;
}
namespace UnityEngine::UIElements {
class UIDocumentList;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIDocument;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIDocument);
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIDocument
class CORDL_TYPE UIDocument : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_firstChildInserIndex)) int32_t firstChildInserIndex;

  /// @brief Field m_ChildrenContent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ChildrenContent, put = __cordl_internal_set_m_ChildrenContent)) ::UnityEngine::UIElements::UIDocumentList* m_ChildrenContent;

  /// @brief Field m_ChildrenContentCopy, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ChildrenContentCopy,
                      put = __cordl_internal_set_m_ChildrenContentCopy)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIDocument>>* m_ChildrenContentCopy;

  /// @brief Field m_FirstChildInsertIndex, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FirstChildInsertIndex, put = __cordl_internal_set_m_FirstChildInsertIndex)) int32_t m_FirstChildInsertIndex;

  /// @brief Field m_PanelSettings, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PanelSettings, put = __cordl_internal_set_m_PanelSettings)) ::UnityW<::UnityEngine::UIElements::PanelSettings> m_PanelSettings;

  /// @brief Field m_ParentUI, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ParentUI, put = __cordl_internal_set_m_ParentUI)) ::UnityW<::UnityEngine::UIElements::UIDocument> m_ParentUI;

  /// @brief Field m_PreviousPanelSettings, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviousPanelSettings, put = __cordl_internal_set_m_PreviousPanelSettings)) ::UnityW<::UnityEngine::UIElements::PanelSettings>
      m_PreviousPanelSettings;

  /// @brief Field m_RootVisualElement, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RootVisualElement, put = __cordl_internal_set_m_RootVisualElement)) ::UnityEngine::UIElements::VisualElement* m_RootVisualElement;

  /// @brief Field m_SortingOrder, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SortingOrder, put = __cordl_internal_set_m_SortingOrder)) float_t m_SortingOrder;

  /// @brief Field m_UIDocumentCreationIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UIDocumentCreationIndex, put = __cordl_internal_set_m_UIDocumentCreationIndex)) int32_t m_UIDocumentCreationIndex;

  __declspec(property(get = get_panelSettings, put = set_panelSettings)) ::UnityW<::UnityEngine::UIElements::PanelSettings> panelSettings;

  __declspec(property(get = get_parentUI, put = set_parentUI)) ::UnityW<::UnityEngine::UIElements::UIDocument> parentUI;

  __declspec(property(get = get_rootVisualElement)) ::UnityEngine::UIElements::VisualElement* rootVisualElement;

  /// @brief Field s_CurrentUIDocumentCounter, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_CurrentUIDocumentCounter, put = setStaticF_s_CurrentUIDocumentCounter)) int32_t s_CurrentUIDocumentCounter;

  __declspec(property(get = get_sortingOrder, put = set_sortingOrder)) float_t sortingOrder;

  /// @brief Field sourceAsset, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_sourceAsset, put = __cordl_internal_set_sourceAsset)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> sourceAsset;

  __declspec(property(get = get_visualTreeAsset, put = set_visualTreeAsset)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> visualTreeAsset;

  /// @brief Method AddChildAndInsertContentToVisualTree, addr 0x4a3c200, size 0x88, virtual false, abstract: false, final false
  inline void AddChildAndInsertContentToVisualTree(::UnityEngine::UIElements::UIDocument* child);

  /// @brief Method AddRootVisualElementToTree, addr 0x4a3bd7c, size 0xd8, virtual false, abstract: false, final false
  inline void AddRootVisualElementToTree();

  /// @brief Method ApplySortingOrder, addr 0x4a3bd78, size 0x4, virtual false, abstract: false, final false
  inline void ApplySortingOrder();

  /// @brief Method Awake, addr 0x4a3bec4, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method FindUIDocumentParent, addr 0x4a3c028, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::UIDocument> FindUIDocumentParent();

  static inline ::UnityEngine::UIElements::UIDocument* New_ctor();

  /// @brief Method OnDisable, addr 0x4a3c3f4, size 0x20, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x4a3bf58, size 0xc0, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnTransformChildrenChanged, addr 0x4a3c414, size 0x20c, virtual false, abstract: false, final false
  inline void OnTransformChildrenChanged();

  /// @brief Method OnTransformParentChanged, addr 0x4a3c6c4, size 0x4, virtual false, abstract: false, final false
  inline void OnTransformParentChanged();

  /// @brief Method ReactToHierarchyChanged, addr 0x4a3c620, size 0xa4, virtual false, abstract: false, final false
  inline void ReactToHierarchyChanged();

  /// @brief Method RecreateUI, addr 0x4a3b944, size 0x40c, virtual false, abstract: false, final false
  inline void RecreateUI();

  /// @brief Method RemoveChild, addr 0x4a3c018, size 0x10, virtual false, abstract: false, final false
  inline void RemoveChild(::UnityEngine::UIElements::UIDocument* child);

  /// @brief Method RemoveFromHierarchy, addr 0x4a3c288, size 0xd0, virtual false, abstract: false, final false
  inline void RemoveFromHierarchy();

  /// @brief Method Reset, addr 0x4a3c0f8, size 0x108, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetupFromHierarchy, addr 0x4a3bec8, size 0x90, virtual false, abstract: false, final false
  inline void SetupFromHierarchy();

  /// @brief Method SetupRootClassList, addr 0x4a3c358, size 0x9c, virtual false, abstract: false, final false
  inline void SetupRootClassList();

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

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_RootVisualElement() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_RootVisualElement();

  constexpr float_t const& __cordl_internal_get_m_SortingOrder() const;

  constexpr float_t& __cordl_internal_get_m_SortingOrder();

  constexpr int32_t const& __cordl_internal_get_m_UIDocumentCreationIndex() const;

  constexpr int32_t& __cordl_internal_get_m_UIDocumentCreationIndex();

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& __cordl_internal_get_sourceAsset() const;

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& __cordl_internal_get_sourceAsset();

  constexpr void __cordl_internal_set_m_ChildrenContent(::UnityEngine::UIElements::UIDocumentList* value);

  constexpr void __cordl_internal_set_m_ChildrenContentCopy(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIDocument>>* value);

  constexpr void __cordl_internal_set_m_FirstChildInsertIndex(int32_t value);

  constexpr void __cordl_internal_set_m_PanelSettings(::UnityW<::UnityEngine::UIElements::PanelSettings> value);

  constexpr void __cordl_internal_set_m_ParentUI(::UnityW<::UnityEngine::UIElements::UIDocument> value);

  constexpr void __cordl_internal_set_m_PreviousPanelSettings(::UnityW<::UnityEngine::UIElements::PanelSettings> value);

  constexpr void __cordl_internal_set_m_RootVisualElement(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_SortingOrder(float_t value);

  constexpr void __cordl_internal_set_m_UIDocumentCreationIndex(int32_t value);

  constexpr void __cordl_internal_set_sourceAsset(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value);

  /// @brief Method .ctor, addr 0x4a3be54, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_s_CurrentUIDocumentCounter();

  /// @brief Method get_firstChildInserIndex, addr 0x4a3bd50, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_firstChildInserIndex();

  /// @brief Method get_panelSettings, addr 0x4a3b670, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::PanelSettings> get_panelSettings();

  /// @brief Method get_parentUI, addr 0x4a3b924, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::UIDocument> get_parentUI();

  /// @brief Method get_rootVisualElement, addr 0x4a3b2b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_rootVisualElement();

  /// @brief Method get_sortingOrder, addr 0x4a3bd58, size 0x8, virtual false, abstract: false, final false
  inline float_t get_sortingOrder();

  /// @brief Method get_visualTreeAsset, addr 0x4a3b934, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> get_visualTreeAsset();

  static inline void setStaticF_s_CurrentUIDocumentCounter(int32_t value);

  /// @brief Method set_panelSettings, addr 0x4a3b678, size 0x2ac, virtual false, abstract: false, final false
  inline void set_panelSettings(::UnityEngine::UIElements::PanelSettings* value);

  /// @brief Method set_parentUI, addr 0x4a3b92c, size 0x8, virtual false, abstract: false, final false
  inline void set_parentUI(::UnityEngine::UIElements::UIDocument* value);

  /// @brief Method set_sortingOrder, addr 0x4a3bd60, size 0x18, virtual false, abstract: false, final false
  inline void set_sortingOrder(float_t value);

  /// @brief Method set_visualTreeAsset, addr 0x4a3b93c, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5969 };

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

  /// @brief Field m_FirstChildInsertIndex, offset: 0x60, size: 0x4, def value: None
  int32_t ___m_FirstChildInsertIndex;

  /// @brief Field m_SortingOrder, offset: 0x64, size: 0x4, def value: None
  float_t ___m_SortingOrder;

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

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_FirstChildInsertIndex) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIDocument, ___m_SortingOrder) == 0x64, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIDocument, 0x68>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UIDocument);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIDocument*, "UnityEngine.UIElements", "UIDocument");
