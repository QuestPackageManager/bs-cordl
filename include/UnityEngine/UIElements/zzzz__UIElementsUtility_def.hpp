#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIElementsUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UIElementsUtility)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct __Dictionary_2__Enumerator;
}
namespace System {
class Exception;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
struct ContextType;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IMGUIContainer;
}
namespace UnityEngine::UIElements {
class IUIElementsUtility;
}
namespace UnityEngine::UIElements {
class Panel;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct EventType;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class __GUILayoutUtility__LayoutCache;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIElementsUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIElementsUtility);
// Type: UnityEngine.UIElements::UIElementsUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::UIElementsUtility*
class CORDL_TYPE UIElementsUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field editorPlayModeTintColor, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_editorPlayModeTintColor, put = setStaticF_editorPlayModeTintColor))::UnityEngine::Color editorPlayModeTintColor;

  /// @brief Field s_ContainerStack, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ContainerStack,
                             put = setStaticF_s_ContainerStack))::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::IMGUIContainer*>* s_ContainerStack;

  /// @brief Field s_EventInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_EventInstance, put = setStaticF_s_EventInstance))::UnityEngine::Event* s_EventInstance;

  /// @brief Field s_EventProfilerMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_EventProfilerMarker, put = setStaticF_s_EventProfilerMarker))::Unity::Profiling::ProfilerMarker s_EventProfilerMarker;

  /// @brief Field s_EventProfilerMarkerName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_EventProfilerMarkerName, put = setStaticF_s_EventProfilerMarkerName))::StringW s_EventProfilerMarkerName;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance))::UnityEngine::UIElements::UIElementsUtility* s_Instance;

  /// @brief Field s_PanelsIterationList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_PanelsIterationList,
                             put = setStaticF_s_PanelsIterationList))::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>* s_PanelsIterationList;

  /// @brief Field s_RepaintProfilerMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_RepaintProfilerMarker, put = setStaticF_s_RepaintProfilerMarker))::Unity::Profiling::ProfilerMarker s_RepaintProfilerMarker;

  /// @brief Field s_RepaintProfilerMarkerName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_RepaintProfilerMarkerName, put = setStaticF_s_RepaintProfilerMarkerName))::StringW s_RepaintProfilerMarkerName;

  /// @brief Field s_UIElementsCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UIElementsCache,
                             put = setStaticF_s_UIElementsCache))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::Panel*>* s_UIElementsCache;

  /// @brief Field singleLineHeight, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_singleLineHeight, put = setStaticF_singleLineHeight)) float_t singleLineHeight;

  /// @brief Convert operator to "::UnityEngine::UIElements::IUIElementsUtility"
  constexpr operator ::UnityEngine::UIElements::IUIElementsUtility*() noexcept;

  /// @brief Method BeginContainerGUI, addr 0x3551c10, size 0x1cc, virtual false, abstract: false, final false
  static inline void BeginContainerGUI(::UnityEngine::__GUILayoutUtility__LayoutCache* cache, ::UnityEngine::Event* evt, ::UnityEngine::UIElements::IMGUIContainer* container);

  /// @brief Method CreateEvent, addr 0x35520a4, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::EventBase* CreateEvent(::UnityEngine::Event* systemEvent);

  /// @brief Method CreateEvent, addr 0x3552118, size 0x29c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::EventBase* CreateEvent(::UnityEngine::Event* systemEvent, ::UnityEngine::EventType eventType);

  /// @brief Method DoDispatch, addr 0x35512c0, size 0x690, virtual false, abstract: false, final false
  static inline bool DoDispatch(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method EndContainerGUI, addr 0x3551e80, size 0x224, virtual false, abstract: false, final false
  static inline void EndContainerGUI(::UnityEngine::Event* evt, ::UnityEngine::Rect layoutSize);

  /// @brief Method GetAllPanels, addr 0x35523b4, size 0x158, virtual false, abstract: false, final false
  static inline void GetAllPanels(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>* panels, ::UnityEngine::UIElements::ContextType contextType);

  /// @brief Method GetPanelsIterator, addr 0x355250c, size 0xa8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::__Dictionary_2__Enumerator<int32_t, ::UnityEngine::UIElements::Panel*> GetPanelsIterator();

  static inline ::UnityEngine::UIElements::UIElementsUtility* New_ctor();

  /// @brief Method PixelsPerUnitScaleForElement, addr 0x35525b4, size 0xa8, virtual false, abstract: false, final false
  static inline float_t PixelsPerUnitScaleForElement(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::Sprite* sprite);

  /// @brief Method RegisterCachedPanel, addr 0x3551a70, size 0x90, virtual false, abstract: false, final false
  static inline void RegisterCachedPanel(int32_t instanceID, ::UnityEngine::UIElements::Panel* panel);

  /// @brief Method RemoveCachedPanel, addr 0x3551b00, size 0x80, virtual false, abstract: false, final false
  static inline void RemoveCachedPanel(int32_t instanceID);

  /// @brief Method TryGetPanel, addr 0x3551b80, size 0x90, virtual false, abstract: false, final false
  static inline bool TryGetPanel(int32_t instanceID, ByRef<::UnityEngine::UIElements::Panel*> panel);

  /// @brief Method UnityEngine.UIElements.IUIElementsUtility.CleanupRoots, addr 0x3551950, size 0x60, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IUIElementsUtility_CleanupRoots();

  /// @brief Method UnityEngine.UIElements.IUIElementsUtility.EndContainerGUIFromException, addr 0x35519b0, size 0xc0, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IUIElementsUtility_EndContainerGUIFromException(::System::Exception* exception);

  /// @brief Method UnityEngine.UIElements.IUIElementsUtility.MakeCurrentIMGUIContainerDirty, addr 0x3550e40, size 0xd8, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IUIElementsUtility_MakeCurrentIMGUIContainerDirty();

  /// @brief Method UnityEngine.UIElements.IUIElementsUtility.ProcessEvent, addr 0x3551180, size 0x140, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IUIElementsUtility_ProcessEvent(int32_t instanceID, void* nativeEventPtr, ByRef<bool> eventHandled);

  /// @brief Method UnityEngine.UIElements.IUIElementsUtility.ReleaseCapture, addr 0x3551178, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IUIElementsUtility_ReleaseCapture();

  /// @brief Method UnityEngine.UIElements.IUIElementsUtility.TakeCapture, addr 0x3550f2c, size 0x16c, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_IUIElementsUtility_TakeCapture();

  /// @brief Method .ctor, addr 0x3550de0, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Color getStaticF_editorPlayModeTintColor();

  static inline ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::IMGUIContainer*>* getStaticF_s_ContainerStack();

  static inline ::UnityEngine::Event* getStaticF_s_EventInstance();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_EventProfilerMarker();

  static inline ::StringW getStaticF_s_EventProfilerMarkerName();

  static inline ::UnityEngine::UIElements::UIElementsUtility* getStaticF_s_Instance();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>* getStaticF_s_PanelsIterationList();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_RepaintProfilerMarker();

  static inline ::StringW getStaticF_s_RepaintProfilerMarkerName();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::Panel*>* getStaticF_s_UIElementsCache();

  static inline float_t getStaticF_singleLineHeight();

  /// @brief Convert to "::UnityEngine::UIElements::IUIElementsUtility"
  constexpr ::UnityEngine::UIElements::IUIElementsUtility* i___UnityEngine__UIElements__IUIElementsUtility() noexcept;

  static inline void setStaticF_editorPlayModeTintColor(::UnityEngine::Color value);

  static inline void setStaticF_s_ContainerStack(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::IMGUIContainer*>* value);

  static inline void setStaticF_s_EventInstance(::UnityEngine::Event* value);

  static inline void setStaticF_s_EventProfilerMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_EventProfilerMarkerName(::StringW value);

  static inline void setStaticF_s_Instance(::UnityEngine::UIElements::UIElementsUtility* value);

  static inline void setStaticF_s_PanelsIterationList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>* value);

  static inline void setStaticF_s_RepaintProfilerMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_RepaintProfilerMarkerName(::StringW value);

  static inline void setStaticF_s_UIElementsCache(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::Panel*>* value);

  static inline void setStaticF_singleLineHeight(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIElementsUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIElementsUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIElementsUtility(UIElementsUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIElementsUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIElementsUtility(UIElementsUtility const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIElementsUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UIElementsUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIElementsUtility*, "UnityEngine.UIElements", "UIElementsUtility");
