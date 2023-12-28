#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__ContextType_def.hpp"
#include "UnityEngine/UIElements/zzzz__IMGUIContainer_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IMGUIContainer)
namespace UnityEngine::UIElements {
struct __IMGUIContainer__GUIGlobals;
}
namespace UnityEngine {
class __GUILayoutUtility__LayoutCache;
}
namespace UnityEngine {
class ObjectGUIState;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine::UIElements {
struct __VisualElement__MeasureMode;
}
namespace UnityEngine::UIElements {
class MeshGenerationContext;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
class __IMGUIContainer__UxmlTraits;
}
namespace UnityEngine::UIElements {
class __IMGUIContainer__UxmlFactory;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine::UIElements {
struct ContextType;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
class FocusChangeDirection;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IMGUIContainer;
}
namespace UnityEngine::UIElements {
class __IMGUIContainer__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __IMGUIContainer__UxmlTraits;
}
namespace UnityEngine::UIElements {
struct __IMGUIContainer__GUIGlobals;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IMGUIContainer);
MARK_REF_PTR_T(::UnityEngine::UIElements::__IMGUIContainer__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__IMGUIContainer__UxmlTraits);
MARK_VAL_T(::UnityEngine::UIElements::__IMGUIContainer__GUIGlobals);
// Type: ::UxmlTraits
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6737))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6907))
// CS Name: ::IMGUIContainer::UxmlTraits*
class CORDL_TYPE __IMGUIContainer__UxmlTraits : public ::UnityEngine::UIElements::__VisualElement__UxmlTraits {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__IMGUIContainer__UxmlTraits* New_ctor();

  /// @brief Method .ctor addr 0x2e023fc size 0x70 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__IMGUIContainer__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IMGUIContainer__UxmlTraits(__IMGUIContainer__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IMGUIContainer__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IMGUIContainer__UxmlTraits(__IMGUIContainer__UxmlTraits const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IMGUIContainer__UxmlTraits();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__IMGUIContainer__UxmlTraits, 0x70>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::GUIGlobals
// SizeInfo { instance_size: 120, native_size: 124, calculated_instance_size: 120, calculated_native_size: 136, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10245)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6908))
// CS Name: ::IMGUIContainer::GUIGlobals
struct CORDL_TYPE __IMGUIContainer__GUIGlobals {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "matrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None
  // }, CppParam { name: "contentColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "backgroundColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None },
  // CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "changed", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "displayIndex", ty: "int32_t",
  // modifiers: "", def_value: None }]
  constexpr __IMGUIContainer__GUIGlobals(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Color color, ::UnityEngine::Color contentColor, ::UnityEngine::Color backgroundColor, bool enabled,
                                         bool changed, int32_t displayIndex) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __IMGUIContainer__GUIGlobals();

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__IMGUIContainer__GUIGlobals, 0x78>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::IMGUIContainer
// SizeInfo { instance_size: 1224, native_size: -1, calculated_instance_size: 1224, calculated_native_size: 1220, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6862)), TypeDefinitionIndex(TypeDefinitionIndex(6908)), TypeDefinitionIndex(TypeDefinitionIndex(10165)),
// TypeDefinitionIndex(TypeDefinitionIndex(9966)), TypeDefinitionIndex(TypeDefinitionIndex(10245)), TypeDefinitionIndex(TypeDefinitionIndex(6744))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6909))
// CS Name: ::UnityEngine.UIElements::IMGUIContainer*
class CORDL_TYPE IMGUIContainer : public ::UnityEngine::UIElements::VisualElement {
public:
  // Declarations
  using GUIGlobals = ::UnityEngine::UIElements::__IMGUIContainer__GUIGlobals;

  using UxmlTraits = ::UnityEngine::UIElements::__IMGUIContainer__UxmlTraits;

  using UxmlFactory = ::UnityEngine::UIElements::__IMGUIContainer__UxmlFactory;

  /// @brief Field m_OnGUIHandler, offset 0x3b0, size 0x8
  __declspec(property(get = __get_m_OnGUIHandler, put = __set_m_OnGUIHandler))::System::Action* m_OnGUIHandler;

