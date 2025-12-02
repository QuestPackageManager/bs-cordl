#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TreeView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseTreeView_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TreeView)
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::UIElements {
class CollectionViewController;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class TreeView_UxmlFactory;
}
namespace UnityEngine::UIElements {
class TreeView_UxmlTraits;
}
namespace UnityEngine::UIElements {
template <typename T> class UxmlAssetAttributeDescription_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TreeView;
}
namespace UnityEngine::UIElements {
class TreeView_UxmlFactory;
}
namespace UnityEngine::UIElements {
class TreeView_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TreeView);
MARK_REF_PTR_T(::UnityEngine::UIElements::TreeView_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::TreeView_UxmlTraits);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TreeView/UxmlFactory
class CORDL_TYPE TreeView_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::TreeView*, ::UnityEngine::UIElements::TreeView_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::TreeView_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x6b47124, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TreeView_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TreeView_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TreeView_UxmlFactory(TreeView_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TreeView_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TreeView_UxmlFactory(TreeView_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4347 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TreeView_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseTreeView::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TreeView/UxmlTraits
class CORDL_TYPE TreeView_UxmlTraits : public ::UnityEngine::UIElements::BaseTreeView_UxmlTraits {
public:
  // Declarations
  /// @brief Field m_ItemTemplate, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ItemTemplate,
                      put = __cordl_internal_set_m_ItemTemplate)) ::UnityEngine::UIElements::UxmlAssetAttributeDescription_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* m_ItemTemplate;

  /// @brief Method Init, addr 0x6b4718c, size 0x148, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::TreeView_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlAssetAttributeDescription_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* const& __cordl_internal_get_m_ItemTemplate() const;

  constexpr ::UnityEngine::UIElements::UxmlAssetAttributeDescription_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*& __cordl_internal_get_m_ItemTemplate();

  constexpr void __cordl_internal_set_m_ItemTemplate(::UnityEngine::UIElements::UxmlAssetAttributeDescription_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* value);

  /// @brief Method .ctor, addr 0x6b472d4, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TreeView_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TreeView_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TreeView_UxmlTraits(TreeView_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TreeView_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TreeView_UxmlTraits(TreeView_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4348 };

  /// @brief Field m_ItemTemplate, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlAssetAttributeDescription_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* ___m_ItemTemplate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TreeView_UxmlTraits, ___m_ItemTemplate) == 0xd0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TreeView_UxmlTraits, 0xd8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseTreeView, UnityEngine.UIElements.BindingId
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TreeView
class CORDL_TYPE TreeView : public ::UnityEngine::UIElements::BaseTreeView {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::TreeView_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::TreeView_UxmlTraits;

  __declspec(property(get = get_bindItem, put = set_bindItem)) ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* bindItem;

  /// @brief Field bindItemProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_bindItemProperty, put = setStaticF_bindItemProperty)) ::UnityEngine::UIElements::BindingId bindItemProperty;

  __declspec(property(get = get_destroyItem, put = set_destroyItem)) ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* destroyItem;

  /// @brief Field destroyItemProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_destroyItemProperty, put = setStaticF_destroyItemProperty)) ::UnityEngine::UIElements::BindingId destroyItemProperty;

  __declspec(property(get = get_itemTemplate, put = set_itemTemplate)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> itemTemplate;

  /// @brief Field itemTemplateProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_itemTemplateProperty, put = setStaticF_itemTemplateProperty)) ::UnityEngine::UIElements::BindingId itemTemplateProperty;

  /// @brief Field m_BindItem, offset 0x5c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BindItem, put = __cordl_internal_set_m_BindItem)) ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* m_BindItem;

  /// @brief Field m_DestroyItem, offset 0x5d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DestroyItem, put = __cordl_internal_set_m_DestroyItem)) ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* m_DestroyItem;

  /// @brief Field m_ItemTemplate, offset 0x5b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ItemTemplate, put = __cordl_internal_set_m_ItemTemplate)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> m_ItemTemplate;

  /// @brief Field m_MakeItem, offset 0x5a8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MakeItem, put = __cordl_internal_set_m_MakeItem)) ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* m_MakeItem;

  /// @brief Field m_TemplateMakeItem, offset 0x5b0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TemplateMakeItem, put = __cordl_internal_set_m_TemplateMakeItem)) ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* m_TemplateMakeItem;

  /// @brief Field m_UnbindItem, offset 0x5c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UnbindItem, put = __cordl_internal_set_m_UnbindItem)) ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* m_UnbindItem;

  __declspec(property(get = get_makeItem, put = set_makeItem)) ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* makeItem;

  /// @brief Field makeItemProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_makeItemProperty, put = setStaticF_makeItemProperty)) ::UnityEngine::UIElements::BindingId makeItemProperty;

  __declspec(property(get = get_unbindItem, put = set_unbindItem)) ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* unbindItem;

  /// @brief Field unbindItemProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_unbindItemProperty, put = setStaticF_unbindItemProperty)) ::UnityEngine::UIElements::BindingId unbindItemProperty;

  /// @brief Method CreateViewController, addr 0x6b46cac, size 0x6c, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::CollectionViewController* CreateViewController();

  /// @brief Method HasValidDataAndBindings, addr 0x6b46c68, size 0x44, virtual true, abstract: false, final false
  inline bool HasValidDataAndBindings();

  static inline ::UnityEngine::UIElements::TreeView* New_ctor();

  static inline ::UnityEngine::UIElements::TreeView* New_ctor(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* makeItem,
                                                              ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* bindItem);

  /// @brief Method TemplateMakeItem, addr 0x6b46944, size 0xf0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* TemplateMakeItem();

  constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* const& __cordl_internal_get_m_BindItem() const;

  constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*& __cordl_internal_get_m_BindItem();

  constexpr ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_m_DestroyItem() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_DestroyItem();

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& __cordl_internal_get_m_ItemTemplate() const;

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& __cordl_internal_get_m_ItemTemplate();

  constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_m_MakeItem() const;

  constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_MakeItem();

  constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_m_TemplateMakeItem() const;

  constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_TemplateMakeItem();

  constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* const& __cordl_internal_get_m_UnbindItem() const;

  constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*& __cordl_internal_get_m_UnbindItem();

  constexpr void __cordl_internal_set_m_BindItem(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* value);

  constexpr void __cordl_internal_set_m_DestroyItem(::System::Action_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_m_ItemTemplate(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value);

  constexpr void __cordl_internal_set_m_MakeItem(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_m_TemplateMakeItem(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_m_UnbindItem(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* value);

  /// @brief Method .ctor, addr 0x6b46d18, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6b46d24, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* makeItem, ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* bindItem);

  static inline ::UnityEngine::UIElements::BindingId getStaticF_bindItemProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_destroyItemProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_itemTemplateProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_makeItemProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_unbindItemProperty();

  /// @brief Method get_bindItem, addr 0x6b46a34, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* get_bindItem();

  /// @brief Method get_destroyItem, addr 0x6b46bb0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* get_destroyItem();

  /// @brief Method get_itemTemplate, addr 0x6b46834, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> get_itemTemplate();

  /// @brief Method get_makeItem, addr 0x6b46770, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* get_makeItem();

  /// @brief Method get_unbindItem, addr 0x6b46af8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* get_unbindItem();

  static inline void setStaticF_bindItemProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_destroyItemProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_itemTemplateProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_makeItemProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_unbindItemProperty(::UnityEngine::UIElements::BindingId value);

  /// @brief Method set_bindItem, addr 0x6b46a3c, size 0xbc, virtual false, abstract: false, final false
  inline void set_bindItem(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* value);

  /// @brief Method set_destroyItem, addr 0x6b46bb8, size 0xb0, virtual false, abstract: false, final false
  inline void set_destroyItem(::System::Action_1<::UnityEngine::UIElements::VisualElement*>* value);

  /// @brief Method set_itemTemplate, addr 0x6b4683c, size 0x108, virtual false, abstract: false, final false
  inline void set_itemTemplate(::UnityEngine::UIElements::VisualTreeAsset* value);

  /// @brief Method set_makeItem, addr 0x6b46778, size 0xbc, virtual false, abstract: false, final false
  inline void set_makeItem(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value);

  /// @brief Method set_unbindItem, addr 0x6b46b00, size 0xb0, virtual false, abstract: false, final false
  inline void set_unbindItem(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TreeView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TreeView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TreeView(TreeView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TreeView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TreeView(TreeView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4349 };

  /// @brief Field m_MakeItem, offset: 0x5a8, size: 0x8, def value: None
  ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* ___m_MakeItem;

  /// @brief Field m_TemplateMakeItem, offset: 0x5b0, size: 0x8, def value: None
  ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* ___m_TemplateMakeItem;

  /// @brief Field m_ItemTemplate, offset: 0x5b8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> ___m_ItemTemplate;

  /// @brief Field m_BindItem, offset: 0x5c0, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* ___m_BindItem;

  /// @brief Field m_UnbindItem, offset: 0x5c8, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* ___m_UnbindItem;

  /// @brief Field m_DestroyItem, offset: 0x5d0, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* ___m_DestroyItem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TreeView, ___m_MakeItem) == 0x5a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeView, ___m_TemplateMakeItem) == 0x5b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeView, ___m_ItemTemplate) == 0x5b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeView, ___m_BindItem) == 0x5c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeView, ___m_UnbindItem) == 0x5c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeView, ___m_DestroyItem) == 0x5d0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TreeView, 0x5d8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TreeView);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TreeView*, "UnityEngine.UIElements", "TreeView");
NEED_NO_BOX(::UnityEngine::UIElements::TreeView_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TreeView_UxmlFactory*, "UnityEngine.UIElements", "TreeView/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::TreeView_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TreeView_UxmlTraits*, "UnityEngine.UIElements", "TreeView/UxmlTraits");
