#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TabView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TabView)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class TabView_UxmlFactory;
}
namespace UnityEngine::UIElements {
class TabView_UxmlTraits;
}
namespace UnityEngine::UIElements {
class TabView_ViewState;
}
namespace UnityEngine::UIElements {
class TabView___c__DisplayClass48_0;
}
namespace UnityEngine::UIElements {
class TabView___c__DisplayClass55_0;
}
namespace UnityEngine::UIElements {
class Tab;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TabView;
}
namespace UnityEngine::UIElements {
class TabView_UxmlFactory;
}
namespace UnityEngine::UIElements {
class TabView_UxmlTraits;
}
namespace UnityEngine::UIElements {
class TabView_ViewState;
}
namespace UnityEngine::UIElements {
class TabView___c__DisplayClass48_0;
}
namespace UnityEngine::UIElements {
class TabView___c__DisplayClass55_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TabView);
MARK_REF_PTR_T(::UnityEngine::UIElements::TabView_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::TabView_UxmlTraits);
MARK_REF_PTR_T(::UnityEngine::UIElements::TabView_ViewState);
MARK_REF_PTR_T(::UnityEngine::UIElements::TabView___c__DisplayClass48_0);
MARK_REF_PTR_T(::UnityEngine::UIElements::TabView___c__DisplayClass55_0);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TabView/UxmlFactory
class CORDL_TYPE TabView_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::TabView*, ::UnityEngine::UIElements::TabView_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::TabView_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x6b436d8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TabView_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TabView_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TabView_UxmlFactory(TabView_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TabView_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TabView_UxmlFactory(TabView_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4329 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TabView_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.VisualElement::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TabView/UxmlTraits
class CORDL_TYPE TabView_UxmlTraits : public ::UnityEngine::UIElements::VisualElement_UxmlTraits {
public:
  // Declarations
  /// @brief Field m_Reorderable, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Reorderable, put = __cordl_internal_set_m_Reorderable)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_Reorderable;

  /// @brief Method Init, addr 0x6b43740, size 0x11c, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::TabView_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_Reorderable() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_Reorderable();

  constexpr void __cordl_internal_set_m_Reorderable(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  /// @brief Method .ctor, addr 0x6b4385c, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TabView_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TabView_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TabView_UxmlTraits(TabView_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TabView_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TabView_UxmlTraits(TabView_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4330 };

  /// @brief Field m_Reorderable, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_Reorderable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TabView_UxmlTraits, ___m_Reorderable) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TabView_UxmlTraits, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TabView/ViewState
class CORDL_TYPE TabView_ViewState : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_ActiveTabKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActiveTabKey, put = __cordl_internal_set_m_ActiveTabKey)) ::StringW m_ActiveTabKey;

  /// @brief Field m_HasPersistedData, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasPersistedData, put = __cordl_internal_set_m_HasPersistedData)) bool m_HasPersistedData;

  /// @brief Field m_TabOrder, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TabOrder, put = __cordl_internal_set_m_TabOrder)) ::System::Collections::Generic::List_1<::StringW>* m_TabOrder;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Method Apply, addr 0x6b42a7c, size 0x1ac, virtual false, abstract: false, final false
  inline void Apply(::UnityEngine::UIElements::TabView* tabView);

  static inline ::UnityEngine::UIElements::TabView_ViewState* New_ctor();

  /// @brief Method OnAfterDeserialize, addr 0x6b4390c, size 0xc, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x6b43900, size 0xc, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  /// @brief Method Save, addr 0x6b42c28, size 0x1e8, virtual false, abstract: false, final false
  inline void Save(::UnityEngine::UIElements::TabView* tabView);

  constexpr ::StringW const& __cordl_internal_get_m_ActiveTabKey() const;

  constexpr ::StringW& __cordl_internal_get_m_ActiveTabKey();

  constexpr bool const& __cordl_internal_get_m_HasPersistedData() const;

  constexpr bool& __cordl_internal_get_m_HasPersistedData();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_m_TabOrder() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_TabOrder();

  constexpr void __cordl_internal_set_m_ActiveTabKey(::StringW value);

  constexpr void __cordl_internal_set_m_HasPersistedData(bool value);

  constexpr void __cordl_internal_set_m_TabOrder(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x6b43918, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TabView_ViewState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TabView_ViewState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TabView_ViewState(TabView_ViewState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TabView_ViewState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TabView_ViewState(TabView_ViewState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4331 };

  /// @brief Field m_HasPersistedData, offset: 0x10, size: 0x1, def value: None
  bool ___m_HasPersistedData;

  /// @brief Field m_TabOrder, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_TabOrder;

  /// @brief Field m_ActiveTabKey, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_ActiveTabKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TabView_ViewState, ___m_HasPersistedData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabView_ViewState, ___m_TabOrder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabView_ViewState, ___m_ActiveTabKey) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TabView_ViewState, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TabView/<>c__DisplayClass48_0
class CORDL_TYPE TabView___c__DisplayClass48_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::UIElements::TabView* __4__this;

  /// @brief Field index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  static inline ::UnityEngine::UIElements::TabView___c__DisplayClass48_0* New_ctor();

  /// @brief Method <OnElementAdded>b__0, addr 0x6b4398c, size 0x34, virtual false, abstract: false, final false
  inline void _OnElementAdded_b__0(::UnityEngine::UIElements::Tab* t);

  constexpr ::UnityEngine::UIElements::TabView* const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::UIElements::TabView*& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::UIElements::TabView* value);

  constexpr void __cordl_internal_set_index(int32_t value);

  /// @brief Method .ctor, addr 0x6b43038, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TabView___c__DisplayClass48_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TabView___c__DisplayClass48_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TabView___c__DisplayClass48_0(TabView___c__DisplayClass48_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TabView___c__DisplayClass48_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TabView___c__DisplayClass48_0(TabView___c__DisplayClass48_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4332 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::TabView* _____4__this;

  /// @brief Field index, offset: 0x18, size: 0x4, def value: None
  int32_t ___index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TabView___c__DisplayClass48_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabView___c__DisplayClass48_0, ___index) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TabView___c__DisplayClass48_0, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TabView/<>c__DisplayClass55_0
class CORDL_TYPE TabView___c__DisplayClass55_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field key, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) ::StringW key;

  static inline ::UnityEngine::UIElements::TabView___c__DisplayClass55_0* New_ctor();

  /// @brief Method <FindTabByKey>b__0, addr 0x6b439c0, size 0x1c, virtual false, abstract: false, final false
  inline bool _FindTabByKey_b__0(::UnityEngine::UIElements::Tab* tab);

  constexpr ::StringW const& __cordl_internal_get_key() const;

  constexpr ::StringW& __cordl_internal_get_key();

  constexpr void __cordl_internal_set_key(::StringW value);

  /// @brief Method .ctor, addr 0x6b434d4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TabView___c__DisplayClass55_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TabView___c__DisplayClass55_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TabView___c__DisplayClass55_0(TabView___c__DisplayClass55_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TabView___c__DisplayClass55_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TabView___c__DisplayClass55_0(TabView___c__DisplayClass55_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4333 };

  /// @brief Field key, offset: 0x10, size: 0x8, def value: None
  ::StringW ___key;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TabView___c__DisplayClass55_0, ___key) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TabView___c__DisplayClass55_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BindingId, UnityEngine.UIElements.VisualElement
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TabView
class CORDL_TYPE TabView : public ::UnityEngine::UIElements::VisualElement {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::TabView_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::TabView_UxmlTraits;

