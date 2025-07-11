#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IMGUIContainer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__ContextType_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IMGUIContainer)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
struct ContextType;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class FocusChangeDirection;
}
namespace UnityEngine::UIElements {
struct IMGUIContainer_GUIGlobals;
}
namespace UnityEngine::UIElements {
class IMGUIContainer_UxmlFactory;
}
namespace UnityEngine::UIElements {
class IMGUIContainer_UxmlTraits;
}
namespace UnityEngine::UIElements {
class MeshGenerationContext;
}
namespace UnityEngine::UIElements {
struct VisualElement_MeasureMode;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
class GUILayoutUtility_LayoutCache;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class ObjectGUIState;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IMGUIContainer;
}
namespace UnityEngine::UIElements {
class IMGUIContainer_UxmlFactory;
}
namespace UnityEngine::UIElements {
class IMGUIContainer_UxmlTraits;
}
namespace UnityEngine::UIElements {
struct IMGUIContainer_GUIGlobals;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IMGUIContainer);
MARK_REF_PTR_T(::UnityEngine::UIElements::IMGUIContainer_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::IMGUIContainer_UxmlTraits);
MARK_VAL_T(::UnityEngine::UIElements::IMGUIContainer_GUIGlobals);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IMGUIContainer/UxmlFactory
class CORDL_TYPE IMGUIContainer_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::IMGUIContainer*, ::UnityEngine::UIElements::IMGUIContainer_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::IMGUIContainer_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x4a40bec, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IMGUIContainer_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IMGUIContainer_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMGUIContainer_UxmlFactory(IMGUIContainer_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMGUIContainer_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMGUIContainer_UxmlFactory(IMGUIContainer_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5977 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::IMGUIContainer_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.VisualElement::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IMGUIContainer/UxmlTraits
class CORDL_TYPE IMGUIContainer_UxmlTraits : public ::UnityEngine::UIElements::VisualElement_UxmlTraits {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::IMGUIContainer_UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x4a40c34, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IMGUIContainer_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IMGUIContainer_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMGUIContainer_UxmlTraits(IMGUIContainer_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMGUIContainer_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMGUIContainer_UxmlTraits(IMGUIContainer_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5978 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::IMGUIContainer_UxmlTraits, 0x70>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.Color, UnityEngine.Matrix4x4
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.IMGUIContainer/GUIGlobals
struct CORDL_TYPE IMGUIContainer_GUIGlobals {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr IMGUIContainer_GUIGlobals();

  // Ctor Parameters [CppParam { name: "matrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None
  // }, CppParam { name: "contentColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "backgroundColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None },
  // CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "changed", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "displayIndex", ty: "int32_t",
  // modifiers: "", def_value: None }]
  constexpr IMGUIContainer_GUIGlobals(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Color color, ::UnityEngine::Color contentColor, ::UnityEngine::Color backgroundColor, bool enabled, bool changed,
                                      int32_t displayIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5979 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  /// @brief Field matrix, offset: 0x0, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 matrix;

  /// @brief Field color, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Color color;

  /// @brief Field contentColor, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color contentColor;

  /// @brief Field backgroundColor, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Color backgroundColor;

  /// @brief Field enabled, offset: 0x70, size: 0x1, def value: None
  bool enabled;

  /// @brief Field changed, offset: 0x71, size: 0x1, def value: None
  bool changed;

  /// @brief Field displayIndex, offset: 0x74, size: 0x4, def value: None
  int32_t displayIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::IMGUIContainer_GUIGlobals, matrix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::IMGUIContainer_GUIGlobals, color) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::IMGUIContainer_GUIGlobals, contentColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::IMGUIContainer_GUIGlobals, backgroundColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::IMGUIContainer_GUIGlobals, enabled) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::IMGUIContainer_GUIGlobals, changed) == 0x71, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::IMGUIContainer_GUIGlobals, displayIndex) == 0x74, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::IMGUIContainer_GUIGlobals, 0x78>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.IDisposable, Unity.Profiling.ProfilerMarker, UnityEngine.Matrix4x4, UnityEngine.Rect, UnityEngine.UIElements.ContextType, UnityEngine.UIElements.IMGUIContainer::GUIGlobals,
// UnityEngine.UIElements.VisualElement
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IMGUIContainer
class CORDL_TYPE IMGUIContainer : public ::UnityEngine::UIElements::VisualElement {
public:
  // Declarations
  using GUIGlobals = ::UnityEngine::UIElements::IMGUIContainer_GUIGlobals;

  using UxmlFactory = ::UnityEngine::UIElements::IMGUIContainer_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::IMGUIContainer_UxmlTraits;

  /// @brief Field <contextType>k__BackingField, offset 0x448, size 0x4
  __declspec(property(get = __cordl_internal_get__contextType_k__BackingField,
                      put = __cordl_internal_set__contextType_k__BackingField)) ::UnityEngine::UIElements::ContextType _contextType_k__BackingField;

  /// @brief Field <focusOnlyIfHasFocusableControls>k__BackingField, offset 0x460, size 0x1
  __declspec(property(get = __cordl_internal_get__focusOnlyIfHasFocusableControls_k__BackingField,
                      put = __cordl_internal_set__focusOnlyIfHasFocusableControls_k__BackingField)) bool _focusOnlyIfHasFocusableControls_k__BackingField;

  /// @brief Field <lastWorldClip>k__BackingField, offset 0x3dc, size 0x10
  __declspec(property(get = __cordl_internal_get__lastWorldClip_k__BackingField, put = __cordl_internal_set__lastWorldClip_k__BackingField)) ::UnityEngine::Rect _lastWorldClip_k__BackingField;

  __declspec(property(get = get_cache)) ::UnityEngine::GUILayoutUtility_LayoutCache* cache;

  __declspec(property(get = get_canGrabFocus)) bool canGrabFocus;

  __declspec(property(get = get_contextType, put = set_contextType)) ::UnityEngine::UIElements::ContextType contextType;

  __declspec(property(get = get_cullingEnabled)) bool cullingEnabled;

  /// @brief Field focusChangeDirection, offset 0x450, size 0x8
  __declspec(property(get = __cordl_internal_get_focusChangeDirection, put = __cordl_internal_set_focusChangeDirection)) ::UnityEngine::UIElements::FocusChangeDirection* focusChangeDirection;

  __declspec(property(get = get_focusOnlyIfHasFocusableControls)) bool focusOnlyIfHasFocusableControls;

  __declspec(property(get = get_guiState)) ::UnityEngine::ObjectGUIState* guiState;

  /// @brief Field hasFocusableControls, offset 0x458, size 0x1
  __declspec(property(get = __cordl_internal_get_hasFocusableControls, put = __cordl_internal_set_hasFocusableControls)) bool hasFocusableControls;

  /// @brief Field k_ImmediateCallbackMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_ImmediateCallbackMarker, put = setStaticF_k_ImmediateCallbackMarker)) ::Unity::Profiling::ProfilerMarker k_ImmediateCallbackMarker;

  /// @brief Field k_OnGUIMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_OnGUIMarker, put = setStaticF_k_OnGUIMarker)) ::Unity::Profiling::ProfilerMarker k_OnGUIMarker;

  __declspec(property(get = get_lastWorldClip, put = set_lastWorldClip)) ::UnityEngine::Rect lastWorldClip;

  __declspec(property(get = get_layoutMeasuredHeight)) float_t layoutMeasuredHeight;

  __declspec(property(get = get_layoutMeasuredWidth)) float_t layoutMeasuredWidth;

  /// @brief Field lostFocus, offset 0x44c, size 0x1
  __declspec(property(get = __cordl_internal_get_lostFocus, put = __cordl_internal_set_lostFocus)) bool lostFocus;

  /// @brief Field m_Cache, offset 0x3f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Cache, put = __cordl_internal_set_m_Cache)) ::UnityEngine::GUILayoutUtility_LayoutCache* m_Cache;

  /// @brief Field m_CachedClippingRect, offset 0x3f8, size 0x10
  __declspec(property(get = __cordl_internal_get_m_CachedClippingRect, put = __cordl_internal_set_m_CachedClippingRect)) ::UnityEngine::Rect m_CachedClippingRect;

  /// @brief Field m_CachedTransform, offset 0x408, size 0x40
  __declspec(property(get = __cordl_internal_get_m_CachedTransform, put = __cordl_internal_set_m_CachedTransform)) ::UnityEngine::Matrix4x4 m_CachedTransform;

  /// @brief Field m_CullingEnabled, offset 0x3ec, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CullingEnabled, put = __cordl_internal_set_m_CullingEnabled)) bool m_CullingEnabled;

  /// @brief Field m_GUIGlobals, offset 0x464, size 0x78
  __declspec(property(get = __cordl_internal_get_m_GUIGlobals, put = __cordl_internal_set_m_GUIGlobals)) ::UnityEngine::UIElements::IMGUIContainer_GUIGlobals m_GUIGlobals;

  /// @brief Field m_IsFocusDelegated, offset 0x3ed, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsFocusDelegated, put = __cordl_internal_set_m_IsFocusDelegated)) bool m_IsFocusDelegated;

  /// @brief Field m_ObjectGUIState, offset 0x3d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ObjectGUIState, put = __cordl_internal_set_m_ObjectGUIState)) ::UnityEngine::ObjectGUIState* m_ObjectGUIState;

  /// @brief Field m_OnGUIHandler, offset 0x3c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnGUIHandler, put = __cordl_internal_set_m_OnGUIHandler)) ::System::Action* m_OnGUIHandler;

  /// @brief Field m_RefreshCachedLayout, offset 0x3ee, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RefreshCachedLayout, put = __cordl_internal_set_m_RefreshCachedLayout)) bool m_RefreshCachedLayout;

  /// @brief Field newKeyboardFocusControlID, offset 0x45c, size 0x4
  __declspec(property(get = __cordl_internal_get_newKeyboardFocusControlID, put = __cordl_internal_set_newKeyboardFocusControlID)) int32_t newKeyboardFocusControlID;

  __declspec(property(get = get_onGUIHandler, put = set_onGUIHandler)) ::System::Action* onGUIHandler;

  /// @brief Field receivedFocus, offset 0x44d, size 0x1
  __declspec(property(get = __cordl_internal_get_receivedFocus, put = __cordl_internal_set_receivedFocus)) bool receivedFocus;

  /// @brief Field s_CurrentEvent, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CurrentEvent, put = setStaticF_s_CurrentEvent)) ::UnityEngine::Event* s_CurrentEvent;

  /// @brief Field s_DefaultMeasureEvent, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DefaultMeasureEvent, put = setStaticF_s_DefaultMeasureEvent)) ::UnityEngine::Event* s_DefaultMeasureEvent;

  /// @brief Field s_MeasureEvent, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MeasureEvent, put = setStaticF_s_MeasureEvent)) ::UnityEngine::Event* s_MeasureEvent;

  /// @brief Field useOwnerObjectGUIState, offset 0x3d8, size 0x1
  __declspec(property(get = __cordl_internal_get_useOwnerObjectGUIState, put = __cordl_internal_set_useOwnerObjectGUIState)) bool useOwnerObjectGUIState;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Field ussFoldoutChildDepthClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussFoldoutChildDepthClassName, put = setStaticF_ussFoldoutChildDepthClassName)) ::StringW ussFoldoutChildDepthClassName;

  /// @brief Field ussFoldoutChildDepthClassNames, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussFoldoutChildDepthClassNames,
                      put = setStaticF_ussFoldoutChildDepthClassNames)) ::System::Collections::Generic::List_1<::StringW>* ussFoldoutChildDepthClassNames;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x4a40b58, size 0x70, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x4a40bc8, size 0x18, virtual true, abstract: false, final false
  inline void Dispose(bool disposeManaged);

  /// @brief Method DoIMGUIRepaint, addr 0x4a3f444, size 0x2e0, virtual false, abstract: false, final false
  inline void DoIMGUIRepaint();

  /// @brief Method DoMeasure, addr 0x4a4091c, size 0x23c, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 DoMeasure(float_t desiredWidth, ::UnityEngine::UIElements::VisualElement_MeasureMode widthMode, float_t desiredHeight,
                                          ::UnityEngine::UIElements::VisualElement_MeasureMode heightMode);

  /// @brief Method DoOnGUI, addr 0x4a3e240, size 0xdb4, virtual false, abstract: false, final false
  inline void DoOnGUI(::UnityEngine::Event* evt, ::UnityEngine::Matrix4x4 parentTransform, ::UnityEngine::Rect clippingRect, bool isComputingLayout, ::UnityEngine::Rect layoutSize,
                      ::System::Action* onGUIHandler, bool canAffectFocus);

  /// @brief Method ExecuteDefaultAction, addr 0x4a404c8, size 0x2e8, virtual true, abstract: false, final false
  inline void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method GetCurrentClipRect, addr 0x4a4020c, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect GetCurrentClipRect();

  /// @brief Method GetCurrentTransformAndClip, addr 0x4a4030c, size 0x110, virtual false, abstract: false, final false
  static inline void GetCurrentTransformAndClip(::UnityEngine::UIElements::IMGUIContainer* container, ::UnityEngine::Event* evt, ::ByRef<::UnityEngine::Matrix4x4> transform,
                                                ::ByRef<::UnityEngine::Rect> clipRect);

  /// @brief Method HandleIMGUIEvent, addr 0x4a3fbe0, size 0x10, virtual false, abstract: false, final false
  inline bool HandleIMGUIEvent(::UnityEngine::Event* e, bool canAffectFocus);

  /// @brief Method HandleIMGUIEvent, addr 0x4a40244, size 0xc8, virtual false, abstract: false, final false
  inline bool HandleIMGUIEvent(::UnityEngine::Event* e, ::System::Action* onGUIHandler, bool canAffectFocus);

  /// @brief Method HandleIMGUIEvent, addr 0x4a3f724, size 0x32c, virtual false, abstract: false, final false
  inline bool HandleIMGUIEvent(::UnityEngine::Event* e, ::UnityEngine::Matrix4x4 worldTransform, ::UnityEngine::Rect clippingRect, ::System::Action* onGUIHandler, bool canAffectFocus);

  /// @brief Method IsContainerCapturingTheMouse, addr 0x4a3fbf0, size 0x110, virtual false, abstract: false, final false
  inline bool IsContainerCapturingTheMouse();

  /// @brief Method IsDockAreaMouseUp, addr 0x4a400b8, size 0x124, virtual false, abstract: false, final false
  static inline bool IsDockAreaMouseUp(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method IsEventInsideLocalWindow, addr 0x4a3ff04, size 0x1b4, virtual false, abstract: false, final false
  inline bool IsEventInsideLocalWindow(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method IsLocalEvent, addr 0x4a3fd00, size 0x204, virtual false, abstract: false, final false
  inline bool IsLocalEvent(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method MarkDirtyLayout, addr 0x4a3eff4, size 0x14, virtual false, abstract: false, final false
  inline void MarkDirtyLayout();

  static inline ::UnityEngine::UIElements::IMGUIContainer* New_ctor();

  static inline ::UnityEngine::UIElements::IMGUIContainer* New_ctor(::System::Action* onGUIHandler);

  /// @brief Method OnGenerateVisualContent, addr 0x4a3def8, size 0x128, virtual false, abstract: false, final false
  inline void OnGenerateVisualContent(::UnityEngine::UIElements::MeshGenerationContext* mgc);

  /// @brief Method ProcessEvent, addr 0x4a3f008, size 0x1a0, virtual false, abstract: false, final false
  inline void ProcessEvent(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method RestoreGlobals, addr 0x4a3e130, size 0x110, virtual false, abstract: false, final false
  inline void RestoreGlobals();

  /// @brief Method SaveGlobals, addr 0x4a3e020, size 0x110, virtual false, abstract: false, final false
  inline void SaveGlobals();

  /// @brief Method SendEventToIMGUI, addr 0x4a3f1a8, size 0x29c, virtual false, abstract: false, final false
  inline bool SendEventToIMGUI(::UnityEngine::UIElements::EventBase* evt, bool canAffectFocus, bool verifyBounds);

  /// @brief Method SendEventToIMGUIRaw, addr 0x4a3fa50, size 0x100, virtual false, abstract: false, final false
  inline bool SendEventToIMGUIRaw(::UnityEngine::UIElements::EventBase* evt, bool canAffectFocus, bool verifyBounds);

  /// @brief Method SetFoldoutDepthClass, addr 0x4a407b0, size 0x16c, virtual false, abstract: false, final false
  inline void SetFoldoutDepthClass();

  /// @brief Method VerifyBounds, addr 0x4a3fb50, size 0x90, virtual false, abstract: false, final false
  inline bool VerifyBounds(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method <DoOnGUI>b__56_0, addr 0x4a40be0, size 0xc, virtual false, abstract: false, final false
  inline void _DoOnGUI_b__56_0();

  constexpr ::UnityEngine::UIElements::ContextType const& __cordl_internal_get__contextType_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::ContextType& __cordl_internal_get__contextType_k__BackingField();

  constexpr bool const& __cordl_internal_get__focusOnlyIfHasFocusableControls_k__BackingField() const;

  constexpr bool& __cordl_internal_get__focusOnlyIfHasFocusableControls_k__BackingField();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get__lastWorldClip_k__BackingField() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get__lastWorldClip_k__BackingField();

  constexpr ::UnityEngine::UIElements::FocusChangeDirection* const& __cordl_internal_get_focusChangeDirection() const;

  constexpr ::UnityEngine::UIElements::FocusChangeDirection*& __cordl_internal_get_focusChangeDirection();

  constexpr bool const& __cordl_internal_get_hasFocusableControls() const;

  constexpr bool& __cordl_internal_get_hasFocusableControls();

  constexpr bool const& __cordl_internal_get_lostFocus() const;

  constexpr bool& __cordl_internal_get_lostFocus();

  constexpr ::UnityEngine::GUILayoutUtility_LayoutCache* const& __cordl_internal_get_m_Cache() const;

  constexpr ::UnityEngine::GUILayoutUtility_LayoutCache*& __cordl_internal_get_m_Cache();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_CachedClippingRect() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_CachedClippingRect();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_m_CachedTransform() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_m_CachedTransform();

  constexpr bool const& __cordl_internal_get_m_CullingEnabled() const;

  constexpr bool& __cordl_internal_get_m_CullingEnabled();

  constexpr ::UnityEngine::UIElements::IMGUIContainer_GUIGlobals const& __cordl_internal_get_m_GUIGlobals() const;

  constexpr ::UnityEngine::UIElements::IMGUIContainer_GUIGlobals& __cordl_internal_get_m_GUIGlobals();

  constexpr bool const& __cordl_internal_get_m_IsFocusDelegated() const;

  constexpr bool& __cordl_internal_get_m_IsFocusDelegated();

  constexpr ::UnityEngine::ObjectGUIState* const& __cordl_internal_get_m_ObjectGUIState() const;

  constexpr ::UnityEngine::ObjectGUIState*& __cordl_internal_get_m_ObjectGUIState();

  constexpr ::System::Action* const& __cordl_internal_get_m_OnGUIHandler() const;

  constexpr ::System::Action*& __cordl_internal_get_m_OnGUIHandler();

  constexpr bool const& __cordl_internal_get_m_RefreshCachedLayout() const;

  constexpr bool& __cordl_internal_get_m_RefreshCachedLayout();

  constexpr int32_t const& __cordl_internal_get_newKeyboardFocusControlID() const;

  constexpr int32_t& __cordl_internal_get_newKeyboardFocusControlID();

  constexpr bool const& __cordl_internal_get_receivedFocus() const;

  constexpr bool& __cordl_internal_get_receivedFocus();

  constexpr bool const& __cordl_internal_get_useOwnerObjectGUIState() const;

  constexpr bool& __cordl_internal_get_useOwnerObjectGUIState();

  constexpr void __cordl_internal_set__contextType_k__BackingField(::UnityEngine::UIElements::ContextType value);

  constexpr void __cordl_internal_set__focusOnlyIfHasFocusableControls_k__BackingField(bool value);

  constexpr void __cordl_internal_set__lastWorldClip_k__BackingField(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_focusChangeDirection(::UnityEngine::UIElements::FocusChangeDirection* value);

  constexpr void __cordl_internal_set_hasFocusableControls(bool value);

  constexpr void __cordl_internal_set_lostFocus(bool value);

  constexpr void __cordl_internal_set_m_Cache(::UnityEngine::GUILayoutUtility_LayoutCache* value);

  constexpr void __cordl_internal_set_m_CachedClippingRect(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_m_CachedTransform(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_m_CullingEnabled(bool value);

  constexpr void __cordl_internal_set_m_GUIGlobals(::UnityEngine::UIElements::IMGUIContainer_GUIGlobals value);

  constexpr void __cordl_internal_set_m_IsFocusDelegated(bool value);

  constexpr void __cordl_internal_set_m_ObjectGUIState(::UnityEngine::ObjectGUIState* value);

  constexpr void __cordl_internal_set_m_OnGUIHandler(::System::Action* value);

  constexpr void __cordl_internal_set_m_RefreshCachedLayout(bool value);

  constexpr void __cordl_internal_set_newKeyboardFocusControlID(int32_t value);

  constexpr void __cordl_internal_set_receivedFocus(bool value);

  constexpr void __cordl_internal_set_useOwnerObjectGUIState(bool value);

  /// @brief Method .ctor, addr 0x4a3dc9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4a3dca4, size 0x254, virtual false, abstract: false, final false
  inline void _ctor(::System::Action* onGUIHandler);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ImmediateCallbackMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_OnGUIMarker();

  static inline ::UnityEngine::Event* getStaticF_s_CurrentEvent();

  static inline ::UnityEngine::Event* getStaticF_s_DefaultMeasureEvent();

  static inline ::UnityEngine::Event* getStaticF_s_MeasureEvent();

  static inline ::StringW getStaticF_ussClassName();

  static inline ::StringW getStaticF_ussFoldoutChildDepthClassName();

  static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_ussFoldoutChildDepthClassNames();

  /// @brief Method get_cache, addr 0x4a3d7ec, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::GUILayoutUtility_LayoutCache* get_cache();

  /// @brief Method get_canGrabFocus, addr 0x4a3d8bc, size 0x20, virtual true, abstract: false, final false
  inline bool get_canGrabFocus();

  /// @brief Method get_contextType, addr 0x4a3d8a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ContextType get_contextType();

  /// @brief Method get_cullingEnabled, addr 0x4a3d7e4, size 0x8, virtual false, abstract: false, final false
  inline bool get_cullingEnabled();

  /// @brief Method get_focusOnlyIfHasFocusableControls, addr 0x4a3d8b4, size 0x8, virtual false, abstract: false, final false
  inline bool get_focusOnlyIfHasFocusableControls();

  /// @brief Method get_guiState, addr 0x4a3d720, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::ObjectGUIState* get_guiState();

  /// @brief Method get_lastWorldClip, addr 0x4a3d7bc, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_lastWorldClip();

  /// @brief Method get_layoutMeasuredHeight, addr 0x4a3d87c, size 0x28, virtual false, abstract: false, final false
  inline float_t get_layoutMeasuredHeight();

  /// @brief Method get_layoutMeasuredWidth, addr 0x4a3d854, size 0x28, virtual false, abstract: false, final false
  inline float_t get_layoutMeasuredWidth();

  /// @brief Method get_onGUIHandler, addr 0x4a3d6c0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action* get_onGUIHandler();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_k_ImmediateCallbackMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_OnGUIMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_CurrentEvent(::UnityEngine::Event* value);

  static inline void setStaticF_s_DefaultMeasureEvent(::UnityEngine::Event* value);

  static inline void setStaticF_s_MeasureEvent(::UnityEngine::Event* value);

  static inline void setStaticF_ussClassName(::StringW value);

  static inline void setStaticF_ussFoldoutChildDepthClassName(::StringW value);

  static inline void setStaticF_ussFoldoutChildDepthClassNames(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_contextType, addr 0x4a3d8ac, size 0x8, virtual false, abstract: false, final false
  inline void set_contextType(::UnityEngine::UIElements::ContextType value);

  /// @brief Method set_lastWorldClip, addr 0x4a3d7d0, size 0x14, virtual false, abstract: false, final false
  inline void set_lastWorldClip(::UnityEngine::Rect value);

  /// @brief Method set_onGUIHandler, addr 0x4a3d6c8, size 0x58, virtual false, abstract: false, final false
  inline void set_onGUIHandler(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IMGUIContainer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IMGUIContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMGUIContainer(IMGUIContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMGUIContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMGUIContainer(IMGUIContainer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5980 };

  /// @brief Field m_OnGUIHandler, offset: 0x3c8, size: 0x8, def value: None
  ::System::Action* ___m_OnGUIHandler;

  /// @brief Field m_ObjectGUIState, offset: 0x3d0, size: 0x8, def value: None
  ::UnityEngine::ObjectGUIState* ___m_ObjectGUIState;

  /// @brief Field useOwnerObjectGUIState, offset: 0x3d8, size: 0x1, def value: None
  bool ___useOwnerObjectGUIState;

  /// @brief Field <lastWorldClip>k__BackingField, offset: 0x3dc, size: 0x10, def value: None
  ::UnityEngine::Rect ____lastWorldClip_k__BackingField;

  /// @brief Field m_CullingEnabled, offset: 0x3ec, size: 0x1, def value: None
  bool ___m_CullingEnabled;

  /// @brief Field m_IsFocusDelegated, offset: 0x3ed, size: 0x1, def value: None
  bool ___m_IsFocusDelegated;

  /// @brief Field m_RefreshCachedLayout, offset: 0x3ee, size: 0x1, def value: None
  bool ___m_RefreshCachedLayout;

  /// @brief Field m_Cache, offset: 0x3f0, size: 0x8, def value: None
  ::UnityEngine::GUILayoutUtility_LayoutCache* ___m_Cache;

  /// @brief Field m_CachedClippingRect, offset: 0x3f8, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_CachedClippingRect;

  /// @brief Field m_CachedTransform, offset: 0x408, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___m_CachedTransform;

  /// @brief Field <contextType>k__BackingField, offset: 0x448, size: 0x4, def value: None
  ::UnityEngine::UIElements::ContextType ____contextType_k__BackingField;

  /// @brief Field lostFocus, offset: 0x44c, size: 0x1, def value: None
  bool ___lostFocus;

  /// @brief Field receivedFocus, offset: 0x44d, size: 0x1, def value: None
  bool ___receivedFocus;

  /// @brief Field focusChangeDirection, offset: 0x450, size: 0x8, def value: None
  ::UnityEngine::UIElements::FocusChangeDirection* ___focusChangeDirection;

  /// @brief Field hasFocusableControls, offset: 0x458, size: 0x1, def value: None
  bool ___hasFocusableControls;

  /// @brief Field newKeyboardFocusControlID, offset: 0x45c, size: 0x4, def value: None
  int32_t ___newKeyboardFocusControlID;

  /// @brief Field <focusOnlyIfHasFocusableControls>k__BackingField, offset: 0x460, size: 0x1, def value: None
  bool ____focusOnlyIfHasFocusableControls_k__BackingField;

  /// @brief Field m_GUIGlobals, offset: 0x464, size: 0x78, def value: None
  ::UnityEngine::UIElements::IMGUIContainer_GUIGlobals ___m_GUIGlobals;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::IMGUIContainer, ___m_OnGUIHandler) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::IMGUIContainer, ___m_ObjectGUIState) == 0x3d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::IMGUIContainer, ___useOwnerObjectGUIState) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::IMGUIContainer, ____lastWorldClip_k__BackingField) == 0x3dc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::IMGUIContainer, ___m_CullingEnabled) == 0x3ec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::IMGUIContainer, ___m_IsFocusDelegated) == 0x3ed, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::IMGUIContainer, ___m_RefreshCachedLayout) == 0x3ee, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::IMGUIContainer, ___m_Cache) == 0x3f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::IMGUIContainer, ___m_CachedClippingRect) == 0x3f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::IMGUIContainer, ___m_CachedTransform) == 0x408, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::IMGUIContainer, ____contextType_k__BackingField) == 0x448, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::IMGUIContainer, ___lostFocus) == 0x44c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::IMGUIContainer, ___receivedFocus) == 0x44d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::IMGUIContainer, ___focusChangeDirection) == 0x450, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::IMGUIContainer, ___hasFocusableControls) == 0x458, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::IMGUIContainer, ___newKeyboardFocusControlID) == 0x45c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::IMGUIContainer, ____focusOnlyIfHasFocusableControls_k__BackingField) == 0x460, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::IMGUIContainer, ___m_GUIGlobals) == 0x464, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::IMGUIContainer, 0x4e0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IMGUIContainer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IMGUIContainer*, "UnityEngine.UIElements", "IMGUIContainer");
NEED_NO_BOX(::UnityEngine::UIElements::IMGUIContainer_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IMGUIContainer_UxmlFactory*, "UnityEngine.UIElements", "IMGUIContainer/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::IMGUIContainer_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IMGUIContainer_UxmlTraits*, "UnityEngine.UIElements", "IMGUIContainer/UxmlTraits");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IMGUIContainer_GUIGlobals, "UnityEngine.UIElements", "IMGUIContainer/GUIGlobals");