  /// @brief Field m_ObjectGUIState, offset 0x3b8, size 0x8
  __declspec(property(get = __get_m_ObjectGUIState, put = __set_m_ObjectGUIState))::UnityEngine::ObjectGUIState* m_ObjectGUIState;

  /// @brief Field useOwnerObjectGUIState, offset 0x3c0, size 0x1
  __declspec(property(get = __get_useOwnerObjectGUIState, put = __set_useOwnerObjectGUIState)) bool useOwnerObjectGUIState;

  /// @brief Field <lastWorldClip>k__BackingField, offset 0x3c4, size 0x10
  __declspec(property(get = __get__lastWorldClip_k__BackingField, put = __set__lastWorldClip_k__BackingField))::UnityEngine::Rect _lastWorldClip_k__BackingField;

  /// @brief Field m_CullingEnabled, offset 0x3d4, size 0x1
  __declspec(property(get = __get_m_CullingEnabled, put = __set_m_CullingEnabled)) bool m_CullingEnabled;

  /// @brief Field m_IsFocusDelegated, offset 0x3d5, size 0x1
  __declspec(property(get = __get_m_IsFocusDelegated, put = __set_m_IsFocusDelegated)) bool m_IsFocusDelegated;

  /// @brief Field m_RefreshCachedLayout, offset 0x3d6, size 0x1
  __declspec(property(get = __get_m_RefreshCachedLayout, put = __set_m_RefreshCachedLayout)) bool m_RefreshCachedLayout;

  /// @brief Field m_Cache, offset 0x3d8, size 0x8
  __declspec(property(get = __get_m_Cache, put = __set_m_Cache))::UnityEngine::__GUILayoutUtility__LayoutCache* m_Cache;

  /// @brief Field m_CachedClippingRect, offset 0x3e0, size 0x10
  __declspec(property(get = __get_m_CachedClippingRect, put = __set_m_CachedClippingRect))::UnityEngine::Rect m_CachedClippingRect;

  /// @brief Field m_CachedTransform, offset 0x3f0, size 0x40
  __declspec(property(get = __get_m_CachedTransform, put = __set_m_CachedTransform))::UnityEngine::Matrix4x4 m_CachedTransform;

  /// @brief Field <contextType>k__BackingField, offset 0x430, size 0x4
  __declspec(property(get = __get__contextType_k__BackingField, put = __set__contextType_k__BackingField))::UnityEngine::UIElements::ContextType _contextType_k__BackingField;

  /// @brief Field lostFocus, offset 0x434, size 0x1
  __declspec(property(get = __get_lostFocus, put = __set_lostFocus)) bool lostFocus;

  /// @brief Field receivedFocus, offset 0x435, size 0x1
  __declspec(property(get = __get_receivedFocus, put = __set_receivedFocus)) bool receivedFocus;

  /// @brief Field focusChangeDirection, offset 0x438, size 0x8
  __declspec(property(get = __get_focusChangeDirection, put = __set_focusChangeDirection))::UnityEngine::UIElements::FocusChangeDirection* focusChangeDirection;

  /// @brief Field hasFocusableControls, offset 0x440, size 0x1
  __declspec(property(get = __get_hasFocusableControls, put = __set_hasFocusableControls)) bool hasFocusableControls;

  /// @brief Field newKeyboardFocusControlID, offset 0x444, size 0x4
  __declspec(property(get = __get_newKeyboardFocusControlID, put = __set_newKeyboardFocusControlID)) int32_t newKeyboardFocusControlID;

  /// @brief Field <focusOnlyIfHasFocusableControls>k__BackingField, offset 0x448, size 0x1
  __declspec(property(get = __get__focusOnlyIfHasFocusableControls_k__BackingField,
                      put = __set__focusOnlyIfHasFocusableControls_k__BackingField)) bool _focusOnlyIfHasFocusableControls_k__BackingField;