  using ViewState = ::UnityEngine::UIElements::TabView_ViewState;

  using __c__DisplayClass48_0 = ::UnityEngine::UIElements::TabView___c__DisplayClass48_0;

  using __c__DisplayClass55_0 = ::UnityEngine::UIElements::TabView___c__DisplayClass55_0;

  __declspec(property(get = get_activeTab, put = set_activeTab)) ::UnityEngine::UIElements::Tab* activeTab;

  /// @brief Field activeTabChanged, offset 0x4e0, size 0x8
  __declspec(property(get = __cordl_internal_get_activeTabChanged,
                      put = __cordl_internal_set_activeTabChanged)) ::System::Action_2<::UnityEngine::UIElements::Tab*, ::UnityEngine::UIElements::Tab*>* activeTabChanged;

  __declspec(property(get = get_contentContainer)) ::UnityEngine::UIElements::VisualElement* contentContainer;

  /// @brief Field contentContainerUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_contentContainerUssClassName, put = setStaticF_contentContainerUssClassName)) ::StringW contentContainerUssClassName;

  __declspec(property(get = get_header)) ::UnityEngine::UIElements::VisualElement* header;

  /// @brief Field headerContainerClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_headerContainerClassName, put = setStaticF_headerContainerClassName)) ::StringW headerContainerClassName;

