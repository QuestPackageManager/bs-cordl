#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TreeView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseTreeView_def.hpp"
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
class TreeView_UxmlFactory;
}
namespace UnityEngine::UIElements {
class TreeView_UxmlTraits;
}
namespace UnityEngine::UIElements {
class VisualElement;
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

  /// @brief Method .ctor, addr 0x4a120f8, size 0x48, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5709 };

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
  static inline ::UnityEngine::UIElements::TreeView_UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x4a12140, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5710 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TreeView_UxmlTraits, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseTreeView
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TreeView
class CORDL_TYPE TreeView : public ::UnityEngine::UIElements::BaseTreeView {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::TreeView_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::TreeView_UxmlTraits;

  /// @brief Field <destroyItem>k__BackingField, offset 0x4d0, size 0x8
  __declspec(property(get = __cordl_internal_get__destroyItem_k__BackingField,
                      put = __cordl_internal_set__destroyItem_k__BackingField)) ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* _destroyItem_k__BackingField;

  /// @brief Field <unbindItem>k__BackingField, offset 0x4c8, size 0x8
  __declspec(property(get = __cordl_internal_get__unbindItem_k__BackingField,
                      put = __cordl_internal_set__unbindItem_k__BackingField)) ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* _unbindItem_k__BackingField;

  __declspec(property(get = get_bindItem, put = set_bindItem)) ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* bindItem;

  __declspec(property(get = get_destroyItem)) ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* destroyItem;

  /// @brief Field m_BindItem, offset 0x4c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BindItem, put = __cordl_internal_set_m_BindItem)) ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* m_BindItem;

  /// @brief Field m_MakeItem, offset 0x4b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MakeItem, put = __cordl_internal_set_m_MakeItem)) ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* m_MakeItem;

  __declspec(property(get = get_makeItem, put = set_makeItem)) ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* makeItem;

  __declspec(property(get = get_unbindItem)) ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* unbindItem;

  /// @brief Method CreateViewController, addr 0x4a12000, size 0x68, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::CollectionViewController* CreateViewController();

  /// @brief Method HasValidDataAndBindings, addr 0x4a11fc0, size 0x40, virtual true, abstract: false, final false
  inline bool HasValidDataAndBindings();

  static inline ::UnityEngine::UIElements::TreeView* New_ctor();

  static inline ::UnityEngine::UIElements::TreeView* New_ctor(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* makeItem,
                                                              ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* bindItem);

  constexpr ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get__destroyItem_k__BackingField() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get__destroyItem_k__BackingField();

  constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* const& __cordl_internal_get__unbindItem_k__BackingField() const;

  constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*& __cordl_internal_get__unbindItem_k__BackingField();

  constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* const& __cordl_internal_get_m_BindItem() const;

  constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*& __cordl_internal_get_m_BindItem();

  constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_m_MakeItem() const;

  constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_MakeItem();

  constexpr void __cordl_internal_set__destroyItem_k__BackingField(::System::Action_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set__unbindItem_k__BackingField(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* value);

  constexpr void __cordl_internal_set_m_BindItem(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* value);

  constexpr void __cordl_internal_set_m_MakeItem(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value);

  /// @brief Method .ctor, addr 0x4a12068, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4a12074, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* makeItem, ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* bindItem);

  /// @brief Method get_bindItem, addr 0x4a11f5c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* get_bindItem();

  /// @brief Method get_destroyItem, addr 0x4a11fb8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* get_destroyItem();

  /// @brief Method get_makeItem, addr 0x4a11f08, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* get_makeItem();

  /// @brief Method get_unbindItem, addr 0x4a11fb0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* get_unbindItem();

  /// @brief Method set_bindItem, addr 0x4a11f64, size 0x4c, virtual false, abstract: false, final false
  inline void set_bindItem(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* value);

  /// @brief Method set_makeItem, addr 0x4a11f10, size 0x4c, virtual false, abstract: false, final false
  inline void set_makeItem(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5711 };

  /// @brief Field m_MakeItem, offset: 0x4b8, size: 0x8, def value: None
  ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* ___m_MakeItem;

  /// @brief Field m_BindItem, offset: 0x4c0, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* ___m_BindItem;

  /// @brief Field <unbindItem>k__BackingField, offset: 0x4c8, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* ____unbindItem_k__BackingField;

  /// @brief Field <destroyItem>k__BackingField, offset: 0x4d0, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* ____destroyItem_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TreeView, ___m_MakeItem) == 0x4b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeView, ___m_BindItem) == 0x4c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeView, ____unbindItem_k__BackingField) == 0x4c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeView, ____destroyItem_k__BackingField) == 0x4d0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TreeView, 0x4d8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TreeView);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TreeView*, "UnityEngine.UIElements", "TreeView");
NEED_NO_BOX(::UnityEngine::UIElements::TreeView_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TreeView_UxmlFactory*, "UnityEngine.UIElements", "TreeView/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::TreeView_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TreeView_UxmlTraits*, "UnityEngine.UIElements", "TreeView/UxmlTraits");