  /// @brief Field m_GUIGlobals, offset 0x44c, size 0x78
  __declspec(property(get = __get_m_GUIGlobals, put = __set_m_GUIGlobals))::UnityEngine::UIElements::__IMGUIContainer__GUIGlobals m_GUIGlobals;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName))::StringW ussClassName;

  /// @brief Field ussFoldoutChildDepthClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussFoldoutChildDepthClassName, put = setStaticF_ussFoldoutChildDepthClassName))::StringW ussFoldoutChildDepthClassName;

  /// @brief Field ussFoldoutChildDepthClassNames, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussFoldoutChildDepthClassNames,
                             put = setStaticF_ussFoldoutChildDepthClassNames))::System::Collections::Generic::List_1<::StringW>* ussFoldoutChildDepthClassNames;

  /// @brief Field k_OnGUIMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_OnGUIMarker, put = setStaticF_k_OnGUIMarker))::Unity::Profiling::ProfilerMarker k_OnGUIMarker;

  /// @brief Field k_ImmediateCallbackMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_ImmediateCallbackMarker, put = setStaticF_k_ImmediateCallbackMarker))::Unity::Profiling::ProfilerMarker k_ImmediateCallbackMarker;

  /// @brief Field s_DefaultMeasureEvent, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DefaultMeasureEvent, put = setStaticF_s_DefaultMeasureEvent))::UnityEngine::Event* s_DefaultMeasureEvent;

  /// @brief Field s_MeasureEvent, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MeasureEvent, put = setStaticF_s_MeasureEvent))::UnityEngine::Event* s_MeasureEvent;

  /// @brief Field s_CurrentEvent, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_CurrentEvent, put = setStaticF_s_CurrentEvent))::UnityEngine::Event* s_CurrentEvent;

  __declspec(property(get = get_onGUIHandler, put = set_onGUIHandler))::System::Action* onGUIHandler;

  __declspec(property(get = get_guiState))::UnityEngine::ObjectGUIState* guiState;

  __declspec(property(get = get_lastWorldClip, put = set_lastWorldClip))::UnityEngine::Rect lastWorldClip;

  __declspec(property(get = get_cullingEnabled)) bool cullingEnabled;

  __declspec(property(get = get_cache))::UnityEngine::__GUILayoutUtility__LayoutCache* cache;

  __declspec(property(get = get_layoutMeasuredWidth)) float_t layoutMeasuredWidth;

  __declspec(property(get = get_layoutMeasuredHeight)) float_t layoutMeasuredHeight;

  __declspec(property(get = get_contextType, put = set_contextType))::UnityEngine::UIElements::ContextType contextType;

  __declspec(property(get = get_focusOnlyIfHasFocusableControls)) bool focusOnlyIfHasFocusableControls;

  __declspec(property(get = get_canGrabFocus)) bool canGrabFocus;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::System::Action*& __get_m_OnGUIHandler();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_m_OnGUIHandler() const;

  constexpr void __set_m_OnGUIHandler(::System::Action* value);

  constexpr ::UnityEngine::ObjectGUIState*& __get_m_ObjectGUIState();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ObjectGUIState*> const& __get_m_ObjectGUIState() const;

  constexpr void __set_m_ObjectGUIState(::UnityEngine::ObjectGUIState* value);

  constexpr bool& __get_useOwnerObjectGUIState();

  constexpr bool const& __get_useOwnerObjectGUIState() const;

  constexpr void __set_useOwnerObjectGUIState(bool value);

  constexpr ::UnityEngine::Rect& __get__lastWorldClip_k__BackingField();

  constexpr ::UnityEngine::Rect const& __get__lastWorldClip_k__BackingField() const;

  constexpr void __set__lastWorldClip_k__BackingField(::UnityEngine::Rect value);

  constexpr bool& __get_m_CullingEnabled();

  constexpr bool const& __get_m_CullingEnabled() const;

  constexpr void __set_m_CullingEnabled(bool value);

  constexpr bool& __get_m_IsFocusDelegated();

  constexpr bool const& __get_m_IsFocusDelegated() const;

  constexpr void __set_m_IsFocusDelegated(bool value);

  constexpr bool& __get_m_RefreshCachedLayout();

  constexpr bool const& __get_m_RefreshCachedLayout() const;

  constexpr void __set_m_RefreshCachedLayout(bool value);

  constexpr ::UnityEngine::__GUILayoutUtility__LayoutCache*& __get_m_Cache();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::__GUILayoutUtility__LayoutCache*> const& __get_m_Cache() const;

  constexpr void __set_m_Cache(::UnityEngine::__GUILayoutUtility__LayoutCache* value);

  constexpr ::UnityEngine::Rect& __get_m_CachedClippingRect();

  constexpr ::UnityEngine::Rect const& __get_m_CachedClippingRect() const;

  constexpr void __set_m_CachedClippingRect(::UnityEngine::Rect value);

  constexpr ::UnityEngine::Matrix4x4& __get_m_CachedTransform();

  constexpr ::UnityEngine::Matrix4x4 const& __get_m_CachedTransform() const;

  constexpr void __set_m_CachedTransform(::UnityEngine::Matrix4x4 value);

  constexpr ::UnityEngine::UIElements::ContextType& __get__contextType_k__BackingField();

  constexpr ::UnityEngine::UIElements::ContextType const& __get__contextType_k__BackingField() const;

  constexpr void __set__contextType_k__BackingField(::UnityEngine::UIElements::ContextType value);

  constexpr bool& __get_lostFocus();

  constexpr bool const& __get_lostFocus() const;

  constexpr void __set_lostFocus(bool value);

  constexpr bool& __get_receivedFocus();

  constexpr bool const& __get_receivedFocus() const;

  constexpr void __set_receivedFocus(bool value);

  constexpr ::UnityEngine::UIElements::FocusChangeDirection*& __get_focusChangeDirection();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::FocusChangeDirection*> const& __get_focusChangeDirection() const;

  constexpr void __set_focusChangeDirection(::UnityEngine::UIElements::FocusChangeDirection* value);

  constexpr bool& __get_hasFocusableControls();

  constexpr bool const& __get_hasFocusableControls() const;

  constexpr void __set_hasFocusableControls(bool value);

  constexpr int32_t& __get_newKeyboardFocusControlID();

  constexpr int32_t const& __get_newKeyboardFocusControlID() const;

  constexpr void __set_newKeyboardFocusControlID(int32_t value);

  constexpr bool& __get__focusOnlyIfHasFocusableControls_k__BackingField();

  constexpr bool const& __get__focusOnlyIfHasFocusableControls_k__BackingField() const;

  constexpr void __set__focusOnlyIfHasFocusableControls_k__BackingField(bool value);

  constexpr ::UnityEngine::UIElements::__IMGUIContainer__GUIGlobals& __get_m_GUIGlobals();

  constexpr ::UnityEngine::UIElements::__IMGUIContainer__GUIGlobals const& __get_m_GUIGlobals() const;

  constexpr void __set_m_GUIGlobals(::UnityEngine::UIElements::__IMGUIContainer__GUIGlobals value);

  static inline void setStaticF_ussClassName(::StringW value);

  static inline ::StringW getStaticF_ussClassName();

  static inline void setStaticF_ussFoldoutChildDepthClassName(::StringW value);

  static inline ::StringW getStaticF_ussFoldoutChildDepthClassName();

  static inline void setStaticF_ussFoldoutChildDepthClassNames(::System::Collections::Generic::List_1<::StringW>* value);

  static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_ussFoldoutChildDepthClassNames();

  static inline void setStaticF_k_OnGUIMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_OnGUIMarker();

  static inline void setStaticF_k_ImmediateCallbackMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ImmediateCallbackMarker();

  static inline void setStaticF_s_DefaultMeasureEvent(::UnityEngine::Event* value);

  static inline ::UnityEngine::Event* getStaticF_s_DefaultMeasureEvent();

  static inline void setStaticF_s_MeasureEvent(::UnityEngine::Event* value);

  static inline ::UnityEngine::Event* getStaticF_s_MeasureEvent();

  static inline void setStaticF_s_CurrentEvent(::UnityEngine::Event* value);

  static inline ::UnityEngine::Event* getStaticF_s_CurrentEvent();

  /// @brief Method get_onGUIHandler addr 0x2dfef84 size 0x8 virtual false final false
  inline ::System::Action* get_onGUIHandler();

  /// @brief Method set_onGUIHandler addr 0x2dfef8c size 0x58 virtual false final false
  inline void set_onGUIHandler(::System::Action* value);

  /// @brief Method get_guiState addr 0x2dfdf40 size 0xa4 virtual false final false
  inline ::UnityEngine::ObjectGUIState* get_guiState();

  /// @brief Method get_lastWorldClip addr 0x2dfefe4 size 0x14 virtual false final false
  inline ::UnityEngine::Rect get_lastWorldClip();

  /// @brief Method set_lastWorldClip addr 0x2dfeff8 size 0x14 virtual false final false
  inline void set_lastWorldClip(::UnityEngine::Rect value);

  /// @brief Method get_cullingEnabled addr 0x2dff00c size 0x8 virtual false final false
  inline bool get_cullingEnabled();

  /// @brief Method get_cache addr 0x2dff014 size 0x70 virtual false final false
  inline ::UnityEngine::__GUILayoutUtility__LayoutCache* get_cache();

  /// @brief Method get_layoutMeasuredWidth addr 0x2dff084 size 0x28 virtual false final false
  inline float_t get_layoutMeasuredWidth();

  /// @brief Method get_layoutMeasuredHeight addr 0x2dff0ac size 0x28 virtual false final false
  inline float_t get_layoutMeasuredHeight();

  /// @brief Method get_contextType addr 0x2dff0d4 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::ContextType get_contextType();

  /// @brief Method set_contextType addr 0x2dff0dc size 0x8 virtual false final false
  inline void set_contextType(::UnityEngine::UIElements::ContextType value);

  /// @brief Method get_focusOnlyIfHasFocusableControls addr 0x2dff0e4 size 0x8 virtual false final false
  inline bool get_focusOnlyIfHasFocusableControls();

  /// @brief Method get_canGrabFocus addr 0x2dff0ec size 0x20 virtual true final false
  inline bool get_canGrabFocus();

  static inline ::UnityEngine::UIElements::IMGUIContainer* New_ctor();

  /// @brief Method .ctor addr 0x2dff4d8 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::IMGUIContainer* New_ctor(::System::Action* onGUIHandler);

  /// @brief Method .ctor addr 0x2dff4e0 size 0x238 virtual false final false
  inline void _ctor(::System::Action* onGUIHandler);

  /// @brief Method OnGenerateVisualContent addr 0x2dff718 size 0x12c virtual false final false
  inline void OnGenerateVisualContent(::UnityEngine::UIElements::MeshGenerationContext* mgc);

  /// @brief Method SaveGlobals addr 0x2dff844 size 0x110 virtual false final false
  inline void SaveGlobals();

  /// @brief Method RestoreGlobals addr 0x2dff954 size 0x118 virtual false final false
  inline void RestoreGlobals();

  /// @brief Method DoOnGUI addr 0x2dffa6c size 0xd1c virtual false final false
  inline void DoOnGUI(::UnityEngine::Event* evt, ::UnityEngine::Matrix4x4 parentTransform, ::UnityEngine::Rect clippingRect, bool isComputingLayout, ::UnityEngine::Rect layoutSize,
                      ::System::Action* onGUIHandler, bool canAffectFocus);

  /// @brief Method MarkDirtyLayout addr 0x2dfd07c size 0x14 virtual false final false
  inline void MarkDirtyLayout();

  /// @brief Method HandleEvent addr 0x2e00788 size 0x90 virtual true final false
  inline void HandleEvent(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method DoIMGUIRepaint addr 0x2e00ab4 size 0x390 virtual false final false
  inline void DoIMGUIRepaint();

  /// @brief Method SendEventToIMGUI addr 0x2e00818 size 0x29c virtual false final false
  inline bool SendEventToIMGUI(::UnityEngine::UIElements::EventBase* evt, bool canAffectFocus, bool verifyBounds);

  /// @brief Method SendEventToIMGUIRaw addr 0x2e0113c size 0x100 virtual false final false
  inline bool SendEventToIMGUIRaw(::UnityEngine::UIElements::EventBase* evt, bool canAffectFocus, bool verifyBounds);

  /// @brief Method VerifyBounds addr 0x2e0123c size 0x90 virtual false final false
  inline bool VerifyBounds(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method IsContainerCapturingTheMouse addr 0x2e012dc size 0x114 virtual false final false
  inline bool IsContainerCapturingTheMouse();

  /// @brief Method IsLocalEvent addr 0x2e013f0 size 0x204 virtual false final false
  inline bool IsLocalEvent(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method IsEventInsideLocalWindow addr 0x2e015f4 size 0x180 virtual false final false
  inline bool IsEventInsideLocalWindow(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method IsDockAreaMouseUp addr 0x2e01774 size 0x124 virtual false final false
  static inline bool IsDockAreaMouseUp(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method HandleIMGUIEvent addr 0x2e012cc size 0x10 virtual false final false
  inline bool HandleIMGUIEvent(::UnityEngine::Event* e, bool canAffectFocus);

  /// @brief Method HandleIMGUIEvent addr 0x2e01904 size 0xcc virtual false final false
  inline bool HandleIMGUIEvent(::UnityEngine::Event* e, ::System::Action* onGUIHandler, bool canAffectFocus);

  /// @brief Method HandleIMGUIEvent addr 0x2e00e44 size 0x2f8 virtual false final false
  inline bool HandleIMGUIEvent(::UnityEngine::Event* e, ::UnityEngine::Matrix4x4 worldTransform, ::UnityEngine::Rect clippingRect, ::System::Action* onGUIHandler, bool canAffectFocus);

  /// @brief Method ExecuteDefaultAction addr 0x2e01b94 size 0x2e8 virtual true final false
  inline void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method SetFoldoutDepthClass addr 0x2e01e7c size 0x168 virtual false final false
  inline void SetFoldoutDepthClass();

  /// @brief Method DoMeasure addr 0x2e020c8 size 0x258 virtual true final false
  inline ::UnityEngine::Vector2 DoMeasure(float_t desiredWidth, ::UnityEngine::UIElements::__VisualElement__MeasureMode widthMode, float_t desiredHeight,
                                          ::UnityEngine::UIElements::__VisualElement__MeasureMode heightMode);

  /// @brief Method GetCurrentClipRect addr 0x2e01898 size 0x6c virtual false final false
  inline ::UnityEngine::Rect GetCurrentClipRect();

  /// @brief Method GetCurrentTransformAndClip addr 0x2e019d0 size 0x114 virtual false final false
  static inline void GetCurrentTransformAndClip(::UnityEngine::UIElements::IMGUIContainer* container, ::UnityEngine::Event* evt, ByRef<::UnityEngine::Matrix4x4> transform,
                                                ByRef<::UnityEngine::Rect> clipRect);

  /// @brief Method Dispose addr 0x2e02320 size 0x70 virtual true final true
  inline void Dispose();

  /// @brief Method Dispose addr 0x2e02390 size 0x18 virtual true final false
  inline void Dispose(bool disposeManaged);

  /// @brief Method <DoOnGUI>b__56_0 addr 0x2e023a8 size 0xc virtual false final false
  inline void _DoOnGUI_b__56_0();

  // Ctor Parameters [CppParam { name: "", ty: "IMGUIContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMGUIContainer(IMGUIContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMGUIContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMGUIContainer(IMGUIContainer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IMGUIContainer();

public:
  /// @brief Field m_OnGUIHandler, offset: 0x3b0, size: 0x8, def value: None
  ::System::Action* ___m_OnGUIHandler;

  /// @brief Field m_ObjectGUIState, offset: 0x3b8, size: 0x8, def value: None
  ::UnityEngine::ObjectGUIState* ___m_ObjectGUIState;

  /// @brief Field useOwnerObjectGUIState, offset: 0x3c0, size: 0x1, def value: None
  bool ___useOwnerObjectGUIState;

  /// @brief Field <lastWorldClip>k__BackingField, offset: 0x3c4, size: 0x10, def value: None
  ::UnityEngine::Rect ____lastWorldClip_k__BackingField;

  /// @brief Field m_CullingEnabled, offset: 0x3d4, size: 0x1, def value: None
  bool ___m_CullingEnabled;

  /// @brief Field m_IsFocusDelegated, offset: 0x3d5, size: 0x1, def value: None
  bool ___m_IsFocusDelegated;

  /// @brief Field m_RefreshCachedLayout, offset: 0x3d6, size: 0x1, def value: None
  bool ___m_RefreshCachedLayout;

  /// @brief Field m_Cache, offset: 0x3d8, size: 0x8, def value: None
  ::UnityEngine::__GUILayoutUtility__LayoutCache* ___m_Cache;

  /// @brief Field m_CachedClippingRect, offset: 0x3e0, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_CachedClippingRect;

  /// @brief Field m_CachedTransform, offset: 0x3f0, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___m_CachedTransform;

  /// @brief Field <contextType>k__BackingField, offset: 0x430, size: 0x4, def value: None
  ::UnityEngine::UIElements::ContextType ____contextType_k__BackingField;

  /// @brief Field lostFocus, offset: 0x434, size: 0x1, def value: None
  bool ___lostFocus;

  /// @brief Field receivedFocus, offset: 0x435, size: 0x1, def value: None
  bool ___receivedFocus;

  /// @brief Field focusChangeDirection, offset: 0x438, size: 0x8, def value: None
  ::UnityEngine::UIElements::FocusChangeDirection* ___focusChangeDirection;

  /// @brief Field hasFocusableControls, offset: 0x440, size: 0x1, def value: None
  bool ___hasFocusableControls;

  /// @brief Field newKeyboardFocusControlID, offset: 0x444, size: 0x4, def value: None
  int32_t ___newKeyboardFocusControlID;

  /// @brief Field <focusOnlyIfHasFocusableControls>k__BackingField, offset: 0x448, size: 0x1, def value: None
  bool ____focusOnlyIfHasFocusableControls_k__BackingField;

  /// @brief Field m_GUIGlobals, offset: 0x44c, size: 0x78, def value: None
  ::UnityEngine::UIElements::__IMGUIContainer__GUIGlobals ___m_GUIGlobals;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::IMGUIContainer, 0x4c8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6907)), TypeDefinitionIndex(TypeDefinitionIndex(6909)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6997), inst: 5263
// }), TypeDefinitionIndex(TypeDefinitionIndex(6997))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6906)) CS Name: ::IMGUIContainer::UxmlFactory*
class CORDL_TYPE __IMGUIContainer__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::IMGUIContainer*, ::UnityEngine::UIElements::__IMGUIContainer__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__IMGUIContainer__UxmlFactory* New_ctor();

  /// @brief Method .ctor addr 0x2e023b4 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__IMGUIContainer__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IMGUIContainer__UxmlFactory(__IMGUIContainer__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IMGUIContainer__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IMGUIContainer__UxmlFactory(__IMGUIContainer__UxmlFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IMGUIContainer__UxmlFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__IMGUIContainer__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IMGUIContainer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IMGUIContainer*, "UnityEngine.UIElements", "IMGUIContainer");
NEED_NO_BOX(::UnityEngine::UIElements::__IMGUIContainer__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__IMGUIContainer__UxmlFactory*, "UnityEngine.UIElements", "IMGUIContainer/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__IMGUIContainer__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__IMGUIContainer__UxmlTraits*, "UnityEngine.UIElements", "IMGUIContainer/UxmlTraits");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__IMGUIContainer__GUIGlobals, "UnityEngine.UIElements", "IMGUIContainer/GUIGlobals");
