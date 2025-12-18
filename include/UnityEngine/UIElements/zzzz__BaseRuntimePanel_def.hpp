#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseRuntimePanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseRuntimePanel;
}
namespace UnityEngine::UIElements {
class BaseRuntimePanel___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseRuntimePanel);
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseRuntimePanel___c);
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

  /// @brief Method <.cctor>b__52_0, addr 0x6befcc8, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 __cctor_b__52_0(::UnityEngine::Vector2 p);

  /// @brief Method .ctor, addr 0x6befcc4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::BaseRuntimePanel___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::BaseRuntimePanel___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseRuntimePanel___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseRuntimePanel___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseRuntimePanel___c(BaseRuntimePanel___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseRuntimePanel___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseRuntimePanel___c(BaseRuntimePanel___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4649 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseRuntimePanel___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
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
                      put = setStaticF_DefaultScreenToPanelSpace)) ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* DefaultScreenToPanelSpace;

  /// @brief Field <targetDisplay>k__BackingField, offset 0x1f4, size 0x4
  __declspec(property(get = __cordl_internal_get__targetDisplay_k__BackingField, put = __cordl_internal_set__targetDisplay_k__BackingField)) int32_t _targetDisplay_k__BackingField;

  /// @brief Field destroyed, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get_destroyed, put = __cordl_internal_set_destroyed)) ::System::Action* destroyed;

  __declspec(property(get = get_drawsInCameras, put = set_drawsInCameras)) bool drawsInCameras;

  /// @brief Field drawsInCamerasChanged, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get_drawsInCamerasChanged, put = __cordl_internal_set_drawsInCamerasChanged)) ::System::Action* drawsInCamerasChanged;

  /// @brief Field m_DrawsInCameras, offset 0x1e0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DrawsInCameras, put = __cordl_internal_set_m_DrawsInCameras)) bool m_DrawsInCameras;

  /// @brief Field m_PixelsPerUnit, offset 0x1e4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PixelsPerUnit, put = __cordl_internal_set_m_PixelsPerUnit)) float_t m_PixelsPerUnit;

  /// @brief Field m_RuntimePanelCreationIndex, offset 0x1c0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RuntimePanelCreationIndex, put = __cordl_internal_set_m_RuntimePanelCreationIndex)) int32_t m_RuntimePanelCreationIndex;

  /// @brief Field m_ScreenToPanelSpace, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScreenToPanelSpace,
                      put = __cordl_internal_set_m_ScreenToPanelSpace)) ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* m_ScreenToPanelSpace;

  /// @brief Field m_SelectableGameObject, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectableGameObject, put = __cordl_internal_set_m_SelectableGameObject)) ::UnityW<::UnityEngine::GameObject> m_SelectableGameObject;

  /// @brief Field m_SortingPriority, offset 0x1c4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SortingPriority, put = __cordl_internal_set_m_SortingPriority)) float_t m_SortingPriority;

  __declspec(property(get = get_pixelsPerUnit, put = set_pixelsPerUnit)) float_t pixelsPerUnit;

  /// @brief Field resolvedSortingIndex, offset 0x1c8, size 0x4
  __declspec(property(get = __cordl_internal_get_resolvedSortingIndex, put = __cordl_internal_set_resolvedSortingIndex)) int32_t resolvedSortingIndex;

  /// @brief Field s_CurrentRuntimePanelCounter, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_CurrentRuntimePanelCounter, put = setStaticF_s_CurrentRuntimePanelCounter)) int32_t s_CurrentRuntimePanelCounter;

  __declspec(property(get = get_screenRenderingHeight)) int32_t screenRenderingHeight;

  __declspec(property(get = get_screenRenderingWidth)) int32_t screenRenderingWidth;

  __declspec(property(get = get_screenToPanelSpace, put = set_screenToPanelSpace)) ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* screenToPanelSpace;

  __declspec(property(get = get_selectableGameObject, put = set_selectableGameObject)) ::UnityW<::UnityEngine::GameObject> selectableGameObject;

  __declspec(property(get = get_sortingPriority, put = set_sortingPriority)) float_t sortingPriority;

  __declspec(property(get = get_targetDisplay, put = set_targetDisplay)) int32_t targetDisplay;

  /// @brief Field targetTexture, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get_targetTexture, put = __cordl_internal_set_targetTexture)) ::UnityW<::UnityEngine::RenderTexture> targetTexture;

  /// @brief Field worldSpaceLayer, offset 0x1f0, size 0x4
  __declspec(property(get = __cordl_internal_get_worldSpaceLayer, put = __cordl_internal_set_worldSpaceLayer)) int32_t worldSpaceLayer;

  /// @brief Method AssignPanelToComponents, addr 0x6beeff4, size 0x2e0, virtual false, abstract: false, final false
  inline void AssignPanelToComponents(::UnityEngine::UIElements::BaseRuntimePanel* panel);

  /// @brief Method Dispose, addr 0x6bef434, size 0x4c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method InvokeDrawsInCamerasChanged, addr 0x6bef5d8, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeDrawsInCamerasChanged();

  static inline ::UnityEngine::UIElements::BaseRuntimePanel* New_ctor(::UnityEngine::ScriptableObject* ownerObject, ::UnityEngine::UIElements::EventDispatcher* dispatcher);

  /// @brief Method PointerEntersPanel, addr 0x6befaf4, size 0xa4, virtual false, abstract: false, final false
  inline void PointerEntersPanel(int32_t pointerId, ::UnityEngine::Vector2 position);

  /// @brief Method PointerLeavesPanel, addr 0x6befa38, size 0xbc, virtual false, abstract: false, final false
  inline void PointerLeavesPanel(int32_t pointerId, ::UnityEngine::Vector2 position);

  /// @brief Method Render, addr 0x6bef6bc, size 0x220, virtual true, abstract: false, final false
  inline void Render();

  /// @brief Method ScreenToPanel, addr 0x6bef8e4, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 ScreenToPanel(::UnityEngine::Vector2 screen);

  /// @brief Method ScreenToPanel, addr 0x6bef91c, size 0x11c, virtual false, abstract: false, final false
  inline bool ScreenToPanel(::UnityEngine::Vector2 screenPosition, ::UnityEngine::Vector2 screenDelta, ::ByRef<::UnityEngine::Vector2> panelPosition, ::ByRef<::UnityEngine::Vector2> panelDelta,
                            bool allowOutside);

  /// @brief Method Update, addr 0x6be2840, size 0x10c, virtual true, abstract: false, final false
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

  constexpr ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* const& __cordl_internal_get_m_ScreenToPanelSpace() const;

  constexpr ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*& __cordl_internal_get_m_ScreenToPanelSpace();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_SelectableGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_SelectableGameObject();

  constexpr float_t const& __cordl_internal_get_m_SortingPriority() const;

  constexpr float_t& __cordl_internal_get_m_SortingPriority();

  constexpr int32_t const& __cordl_internal_get_resolvedSortingIndex() const;

  constexpr int32_t& __cordl_internal_get_resolvedSortingIndex();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_targetTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_targetTexture();

  constexpr int32_t const& __cordl_internal_get_worldSpaceLayer() const;

  constexpr int32_t& __cordl_internal_get_worldSpaceLayer();

  constexpr void __cordl_internal_set__targetDisplay_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_destroyed(::System::Action* value);

  constexpr void __cordl_internal_set_drawsInCamerasChanged(::System::Action* value);

  constexpr void __cordl_internal_set_m_DrawsInCameras(bool value);

  constexpr void __cordl_internal_set_m_PixelsPerUnit(float_t value);

  constexpr void __cordl_internal_set_m_RuntimePanelCreationIndex(int32_t value);

  constexpr void __cordl_internal_set_m_ScreenToPanelSpace(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* value);

  constexpr void __cordl_internal_set_m_SelectableGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_SortingPriority(float_t value);

  constexpr void __cordl_internal_set_resolvedSortingIndex(int32_t value);

  constexpr void __cordl_internal_set_targetTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set_worldSpaceLayer(int32_t value);

  /// @brief Method .ctor, addr 0x6be26d8, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ScriptableObject* ownerObject, ::UnityEngine::UIElements::EventDispatcher* dispatcher);

  /// @brief Method add_destroyed, addr 0x6bef2dc, size 0xac, virtual false, abstract: false, final false
  inline void add_destroyed(::System::Action* value);

  /// @brief Method add_drawsInCamerasChanged, addr 0x6bef480, size 0xac, virtual false, abstract: false, final false
  inline void add_drawsInCamerasChanged(::System::Action* value);

  /// @brief Method getScreenRenderingHeight, addr 0x6be196c, size 0xdc, virtual false, abstract: false, final false
  static inline int32_t getScreenRenderingHeight(int32_t display);

  /// @brief Method getScreenRenderingWidth, addr 0x6be1890, size 0xdc, virtual false, abstract: false, final false
  static inline int32_t getScreenRenderingWidth(int32_t display);

  static inline ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* getStaticF_DefaultScreenToPanelSpace();

  static inline int32_t getStaticF_s_CurrentRuntimePanelCounter();

  /// @brief Method get_drawsInCameras, addr 0x6be40d8, size 0x8, virtual false, abstract: false, final false
  inline bool get_drawsInCameras();

  /// @brief Method get_pixelsPerUnit, addr 0x6be4560, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pixelsPerUnit();

  /// @brief Method get_screenRenderingHeight, addr 0x6bef660, size 0x5c, virtual false, abstract: false, final false
  inline int32_t get_screenRenderingHeight();

  /// @brief Method get_screenRenderingWidth, addr 0x6bef604, size 0x5c, virtual false, abstract: false, final false
  inline int32_t get_screenRenderingWidth();

  /// @brief Method get_screenToPanelSpace, addr 0x6bef8dc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* get_screenToPanelSpace();

  /// @brief Method get_selectableGameObject, addr 0x6beef4c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::GameObject> get_selectableGameObject();

  /// @brief Method get_sortingPriority, addr 0x6bef2d4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_sortingPriority();

  /// @brief Method get_targetDisplay, addr 0x6bef5f4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_targetDisplay();

  /// @brief Method remove_destroyed, addr 0x6bef388, size 0xac, virtual false, abstract: false, final false
  inline void remove_destroyed(::System::Action* value);

  /// @brief Method remove_drawsInCamerasChanged, addr 0x6bef52c, size 0xac, virtual false, abstract: false, final false
  inline void remove_drawsInCamerasChanged(::System::Action* value);

  static inline void setStaticF_DefaultScreenToPanelSpace(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* value);

  static inline void setStaticF_s_CurrentRuntimePanelCounter(int32_t value);

  /// @brief Method set_drawsInCameras, addr 0x6be1764, size 0x30, virtual false, abstract: false, final false
  inline void set_drawsInCameras(bool value);

  /// @brief Method set_pixelsPerUnit, addr 0x6be1794, size 0x8, virtual false, abstract: false, final false
  inline void set_pixelsPerUnit(float_t value);

  /// @brief Method set_screenToPanelSpace, addr 0x6be180c, size 0x84, virtual false, abstract: false, final false
  inline void set_screenToPanelSpace(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* value);

  /// @brief Method set_selectableGameObject, addr 0x6beef54, size 0xa0, virtual true, abstract: false, final true
  inline void set_selectableGameObject(::UnityEngine::GameObject* value);

  /// @brief Method set_sortingPriority, addr 0x6be20e4, size 0x104, virtual false, abstract: false, final false
  inline void set_sortingPriority(float_t value);

  /// @brief Method set_targetDisplay, addr 0x6bef5fc, size 0x8, virtual false, abstract: false, final false
  inline void set_targetDisplay(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseRuntimePanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseRuntimePanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseRuntimePanel(BaseRuntimePanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseRuntimePanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseRuntimePanel(BaseRuntimePanel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4650 };

  /// @brief Field m_SelectableGameObject, offset: 0x1b8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_SelectableGameObject;

  /// @brief Field m_RuntimePanelCreationIndex, offset: 0x1c0, size: 0x4, def value: None
  int32_t ___m_RuntimePanelCreationIndex;

  /// @brief Field m_SortingPriority, offset: 0x1c4, size: 0x4, def value: None
  float_t ___m_SortingPriority;

  /// @brief Field resolvedSortingIndex, offset: 0x1c8, size: 0x4, def value: None
  int32_t ___resolvedSortingIndex;

  /// @brief Field destroyed, offset: 0x1d0, size: 0x8, def value: None
  ::System::Action* ___destroyed;

  /// @brief Field drawsInCamerasChanged, offset: 0x1d8, size: 0x8, def value: None
  ::System::Action* ___drawsInCamerasChanged;

  /// @brief Field m_DrawsInCameras, offset: 0x1e0, size: 0x1, def value: None
  bool ___m_DrawsInCameras;

  /// @brief Field m_PixelsPerUnit, offset: 0x1e4, size: 0x4, def value: None
  float_t ___m_PixelsPerUnit;

  /// @brief Field targetTexture, offset: 0x1e8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ___targetTexture;

  /// @brief Field worldSpaceLayer, offset: 0x1f0, size: 0x4, def value: None
  int32_t ___worldSpaceLayer;

  /// @brief Field <targetDisplay>k__BackingField, offset: 0x1f4, size: 0x4, def value: None
  int32_t ____targetDisplay_k__BackingField;

  /// @brief Field m_ScreenToPanelSpace, offset: 0x1f8, size: 0x8, def value: None
  ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* ___m_ScreenToPanelSpace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___m_SelectableGameObject) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___m_RuntimePanelCreationIndex) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___m_SortingPriority) == 0x1c4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___resolvedSortingIndex) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___destroyed) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___drawsInCamerasChanged) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___m_DrawsInCameras) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___m_PixelsPerUnit) == 0x1e4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___targetTexture) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___worldSpaceLayer) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ____targetDisplay_k__BackingField) == 0x1f4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___m_ScreenToPanelSpace) == 0x1f8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseRuntimePanel, 0x200>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BaseRuntimePanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseRuntimePanel*, "UnityEngine.UIElements", "BaseRuntimePanel");
NEED_NO_BOX(::UnityEngine::UIElements::BaseRuntimePanel___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseRuntimePanel___c*, "UnityEngine.UIElements", "BaseRuntimePanel/<>c");