  /// @brief Field m_ActiveTab, offset 0x4c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActiveTab, put = __cordl_internal_set_m_ActiveTab)) ::UnityEngine::UIElements::Tab* m_ActiveTab;

  /// @brief Field m_ApplyingViewState, offset 0x4d8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ApplyingViewState, put = __cordl_internal_set_m_ApplyingViewState)) bool m_ApplyingViewState;

  /// @brief Field m_ContentContainer, offset 0x4b0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ContentContainer, put = __cordl_internal_set_m_ContentContainer)) ::UnityEngine::UIElements::VisualElement* m_ContentContainer;

  /// @brief Field m_HeaderContainer, offset 0x4a8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HeaderContainer, put = __cordl_internal_set_m_HeaderContainer)) ::UnityEngine::UIElements::VisualElement* m_HeaderContainer;

  /// @brief Field m_Reorderable, offset 0x4f8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Reorderable, put = __cordl_internal_set_m_Reorderable)) bool m_Reorderable;

  /// @brief Field m_Reordering, offset 0x4d9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Reordering, put = __cordl_internal_set_m_Reordering)) bool m_Reordering;

  /// @brief Field m_TabHeaders, offset 0x4c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TabHeaders,
                      put = __cordl_internal_set_m_TabHeaders)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* m_TabHeaders;

  /// @brief Field m_Tabs, offset 0x4b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Tabs, put = __cordl_internal_set_m_Tabs)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Tab*>* m_Tabs;

  /// @brief Field m_ViewState, offset 0x4d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ViewState, put = __cordl_internal_set_m_ViewState)) ::UnityEngine::UIElements::TabView_ViewState* m_ViewState;

  __declspec(property(get = get_reorderable, put = set_reorderable)) bool reorderable;

  /// @brief Field reorderableProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_reorderableProperty, put = setStaticF_reorderableProperty)) ::UnityEngine::UIElements::BindingId reorderableProperty;

  /// @brief Field reorderableUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_reorderableUssClassName, put = setStaticF_reorderableUssClassName)) ::StringW reorderableUssClassName;

  /// @brief Field tabClosed, offset 0x4f0, size 0x8
  __declspec(property(get = __cordl_internal_get_tabClosed, put = __cordl_internal_set_tabClosed)) ::System::Action_2<::UnityEngine::UIElements::Tab*, int32_t>* tabClosed;

  __declspec(property(get = get_tabHeaders)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* tabHeaders;

  /// @brief Field tabReordered, offset 0x4e8, size 0x8
  __declspec(property(get = __cordl_internal_get_tabReordered, put = __cordl_internal_set_tabReordered)) ::System::Action_2<int32_t, int32_t>* tabReordered;

  __declspec(property(get = get_tabs)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Tab*>* tabs;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Field verticalUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_verticalUssClassName, put = setStaticF_verticalUssClassName)) ::StringW verticalUssClassName;

  /// @brief Method FindTabByKey, addr 0x6b433f4, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Tab* FindTabByKey(::StringW key);

  static inline ::UnityEngine::UIElements::TabView* New_ctor();

  /// @brief Method OnElementAdded, addr 0x6b42e10, size 0x228, virtual false, abstract: false, final false
  inline void OnElementAdded(::UnityEngine::UIElements::VisualElement* ve, int32_t index);

  /// @brief Method OnElementRemoved, addr 0x6b4303c, size 0x1a4, virtual false, abstract: false, final false
  inline void OnElementRemoved(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method OnTabClosed, addr 0x6b431e4, size 0x1c, virtual false, abstract: false, final false
  inline void OnTabClosed(::UnityEngine::UIElements::Tab* tab, int32_t index);

  /// @brief Method OnTabSelected, addr 0x6b431e0, size 0x4, virtual false, abstract: false, final false
  inline void OnTabSelected(::UnityEngine::UIElements::Tab* tab);

  /// @brief Method OnViewDataReady, addr 0x6b429ac, size 0xd0, virtual true, abstract: false, final false
  inline void OnViewDataReady();

  /// @brief Method ReorderTab, addr 0x6b43200, size 0x1f4, virtual false, abstract: false, final false
  inline void ReorderTab(int32_t from, int32_t to);

  /// @brief Method SaveViewState, addr 0x6b42424, size 0x34, virtual false, abstract: false, final false
  inline void SaveViewState();

  constexpr ::System::Action_2<::UnityEngine::UIElements::Tab*, ::UnityEngine::UIElements::Tab*>* const& __cordl_internal_get_activeTabChanged() const;

  constexpr ::System::Action_2<::UnityEngine::UIElements::Tab*, ::UnityEngine::UIElements::Tab*>*& __cordl_internal_get_activeTabChanged();

  constexpr ::UnityEngine::UIElements::Tab* const& __cordl_internal_get_m_ActiveTab() const;

  constexpr ::UnityEngine::UIElements::Tab*& __cordl_internal_get_m_ActiveTab();

  constexpr bool const& __cordl_internal_get_m_ApplyingViewState() const;

  constexpr bool& __cordl_internal_get_m_ApplyingViewState();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_ContentContainer() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_ContentContainer();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_HeaderContainer() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_HeaderContainer();

  constexpr bool const& __cordl_internal_get_m_Reorderable() const;

  constexpr bool& __cordl_internal_get_m_Reorderable();

  constexpr bool const& __cordl_internal_get_m_Reordering() const;

  constexpr bool& __cordl_internal_get_m_Reordering();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_m_TabHeaders() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_TabHeaders();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Tab*>* const& __cordl_internal_get_m_Tabs() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Tab*>*& __cordl_internal_get_m_Tabs();

  constexpr ::UnityEngine::UIElements::TabView_ViewState* const& __cordl_internal_get_m_ViewState() const;

  constexpr ::UnityEngine::UIElements::TabView_ViewState*& __cordl_internal_get_m_ViewState();

  constexpr ::System::Action_2<::UnityEngine::UIElements::Tab*, int32_t>* const& __cordl_internal_get_tabClosed() const;

  constexpr ::System::Action_2<::UnityEngine::UIElements::Tab*, int32_t>*& __cordl_internal_get_tabClosed();

  constexpr ::System::Action_2<int32_t, int32_t>* const& __cordl_internal_get_tabReordered() const;

  constexpr ::System::Action_2<int32_t, int32_t>*& __cordl_internal_get_tabReordered();

  constexpr void __cordl_internal_set_activeTabChanged(::System::Action_2<::UnityEngine::UIElements::Tab*, ::UnityEngine::UIElements::Tab*>* value);

  constexpr void __cordl_internal_set_m_ActiveTab(::UnityEngine::UIElements::Tab* value);

  constexpr void __cordl_internal_set_m_ApplyingViewState(bool value);

  constexpr void __cordl_internal_set_m_ContentContainer(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_HeaderContainer(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_Reorderable(bool value);

  constexpr void __cordl_internal_set_m_Reordering(bool value);

  constexpr void __cordl_internal_set_m_TabHeaders(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_m_Tabs(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Tab*>* value);

  constexpr void __cordl_internal_set_m_ViewState(::UnityEngine::UIElements::TabView_ViewState* value);

  constexpr void __cordl_internal_set_tabClosed(::System::Action_2<::UnityEngine::UIElements::Tab*, int32_t>* value);

  constexpr void __cordl_internal_set_tabReordered(::System::Action_2<int32_t, int32_t>* value);

  /// @brief Method .ctor, addr 0x6b4260c, size 0x3a0, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_contentContainerUssClassName();

  static inline ::StringW getStaticF_headerContainerClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_reorderableProperty();

  static inline ::StringW getStaticF_reorderableUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  static inline ::StringW getStaticF_verticalUssClassName();

  /// @brief Method get_activeTab, addr 0x6b42280, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Tab* get_activeTab();

  /// @brief Method get_contentContainer, addr 0x6b42260, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_contentContainer();

  /// @brief Method get_header, addr 0x6b42268, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_header();

  /// @brief Method get_reorderable, addr 0x6b42458, size 0x8, virtual false, abstract: false, final false
  inline bool get_reorderable();

  /// @brief Method get_tabHeaders, addr 0x6b42278, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* get_tabHeaders();

  /// @brief Method get_tabs, addr 0x6b42270, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Tab*>* get_tabs();

  static inline void setStaticF_contentContainerUssClassName(::StringW value);

  static inline void setStaticF_headerContainerClassName(::StringW value);

  static inline void setStaticF_reorderableProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_reorderableUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  static inline void setStaticF_verticalUssClassName(::StringW value);

  /// @brief Method set_activeTab, addr 0x6b42288, size 0x19c, virtual false, abstract: false, final false
  inline void set_activeTab(::UnityEngine::UIElements::Tab* value);

  /// @brief Method set_reorderable, addr 0x6b42460, size 0x1ac, virtual false, abstract: false, final false
  inline void set_reorderable(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TabView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TabView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TabView(TabView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TabView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TabView(TabView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4334 };

  /// @brief Field m_HeaderContainer, offset: 0x4a8, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_HeaderContainer;

  /// @brief Field m_ContentContainer, offset: 0x4b0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_ContentContainer;

  /// @brief Field m_Tabs, offset: 0x4b8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Tab*>* ___m_Tabs;

  /// @brief Field m_TabHeaders, offset: 0x4c0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* ___m_TabHeaders;

  /// @brief Field m_ActiveTab, offset: 0x4c8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Tab* ___m_ActiveTab;

  /// @brief Field m_ViewState, offset: 0x4d0, size: 0x8, def value: None
  ::UnityEngine::UIElements::TabView_ViewState* ___m_ViewState;

  /// @brief Field m_ApplyingViewState, offset: 0x4d8, size: 0x1, def value: None
  bool ___m_ApplyingViewState;

  /// @brief Field m_Reordering, offset: 0x4d9, size: 0x1, def value: None
  bool ___m_Reordering;

  /// @brief Field activeTabChanged, offset: 0x4e0, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::Tab*, ::UnityEngine::UIElements::Tab*>* ___activeTabChanged;

  /// @brief Field tabReordered, offset: 0x4e8, size: 0x8, def value: None
  ::System::Action_2<int32_t, int32_t>* ___tabReordered;

  /// @brief Field tabClosed, offset: 0x4f0, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::Tab*, int32_t>* ___tabClosed;

  /// @brief Field m_Reorderable, offset: 0x4f8, size: 0x1, def value: None
  bool ___m_Reorderable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TabView, ___m_HeaderContainer) == 0x4a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabView, ___m_ContentContainer) == 0x4b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabView, ___m_Tabs) == 0x4b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabView, ___m_TabHeaders) == 0x4c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabView, ___m_ActiveTab) == 0x4c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabView, ___m_ViewState) == 0x4d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabView, ___m_ApplyingViewState) == 0x4d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabView, ___m_Reordering) == 0x4d9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabView, ___activeTabChanged) == 0x4e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabView, ___tabReordered) == 0x4e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabView, ___tabClosed) == 0x4f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabView, ___m_Reorderable) == 0x4f8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TabView, 0x500>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TabView);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TabView*, "UnityEngine.UIElements", "TabView");
NEED_NO_BOX(::UnityEngine::UIElements::TabView_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TabView_UxmlFactory*, "UnityEngine.UIElements", "TabView/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::TabView_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TabView_UxmlTraits*, "UnityEngine.UIElements", "TabView/UxmlTraits");
NEED_NO_BOX(::UnityEngine::UIElements::TabView_ViewState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TabView_ViewState*, "UnityEngine.UIElements", "TabView/ViewState");
NEED_NO_BOX(::UnityEngine::UIElements::TabView___c__DisplayClass48_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TabView___c__DisplayClass48_0*, "UnityEngine.UIElements", "TabView/<>c__DisplayClass48_0");
NEED_NO_BOX(::UnityEngine::UIElements::TabView___c__DisplayClass55_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TabView___c__DisplayClass55_0*, "UnityEngine.UIElements", "TabView/<>c__DisplayClass55_0");
