#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugManager)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> class Lazy_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerCanvas;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerPersistentCanvas;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerWidget;
}
namespace UnityEngine::Rendering {
class DebugActionDesc;
}
namespace UnityEngine::Rendering {
class DebugActionState;
}
namespace UnityEngine::Rendering {
struct DebugAction;
}
namespace UnityEngine::Rendering {
struct DebugManager_UIMode;
}
namespace UnityEngine::Rendering {
class DebugManager_UIState;
}
namespace UnityEngine::Rendering {
class DebugManager___c;
}
namespace UnityEngine::Rendering {
class DebugManager___c__DisplayClass67_0;
}
namespace UnityEngine::Rendering {
struct DebugUI_Flags;
}
namespace UnityEngine::Rendering {
class DebugUI_IContainer;
}
namespace UnityEngine::Rendering {
class DebugUI_Panel;
}
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
namespace UnityEngine::Rendering {
class IDebugData;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct DebugManager_UIMode;
}
namespace UnityEngine::Rendering {
class DebugManager;
}
namespace UnityEngine::Rendering {
class DebugManager_UIState;
}
namespace UnityEngine::Rendering {
class DebugManager___c;
}
namespace UnityEngine::Rendering {
class DebugManager___c__DisplayClass67_0;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::DebugManager_UIMode);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugManager);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugManager_UIState);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugManager___c);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugManager___c__DisplayClass67_0);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.DebugManager/UIMode
struct CORDL_TYPE DebugManager_UIMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DebugManager_UIMode_Unwrapped
  enum struct __DebugManager_UIMode_Unwrapped : int32_t {
    __E_EditorMode = static_cast<int32_t>(0x0),
    __E_RuntimeMode = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DebugManager_UIMode_Unwrapped() const noexcept {
    return static_cast<__DebugManager_UIMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugManager_UIMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DebugManager_UIMode(int32_t value__) noexcept;

  /// @brief Field EditorMode value: I32(0)
  static ::UnityEngine::Rendering::DebugManager_UIMode const EditorMode;

  /// @brief Field RuntimeMode value: I32(1)
  static ::UnityEngine::Rendering::DebugManager_UIMode const RuntimeMode;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11950 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugManager_UIMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugManager_UIMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.DebugManager::UIMode
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugManager/UIState
class CORDL_TYPE DebugManager_UIState : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Open, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Open, put = __cordl_internal_set_m_Open)) bool m_Open;

  /// @brief Field mode, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_mode, put = __cordl_internal_set_mode)) ::UnityEngine::Rendering::DebugManager_UIMode mode;

  __declspec(property(get = get_open, put = set_open)) bool open;

  static inline ::UnityEngine::Rendering::DebugManager_UIState* New_ctor();

  constexpr bool const& __cordl_internal_get_m_Open() const;

  constexpr bool& __cordl_internal_get_m_Open();

  constexpr ::UnityEngine::Rendering::DebugManager_UIMode const& __cordl_internal_get_mode() const;

  constexpr ::UnityEngine::Rendering::DebugManager_UIMode& __cordl_internal_get_mode();

  constexpr void __cordl_internal_set_m_Open(bool value);

  constexpr void __cordl_internal_set_mode(::UnityEngine::Rendering::DebugManager_UIMode value);

  /// @brief Method .ctor, addr 0x65464d4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_open, addr 0x6548b0c, size 0x8, virtual false, abstract: false, final false
  inline bool get_open();

  /// @brief Method set_open, addr 0x6548504, size 0xa4, virtual false, abstract: false, final false
  inline void set_open(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugManager_UIState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugManager_UIState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugManager_UIState(DebugManager_UIState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugManager_UIState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugManager_UIState(DebugManager_UIState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11951 };

  /// @brief Field mode, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::DebugManager_UIMode ___mode;

  /// @brief Field m_Open, offset: 0x14, size: 0x1, def value: None
  bool ___m_Open;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugManager_UIState, ___mode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager_UIState, ___m_Open) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugManager_UIState, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugManager/<>c
class CORDL_TYPE DebugManager___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::DebugManager___c* __9;

  /// @brief Field <>9__49_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__49_0, put = setStaticF___9__49_0)) ::System::Action_1<bool>* __9__49_0;

  /// @brief Field <>9__49_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__49_1, put = setStaticF___9__49_1)) ::System::Action* __9__49_1;

  /// @brief Field <>9__60_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__60_0, put = setStaticF___9__60_0)) ::System::Func_2<::UnityEngine::Rendering::DebugUI_Widget*, int32_t>* __9__60_0;

  static inline ::UnityEngine::Rendering::DebugManager___c* New_ctor();

  /// @brief Method <TogglePersistent>b__60_0, addr 0x6548b74, size 0x80, virtual false, abstract: false, final false
  inline int32_t _TogglePersistent_b__60_0(::UnityEngine::Rendering::DebugUI_Widget* w);

  /// @brief Method <.cctor>b__95_0, addr 0x6548bf4, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DebugManager* __cctor_b__95_0();

  /// @brief Method <.ctor>b__49_0, addr 0x6548b6c, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__49_0(bool _p0_);

  /// @brief Method <.ctor>b__49_1, addr 0x6548b70, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__49_1();

  /// @brief Method .ctor, addr 0x6548b68, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::DebugManager___c* getStaticF___9();

  static inline ::System::Action_1<bool>* getStaticF___9__49_0();

  static inline ::System::Action* getStaticF___9__49_1();

  static inline ::System::Func_2<::UnityEngine::Rendering::DebugUI_Widget*, int32_t>* getStaticF___9__60_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::DebugManager___c* value);

  static inline void setStaticF___9__49_0(::System::Action_1<bool>* value);

  static inline void setStaticF___9__49_1(::System::Action* value);

  static inline void setStaticF___9__60_0(::System::Func_2<::UnityEngine::Rendering::DebugUI_Widget*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugManager___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugManager___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugManager___c(DebugManager___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugManager___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugManager___c(DebugManager___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11952 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugManager___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugManager/<>c__DisplayClass67_0
class CORDL_TYPE DebugManager___c__DisplayClass67_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field displayName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_displayName, put = __cordl_internal_set_displayName)) ::StringW displayName;

  static inline ::UnityEngine::Rendering::DebugManager___c__DisplayClass67_0* New_ctor();

  /// @brief Method <FindPanelIndex>b__0, addr 0x6548c48, size 0x1c, virtual false, abstract: false, final false
  inline bool _FindPanelIndex_b__0(::UnityEngine::Rendering::DebugUI_Panel* p);

  constexpr ::StringW const& __cordl_internal_get_displayName() const;

  constexpr ::StringW& __cordl_internal_get_displayName();

  constexpr void __cordl_internal_set_displayName(::StringW value);

  /// @brief Method .ctor, addr 0x6547554, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugManager___c__DisplayClass67_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugManager___c__DisplayClass67_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugManager___c__DisplayClass67_0(DebugManager___c__DisplayClass67_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugManager___c__DisplayClass67_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugManager___c__DisplayClass67_0(DebugManager___c__DisplayClass67_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11953 };

  /// @brief Field displayName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___displayName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugManager___c__DisplayClass67_0, ___displayName) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugManager___c__DisplayClass67_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Nullable`1<T>, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugManager
class CORDL_TYPE DebugManager : public ::System::Object {
public:
  // Declarations
  using UIMode = ::UnityEngine::Rendering::DebugManager_UIMode;

  using UIState = ::UnityEngine::Rendering::DebugManager_UIState;

  using __c = ::UnityEngine::Rendering::DebugManager___c;

  using __c__DisplayClass67_0 = ::UnityEngine::Rendering::DebugManager___c__DisplayClass67_0;

  /// @brief Field debugActionMap, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_debugActionMap, put = __cordl_internal_set_debugActionMap)) ::UnityEngine::InputSystem::InputActionMap* debugActionMap;

  __declspec(property(get = get_displayEditorUI, put = set_displayEditorUI)) bool displayEditorUI;

  __declspec(property(get = get_displayPersistentRuntimeUI, put = set_displayPersistentRuntimeUI)) bool displayPersistentRuntimeUI;

  __declspec(property(get = get_displayRuntimeUI, put = set_displayRuntimeUI)) bool displayRuntimeUI;

  /// @brief Field editorUIState, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_editorUIState, put = __cordl_internal_set_editorUIState)) ::UnityEngine::Rendering::DebugManager_UIState* editorUIState;

  __declspec(property(get = get_enableRuntimeUI, put = set_enableRuntimeUI)) bool enableRuntimeUI;

  __declspec(property(get = get_isAnyDebugUIActive)) bool isAnyDebugUIActive;

  /// @brief Field m_DebugActionStates, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugActionStates,
                      put = __cordl_internal_set_m_DebugActionStates)) ::ArrayW<::UnityEngine::Rendering::DebugActionState*, ::Array<::UnityEngine::Rendering::DebugActionState*>*>
      m_DebugActionStates;

  /// @brief Field m_DebugActions, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugActions,
                      put = __cordl_internal_set_m_DebugActions)) ::ArrayW<::UnityEngine::Rendering::DebugActionDesc*, ::Array<::UnityEngine::Rendering::DebugActionDesc*>*>
      m_DebugActions;

  /// @brief Field m_EnableRuntimeUI, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableRuntimeUI, put = __cordl_internal_set_m_EnableRuntimeUI)) bool m_EnableRuntimeUI;

  /// @brief Field m_Panels, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Panels, put = __cordl_internal_set_m_Panels)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Panel*>* m_Panels;

  /// @brief Field m_PersistentRoot, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PersistentRoot, put = __cordl_internal_set_m_PersistentRoot)) ::UnityW<::UnityEngine::GameObject> m_PersistentRoot;

  /// @brief Field m_ReadOnlyPanels, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ReadOnlyPanels,
                      put = __cordl_internal_set_m_ReadOnlyPanels)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::DebugUI_Panel*>* m_ReadOnlyPanels;

  /// @brief Field m_RequestedPanelIndex, offset 0x54, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RequestedPanelIndex, put = __cordl_internal_set_m_RequestedPanelIndex)) ::System::Nullable_1<int32_t> m_RequestedPanelIndex;

  /// @brief Field m_Root, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Root, put = __cordl_internal_set_m_Root)) ::UnityW<::UnityEngine::GameObject> m_Root;

  /// @brief Field m_RootUICanvas, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RootUICanvas, put = __cordl_internal_set_m_RootUICanvas)) ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas> m_RootUICanvas;

  /// @brief Field m_RootUIPersistentCanvas, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RootUIPersistentCanvas, put = __cordl_internal_set_m_RootUIPersistentCanvas)) ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas>
      m_RootUIPersistentCanvas;

  /// @brief Field onDisplayRuntimeUIChanged, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_onDisplayRuntimeUIChanged, put = __cordl_internal_set_onDisplayRuntimeUIChanged)) ::System::Action_1<bool>* onDisplayRuntimeUIChanged;

  /// @brief Field onSetDirty, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_onSetDirty, put = __cordl_internal_set_onSetDirty)) ::System::Action* onSetDirty;

  __declspec(property(get = get_panels)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::DebugUI_Panel*>* panels;

  /// @brief Field refreshEditorRequested, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_refreshEditorRequested, put = __cordl_internal_set_refreshEditorRequested)) bool refreshEditorRequested;

  /// @brief Field resetData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_resetData, put = __cordl_internal_set_resetData)) ::System::Action* resetData;

  /// @brief Field runtimeUIState, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_runtimeUIState, put = __cordl_internal_set_runtimeUIState)) ::UnityEngine::Rendering::DebugManager_UIState* runtimeUIState;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance)) ::System::Lazy_1<::UnityEngine::Rendering::DebugManager*>* s_Instance;

  /// @brief Field windowStateChanged, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_windowStateChanged, put = setStaticF_windowStateChanged)) ::System::Action_2<::UnityEngine::Rendering::DebugManager_UIMode, bool>* windowStateChanged;

  /// @brief Method AddAction, addr 0x654467c, size 0xe0, virtual false, abstract: false, final false
  inline void AddAction(::UnityEngine::Rendering::DebugAction action, ::UnityEngine::Rendering::DebugActionDesc* desc);

  /// @brief Method ChangeSelection, addr 0x654666c, size 0x1c, virtual false, abstract: false, final false
  inline void ChangeSelection(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* widget, bool fromNext);

  /// @brief Method EnableInputActions, addr 0x654475c, size 0x240, virtual false, abstract: false, final false
  inline void EnableInputActions();

  /// @brief Method EnsurePersistentCanvas, addr 0x6546724, size 0x20c, virtual false, abstract: false, final false
  inline void EnsurePersistentCanvas();

  /// @brief Method FindPanelIndex, addr 0x6547474, size 0xe0, virtual false, abstract: false, final false
  inline int32_t FindPanelIndex(::StringW displayName);

  /// @brief Method GetAction, addr 0x6544df8, size 0x38, virtual false, abstract: false, final false
  inline float_t GetAction(::UnityEngine::Rendering::DebugAction action);

  /// @brief Method GetActionReleaseScrollTarget, addr 0x6545064, size 0x180, virtual false, abstract: false, final false
  inline bool GetActionReleaseScrollTarget();

  /// @brief Method GetActionToggleDebugMenuWithTouch, addr 0x6544e30, size 0x234, virtual false, abstract: false, final false
  inline bool GetActionToggleDebugMenuWithTouch();

  /// @brief Method GetItem, addr 0x6547e74, size 0x114, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DebugUI_Widget* GetItem(::StringW queryPath);

  /// @brief Method GetItem, addr 0x6547f88, size 0x33c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DebugUI_Widget* GetItem(::StringW queryPath, ::UnityEngine::Rendering::DebugUI_IContainer* container);

  /// @brief Method GetItems, addr 0x65476dc, size 0x270, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*, ::Array<::UnityEngine::Rendering::DebugUI_Widget*>*> GetItems(::UnityEngine::Rendering::DebugUI_Flags flags);

  /// @brief Method GetItemsFromContainer, addr 0x654794c, size 0x528, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*, ::Array<::UnityEngine::Rendering::DebugUI_Widget*>*> GetItemsFromContainer(::UnityEngine::Rendering::DebugUI_Flags flags,
                                                                                                                                        ::UnityEngine::Rendering::DebugUI_IContainer* container);

  /// @brief Method GetPanel, addr 0x653d510, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DebugUI_Panel* GetPanel(::StringW displayName, bool createIfNull, int32_t groupIndex, bool overrideIfExist);

  /// @brief Method GetRequestedEditorWindowPanelIndex, addr 0x6547074, size 0x10, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> GetRequestedEditorWindowPanelIndex();

  /// @brief Method GetState, addr 0x654651c, size 0x11c, virtual false, abstract: false, final false
  inline int32_t GetState();

  static inline ::UnityEngine::Rendering::DebugManager* New_ctor();

  /// @brief Method OnPanelDirty, addr 0x6546e7c, size 0x20, virtual false, abstract: false, final false
  inline void OnPanelDirty(::UnityEngine::Rendering::DebugUI_Panel* panel);

  /// @brief Method PanelDiplayName, addr 0x6546f70, size 0xac, virtual false, abstract: false, final false
  inline ::StringW PanelDiplayName(int32_t panelIndex);

  /// @brief Method PanelIndex, addr 0x6546e9c, size 0xd4, virtual false, abstract: false, final false
  inline int32_t PanelIndex(::StringW displayName);

  /// @brief Method ReDrawOnScreenDebug, addr 0x6541870, size 0x28, virtual false, abstract: false, final false
  inline void ReDrawOnScreenDebug();

  /// @brief Method RefreshEditor, addr 0x653d448, size 0xc, virtual false, abstract: false, final false
  inline void RefreshEditor();

  /// @brief Method RegisterActions, addr 0x654428c, size 0x3ec, virtual false, abstract: false, final false
  inline void RegisterActions();

  /// @brief Method RegisterData, addr 0x653d458, size 0xb8, virtual false, abstract: false, final false
  inline void RegisterData(::UnityEngine::Rendering::IDebugData* data);

  /// @brief Method RegisterInputs, addr 0x65451e4, size 0xa70, virtual false, abstract: false, final false
  inline void RegisterInputs();

  /// @brief Method RegisterRootCanvas, addr 0x6546638, size 0x34, virtual false, abstract: false, final false
  inline void RegisterRootCanvas(::UnityEngine::Rendering::UI::DebugUIHandlerCanvas* root);

  /// @brief Method RemovePanel, addr 0x6547558, size 0x184, virtual false, abstract: false, final false
  inline void RemovePanel(::StringW displayName);

  /// @brief Method RemovePanel, addr 0x6547144, size 0x80, virtual false, abstract: false, final false
  inline void RemovePanel(::UnityEngine::Rendering::DebugUI_Panel* panel);

  /// @brief Method RequestEditorWindowPanelIndex, addr 0x654701c, size 0x58, virtual false, abstract: false, final false
  inline void RequestEditorWindowPanelIndex(int32_t index);

  /// @brief Method Reset, addr 0x65464d8, size 0x44, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SampleAction, addr 0x65449a0, size 0x14c, virtual false, abstract: false, final false
  inline void SampleAction(int32_t actionIndex);

  /// @brief Method SetScrollTarget, addr 0x6546688, size 0x9c, virtual false, abstract: false, final false
  inline void SetScrollTarget(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* widget);

  /// @brief Method ToggleEditorUI, addr 0x65489cc, size 0x18, virtual false, abstract: false, final false
  inline void ToggleEditorUI(bool open);

  /// @brief Method TogglePersistent, addr 0x6546930, size 0x54c, virtual false, abstract: false, final false
  inline void TogglePersistent(::UnityEngine::Rendering::DebugUI_Widget* widget, ::System::Nullable_1<int32_t> forceTupleIndex);

  /// @brief Method UnregisterData, addr 0x653d6f8, size 0xb8, virtual false, abstract: false, final false
  inline void UnregisterData(::UnityEngine::Rendering::IDebugData* data);

  /// @brief Method UpdateAction, addr 0x6544b68, size 0x64, virtual false, abstract: false, final false
  inline void UpdateAction(int32_t actionIndex);

  /// @brief Method UpdateActions, addr 0x6544da0, size 0x58, virtual false, abstract: false, final false
  inline void UpdateActions();

  /// @brief Method UpdateReadOnlyCollection, addr 0x6545c54, size 0x9c, virtual false, abstract: false, final false
  inline void UpdateReadOnlyCollection();

  constexpr ::UnityEngine::InputSystem::InputActionMap* const& __cordl_internal_get_debugActionMap() const;

  constexpr ::UnityEngine::InputSystem::InputActionMap*& __cordl_internal_get_debugActionMap();

  constexpr ::UnityEngine::Rendering::DebugManager_UIState* const& __cordl_internal_get_editorUIState() const;

  constexpr ::UnityEngine::Rendering::DebugManager_UIState*& __cordl_internal_get_editorUIState();

  constexpr ::ArrayW<::UnityEngine::Rendering::DebugActionState*, ::Array<::UnityEngine::Rendering::DebugActionState*>*> const& __cordl_internal_get_m_DebugActionStates() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::DebugActionState*, ::Array<::UnityEngine::Rendering::DebugActionState*>*>& __cordl_internal_get_m_DebugActionStates();

  constexpr ::ArrayW<::UnityEngine::Rendering::DebugActionDesc*, ::Array<::UnityEngine::Rendering::DebugActionDesc*>*> const& __cordl_internal_get_m_DebugActions() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::DebugActionDesc*, ::Array<::UnityEngine::Rendering::DebugActionDesc*>*>& __cordl_internal_get_m_DebugActions();

  constexpr bool const& __cordl_internal_get_m_EnableRuntimeUI() const;

  constexpr bool& __cordl_internal_get_m_EnableRuntimeUI();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Panel*>* const& __cordl_internal_get_m_Panels() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Panel*>*& __cordl_internal_get_m_Panels();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_PersistentRoot() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_PersistentRoot();

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::DebugUI_Panel*>* const& __cordl_internal_get_m_ReadOnlyPanels() const;

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::DebugUI_Panel*>*& __cordl_internal_get_m_ReadOnlyPanels();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_m_RequestedPanelIndex() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_m_RequestedPanelIndex();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_Root() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_Root();

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas> const& __cordl_internal_get_m_RootUICanvas() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas>& __cordl_internal_get_m_RootUICanvas();

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas> const& __cordl_internal_get_m_RootUIPersistentCanvas() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas>& __cordl_internal_get_m_RootUIPersistentCanvas();

  constexpr ::System::Action_1<bool>* const& __cordl_internal_get_onDisplayRuntimeUIChanged() const;

  constexpr ::System::Action_1<bool>*& __cordl_internal_get_onDisplayRuntimeUIChanged();

  constexpr ::System::Action* const& __cordl_internal_get_onSetDirty() const;

  constexpr ::System::Action*& __cordl_internal_get_onSetDirty();

  constexpr bool const& __cordl_internal_get_refreshEditorRequested() const;

  constexpr bool& __cordl_internal_get_refreshEditorRequested();

  constexpr ::System::Action* const& __cordl_internal_get_resetData() const;

  constexpr ::System::Action*& __cordl_internal_get_resetData();

  constexpr ::UnityEngine::Rendering::DebugManager_UIState* const& __cordl_internal_get_runtimeUIState() const;

  constexpr ::UnityEngine::Rendering::DebugManager_UIState*& __cordl_internal_get_runtimeUIState();

  constexpr void __cordl_internal_set_debugActionMap(::UnityEngine::InputSystem::InputActionMap* value);

  constexpr void __cordl_internal_set_editorUIState(::UnityEngine::Rendering::DebugManager_UIState* value);

  constexpr void __cordl_internal_set_m_DebugActionStates(::ArrayW<::UnityEngine::Rendering::DebugActionState*, ::Array<::UnityEngine::Rendering::DebugActionState*>*> value);

  constexpr void __cordl_internal_set_m_DebugActions(::ArrayW<::UnityEngine::Rendering::DebugActionDesc*, ::Array<::UnityEngine::Rendering::DebugActionDesc*>*> value);

  constexpr void __cordl_internal_set_m_EnableRuntimeUI(bool value);

  constexpr void __cordl_internal_set_m_Panels(::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Panel*>* value);

  constexpr void __cordl_internal_set_m_PersistentRoot(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_ReadOnlyPanels(::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::DebugUI_Panel*>* value);

  constexpr void __cordl_internal_set_m_RequestedPanelIndex(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set_m_Root(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_RootUICanvas(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas> value);

  constexpr void __cordl_internal_set_m_RootUIPersistentCanvas(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas> value);

  constexpr void __cordl_internal_set_onDisplayRuntimeUIChanged(::System::Action_1<bool>* value);

  constexpr void __cordl_internal_set_onSetDirty(::System::Action* value);

  constexpr void __cordl_internal_set_refreshEditorRequested(bool value);

  constexpr void __cordl_internal_set_resetData(::System::Action* value);

  constexpr void __cordl_internal_set_runtimeUIState(::UnityEngine::Rendering::DebugManager_UIState* value);

  /// @brief Method .ctor, addr 0x6546284, size 0x250, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_onDisplayRuntimeUIChanged, addr 0x6545d14, size 0xc0, virtual false, abstract: false, final false
  inline void add_onDisplayRuntimeUIChanged(::System::Action_1<bool>* value);

  /// @brief Method add_onSetDirty, addr 0x6545e94, size 0xac, virtual false, abstract: false, final false
  inline void add_onSetDirty(::System::Action* value);

  /// @brief Method add_resetData, addr 0x6545fec, size 0xac, virtual false, abstract: false, final false
  inline void add_resetData(::System::Action* value);

  /// @brief Method add_windowStateChanged, addr 0x65482c4, size 0x108, virtual false, abstract: false, final false
  static inline void add_windowStateChanged(::System::Action_2<::UnityEngine::Rendering::DebugManager_UIMode, bool>* value);

  static inline ::System::Lazy_1<::UnityEngine::Rendering::DebugManager*>* getStaticF_s_Instance();

  static inline ::System::Action_2<::UnityEngine::Rendering::DebugManager_UIMode, bool>* getStaticF_windowStateChanged();

  /// @brief Method get_displayEditorUI, addr 0x65484d4, size 0x18, virtual false, abstract: false, final false
  inline bool get_displayEditorUI();

  /// @brief Method get_displayPersistentRuntimeUI, addr 0x65461f8, size 0x8c, virtual false, abstract: false, final false
  inline bool get_displayPersistentRuntimeUI();

  /// @brief Method get_displayRuntimeUI, addr 0x654616c, size 0x8c, virtual false, abstract: false, final false
  inline bool get_displayRuntimeUI();

  /// @brief Method get_enableRuntimeUI, addr 0x65485a8, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableRuntimeUI();

  /// @brief Method get_instance, addr 0x653d3a0, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugManager* get_instance();

  /// @brief Method get_isAnyDebugUIActive, addr 0x6546144, size 0x28, virtual false, abstract: false, final false
  inline bool get_isAnyDebugUIActive();

  /// @brief Method get_panels, addr 0x6545cf0, size 0x24, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::DebugUI_Panel*>* get_panels();

  /// @brief Method remove_onDisplayRuntimeUIChanged, addr 0x6545dd4, size 0xc0, virtual false, abstract: false, final false
  inline void remove_onDisplayRuntimeUIChanged(::System::Action_1<bool>* value);

  /// @brief Method remove_onSetDirty, addr 0x6545f40, size 0xac, virtual false, abstract: false, final false
  inline void remove_onSetDirty(::System::Action* value);

  /// @brief Method remove_resetData, addr 0x6546098, size 0xac, virtual false, abstract: false, final false
  inline void remove_resetData(::System::Action* value);

  /// @brief Method remove_windowStateChanged, addr 0x65483cc, size 0x108, virtual false, abstract: false, final false
  static inline void remove_windowStateChanged(::System::Action_2<::UnityEngine::Rendering::DebugManager_UIMode, bool>* value);

  static inline void setStaticF_s_Instance(::System::Lazy_1<::UnityEngine::Rendering::DebugManager*>* value);

  static inline void setStaticF_windowStateChanged(::System::Action_2<::UnityEngine::Rendering::DebugManager_UIMode, bool>* value);

  /// @brief Method set_displayEditorUI, addr 0x65484ec, size 0x18, virtual false, abstract: false, final false
  inline void set_displayEditorUI(bool value);

  /// @brief Method set_displayPersistentRuntimeUI, addr 0x6548940, size 0x8c, virtual false, abstract: false, final false
  inline void set_displayPersistentRuntimeUI(bool value);

  /// @brief Method set_displayRuntimeUI, addr 0x65485e0, size 0x2a0, virtual false, abstract: false, final false
  inline void set_displayRuntimeUI(bool value);

  /// @brief Method set_enableRuntimeUI, addr 0x65485b0, size 0x24, virtual false, abstract: false, final false
  inline void set_enableRuntimeUI(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugManager(DebugManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugManager(DebugManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11954 };

  /// @brief Field kDPadHorizontal offset 0xffffffff size 0x8
  static constexpr ::ConstString kDPadHorizontal{ u"Debug Horizontal" };

  /// @brief Field kDPadVertical offset 0xffffffff size 0x8
  static constexpr ::ConstString kDPadVertical{ u"Debug Vertical" };

  /// @brief Field kDebugNextBtn offset 0xffffffff size 0x8
  static constexpr ::ConstString kDebugNextBtn{ u"Debug Next" };

  /// @brief Field kDebugPreviousBtn offset 0xffffffff size 0x8
  static constexpr ::ConstString kDebugPreviousBtn{ u"Debug Previous" };

  /// @brief Field kEnableDebug offset 0xffffffff size 0x8
  static constexpr ::ConstString kEnableDebug{ u"Enable Debug" };

  /// @brief Field kEnableDebugBtn1 offset 0xffffffff size 0x8
  static constexpr ::ConstString kEnableDebugBtn1{ u"Enable Debug Button 1" };

  /// @brief Field kEnableDebugBtn2 offset 0xffffffff size 0x8
  static constexpr ::ConstString kEnableDebugBtn2{ u"Enable Debug Button 2" };

  /// @brief Field kMultiplierBtn offset 0xffffffff size 0x8
  static constexpr ::ConstString kMultiplierBtn{ u"Debug Multiplier" };

  /// @brief Field kPersistentBtn offset 0xffffffff size 0x8
  static constexpr ::ConstString kPersistentBtn{ u"Debug Persistent" };

  /// @brief Field kResetBtn offset 0xffffffff size 0x8
  static constexpr ::ConstString kResetBtn{ u"Debug Reset" };

  /// @brief Field kValidateBtn offset 0xffffffff size 0x8
  static constexpr ::ConstString kValidateBtn{ u"Debug Validate" };

  /// @brief Field m_DebugActions, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::DebugActionDesc*, ::Array<::UnityEngine::Rendering::DebugActionDesc*>*> ___m_DebugActions;

  /// @brief Field m_DebugActionStates, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::DebugActionState*, ::Array<::UnityEngine::Rendering::DebugActionState*>*> ___m_DebugActionStates;

  /// @brief Field debugActionMap, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionMap* ___debugActionMap;

  /// @brief Field m_ReadOnlyPanels, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::DebugUI_Panel*>* ___m_ReadOnlyPanels;

  /// @brief Field m_Panels, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Panel*>* ___m_Panels;

  /// @brief Field onDisplayRuntimeUIChanged, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<bool>* ___onDisplayRuntimeUIChanged;

  /// @brief Field onSetDirty, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___onSetDirty;

  /// @brief Field resetData, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___resetData;

  /// @brief Field refreshEditorRequested, offset: 0x50, size: 0x1, def value: None
  bool ___refreshEditorRequested;

  /// @brief Field m_RequestedPanelIndex, offset: 0x54, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ___m_RequestedPanelIndex;

  /// @brief Field m_Root, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_Root;

  /// @brief Field m_RootUICanvas, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas> ___m_RootUICanvas;

  /// @brief Field m_PersistentRoot, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_PersistentRoot;

  /// @brief Field m_RootUIPersistentCanvas, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas> ___m_RootUIPersistentCanvas;

  /// @brief Field editorUIState, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugManager_UIState* ___editorUIState;

  /// @brief Field m_EnableRuntimeUI, offset: 0x88, size: 0x1, def value: None
  bool ___m_EnableRuntimeUI;

  /// @brief Field runtimeUIState, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugManager_UIState* ___runtimeUIState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_DebugActions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_DebugActionStates) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___debugActionMap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_ReadOnlyPanels) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_Panels) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___onDisplayRuntimeUIChanged) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___onSetDirty) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___resetData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___refreshEditorRequested) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_RequestedPanelIndex) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_Root) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_RootUICanvas) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_PersistentRoot) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_RootUIPersistentCanvas) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___editorUIState) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___m_EnableRuntimeUI) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugManager, ___runtimeUIState) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugManager, 0x98>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugManager_UIMode, "UnityEngine.Rendering", "DebugManager/UIMode");
NEED_NO_BOX(::UnityEngine::Rendering::DebugManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugManager*, "UnityEngine.Rendering", "DebugManager");
NEED_NO_BOX(::UnityEngine::Rendering::DebugManager_UIState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugManager_UIState*, "UnityEngine.Rendering", "DebugManager/UIState");
NEED_NO_BOX(::UnityEngine::Rendering::DebugManager___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugManager___c*, "UnityEngine.Rendering", "DebugManager/<>c");
NEED_NO_BOX(::UnityEngine::Rendering::DebugManager___c__DisplayClass67_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugManager___c__DisplayClass67_0*, "UnityEngine.Rendering", "DebugManager/<>c__DisplayClass67_0");
