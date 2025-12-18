#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ListView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseListView_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListView)
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
class ListView_UxmlFactory;
}
namespace UnityEngine::UIElements {
class ListView_UxmlTraits;
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
class ListView;
}
namespace UnityEngine::UIElements {
class ListView_UxmlFactory;
}
namespace UnityEngine::UIElements {
class ListView_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ListView);
MARK_REF_PTR_T(::UnityEngine::UIElements::ListView_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::ListView_UxmlTraits);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ListView/UxmlFactory
class CORDL_TYPE ListView_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::ListView*, ::UnityEngine::UIElements::ListView_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::ListView_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x6b841dc, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListView_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListView_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListView_UxmlFactory(ListView_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListView_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListView_UxmlFactory(ListView_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4239 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ListView_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseListView::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ListView/UxmlTraits
class CORDL_TYPE ListView_UxmlTraits : public ::UnityEngine::UIElements::BaseListView_UxmlTraits {
public:
  // Declarations
  /// @brief Field m_ItemTemplate, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ItemTemplate,
                      put = __cordl_internal_set_m_ItemTemplate)) ::UnityEngine::UIElements::UxmlAssetAttributeDescription_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* m_ItemTemplate;

  /// @brief Method Init, addr 0x6b84244, size 0x138, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::ListView_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlAssetAttributeDescription_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* const& __cordl_internal_get_m_ItemTemplate() const;

  constexpr ::UnityEngine::UIElements::UxmlAssetAttributeDescription_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*& __cordl_internal_get_m_ItemTemplate();

  constexpr void __cordl_internal_set_m_ItemTemplate(::UnityEngine::UIElements::UxmlAssetAttributeDescription_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* value);

  /// @brief Method .ctor, addr 0x6b8437c, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListView_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListView_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListView_UxmlTraits(ListView_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListView_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListView_UxmlTraits(ListView_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4240 };

  /// @brief Field m_ItemTemplate, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlAssetAttributeDescription_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* ___m_ItemTemplate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ListView_UxmlTraits, ___m_ItemTemplate) == 0x108, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ListView_UxmlTraits, 0x110>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseListView, UnityEngine.UIElements.BindingId
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ListView
class CORDL_TYPE ListView : public ::UnityEngine::UIElements::BaseListView {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::ListView_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::ListView_UxmlTraits;

  __declspec(property(get = get_bindItem, put = set_bindItem)) ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* bindItem;

  /// @brief Field bindItemProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_bindItemProperty, put = setStaticF_bindItemProperty)) ::UnityEngine::UIElements::BindingId bindItemProperty;

  __declspec(property(get = get_destroyItem, put = set_destroyItem)) ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* destroyItem;

  /// @brief Field destroyItemProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_destroyItemProperty, put = setStaticF_destroyItemProperty)) ::UnityEngine::UIElements::BindingId destroyItemProperty;

  __declspec(property(get = get_itemTemplate, put = set_itemTemplate)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> itemTemplate;

  /// @brief Field itemTemplateProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_itemTemplateProperty, put = setStaticF_itemTemplateProperty)) ::UnityEngine::UIElements::BindingId itemTemplateProperty;

  /// @brief Field m_BindItem, offset 0x6b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BindItem, put = __cordl_internal_set_m_BindItem)) ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* m_BindItem;

  /// @brief Field m_DestroyItem, offset 0x6c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DestroyItem, put = __cordl_internal_set_m_DestroyItem)) ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* m_DestroyItem;

  /// @brief Field m_ItemTemplate, offset 0x6b0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ItemTemplate, put = __cordl_internal_set_m_ItemTemplate)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> m_ItemTemplate;

  /// @brief Field m_MakeItem, offset 0x6a0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MakeItem, put = __cordl_internal_set_m_MakeItem)) ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* m_MakeItem;

  /// @brief Field m_TemplateMakeItem, offset 0x6a8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TemplateMakeItem, put = __cordl_internal_set_m_TemplateMakeItem)) ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* m_TemplateMakeItem;

  /// @brief Field m_UnbindItem, offset 0x6c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UnbindItem, put = __cordl_internal_set_m_UnbindItem)) ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* m_UnbindItem;

  __declspec(property(get = get_makeItem, put = set_makeItem)) ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* makeItem;

  /// @brief Field makeItemProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_makeItemProperty, put = setStaticF_makeItemProperty)) ::UnityEngine::UIElements::BindingId makeItemProperty;

  __declspec(property(get = get_unbindItem, put = set_unbindItem)) ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* unbindItem;

  /// @brief Field unbindItemProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_unbindItemProperty, put = setStaticF_unbindItemProperty)) ::UnityEngine::UIElements::BindingId unbindItemProperty;

  /// @brief Method CreateViewController, addr 0x6b83da8, size 0x44, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::CollectionViewController* CreateViewController();

  /// @brief Method HasValidDataAndBindings, addr 0x6b83d4c, size 0x5c, virtual true, abstract: false, final false
  inline bool HasValidDataAndBindings();

  static inline ::UnityEngine::UIElements::ListView* New_ctor();

  /// @brief Method TemplateMakeItem, addr 0x6b83a2c, size 0xec, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x6b83dec, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_bindItemProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_destroyItemProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_itemTemplateProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_makeItemProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_unbindItemProperty();

  /// @brief Method get_bindItem, addr 0x6b83b18, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* get_bindItem();

  /// @brief Method get_destroyItem, addr 0x6b83c94, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* get_destroyItem();

  /// @brief Method get_itemTemplate, addr 0x6b8391c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> get_itemTemplate();

  /// @brief Method get_makeItem, addr 0x6b83858, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* get_makeItem();

  /// @brief Method get_unbindItem, addr 0x6b83bdc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* get_unbindItem();

  static inline void setStaticF_bindItemProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_destroyItemProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_itemTemplateProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_makeItemProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_unbindItemProperty(::UnityEngine::UIElements::BindingId value);

  /// @brief Method set_bindItem, addr 0x6b83b20, size 0xbc, virtual false, abstract: false, final false
  inline void set_bindItem(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* value);

  /// @brief Method set_destroyItem, addr 0x6b83c9c, size 0xb0, virtual false, abstract: false, final false
  inline void set_destroyItem(::System::Action_1<::UnityEngine::UIElements::VisualElement*>* value);

  /// @brief Method set_itemTemplate, addr 0x6b83924, size 0x108, virtual false, abstract: false, final false
  inline void set_itemTemplate(::UnityEngine::UIElements::VisualTreeAsset* value);

  /// @brief Method set_makeItem, addr 0x6b83860, size 0xbc, virtual false, abstract: false, final false
  inline void set_makeItem(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value);

  /// @brief Method set_unbindItem, addr 0x6b83be4, size 0xb0, virtual false, abstract: false, final false
  inline void set_unbindItem(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListView(ListView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListView(ListView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4241 };

  /// @brief Field m_MakeItem, offset: 0x6a0, size: 0x8, def value: None
  ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* ___m_MakeItem;

  /// @brief Field m_TemplateMakeItem, offset: 0x6a8, size: 0x8, def value: None
  ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* ___m_TemplateMakeItem;

  /// @brief Field m_ItemTemplate, offset: 0x6b0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> ___m_ItemTemplate;

  /// @brief Field m_BindItem, offset: 0x6b8, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* ___m_BindItem;

  /// @brief Field m_UnbindItem, offset: 0x6c0, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* ___m_UnbindItem;

  /// @brief Field m_DestroyItem, offset: 0x6c8, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* ___m_DestroyItem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ListView, ___m_MakeItem) == 0x6a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListView, ___m_TemplateMakeItem) == 0x6a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListView, ___m_ItemTemplate) == 0x6b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListView, ___m_BindItem) == 0x6b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListView, ___m_UnbindItem) == 0x6c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListView, ___m_DestroyItem) == 0x6c8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ListView, 0x6d0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ListView);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ListView*, "UnityEngine.UIElements", "ListView");
NEED_NO_BOX(::UnityEngine::UIElements::ListView_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ListView_UxmlFactory*, "UnityEngine.UIElements", "ListView/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::ListView_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ListView_UxmlTraits*, "UnityEngine.UIElements", "ListView/UxmlTraits");
