#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseRuntimePanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__Panel_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
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
class Event;
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
class Shader;
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

  /// @brief Method <.cctor>b__47_0, addr 0x4a40780, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 __cctor_b__47_0(::UnityEngine::Vector2 p);

  /// @brief Method .ctor, addr 0x4a40778, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6017 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseRuntimePanel___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.Matrix4x4, UnityEngine.UIElements.Panel
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

  /// @brief Field <targetDisplay>k__BackingField, offset 0x1d8, size 0x4
  __declspec(property(get = __cordl_internal_get__targetDisplay_k__BackingField, put = __cordl_internal_set__targetDisplay_k__BackingField)) int32_t _targetDisplay_k__BackingField;

  /// @brief Field destroyed, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get_destroyed, put = __cordl_internal_set_destroyed)) ::System::Action* destroyed;

  __declspec(property(get = get_drawToCameras, put = set_drawToCameras)) bool drawToCameras;

  /// @brief Field m_DrawToCameras, offset 0x188, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DrawToCameras, put = __cordl_internal_set_m_DrawToCameras)) bool m_DrawToCameras;

  /// @brief Field m_RuntimePanelCreationIndex, offset 0x168, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RuntimePanelCreationIndex, put = __cordl_internal_set_m_RuntimePanelCreationIndex)) int32_t m_RuntimePanelCreationIndex;

  /// @brief Field m_ScreenToPanelSpace, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScreenToPanelSpace,
                      put = __cordl_internal_set_m_ScreenToPanelSpace)) ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* m_ScreenToPanelSpace;

  /// @brief Field m_SelectableGameObject, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectableGameObject, put = __cordl_internal_set_m_SelectableGameObject)) ::UnityW<::UnityEngine::GameObject> m_SelectableGameObject;

  /// @brief Field m_SortingPriority, offset 0x16c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SortingPriority, put = __cordl_internal_set_m_SortingPriority)) float_t m_SortingPriority;

  /// @brief Field m_StandardWorldSpaceShader, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StandardWorldSpaceShader, put = __cordl_internal_set_m_StandardWorldSpaceShader)) ::UnityW<::UnityEngine::Shader> m_StandardWorldSpaceShader;

  /// @brief Field panelToWorld, offset 0x198, size 0x40
  __declspec(property(get = __cordl_internal_get_panelToWorld, put = __cordl_internal_set_panelToWorld)) ::UnityEngine::Matrix4x4 panelToWorld;

  /// @brief Field resolvedSortingIndex, offset 0x170, size 0x4
  __declspec(property(get = __cordl_internal_get_resolvedSortingIndex, put = __cordl_internal_set_resolvedSortingIndex)) int32_t resolvedSortingIndex;

  /// @brief Field s_CurrentRuntimePanelCounter, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_CurrentRuntimePanelCounter, put = setStaticF_s_CurrentRuntimePanelCounter)) int32_t s_CurrentRuntimePanelCounter;

  __declspec(property(get = get_screenRenderingHeight)) int32_t screenRenderingHeight;

  __declspec(property(get = get_screenRenderingWidth)) int32_t screenRenderingWidth;

  __declspec(property(get = get_screenToPanelSpace, put = set_screenToPanelSpace)) ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* screenToPanelSpace;

  __declspec(property(get = get_selectableGameObject, put = set_selectableGameObject)) ::UnityW<::UnityEngine::GameObject> selectableGameObject;

  __declspec(property(get = get_sortingPriority, put = set_sortingPriority)) float_t sortingPriority;

  __declspec(property(get = get_standardWorldSpaceShader)) ::UnityW<::UnityEngine::Shader> standardWorldSpaceShader;

  __declspec(property(get = get_targetDisplay, put = set_targetDisplay)) int32_t targetDisplay;

  /// @brief Field targetTexture, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get_targetTexture, put = __cordl_internal_set_targetTexture)) ::UnityW<::UnityEngine::RenderTexture> targetTexture;

  /// @brief Method AssignPanelToComponents, addr 0x4a3f970, size 0x334, virtual false, abstract: false, final false
  inline void AssignPanelToComponents(::UnityEngine::UIElements::BaseRuntimePanel* panel);

  /// @brief Method Dispose, addr 0x4a3fdec, size 0x54, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::UnityEngine::UIElements::BaseRuntimePanel* New_ctor(::UnityEngine::ScriptableObject* ownerObject, ::UnityEngine::UIElements::EventDispatcher* dispatcher);

  /// @brief Method PointerEntersPanel, addr 0x4a405ac, size 0xa0, virtual false, abstract: false, final false
  inline void PointerEntersPanel(int32_t pointerId, ::UnityEngine::Vector2 position);

  /// @brief Method PointerLeavesPanel, addr 0x4a404f4, size 0xb8, virtual false, abstract: false, final false
  inline void PointerLeavesPanel(int32_t pointerId, ::UnityEngine::Vector2 position);

  /// @brief Method Repaint, addr 0x4a4013c, size 0x1dc, virtual true, abstract: false, final false
  inline void Repaint(::UnityEngine::Event* e);

  /// @brief Method ScreenToPanel, addr 0x4a40398, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 ScreenToPanel(::UnityEngine::Vector2 screen);

  /// @brief Method ScreenToPanel, addr 0x4a403d0, size 0x124, virtual false, abstract: false, final false
  inline bool ScreenToPanel(::UnityEngine::Vector2 screenPosition, ::UnityEngine::Vector2 screenDelta, ::ByRef<::UnityEngine::Vector2> panelPosition, ::ByRef<::UnityEngine::Vector2> panelDelta,
                            bool allowOutside);

  constexpr int32_t const& __cordl_internal_get__targetDisplay_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__targetDisplay_k__BackingField();

  constexpr ::System::Action* const& __cordl_internal_get_destroyed() const;

  constexpr ::System::Action*& __cordl_internal_get_destroyed();

  constexpr bool const& __cordl_internal_get_m_DrawToCameras() const;

  constexpr bool& __cordl_internal_get_m_DrawToCameras();

  constexpr int32_t const& __cordl_internal_get_m_RuntimePanelCreationIndex() const;

  constexpr int32_t& __cordl_internal_get_m_RuntimePanelCreationIndex();

  constexpr ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* const& __cordl_internal_get_m_ScreenToPanelSpace() const;

  constexpr ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*& __cordl_internal_get_m_ScreenToPanelSpace();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_SelectableGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_SelectableGameObject();

  constexpr float_t const& __cordl_internal_get_m_SortingPriority() const;

  constexpr float_t& __cordl_internal_get_m_SortingPriority();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_StandardWorldSpaceShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_StandardWorldSpaceShader();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_panelToWorld() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_panelToWorld();

  constexpr int32_t const& __cordl_internal_get_resolvedSortingIndex() const;

  constexpr int32_t& __cordl_internal_get_resolvedSortingIndex();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_targetTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_targetTexture();

  constexpr void __cordl_internal_set__targetDisplay_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_destroyed(::System::Action* value);

  constexpr void __cordl_internal_set_m_DrawToCameras(bool value);

  constexpr void __cordl_internal_set_m_RuntimePanelCreationIndex(int32_t value);

  constexpr void __cordl_internal_set_m_ScreenToPanelSpace(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* value);

  constexpr void __cordl_internal_set_m_SelectableGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_SortingPriority(float_t value);

  constexpr void __cordl_internal_set_m_StandardWorldSpaceShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_panelToWorld(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_resolvedSortingIndex(int32_t value);

  constexpr void __cordl_internal_set_targetTexture(::UnityW<::UnityEngine::RenderTexture> value);

  /// @brief Method .ctor, addr 0x4a351e0, size 0x110, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ScriptableObject* ownerObject, ::UnityEngine::UIElements::EventDispatcher* dispatcher);

  /// @brief Method add_destroyed, addr 0x4a3fcac, size 0xa0, virtual false, abstract: false, final false
  inline void add_destroyed(::System::Action* value);

  /// @brief Method getScreenRenderingHeight, addr 0x4a4007c, size 0xc0, virtual false, abstract: false, final false
  static inline int32_t getScreenRenderingHeight(int32_t display);

  /// @brief Method getScreenRenderingWidth, addr 0x4a3ff64, size 0xc0, virtual false, abstract: false, final false
  static inline int32_t getScreenRenderingWidth(int32_t display);

  static inline ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* getStaticF_DefaultScreenToPanelSpace();

  static inline int32_t getStaticF_s_CurrentRuntimePanelCounter();

  /// @brief Method get_drawToCameras, addr 0x4a3fe48, size 0x8, virtual false, abstract: false, final false
  inline bool get_drawToCameras();

  /// @brief Method get_screenRenderingHeight, addr 0x4a40024, size 0x58, virtual false, abstract: false, final false
  inline int32_t get_screenRenderingHeight();

  /// @brief Method get_screenRenderingWidth, addr 0x4a3ff0c, size 0x58, virtual false, abstract: false, final false
  inline int32_t get_screenRenderingWidth();

  /// @brief Method get_screenToPanelSpace, addr 0x4a40318, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* get_screenToPanelSpace();

  /// @brief Method get_selectableGameObject, addr 0x4a3f8cc, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::GameObject> get_selectableGameObject();

  /// @brief Method get_sortingPriority, addr 0x4a3fca4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_sortingPriority();

  /// @brief Method get_standardWorldSpaceShader, addr 0x4a3fe40, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_standardWorldSpaceShader();

  /// @brief Method get_targetDisplay, addr 0x4a3fefc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_targetDisplay();

  /// @brief Method remove_destroyed, addr 0x4a3fd4c, size 0xa0, virtual false, abstract: false, final false
  inline void remove_destroyed(::System::Action* value);

  static inline void setStaticF_DefaultScreenToPanelSpace(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* value);

  static inline void setStaticF_s_CurrentRuntimePanelCounter(int32_t value);

  /// @brief Method set_drawToCameras, addr 0x4a3fe50, size 0xac, virtual false, abstract: false, final false
  inline void set_drawToCameras(bool value);

  /// @brief Method set_screenToPanelSpace, addr 0x4a40320, size 0x78, virtual false, abstract: false, final false
  inline void set_screenToPanelSpace(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* value);

  /// @brief Method set_selectableGameObject, addr 0x4a3f8d4, size 0x9c, virtual true, abstract: false, final true
  inline void set_selectableGameObject(::UnityEngine::GameObject* value);

  /// @brief Method set_sortingPriority, addr 0x4a34834, size 0xfc, virtual false, abstract: false, final false
  inline void set_sortingPriority(float_t value);

  /// @brief Method set_targetDisplay, addr 0x4a3ff04, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6018 };

  /// @brief Field m_SelectableGameObject, offset: 0x160, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_SelectableGameObject;

  /// @brief Field m_RuntimePanelCreationIndex, offset: 0x168, size: 0x4, def value: None
  int32_t ___m_RuntimePanelCreationIndex;

  /// @brief Field m_SortingPriority, offset: 0x16c, size: 0x4, def value: None
  float_t ___m_SortingPriority;

  /// @brief Field resolvedSortingIndex, offset: 0x170, size: 0x4, def value: None
  int32_t ___resolvedSortingIndex;

  /// @brief Field destroyed, offset: 0x178, size: 0x8, def value: None
  ::System::Action* ___destroyed;

  /// @brief Field m_StandardWorldSpaceShader, offset: 0x180, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_StandardWorldSpaceShader;

  /// @brief Field m_DrawToCameras, offset: 0x188, size: 0x1, def value: None
  bool ___m_DrawToCameras;

  /// @brief Field targetTexture, offset: 0x190, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ___targetTexture;

  /// @brief Field panelToWorld, offset: 0x198, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___panelToWorld;

  /// @brief Field <targetDisplay>k__BackingField, offset: 0x1d8, size: 0x4, def value: None
  int32_t ____targetDisplay_k__BackingField;

  /// @brief Field m_ScreenToPanelSpace, offset: 0x1e0, size: 0x8, def value: None
  ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* ___m_ScreenToPanelSpace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___m_SelectableGameObject) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___m_RuntimePanelCreationIndex) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___m_SortingPriority) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___resolvedSortingIndex) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___destroyed) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___m_StandardWorldSpaceShader) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___m_DrawToCameras) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___targetTexture) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___panelToWorld) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ____targetDisplay_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___m_ScreenToPanelSpace) == 0x1e0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseRuntimePanel, 0x1e8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BaseRuntimePanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseRuntimePanel*, "UnityEngine.UIElements", "BaseRuntimePanel");
NEED_NO_BOX(::UnityEngine::UIElements::BaseRuntimePanel___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseRuntimePanel___c*, "UnityEngine.UIElements", "BaseRuntimePanel/<>c");
