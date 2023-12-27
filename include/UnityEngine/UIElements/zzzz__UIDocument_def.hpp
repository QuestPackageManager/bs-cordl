#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UIDocument)
namespace UnityEngine::UIElements {
class UIDocumentList;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class PanelSettings;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIDocument;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIDocument);
// Type: UnityEngine.UIElements::UIDocument
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7015))
// CS Name: ::UnityEngine.UIElements::UIDocument*
class CORDL_TYPE UIDocument : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field m_UIDocumentCreationIndex, offset 0x18, size 0x4
  __declspec(property(get = __get_m_UIDocumentCreationIndex, put = __set_m_UIDocumentCreationIndex)) int32_t m_UIDocumentCreationIndex;

  /// @brief Field m_PanelSettings, offset 0x20, size 0x8
  __declspec(property(get = __get_m_PanelSettings, put = __set_m_PanelSettings))::UnityEngine::UIElements::PanelSettings* m_PanelSettings;

  /// @brief Field m_PreviousPanelSettings, offset 0x28, size 0x8
  __declspec(property(get = __get_m_PreviousPanelSettings, put = __set_m_PreviousPanelSettings))::UnityEngine::UIElements::PanelSettings* m_PreviousPanelSettings;

  /// @brief Field m_ParentUI, offset 0x30, size 0x8
  __declspec(property(get = __get_m_ParentUI, put = __set_m_ParentUI))::UnityEngine::UIElements::UIDocument* m_ParentUI;

  /// @brief Field m_ChildrenContent, offset 0x38, size 0x8
  __declspec(property(get = __get_m_ChildrenContent, put = __set_m_ChildrenContent))::UnityEngine::UIElements::UIDocumentList* m_ChildrenContent;

  /// @brief Field m_ChildrenContentCopy, offset 0x40, size 0x8
  __declspec(property(get = __get_m_ChildrenContentCopy, put = __set_m_ChildrenContentCopy))::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIDocument*>* m_ChildrenContentCopy;

  /// @brief Field sourceAsset, offset 0x48, size 0x8
  __declspec(property(get = __get_sourceAsset, put = __set_sourceAsset))::UnityEngine::UIElements::VisualTreeAsset* sourceAsset;

  /// @brief Field m_RootVisualElement, offset 0x50, size 0x8
  __declspec(property(get = __get_m_RootVisualElement, put = __set_m_RootVisualElement))::UnityEngine::UIElements::VisualElement* m_RootVisualElement;

  /// @brief Field m_FirstChildInsertIndex, offset 0x58, size 0x4
  __declspec(property(get = __get_m_FirstChildInsertIndex, put = __set_m_FirstChildInsertIndex)) int32_t m_FirstChildInsertIndex;

  /// @brief Field m_SortingOrder, offset 0x5c, size 0x4
  __declspec(property(get = __get_m_SortingOrder, put = __set_m_SortingOrder)) float_t m_SortingOrder;

  /// @brief Field s_CurrentUIDocumentCounter, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_CurrentUIDocumentCounter, put = setStaticF_s_CurrentUIDocumentCounter)) int32_t s_CurrentUIDocumentCounter;

  __declspec(property(get = get_panelSettings, put = set_panelSettings))::UnityEngine::UIElements::PanelSettings* panelSettings;

  __declspec(property(get = get_parentUI, put = set_parentUI))::UnityEngine::UIElements::UIDocument* parentUI;

  __declspec(property(get = get_visualTreeAsset, put = set_visualTreeAsset))::UnityEngine::UIElements::VisualTreeAsset* visualTreeAsset;

  __declspec(property(get = get_rootVisualElement))::UnityEngine::UIElements::VisualElement* rootVisualElement;

  __declspec(property(get = get_firstChildInserIndex)) int32_t firstChildInserIndex;

  __declspec(property(get = get_sortingOrder, put = set_sortingOrder)) float_t sortingOrder;

  constexpr int32_t& __get_m_UIDocumentCreationIndex();

  constexpr int32_t const& __get_m_UIDocumentCreationIndex() const;

  constexpr void __set_m_UIDocumentCreationIndex(int32_t value);

  constexpr ::UnityEngine::UIElements::PanelSettings*& __get_m_PanelSettings();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::PanelSettings*> const& __get_m_PanelSettings() const;

  constexpr void __set_m_PanelSettings(::UnityEngine::UIElements::PanelSettings* value);

  constexpr ::UnityEngine::UIElements::PanelSettings*& __get_m_PreviousPanelSettings();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::PanelSettings*> const& __get_m_PreviousPanelSettings() const;

  constexpr void __set_m_PreviousPanelSettings(::UnityEngine::UIElements::PanelSettings* value);

  constexpr ::UnityEngine::UIElements::UIDocument*& __get_m_ParentUI();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIDocument*> const& __get_m_ParentUI() const;

  constexpr void __set_m_ParentUI(::UnityEngine::UIElements::UIDocument* value);

  constexpr ::UnityEngine::UIElements::UIDocumentList*& __get_m_ChildrenContent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIDocumentList*> const& __get_m_ChildrenContent() const;

  constexpr void __set_m_ChildrenContent(::UnityEngine::UIElements::UIDocumentList* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIDocument*>*& __get_m_ChildrenContentCopy();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIDocument*>*> const& __get_m_ChildrenContentCopy() const;

  constexpr void __set_m_ChildrenContentCopy(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIDocument*>* value);

  constexpr ::UnityEngine::UIElements::VisualTreeAsset*& __get_sourceAsset();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualTreeAsset*> const& __get_sourceAsset() const;

  constexpr void __set_sourceAsset(::UnityEngine::UIElements::VisualTreeAsset* value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __get_m_RootVisualElement();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get_m_RootVisualElement() const;

  constexpr void __set_m_RootVisualElement(::UnityEngine::UIElements::VisualElement* value);

  constexpr int32_t& __get_m_FirstChildInsertIndex();

  constexpr int32_t const& __get_m_FirstChildInsertIndex() const;

  constexpr void __set_m_FirstChildInsertIndex(int32_t value);

  constexpr float_t& __get_m_SortingOrder();

  constexpr float_t const& __get_m_SortingOrder() const;

  constexpr void __set_m_SortingOrder(float_t value);

  static inline void setStaticF_s_CurrentUIDocumentCounter(int32_t value);

  static inline int32_t getStaticF_s_CurrentUIDocumentCounter();

  /// @brief Method get_panelSettings addr 0x2e15394 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::PanelSettings* get_panelSettings();

  /// @brief Method set_panelSettings addr 0x2e1539c size 0x29c virtual false final false
  inline void set_panelSettings(::UnityEngine::UIElements::PanelSettings* value);

  /// @brief Method get_parentUI addr 0x2e15748 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::UIDocument* get_parentUI();

  /// @brief Method set_parentUI addr 0x2e15750 size 0x8 virtual false final false
  inline void set_parentUI(::UnityEngine::UIElements::UIDocument* value);

  /// @brief Method get_visualTreeAsset addr 0x2e15758 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::VisualTreeAsset* get_visualTreeAsset();

  /// @brief Method set_visualTreeAsset addr 0x2e15760 size 0x8 virtual false final false
  inline void set_visualTreeAsset(::UnityEngine::UIElements::VisualTreeAsset* value);

  /// @brief Method get_rootVisualElement addr 0x2e14fbc size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::VisualElement* get_rootVisualElement();

  /// @brief Method get_firstChildInserIndex addr 0x2e15b6c size 0x8 virtual false final false
  inline int32_t get_firstChildInserIndex();

  /// @brief Method get_sortingOrder addr 0x2e15b74 size 0x8 virtual false final false
  inline float_t get_sortingOrder();

  /// @brief Method set_sortingOrder addr 0x2e15b7c size 0x18 virtual false final false
  inline void set_sortingOrder(float_t value);

  /// @brief Method ApplySortingOrder addr 0x2e15b94 size 0x4 virtual false final false
  inline void ApplySortingOrder();

  static inline ::UnityEngine::UIElements::UIDocument* New_ctor();

  /// @brief Method .ctor addr 0x2e15c6c size 0x70 virtual false final false
  inline void _ctor();

  /// @brief Method Awake addr 0x2e15cdc size 0x4 virtual false final false
  inline void Awake();

  /// @brief Method OnEnable addr 0x2e15d70 size 0xc0 virtual false final false
  inline void OnEnable();

  /// @brief Method SetupFromHierarchy addr 0x2e15ce0 size 0x90 virtual false final false
  inline void SetupFromHierarchy();

  /// @brief Method FindUIDocumentParent addr 0x2e15e40 size 0xd0 virtual false final false
  inline ::UnityEngine::UIElements::UIDocument* FindUIDocumentParent();

  /// @brief Method Reset addr 0x2e15f10 size 0x104 virtual false final false
  inline void Reset();

  /// @brief Method AddChildAndInsertContentToVisualTree addr 0x2e16014 size 0x90 virtual false final false
  inline void AddChildAndInsertContentToVisualTree(::UnityEngine::UIElements::UIDocument* child);

  /// @brief Method RemoveChild addr 0x2e15e30 size 0x10 virtual false final false
  inline void RemoveChild(::UnityEngine::UIElements::UIDocument* child);

  /// @brief Method RecreateUI addr 0x2e15768 size 0x404 virtual false final false
  inline void RecreateUI();

  /// @brief Method SetupRootClassList addr 0x2e16170 size 0x9c virtual false final false
  inline void SetupRootClassList();

  /// @brief Method AddRootVisualElementToTree addr 0x2e15b98 size 0xd4 virtual false final false
  inline void AddRootVisualElementToTree();

  /// @brief Method RemoveFromHierarchy addr 0x2e160a4 size 0xcc virtual false final false
  inline void RemoveFromHierarchy();

  /// @brief Method OnDisable addr 0x2e1620c size 0x20 virtual false final false
  inline void OnDisable();

  /// @brief Method OnTransformChildrenChanged addr 0x2e1622c size 0x210 virtual false final false
  inline void OnTransformChildrenChanged();

  /// @brief Method OnTransformParentChanged addr 0x2e164e0 size 0x4 virtual false final false
  inline void OnTransformParentChanged();

  /// @brief Method ReactToHierarchyChanged addr 0x2e1643c size 0xa4 virtual false final false
  inline void ReactToHierarchyChanged();

  // Ctor Parameters [CppParam { name: "", ty: "UIDocument", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIDocument(UIDocument&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIDocument", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIDocument(UIDocument const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIDocument();

public:
  /// @brief Field m_UIDocumentCreationIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_UIDocumentCreationIndex;

  /// @brief Field m_PanelSettings, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::PanelSettings* ___m_PanelSettings;

  /// @brief Field m_PreviousPanelSettings, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::PanelSettings* ___m_PreviousPanelSettings;

  /// @brief Field m_ParentUI, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIDocument* ___m_ParentUI;

  /// @brief Field m_ChildrenContent, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIDocumentList* ___m_ChildrenContent;

  /// @brief Field m_ChildrenContentCopy, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIDocument*>* ___m_ChildrenContentCopy;

  /// @brief Field sourceAsset, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualTreeAsset* ___sourceAsset;

  /// @brief Field m_RootVisualElement, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_RootVisualElement;

  /// @brief Field m_FirstChildInsertIndex, offset: 0x58, size: 0x4, def value: None
  int32_t ___m_FirstChildInsertIndex;

  /// @brief Field m_SortingOrder, offset: 0x5c, size: 0x4, def value: None
  float_t ___m_SortingOrder;

  /// @brief Field k_RootStyleClassName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_RootStyleClassName{ u"unity-ui-document__root" };

  /// @brief Field k_VisualElementNameSuffix offset 0xffffffff size 0x8
  static constexpr ::ConstString k_VisualElementNameSuffix{ u"-container" };

  /// @brief Field k_DefaultSortingOrder offset 0xffffffff size 0x4
  static constexpr int32_t k_DefaultSortingOrder{ static_cast<int32_t>(0x0) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIDocument, 0x60>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UIDocument);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIDocument*, "UnityEngine.UIElements", "UIDocument");
