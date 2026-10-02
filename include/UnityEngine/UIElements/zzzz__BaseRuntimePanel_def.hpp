#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseRuntimePanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__Panel_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseRuntimePanel)
namespace System {
class Action;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::UIElements {
class BaseRuntimePanel___c;
}
namespace UnityEngine::UIElements {
class EventDispatcher;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseRuntimePanel;
}
namespace UnityEngine::UIElements {
class BaseRuntimePanel___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::BaseRuntimePanel*);
MARK_REF_T(::UnityEngine::UIElements::BaseRuntimePanel___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::BaseRuntimePanel*, "UnityEngine.UIElements", "BaseRuntimePanel");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::BaseRuntimePanel___c*, "UnityEngine.UIElements", "BaseRuntimePanel/<>c");
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseRuntimePanel/<>c
class CORDL_TYPE BaseRuntimePanel___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::BaseRuntimePanel___c* __9;

  static inline ::UnityEngine::UIElements::BaseRuntimePanel___c* New_ctor();

  /// @brief Method <.cctor>b__51_0, addr 0x7270320, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 __cctor_b__51_0(::UnityEngine::Vector2 p);

  /// @brief Method .ctor, addr 0x727031c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::BaseRuntimePanel___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::BaseRuntimePanel___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseRuntimePanel___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseRuntimePanel___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseRuntimePanel___c(BaseRuntimePanel___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseRuntimePanel___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseRuntimePanel___c(BaseRuntimePanel___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4694 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::BaseRuntimePanel___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
// [VisibleToOtherModules(new[] { "UnityEditor.UIToolkitAuthoringModule", "UnityEditor.VectorGraphicsModule" })]
// Dependencies UnityEngine.UIElements.Panel
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseRuntimePanel
class CORDL_TYPE BaseRuntimePanel : public ::UnityEngine::UIElements::Panel {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::BaseRuntimePanel___c;

