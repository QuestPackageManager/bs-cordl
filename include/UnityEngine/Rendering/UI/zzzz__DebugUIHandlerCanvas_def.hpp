#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIHandlerCanvas.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugUIHandlerCanvas)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Type;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerCanvas___c;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerCanvas___c__DisplayClass14_0;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerPanel;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerWidget;
}
namespace UnityEngine::Rendering::UI {
class DebugUIPrefabBundle;
}
namespace UnityEngine::Rendering {
class DebugUI_IContainer;
}
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerCanvas;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerCanvas___c;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerCanvas___c__DisplayClass14_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerCanvas);
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c);
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c__DisplayClass14_0);
// Dependencies System.Object
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: UnityEngine.Rendering.UI.DebugUIHandlerCanvas/<>c
class CORDL_TYPE DebugUIHandlerCanvas___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c* __9;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0)) ::System::Func_2<::UnityEngine::Rendering::DebugUI_Widget*, bool>* __9__12_0;

  /// @brief Field <>9__15_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__15_0, put = setStaticF___9__15_0)) ::System::Action_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPanel>>* __9__15_0;

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c* New_ctor();

  /// @brief Method <ActivatePanel>b__15_0, addr 0x65e27bc, size 0x2c, virtual false, abstract: false, final false
  inline void _ActivatePanel_b__15_0(::UnityEngine::Rendering::UI::DebugUIHandlerPanel* p);

  /// @brief Method <Rebuild>b__12_0, addr 0x65e2770, size 0x4c, virtual false, abstract: false, final false
  inline bool _Rebuild_b__12_0(::UnityEngine::Rendering::DebugUI_Widget* x);

  /// @brief Method .ctor, addr 0x65e276c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::Rendering::DebugUI_Widget*, bool>* getStaticF___9__12_0();

  static inline ::System::Action_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPanel>>* getStaticF___9__15_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c* value);

  static inline void setStaticF___9__12_0(::System::Func_2<::UnityEngine::Rendering::DebugUI_Widget*, bool>* value);

  static inline void setStaticF___9__15_0(::System::Action_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPanel>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerCanvas___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerCanvas___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerCanvas___c(DebugUIHandlerCanvas___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerCanvas___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerCanvas___c(DebugUIHandlerCanvas___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12481 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::UI
// Dependencies System.Object
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: UnityEngine.Rendering.UI.DebugUIHandlerCanvas/<>c__DisplayClass14_0
class CORDL_TYPE DebugUIHandlerCanvas___c__DisplayClass14_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field queryPath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_queryPath, put = __cordl_internal_set_queryPath)) ::StringW queryPath;

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c__DisplayClass14_0* New_ctor();

  /// @brief Method <GetWidgetFromPath>b__0, addr 0x65e27e8, size 0x28, virtual false, abstract: false, final false
  inline bool _GetWidgetFromPath_b__0(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* w);

  constexpr ::StringW const& __cordl_internal_get_queryPath() const;

  constexpr ::StringW& __cordl_internal_get_queryPath();

  constexpr void __cordl_internal_set_queryPath(::StringW value);

  /// @brief Method .ctor, addr 0x65e2038, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerCanvas___c__DisplayClass14_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerCanvas___c__DisplayClass14_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerCanvas___c__DisplayClass14_0(DebugUIHandlerCanvas___c__DisplayClass14_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerCanvas___c__DisplayClass14_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerCanvas___c__DisplayClass14_0(DebugUIHandlerCanvas___c__DisplayClass14_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12482 };

  /// @brief Field queryPath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___queryPath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c__DisplayClass14_0, ___queryPath) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c__DisplayClass14_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::UI
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: UnityEngine.Rendering.UI.DebugUIHandlerCanvas
class CORDL_TYPE DebugUIHandlerCanvas : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c;

  using __c__DisplayClass14_0 = ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c__DisplayClass14_0;

  /// @brief Field m_CurrentQueryPath, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentQueryPath, put = __cordl_internal_set_m_CurrentQueryPath)) ::StringW m_CurrentQueryPath;

  /// @brief Field m_DebugTreeState, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DebugTreeState, put = __cordl_internal_set_m_DebugTreeState)) int32_t m_DebugTreeState;

  /// @brief Field m_PrefabsMap, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PrefabsMap,
                      put = __cordl_internal_set_m_PrefabsMap)) ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityW<::UnityEngine::Transform>>* m_PrefabsMap;

  /// @brief Field m_SelectedPanel, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SelectedPanel, put = __cordl_internal_set_m_SelectedPanel)) int32_t m_SelectedPanel;

  /// @brief Field m_SelectedWidget, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectedWidget, put = __cordl_internal_set_m_SelectedWidget)) ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> m_SelectedWidget;

  /// @brief Field m_UIPanels, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UIPanels,
                      put = __cordl_internal_set_m_UIPanels)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPanel>>* m_UIPanels;

  /// @brief Field panelPrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_panelPrefab, put = __cordl_internal_set_panelPrefab)) ::UnityW<::UnityEngine::Transform> panelPrefab;

  /// @brief Field prefabs, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_prefabs, put = __cordl_internal_set_prefabs)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::UI::DebugUIPrefabBundle*>* prefabs;

  /// @brief Method ActivatePanel, addr 0x65e1cd8, size 0x210, virtual false, abstract: false, final false
  inline void ActivatePanel(int32_t index, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* selectedWidget);

  /// @brief Method ActivateSelection, addr 0x65e2688, size 0x8c, virtual false, abstract: false, final false
  inline void ActivateSelection();

  /// @brief Method ChangeSelection, addr 0x65e2094, size 0x168, virtual false, abstract: false, final false
  inline void ChangeSelection(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* widget, bool fromNext);

  /// @brief Method ChangeSelectionValue, addr 0x65e257c, size 0x10c, virtual false, abstract: false, final false
  inline void ChangeSelectionValue(float_t multiplier);

  /// @brief Method GetWidgetFromPath, addr 0x65e1ee8, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> GetWidgetFromPath(::StringW queryPath);

  /// @brief Method HandleInput, addr 0x65e0a98, size 0x21c, virtual false, abstract: false, final false
  inline void HandleInput();

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas* New_ctor();

  /// @brief Method OnEnable, addr 0x65e04e8, size 0x18c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Rebuild, addr 0x65e0e6c, size 0x9cc, virtual false, abstract: false, final false
  inline void Rebuild();

  /// @brief Method RequestHierarchyReset, addr 0x65e0e60, size 0xc, virtual false, abstract: false, final false
  inline void RequestHierarchyReset();

  /// @brief Method ResetAllHierarchy, addr 0x65e07b0, size 0x2e8, virtual false, abstract: false, final false
  inline void ResetAllHierarchy();

  /// @brief Method SelectNextItem, addr 0x65e22e4, size 0xc8, virtual false, abstract: false, final false
  inline void SelectNextItem();

  /// @brief Method SelectNextPanel, addr 0x65e2474, size 0x7c, virtual false, abstract: false, final false
  inline void SelectNextPanel();

  /// @brief Method SelectPreviousItem, addr 0x65e23ac, size 0xc8, virtual false, abstract: false, final false
  inline void SelectPreviousItem();

  /// @brief Method SelectPreviousPanel, addr 0x65e24f0, size 0x8c, virtual false, abstract: false, final false
  inline void SelectPreviousPanel();

  /// @brief Method SetScrollTarget, addr 0x65e21fc, size 0xe8, virtual false, abstract: false, final false
  inline void SetScrollTarget(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* widget);

  /// @brief Method Traverse, addr 0x65e1868, size 0x470, virtual false, abstract: false, final false
  inline void Traverse(::UnityEngine::Rendering::DebugUI_IContainer* container, ::UnityEngine::Transform* parentTransform, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* parentUIHandler,
                       ::ByRef<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*> selectedHandler);

  /// @brief Method Update, addr 0x65e0674, size 0x13c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::StringW const& __cordl_internal_get_m_CurrentQueryPath() const;

  constexpr ::StringW& __cordl_internal_get_m_CurrentQueryPath();

  constexpr int32_t const& __cordl_internal_get_m_DebugTreeState() const;

  constexpr int32_t& __cordl_internal_get_m_DebugTreeState();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_m_PrefabsMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_m_PrefabsMap();

  constexpr int32_t const& __cordl_internal_get_m_SelectedPanel() const;

  constexpr int32_t& __cordl_internal_get_m_SelectedPanel();

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> const& __cordl_internal_get_m_SelectedWidget() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget>& __cordl_internal_get_m_SelectedWidget();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPanel>>* const& __cordl_internal_get_m_UIPanels() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPanel>>*& __cordl_internal_get_m_UIPanels();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_panelPrefab() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_panelPrefab();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::UI::DebugUIPrefabBundle*>* const& __cordl_internal_get_prefabs() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::UI::DebugUIPrefabBundle*>*& __cordl_internal_get_prefabs();

  constexpr void __cordl_internal_set_m_CurrentQueryPath(::StringW value);

  constexpr void __cordl_internal_set_m_DebugTreeState(int32_t value);

  constexpr void __cordl_internal_set_m_PrefabsMap(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityW<::UnityEngine::Transform>>* value);

  constexpr void __cordl_internal_set_m_SelectedPanel(int32_t value);

  constexpr void __cordl_internal_set_m_SelectedWidget(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> value);

  constexpr void __cordl_internal_set_m_UIPanels(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPanel>>* value);

  constexpr void __cordl_internal_set_panelPrefab(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_prefabs(::System::Collections::Generic::List_1<::UnityEngine::Rendering::UI::DebugUIPrefabBundle*>* value);

  /// @brief Method .ctor, addr 0x65e2714, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerCanvas();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerCanvas", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerCanvas(DebugUIHandlerCanvas&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerCanvas", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerCanvas(DebugUIHandlerCanvas const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12483 };

  /// @brief Field m_DebugTreeState, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_DebugTreeState;

  /// @brief Field m_PrefabsMap, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityW<::UnityEngine::Transform>>* ___m_PrefabsMap;

  /// @brief Field panelPrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___panelPrefab;

  /// @brief Field prefabs, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::UI::DebugUIPrefabBundle*>* ___prefabs;

  /// @brief Field m_UIPanels, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPanel>>* ___m_UIPanels;

  /// @brief Field m_SelectedPanel, offset: 0x48, size: 0x4, def value: None
  int32_t ___m_SelectedPanel;

  /// @brief Field m_SelectedWidget, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> ___m_SelectedWidget;

  /// @brief Field m_CurrentQueryPath, offset: 0x58, size: 0x8, def value: None
  ::StringW ___m_CurrentQueryPath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerCanvas, ___m_DebugTreeState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerCanvas, ___m_PrefabsMap) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerCanvas, ___panelPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerCanvas, ___prefabs) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerCanvas, ___m_UIPanels) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerCanvas, ___m_SelectedPanel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerCanvas, ___m_SelectedWidget) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerCanvas, ___m_CurrentQueryPath) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerCanvas);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*, "UnityEngine.Rendering.UI", "DebugUIHandlerCanvas");
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c*, "UnityEngine.Rendering.UI", "DebugUIHandlerCanvas/<>c");
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c__DisplayClass14_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c__DisplayClass14_0*, "UnityEngine.Rendering.UI", "DebugUIHandlerCanvas/<>c__DisplayClass14_0");
