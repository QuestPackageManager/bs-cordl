#pragma once
// IWYU pragma private; include "UnityEngine/GUIUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GUIUtility)
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace System {
class Action;
}
namespace System {
class Exception;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine {
struct EventType;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
struct FocusType;
}
namespace UnityEngine {
class GUISkin;
}
namespace UnityEngine {
struct IMECompositionMode;
}
namespace UnityEngine {
struct KeyCode;
}
namespace UnityEngine {
class ObjectGUIState;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class GUIUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::GUIUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::GUIUtility*, "UnityEngine", "GUIUtility");
// [NativeHeader("Modules/IMGUI/GUIUtility.h")]
// [NativeHeader("Modules/IMGUI/GUIManager.h")]
// [NativeHeader("Runtime/Input/InputBindings.h")]
// [NativeHeader("Runtime/Input/InputManager.h")]
// [NativeHeader("Runtime/Camera/RenderLayers/GUITexture.h")]
// [NativeHeader("Runtime/Utilities/CopyPaste.h")]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUIUtility
class CORDL_TYPE GUIUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field <guiIsExiting>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__guiIsExiting_k__BackingField, put = setStaticF__guiIsExiting_k__BackingField)) bool _guiIsExiting_k__BackingField;

  /// @brief Field <isUITK>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__isUITK_k__BackingField, put = setStaticF__isUITK_k__BackingField)) bool _isUITK_k__BackingField;

  /// @brief Field beforeEventProcessed, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_beforeEventProcessed,
                      put = setStaticF_beforeEventProcessed)) ::System::Action_3<::UnityEngine::EventType, ::UnityEngine::KeyCode, ::UnityEngine::EventModifiers>* beforeEventProcessed;

  /// @brief Field cleanupRoots, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_cleanupRoots, put = setStaticF_cleanupRoots)) ::System::Action* cleanupRoots;

  /// @brief Field endContainerGUIFromException, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_endContainerGUIFromException, put = setStaticF_endContainerGUIFromException)) ::System::Func_2<::System::Exception*, bool>* endContainerGUIFromException;

  /// @brief Field guiChanged, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_guiChanged, put = setStaticF_guiChanged)) ::System::Action* guiChanged;

  /// @brief Field m_Event, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_Event, put = setStaticF_m_Event)) ::UnityEngine::Event* m_Event;

  /// @brief Field processEvent, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_processEvent, put = setStaticF_processEvent)) ::System::Func_3<int32_t, ::System::IntPtr, bool>* processEvent;

  /// @brief Field releaseCapture, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_releaseCapture, put = setStaticF_releaseCapture)) ::System::Action* releaseCapture;

  /// @brief Field s_ControlCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_ControlCount, put = setStaticF_s_ControlCount)) int32_t s_ControlCount;

  /// @brief Field s_HasCurrentWindowKeyFocusFunc, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_HasCurrentWindowKeyFocusFunc, put = setStaticF_s_HasCurrentWindowKeyFocusFunc)) ::System::Func_1<bool>* s_HasCurrentWindowKeyFocusFunc;

  /// @brief Field s_OriginalID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_OriginalID, put = setStaticF_s_OriginalID)) int32_t s_OriginalID;

  /// @brief Field s_SkinMode, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_SkinMode, put = setStaticF_s_SkinMode)) int32_t s_SkinMode;

  /// @brief Field takeCapture, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_takeCapture, put = setStaticF_takeCapture)) ::System::Action* takeCapture;

  /// @brief Method AlignRectToDevice, addr 0x6fab3f0, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect AlignRectToDevice(::UnityEngine::Rect rect);

  /// @brief Method AlignRectToDevice, addr 0x6faa1b4, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect AlignRectToDevice(::UnityEngine::Rect rect, ::by_ref<int32_t> widthInPixels, ::by_ref<int32_t> heightInPixels);

  /// @brief Method AlignRectToDevice_Injected, addr 0x6faa264, size 0x5c, virtual false, abstract: false, final false
  static inline void AlignRectToDevice_Injected(::by_ref<::UnityEngine::Rect> rect, ::by_ref<int32_t> widthInPixels, ::by_ref<int32_t> heightInPixels, ::by_ref<::UnityEngine::Rect> ret);

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method BeginContainer, addr 0x6fa9f60, size 0x80, virtual false, abstract: false, final false
  static inline void BeginContainer(::UnityEngine::ObjectGUIState* objectGUIState);

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method BeginContainerFromOwner, addr 0x6fa9e7c, size 0xa8, virtual false, abstract: false, final false
  static inline void BeginContainerFromOwner(::UnityEngine::ScriptableObject* owner);

  /// @brief Method BeginContainerFromOwner_Injected, addr 0x6fa9f24, size 0x3c, virtual false, abstract: false, final false
  static inline void BeginContainerFromOwner_Injected(::System::IntPtr owner);

  /// @brief Method BeginContainer_Injected, addr 0x6fa9fe0, size 0x3c, virtual false, abstract: false, final false
  static inline void BeginContainer_Injected(::System::IntPtr objectGUIState);

  /// [RequiredByNativeCode]
  /// @brief Method BeginGUI, addr 0x6faace0, size 0xb4, virtual false, abstract: false, final false
  static inline void BeginGUI(int32_t skinMode, int32_t instanceID, int32_t useGUILayout);

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method CheckForTabEvent, addr 0x6faa044, size 0x80, virtual false, abstract: false, final false
  static inline int32_t CheckForTabEvent(::UnityEngine::Event* evt);

  /// @brief Method CheckForTabEvent_Injected, addr 0x6faa0c4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t CheckForTabEvent_Injected(::System::IntPtr evt);

  /// @brief Method CheckOnGUI, addr 0x6f9ea98, size 0xc0, virtual false, abstract: false, final false
  static inline void CheckOnGUI();

  /// [RequiredByNativeCode]
  /// @brief Method DestroyGUI, addr 0x6faaee0, size 0x5c, virtual false, abstract: false, final false
  static inline void DestroyGUI(int32_t instanceID);

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method EndContainer, addr 0x6faac54, size 0x8c, virtual false, abstract: false, final false
  static inline void EndContainer();

  /// [RequiredByNativeCode]
  /// @brief Method EndContainerGUIFromException, addr 0x6fab1f8, size 0xa4, virtual false, abstract: false, final false
  static inline bool EndContainerGUIFromException(::System::Exception* exception);

  /// [RequiredByNativeCode]
  /// @brief Method EndGUI, addr 0x6faaf3c, size 0x1ec, virtual false, abstract: false, final false
  static inline void EndGUI(int32_t layoutType);

  /// [RequiredByNativeCode]
  /// @brief Method EndGUIFromException, addr 0x6fab128, size 0x78, virtual false, abstract: false, final false
  static inline bool EndGUIFromException(::System::Exception* exception);

  /// @brief Method ExitGUI, addr 0x6faa948, size 0x44, virtual false, abstract: false, final false
  static inline void ExitGUI();

  /// @brief Method GetControlID, addr 0x6f9f854, size 0xdc, virtual false, abstract: false, final false
  static inline int32_t GetControlID(int32_t hint, ::UnityEngine::FocusType focus);

  /// @brief Method GetControlID, addr 0x6fa9dd0, size 0xac, virtual false, abstract: false, final false
  static inline int32_t GetControlID(int32_t hint, ::UnityEngine::FocusType focusType, ::UnityEngine::Rect rect);

  /// @brief Method GetDefaultSkin, addr 0x6f9ecb4, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GUISkin> GetDefaultSkin();

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method HasFocusableControls, addr 0x6faa150, size 0x28, virtual false, abstract: false, final false
  static inline bool HasFocusableControls();

  /// @brief Method HasKeyFocus, addr 0x6fa8b6c, size 0xc4, virtual false, abstract: false, final false
  static inline bool HasKeyFocus(int32_t controlID);

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method HitTest, addr 0x6fab580, size 0x9c, virtual false, abstract: false, final false
  static inline bool HitTest(::UnityEngine::Rect rect, ::UnityEngine::Vector2 point, bool isDirectManipulationDevice);

  /// @brief Method HitTest, addr 0x6fab480, size 0x100, virtual false, abstract: false, final false
  static inline bool HitTest(::UnityEngine::Rect rect, ::UnityEngine::Vector2 point, int32_t offset);

  /// [NativeMethod("EndContainer")]
  /// @brief Method Internal_EndContainer, addr 0x6faa01c, size 0x28, virtual false, abstract: false, final false
  static inline void Internal_EndContainer();

  /// @brief Method Internal_ExitGUI, addr 0x6faa5f4, size 0x28, virtual false, abstract: false, final false
  static inline void Internal_ExitGUI();

  /// [FreeFunction("GetGUIState().GetControlID")]
  /// @brief Method Internal_GetControlID, addr 0x6fa9cdc, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t Internal_GetControlID(int32_t hint, ::UnityEngine::FocusType focusType, ::UnityEngine::Rect rect);

  /// @brief Method Internal_GetControlID_Injected, addr 0x6fa9d7c, size 0x54, virtual false, abstract: false, final false
  static inline int32_t Internal_GetControlID_Injected(int32_t hint, ::UnityEngine::FocusType focusType, ::by_ref<::UnityEngine::Rect> rect);

  /// @brief Method Internal_GetDefaultSkin, addr 0x6faa5b8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::Object* Internal_GetDefaultSkin(int32_t skinMode);

  /// @brief Method Internal_GetHotControl, addr 0x6faa4f0, size 0x28, virtual false, abstract: false, final false
  static inline int32_t Internal_GetHotControl();

  /// @brief Method Internal_GetKeyboardControl, addr 0x6faa518, size 0x28, virtual false, abstract: false, final false
  static inline int32_t Internal_GetKeyboardControl();

  /// @brief Method Internal_SetHotControl, addr 0x6faa540, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_SetHotControl(int32_t value);

  /// @brief Method Internal_SetKeyboardControl, addr 0x6faa57c, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_SetKeyboardControl(int32_t value);

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method IsExitGUIException, addr 0x6fab29c, size 0x94, virtual false, abstract: false, final false
  static inline bool IsExitGUIException(::System::Exception* exception);

  /// [RequiredByNativeCode]
  /// @brief Method MarkGUIChanged, addr 0x6faa61c, size 0x78, virtual false, abstract: false, final false
  static inline void MarkGUIChanged();

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method OwnsId, addr 0x6faa178, size 0x3c, virtual false, abstract: false, final false
  static inline bool OwnsId(int32_t id);

  /// [RequiredByNativeCode]
  /// @brief Method ProcessEvent, addr 0x6faaa58, size 0x1fc, virtual false, abstract: false, final false
  static inline void ProcessEvent(int32_t instanceID, ::System::IntPtr nativeEventPtr, ::by_ref<bool> result);

  /// [RequiredByNativeCode]
  /// @brief Method RemoveCapture, addr 0x6faa7ec, size 0x78, virtual false, abstract: false, final false
  static inline void RemoveCapture();

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method ResetGlobalState, addr 0x6faad94, size 0x14c, virtual false, abstract: false, final false
  static inline void ResetGlobalState();

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method SetKeyboardControlToFirstControlId, addr 0x6faa100, size 0x28, virtual false, abstract: false, final false
  static inline void SetKeyboardControlToFirstControlId();

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method SetKeyboardControlToLastControlId, addr 0x6faa128, size 0x28, virtual false, abstract: false, final false
  static inline void SetKeyboardControlToLastControlId();

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method ShouldRethrowException, addr 0x6fab1a0, size 0x58, virtual false, abstract: false, final false
  static inline bool ShouldRethrowException(::System::Exception* exception);

  /// [RequiredByNativeCode]
  /// @brief Method TakeCapture, addr 0x6faa774, size 0x78, virtual false, abstract: false, final false
  static inline void TakeCapture();

  /// @brief Method WarnOnGUI, addr 0x6faa770, size 0x4, virtual false, abstract: false, final false
  static inline void WarnOnGUI();

  static inline bool getStaticF__guiIsExiting_k__BackingField();

  static inline bool getStaticF__isUITK_k__BackingField();

  static inline ::System::Action_3<::UnityEngine::EventType, ::UnityEngine::KeyCode, ::UnityEngine::EventModifiers>* getStaticF_beforeEventProcessed();

  static inline ::System::Action* getStaticF_cleanupRoots();

  static inline ::System::Func_2<::System::Exception*, bool>* getStaticF_endContainerGUIFromException();

  static inline ::System::Action* getStaticF_guiChanged();

  static inline ::UnityEngine::Event* getStaticF_m_Event();

  static inline ::System::Func_3<int32_t, ::System::IntPtr, bool>* getStaticF_processEvent();

  static inline ::System::Action* getStaticF_releaseCapture();

  static inline int32_t getStaticF_s_ControlCount();

  static inline ::System::Func_1<bool>* getStaticF_s_HasCurrentWindowKeyFocusFunc();

  static inline int32_t getStaticF_s_OriginalID();

  static inline int32_t getStaticF_s_SkinMode();

  static inline ::System::Action* getStaticF_takeCapture();

  /// @brief Method get_compositionString, addr 0x6faa2c0, size 0x100, virtual false, abstract: false, final false
  static inline ::StringW get_compositionString();

  /// @brief Method get_compositionString_Injected, addr 0x6faa3c0, size 0x3c, virtual false, abstract: false, final false
  static inline void get_compositionString_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method get_guiDepth, addr 0x6fa99f0, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_guiDepth();

  /// @brief Method get_hotControl, addr 0x6fa8b00, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t get_hotControl();

  /// [CompilerGenerated]
  /// @brief Method get_isUITK, addr 0x6fab330, size 0x5c, virtual false, abstract: false, final false
  static inline bool get_isUITK();

  /// @brief Method get_keyboardControl, addr 0x6faa864, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t get_keyboardControl();

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule", "UnityEditor.UIToolkitAuthoringModule" })]
  /// @brief Method get_pixelsPerPoint, addr 0x6fa37e8, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_pixelsPerPoint();

  /// [FreeFunction("GetCopyBuffer")]
  /// @brief Method get_systemCopyBuffer, addr 0x6fa9a18, size 0x100, virtual false, abstract: false, final false
  static inline ::StringW get_systemCopyBuffer();

  /// @brief Method get_systemCopyBuffer_Injected, addr 0x6fa9b18, size 0x3c, virtual false, abstract: false, final false
  static inline void get_systemCopyBuffer_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method get_textFieldInput, addr 0x6f9e134, size 0x28, virtual false, abstract: false, final false
  static inline bool get_textFieldInput();

  static inline void setStaticF__guiIsExiting_k__BackingField(bool value);

  static inline void setStaticF__isUITK_k__BackingField(bool value);

  static inline void setStaticF_beforeEventProcessed(::System::Action_3<::UnityEngine::EventType, ::UnityEngine::KeyCode, ::UnityEngine::EventModifiers>* value);

  static inline void setStaticF_cleanupRoots(::System::Action* value);

  static inline void setStaticF_endContainerGUIFromException(::System::Func_2<::System::Exception*, bool>* value);

  static inline void setStaticF_guiChanged(::System::Action* value);

  static inline void setStaticF_m_Event(::UnityEngine::Event* value);

  static inline void setStaticF_processEvent(::System::Func_3<int32_t, ::System::IntPtr, bool>* value);

  static inline void setStaticF_releaseCapture(::System::Action* value);

  static inline void setStaticF_s_ControlCount(int32_t value);

  static inline void setStaticF_s_HasCurrentWindowKeyFocusFunc(::System::Func_1<bool>* value);

  static inline void setStaticF_s_OriginalID(int32_t value);

  static inline void setStaticF_s_SkinMode(int32_t value);

  static inline void setStaticF_takeCapture(::System::Action* value);

  /// @brief Method set_compositionCursorPos, addr 0x6faa438, size 0x7c, virtual false, abstract: false, final false
  static inline void set_compositionCursorPos(::UnityEngine::Vector2 value);

  /// @brief Method set_compositionCursorPos_Injected, addr 0x6faa4b4, size 0x3c, virtual false, abstract: false, final false
  static inline void set_compositionCursorPos_Injected(::by_ref<::UnityEngine::Vector2> value);

  /// [CompilerGenerated]
  /// @brief Method set_guiIsExiting, addr 0x6faa694, size 0x64, virtual false, abstract: false, final false
  static inline void set_guiIsExiting(bool value);

  /// @brief Method set_hotControl, addr 0x6faa6f8, size 0x78, virtual false, abstract: false, final false
  static inline void set_hotControl(int32_t value);

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method set_imeCompositionMode, addr 0x6faa3fc, size 0x3c, virtual false, abstract: false, final false
  static inline void set_imeCompositionMode(::UnityEngine::IMECompositionMode value);

  /// [CompilerGenerated]
  /// @brief Method set_isUITK, addr 0x6fab38c, size 0x64, virtual false, abstract: false, final false
  static inline void set_isUITK(bool value);

  /// @brief Method set_keyboardControl, addr 0x6faa8d0, size 0x78, virtual false, abstract: false, final false
  static inline void set_keyboardControl(int32_t value);

  /// @brief Method set_mouseUsed, addr 0x6fa01d0, size 0x3c, virtual false, abstract: false, final false
  static inline void set_mouseUsed(bool value);

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method set_pixelsPerPoint, addr 0x6fa99b8, size 0x38, virtual false, abstract: false, final false
  static inline void set_pixelsPerPoint(float_t value);

  /// [FreeFunction("SetCopyBuffer")]
  /// @brief Method set_systemCopyBuffer, addr 0x6fa9b54, size 0x14c, virtual false, abstract: false, final false
  static inline void set_systemCopyBuffer(::StringW value);

  /// @brief Method set_systemCopyBuffer_Injected, addr 0x6fa9ca0, size 0x3c, virtual false, abstract: false, final false
  static inline void set_systemCopyBuffer_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GUIUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GUIUtility", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GUIUtility(GUIUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GUIUtility", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GUIUtility(GUIUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20061 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::GUIUtility) == 0x10, "Size mismatch!");

} // namespace UnityEngine