  /// @brief Field DefaultScreenToPanelSpace, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DefaultScreenToPanelSpace,
                      put = setStaticF_DefaultScreenToPanelSpace)) ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector3>* DefaultScreenToPanelSpace;

  /// @brief Field <targetDisplay>k__BackingField, offset 0x210, size 0x4
  __declspec(property(get = __cordl_internal_get__targetDisplay_k__BackingField, put = __cordl_internal_set__targetDisplay_k__BackingField)) int32_t _targetDisplay_k__BackingField;

  /// @brief Field destroyed, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get_destroyed, put = __cordl_internal_set_destroyed)) ::System::Action* destroyed;

  __declspec(property(get = get_drawsInCameras, put = set_drawsInCameras)) bool drawsInCameras;

  /// @brief Field drawsInCamerasChanged, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get_drawsInCamerasChanged, put = __cordl_internal_set_drawsInCamerasChanged)) ::System::Action* drawsInCamerasChanged;

  /// @brief Field m_DrawsInCameras, offset 0x200, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DrawsInCameras, put = __cordl_internal_set_m_DrawsInCameras)) bool m_DrawsInCameras;

  /// @brief Field m_PixelsPerUnit, offset 0x204, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PixelsPerUnit, put = __cordl_internal_set_m_PixelsPerUnit)) float_t m_PixelsPerUnit;

  /// @brief Field m_RuntimePanelCreationIndex, offset 0x1e0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RuntimePanelCreationIndex, put = __cordl_internal_set_m_RuntimePanelCreationIndex)) int32_t m_RuntimePanelCreationIndex;

  /// @brief Field m_ScreenToPanelSpace, offset 0x218, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScreenToPanelSpace,
                      put = __cordl_internal_set_m_ScreenToPanelSpace)) ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector3>* m_ScreenToPanelSpace;

  /// @brief Field m_SelectableGameObject, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectableGameObject, put = __cordl_internal_set_m_SelectableGameObject)) ::UnityW<::UnityEngine::GameObject> m_SelectableGameObject;

  /// @brief Field m_SortingPriority, offset 0x1e4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SortingPriority, put = __cordl_internal_set_m_SortingPriority)) float_t m_SortingPriority;

  __declspec(property(get = get_pixelsPerUnit, put = set_pixelsPerUnit)) float_t pixelsPerUnit;

  /// @brief Field resolvedSortingIndex, offset 0x1e8, size 0x4
  __declspec(property(get = __cordl_internal_get_resolvedSortingIndex, put = __cordl_internal_set_resolvedSortingIndex)) int32_t resolvedSortingIndex;

  /// @brief Field s_CurrentRuntimePanelCounter, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_CurrentRuntimePanelCounter, put = setStaticF_s_CurrentRuntimePanelCounter)) int32_t s_CurrentRuntimePanelCounter;

  __declspec(property(get = get_screenRenderingHeight)) int32_t screenRenderingHeight;

  __declspec(property(get = get_screenRenderingWidth)) int32_t screenRenderingWidth;

  __declspec(property(get = get_screenToPanelSpace, put = set_screenToPanelSpace)) ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector3>* screenToPanelSpace;

  __declspec(property(get = get_selectableGameObject, put = set_selectableGameObject)) ::UnityW<::UnityEngine::GameObject> selectableGameObject;

  __declspec(property(get = get_sortingPriority, put = set_sortingPriority)) float_t sortingPriority;

  __declspec(property(get = get_targetDisplay, put = set_targetDisplay)) int32_t targetDisplay;

  /// @brief Field targetTexture, offset 0x208, size 0x8
  __declspec(property(get = __cordl_internal_get_targetTexture, put = __cordl_internal_set_targetTexture)) ::UnityW<::UnityEngine::RenderTexture> targetTexture;

  /// @brief Method AssignPanelToComponents, addr 0x726efc8, size 0x2e0, virtual false, abstract: false, final false
  inline void AssignPanelToComponents(::UnityEngine::UIElements::BaseRuntimePanel* panel);

  /// @brief Method Dispose, addr 0x726f5e8, size 0x4c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method InvokeDrawsInCamerasChanged, addr 0x726f78c, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeDrawsInCamerasChanged();

  static inline ::UnityEngine::UIElements::BaseRuntimePanel* New_ctor(::UnityEngine::ScriptableObject* ownerObject, ::UnityEngine::UIElements::EventDispatcher* dispatcher);

  /// @brief Method PointerEntersPanel, addr 0x727013c, size 0xb4, virtual false, abstract: false, final false
  inline void PointerEntersPanel(int32_t pointerId, ::UnityEngine::Vector3 position);

  /// @brief Method PointerLeavesPanel, addr 0x7270050, size 0xec, virtual false, abstract: false, final false
  inline void PointerLeavesPanel(int32_t pointerId);

  /// @brief Method Render, addr 0x726fb0c, size 0x270, virtual true, abstract: false, final false
  inline void Render();

  /// @brief Method ScreenToPanel, addr 0x726fe08, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ScreenToPanel(::UnityEngine::Vector2 screen);

  /// @brief Method ScreenToPanel, addr 0x726fe44, size 0x20c, virtual false, abstract: false, final false
  inline bool ScreenToPanel(::UnityEngine::Vector2 screenPosition, ::UnityEngine::Vector2 screenDelta, ::by_ref<::UnityEngine::Vector3> panelPosition, bool allowOutside);

  /// @brief Method Update, addr 0x726fadc, size 0x30, virtual true, abstract: false, final false
  inline void Update();

  constexpr int32_t const& __cordl_internal_get__targetDisplay_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__targetDisplay_k__BackingField();

  constexpr ::System::Action* const& __cordl_internal_get_destroyed() const;

  constexpr ::System::Action*& __cordl_internal_get_destroyed();

  constexpr ::System::Action* const& __cordl_internal_get_drawsInCamerasChanged() const;

  constexpr ::System::Action*& __cordl_internal_get_drawsInCamerasChanged();

  constexpr bool const& __cordl_internal_get_m_DrawsInCameras() const;

  constexpr bool& __cordl_internal_get_m_DrawsInCameras();

  constexpr float_t const& __cordl_internal_get_m_PixelsPerUnit() const;

  constexpr float_t& __cordl_internal_get_m_PixelsPerUnit();

  constexpr int32_t const& __cordl_internal_get_m_RuntimePanelCreationIndex() const;

  constexpr int32_t& __cordl_internal_get_m_RuntimePanelCreationIndex();

  constexpr ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector3>* const& __cordl_internal_get_m_ScreenToPanelSpace() const;

  constexpr ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector3>*& __cordl_internal_get_m_ScreenToPanelSpace();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_SelectableGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_SelectableGameObject();

  constexpr float_t const& __cordl_internal_get_m_SortingPriority() const;

  constexpr float_t& __cordl_internal_get_m_SortingPriority();

  constexpr int32_t const& __cordl_internal_get_resolvedSortingIndex() const;

  constexpr int32_t& __cordl_internal_get_resolvedSortingIndex();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_targetTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_targetTexture();

  constexpr void __cordl_internal_set__targetDisplay_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_destroyed(::System::Action* value);

  constexpr void __cordl_internal_set_drawsInCamerasChanged(::System::Action* value);

  constexpr void __cordl_internal_set_m_DrawsInCameras(bool value);

  constexpr void __cordl_internal_set_m_PixelsPerUnit(float_t value);

  constexpr void __cordl_internal_set_m_RuntimePanelCreationIndex(int32_t value);

  constexpr void __cordl_internal_set_m_ScreenToPanelSpace(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector3>* value);

  constexpr void __cordl_internal_set_m_SelectableGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_SortingPriority(float_t value);

  constexpr void __cordl_internal_set_resolvedSortingIndex(int32_t value);

  constexpr void __cordl_internal_set_targetTexture(::UnityW<::UnityEngine::RenderTexture> value);

  /// @brief Method .ctor, addr 0x726f50c, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ScriptableObject* ownerObject, ::UnityEngine::UIElements::EventDispatcher* dispatcher);

  /// [CompilerGenerated]
  /// @brief Method add_destroyed, addr 0x726f3b4, size 0xac, virtual false, abstract: false, final false
  inline void add_destroyed(::System::Action* value);

  /// [CompilerGenerated]
  /// @brief Method add_drawsInCamerasChanged, addr 0x726f634, size 0xac, virtual false, abstract: false, final false
  inline void add_drawsInCamerasChanged(::System::Action* value);

  /// @brief Method getScreenRenderingHeight, addr 0x726fa00, size 0xdc, virtual false, abstract: false, final false
  static inline int32_t getScreenRenderingHeight(int32_t display);

  /// @brief Method getScreenRenderingWidth, addr 0x726f8c8, size 0xdc, virtual false, abstract: false, final false
  static inline int32_t getScreenRenderingWidth(int32_t display);

  static inline ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector3>* getStaticF_DefaultScreenToPanelSpace();

  static inline int32_t getStaticF_s_CurrentRuntimePanelCounter();

  /// @brief Method get_drawsInCameras, addr 0x726f7a8, size 0x8, virtual false, abstract: false, final false
  inline bool get_drawsInCameras();

  /// @brief Method get_pixelsPerUnit, addr 0x726f84c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pixelsPerUnit();

  /// @brief Method get_screenRenderingHeight, addr 0x726f9a4, size 0x5c, virtual false, abstract: false, final false
  inline int32_t get_screenRenderingHeight();

  /// @brief Method get_screenRenderingWidth, addr 0x726f86c, size 0x5c, virtual false, abstract: false, final false
  inline int32_t get_screenRenderingWidth();

  /// @brief Method get_screenToPanelSpace, addr 0x726fd7c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector3>* get_screenToPanelSpace();

  /// @brief Method get_selectableGameObject, addr 0x726ef20, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::GameObject> get_selectableGameObject();

  /// @brief Method get_sortingPriority, addr 0x726f2a8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_sortingPriority();

  /// [CompilerGenerated]
  /// @brief Method get_targetDisplay, addr 0x726f85c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_targetDisplay();

  /// [CompilerGenerated]
  /// @brief Method remove_destroyed, addr 0x726f460, size 0xac, virtual false, abstract: false, final false
  inline void remove_destroyed(::System::Action* value);

  /// [CompilerGenerated]
  /// @brief Method remove_drawsInCamerasChanged, addr 0x726f6e0, size 0xac, virtual false, abstract: false, final false
  inline void remove_drawsInCamerasChanged(::System::Action* value);

  static inline void setStaticF_DefaultScreenToPanelSpace(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector3>* value);

  static inline void setStaticF_s_CurrentRuntimePanelCounter(int32_t value);

  /// @brief Method set_drawsInCameras, addr 0x726f7b0, size 0x9c, virtual false, abstract: false, final false
  inline void set_drawsInCameras(bool value);

  /// @brief Method set_pixelsPerUnit, addr 0x726f854, size 0x8, virtual false, abstract: false, final false
  inline void set_pixelsPerUnit(float_t value);

  /// @brief Method set_screenToPanelSpace, addr 0x726fd84, size 0x84, virtual false, abstract: false, final false
  inline void set_screenToPanelSpace(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector3>* value);

  /// @brief Method set_selectableGameObject, addr 0x726ef28, size 0xa0, virtual true, abstract: false, final true
  inline void set_selectableGameObject(::UnityEngine::GameObject* value);

  /// @brief Method set_sortingPriority, addr 0x726f2b0, size 0x104, virtual false, abstract: false, final false
  inline void set_sortingPriority(float_t value);

  /// [CompilerGenerated]
  /// @brief Method set_targetDisplay, addr 0x726f864, size 0x8, virtual false, abstract: false, final false
  inline void set_targetDisplay(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseRuntimePanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseRuntimePanel", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseRuntimePanel(BaseRuntimePanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseRuntimePanel", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseRuntimePanel(BaseRuntimePanel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4695 };

  /// @brief Field m_SelectableGameObject, offset: 0x1d8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_SelectableGameObject;

  /// @brief Field m_RuntimePanelCreationIndex, offset: 0x1e0, size: 0x4, def value: None
  int32_t ___m_RuntimePanelCreationIndex;

  /// @brief Field m_SortingPriority, offset: 0x1e4, size: 0x4, def value: None
  float_t ___m_SortingPriority;

  /// @brief Field resolvedSortingIndex, offset: 0x1e8, size: 0x4, def value: None
  int32_t ___resolvedSortingIndex;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field destroyed, offset: 0x1f0, size: 0x8, def value: None
  ::System::Action* ___destroyed;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field drawsInCamerasChanged, offset: 0x1f8, size: 0x8, def value: None
  ::System::Action* ___drawsInCamerasChanged;

  /// @brief Field m_DrawsInCameras, offset: 0x200, size: 0x1, def value: None
  bool ___m_DrawsInCameras;

  /// @brief Field m_PixelsPerUnit, offset: 0x204, size: 0x4, def value: None
  float_t ___m_PixelsPerUnit;

  /// @brief Field targetTexture, offset: 0x208, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ___targetTexture;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <targetDisplay>k__BackingField, offset: 0x210, size: 0x4, def value: None
  int32_t ____targetDisplay_k__BackingField;

  /// @brief Field m_ScreenToPanelSpace, offset: 0x218, size: 0x8, def value: None
  ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector3>* ___m_ScreenToPanelSpace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___m_SelectableGameObject) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___m_RuntimePanelCreationIndex) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___m_SortingPriority) == 0x1e4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___resolvedSortingIndex) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___destroyed) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___drawsInCamerasChanged) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___m_DrawsInCameras) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___m_PixelsPerUnit) == 0x204, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___targetTexture) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ____targetDisplay_k__BackingField) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___m_ScreenToPanelSpace) == 0x218, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::BaseRuntimePanel) == 0x220, "Size mismatch!");

} // namespace UnityEngine::UIElements
