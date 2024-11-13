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
class VisualElement;
}
namespace UnityEngine::UIElements {
class __TreeView__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __TreeView__UxmlTraits;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TreeView;
}
namespace UnityEngine::UIElements {
class __TreeView__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __TreeView__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TreeView);
MARK_REF_PTR_T(::UnityEngine::UIElements::__TreeView__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__TreeView__UxmlTraits);
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::TreeView::UxmlFactory*
class CORDL_TYPE __TreeView__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::TreeView*, ::UnityEngine::UIElements::__TreeView__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__TreeView__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x49a792c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TreeView__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TreeView__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TreeView__UxmlFactory(__TreeView__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TreeView__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TreeView__UxmlFactory(__TreeView__UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5680 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TreeView__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlTraits
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::TreeView::UxmlTraits*
class CORDL_TYPE __TreeView__UxmlTraits : public ::UnityEngine::UIElements::__BaseTreeView__UxmlTraits {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__TreeView__UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x49a7974, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TreeView__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TreeView__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TreeView__UxmlTraits(__TreeView__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TreeView__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TreeView__UxmlTraits(__TreeView__UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5681 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TreeView__UxmlTraits, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::TreeView
// SizeInfo { instance_size: 1240, native_size: -1, calculated_instance_size: 1240, calculated_native_size: 1240, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::TreeView*
class CORDL_TYPE TreeView : public ::UnityEngine::UIElements::BaseTreeView {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::__TreeView__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__TreeView__UxmlTraits;

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

  /// @brief Method CreateViewController, addr 0x49a7834, size 0x68, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::CollectionViewController* CreateViewController();

  /// @brief Method HasValidDataAndBindings, addr 0x49a77f4, size 0x40, virtual true, abstract: false, final false
  inline bool HasValidDataAndBindings();

  static inline ::UnityEngine::UIElements::TreeView* New_ctor();

  static inline ::UnityEngine::UIElements::TreeView* New_ctor(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* makeItem,
                                                              ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* bindItem);

  constexpr ::System::Action_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get__destroyItem_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::UIElements::VisualElement*>*> const& __cordl_internal_get__destroyItem_k__BackingField() const;

  constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*& __cordl_internal_get__unbindItem_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*> const& __cordl_internal_get__unbindItem_k__BackingField() const;

  constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*& __cordl_internal_get_m_BindItem();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*> const& __cordl_internal_get_m_BindItem() const;

  constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_MakeItem();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*> const& __cordl_internal_get_m_MakeItem() const;

  constexpr void __cordl_internal_set__destroyItem_k__BackingField(::System::Action_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set__unbindItem_k__BackingField(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* value);

  constexpr void __cordl_internal_set_m_BindItem(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* value);

  constexpr void __cordl_internal_set_m_MakeItem(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value);

  /// @brief Method .ctor, addr 0x49a789c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x49a78a8, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* makeItem, ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* bindItem);

  /// @brief Method get_bindItem, addr 0x49a7790, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* get_bindItem();

  /// @brief Method get_destroyItem, addr 0x49a77ec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* get_destroyItem();

  /// @brief Method get_makeItem, addr 0x49a773c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* get_makeItem();

  /// @brief Method get_unbindItem, addr 0x49a77e4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* get_unbindItem();

  /// @brief Method set_bindItem, addr 0x49a7798, size 0x4c, virtual false, abstract: false, final false
  inline void set_bindItem(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* value);

  /// @brief Method set_makeItem, addr 0x49a7744, size 0x4c, virtual false, abstract: false, final false
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

  /// @brief Field m_MakeItem, offset: 0x4b8, size: 0x8, def value: None
  ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* ___m_MakeItem;

  /// @brief Field m_BindItem, offset: 0x4c0, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* ___m_BindItem;

  /// @brief Field <unbindItem>k__BackingField, offset: 0x4c8, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* ____unbindItem_k__BackingField;

  /// @brief Field <destroyItem>k__BackingField, offset: 0x4d0, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* ____destroyItem_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5682 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TreeView, 0x4d8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeView, ___m_MakeItem) == 0x4b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeView, ___m_BindItem) == 0x4c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeView, ____unbindItem_k__BackingField) == 0x4c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TreeView, ____destroyItem_k__BackingField) == 0x4d0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TreeView);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TreeView*, "UnityEngine.UIElements", "TreeView");
NEED_NO_BOX(::UnityEngine::UIElements::__TreeView__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TreeView__UxmlFactory*, "UnityEngine.UIElements", "TreeView/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__TreeView__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TreeView__UxmlTraits*, "UnityEngine.UIElements", "TreeView/UxmlTraits");
