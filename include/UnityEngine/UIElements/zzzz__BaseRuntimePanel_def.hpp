#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseRuntimePanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__Panel_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
class EventDispatcher;
}
namespace UnityEngine::UIElements {
class __BaseRuntimePanel____c;
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
class __BaseRuntimePanel____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseRuntimePanel);
MARK_REF_PTR_T(::UnityEngine::UIElements::__BaseRuntimePanel____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::BaseRuntimePanel::<>c*
class CORDL_TYPE __BaseRuntimePanel____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::UIElements::__BaseRuntimePanel____c* __9;

  static inline ::UnityEngine::UIElements::__BaseRuntimePanel____c* New_ctor();

  /// @brief Method <.cctor>b__44_0, addr 0x358fbac, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 __cctor_b__44_0(::UnityEngine::Vector2 p);

  /// @brief Method .ctor, addr 0x358fba4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__BaseRuntimePanel____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__BaseRuntimePanel____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseRuntimePanel____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BaseRuntimePanel____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BaseRuntimePanel____c(__BaseRuntimePanel____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BaseRuntimePanel____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BaseRuntimePanel____c(__BaseRuntimePanel____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__BaseRuntimePanel____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseRuntimePanel
// SizeInfo { instance_size: 472, native_size: -1, calculated_instance_size: 472, calculated_native_size: 472, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::BaseRuntimePanel*
class CORDL_TYPE BaseRuntimePanel : public ::UnityEngine::UIElements::Panel {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__BaseRuntimePanel____c;

  /// @brief Field DefaultScreenToPanelSpace, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefaultScreenToPanelSpace,
                             put = setStaticF_DefaultScreenToPanelSpace))::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* DefaultScreenToPanelSpace;

  /// @brief Field <targetDisplay>k__BackingField, offset 0x1c8, size 0x4
  __declspec(property(get = __cordl_internal_get__targetDisplay_k__BackingField, put = __cordl_internal_set__targetDisplay_k__BackingField)) int32_t _targetDisplay_k__BackingField;

  /// @brief Field destroyed, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get_destroyed, put = __cordl_internal_set_destroyed))::System::Action* destroyed;

  __declspec(property(get = get_drawToCameras, put = set_drawToCameras)) bool drawToCameras;

  /// @brief Field m_DrawToCameras, offset 0x178, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DrawToCameras, put = __cordl_internal_set_m_DrawToCameras)) bool m_DrawToCameras;

  /// @brief Field m_RuntimePanelCreationIndex, offset 0x160, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RuntimePanelCreationIndex, put = __cordl_internal_set_m_RuntimePanelCreationIndex)) int32_t m_RuntimePanelCreationIndex;

  /// @brief Field m_ScreenToPanelSpace, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScreenToPanelSpace,
                      put = __cordl_internal_set_m_ScreenToPanelSpace))::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* m_ScreenToPanelSpace;

  /// @brief Field m_SelectableGameObject, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectableGameObject, put = __cordl_internal_set_m_SelectableGameObject))::UnityW<::UnityEngine::GameObject> m_SelectableGameObject;

  /// @brief Field m_SortingPriority, offset 0x164, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SortingPriority, put = __cordl_internal_set_m_SortingPriority)) float_t m_SortingPriority;

  /// @brief Field m_StandardWorldSpaceShader, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StandardWorldSpaceShader, put = __cordl_internal_set_m_StandardWorldSpaceShader))::UnityW<::UnityEngine::Shader> m_StandardWorldSpaceShader;

  /// @brief Field panelToWorld, offset 0x188, size 0x40
  __declspec(property(get = __cordl_internal_get_panelToWorld, put = __cordl_internal_set_panelToWorld))::UnityEngine::Matrix4x4 panelToWorld;

  /// @brief Field s_CurrentRuntimePanelCounter, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_CurrentRuntimePanelCounter, put = setStaticF_s_CurrentRuntimePanelCounter)) int32_t s_CurrentRuntimePanelCounter;

  __declspec(property(get = get_screenRenderingHeight)) int32_t screenRenderingHeight;

  __declspec(property(get = get_screenRenderingWidth)) int32_t screenRenderingWidth;

  __declspec(property(get = get_screenToPanelSpace, put = set_screenToPanelSpace))::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* screenToPanelSpace;

  __declspec(property(get = get_selectableGameObject, put = set_selectableGameObject))::UnityW<::UnityEngine::GameObject> selectableGameObject;

  __declspec(property(get = get_sortingPriority, put = set_sortingPriority)) float_t sortingPriority;

  __declspec(property(get = get_standardWorldSpaceShader))::UnityW<::UnityEngine::Shader> standardWorldSpaceShader;

  __declspec(property(get = get_targetDisplay, put = set_targetDisplay)) int32_t targetDisplay;

  /// @brief Field targetTexture, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get_targetTexture, put = __cordl_internal_set_targetTexture))::UnityW<::UnityEngine::RenderTexture> targetTexture;

  /// @brief Method AssignPanelToComponents, addr 0x358ebb0, size 0x32c, virtual false, abstract: false, final false
  inline void AssignPanelToComponents(::UnityEngine::UIElements::BaseRuntimePanel* panel);

  /// @brief Method Dispose, addr 0x358f288, size 0x58, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::UnityEngine::UIElements::BaseRuntimePanel* New_ctor(::UnityEngine::ScriptableObject* ownerObject, ::UnityEngine::UIElements::EventDispatcher* dispatcher);

  /// @brief Method PointerEntersPanel, addr 0x358f9c8, size 0xa0, virtual false, abstract: false, final false
  inline void PointerEntersPanel(int32_t pointerId, ::UnityEngine::Vector2 position);

  /// @brief Method PointerLeavesPanel, addr 0x358f908, size 0xc0, virtual false, abstract: false, final false
  inline void PointerLeavesPanel(int32_t pointerId, ::UnityEngine::Vector2 position);

  /// @brief Method Repaint, addr 0x358f548, size 0x1e8, virtual true, abstract: false, final false
  inline void Repaint(::UnityEngine::Event* e);

  /// @brief Method ScreenToPanel, addr 0x358f7b0, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 ScreenToPanel(::UnityEngine::Vector2 screen);

  /// @brief Method ScreenToPanel, addr 0x358f804, size 0x104, virtual false, abstract: false, final false
  inline bool ScreenToPanel(::UnityEngine::Vector2 screenPosition, ::UnityEngine::Vector2 screenDelta, ByRef<::UnityEngine::Vector2> panelPosition, ByRef<::UnityEngine::Vector2> panelDelta,
                            bool allowOutside);

  constexpr int32_t const& __cordl_internal_get__targetDisplay_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__targetDisplay_k__BackingField();

  constexpr ::System::Action*& __cordl_internal_get_destroyed();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_destroyed() const;

  constexpr bool const& __cordl_internal_get_m_DrawToCameras() const;

  constexpr bool& __cordl_internal_get_m_DrawToCameras();

  constexpr int32_t const& __cordl_internal_get_m_RuntimePanelCreationIndex() const;

  constexpr int32_t& __cordl_internal_get_m_RuntimePanelCreationIndex();

  constexpr ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*& __cordl_internal_get_m_ScreenToPanelSpace();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*> const& __cordl_internal_get_m_ScreenToPanelSpace() const;

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_SelectableGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_SelectableGameObject();

  constexpr float_t const& __cordl_internal_get_m_SortingPriority() const;

  constexpr float_t& __cordl_internal_get_m_SortingPriority();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_StandardWorldSpaceShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_StandardWorldSpaceShader();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_panelToWorld() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_panelToWorld();

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

  constexpr void __cordl_internal_set_targetTexture(::UnityW<::UnityEngine::RenderTexture> value);

  /// @brief Method .ctor, addr 0x358f178, size 0x110, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ScriptableObject* ownerObject, ::UnityEngine::UIElements::EventDispatcher* dispatcher);

  /// @brief Method add_destroyed, addr 0x358f038, size 0xa0, virtual false, abstract: false, final false
  inline void add_destroyed(::System::Action* value);

  static inline ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* getStaticF_DefaultScreenToPanelSpace();

  static inline int32_t getStaticF_s_CurrentRuntimePanelCounter();

  /// @brief Method get_drawToCameras, addr 0x358f2e8, size 0x8, virtual false, abstract: false, final false
  inline bool get_drawToCameras();

  /// @brief Method get_screenRenderingHeight, addr 0x358f47c, size 0xcc, virtual false, abstract: false, final false
  inline int32_t get_screenRenderingHeight();

  /// @brief Method get_screenRenderingWidth, addr 0x358f3b0, size 0xcc, virtual false, abstract: false, final false
  inline int32_t get_screenRenderingWidth();

  /// @brief Method get_screenToPanelSpace, addr 0x358f730, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* get_screenToPanelSpace();

  /// @brief Method get_selectableGameObject, addr 0x358eb0c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::GameObject> get_selectableGameObject();

  /// @brief Method get_sortingPriority, addr 0x358eedc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_sortingPriority();

  /// @brief Method get_standardWorldSpaceShader, addr 0x358f2e0, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_standardWorldSpaceShader();

  /// @brief Method get_targetDisplay, addr 0x358f3a0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_targetDisplay();

  /// @brief Method remove_destroyed, addr 0x358f0d8, size 0xa0, virtual false, abstract: false, final false
  inline void remove_destroyed(::System::Action* value);

  static inline void setStaticF_DefaultScreenToPanelSpace(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* value);

  static inline void setStaticF_s_CurrentRuntimePanelCounter(int32_t value);

  /// @brief Method set_drawToCameras, addr 0x358f2f0, size 0xb0, virtual false, abstract: false, final false
  inline void set_drawToCameras(bool value);

  /// @brief Method set_screenToPanelSpace, addr 0x358f738, size 0x78, virtual false, abstract: false, final false
  inline void set_screenToPanelSpace(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* value);

  /// @brief Method set_selectableGameObject, addr 0x358eb14, size 0x9c, virtual true, abstract: false, final true
  inline void set_selectableGameObject(::UnityEngine::GameObject* value);

  /// @brief Method set_sortingPriority, addr 0x358eee4, size 0xf8, virtual false, abstract: false, final false
  inline void set_sortingPriority(float_t value);

  /// @brief Method set_targetDisplay, addr 0x358f3a8, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field m_SelectableGameObject, offset: 0x158, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_SelectableGameObject;

  /// @brief Field m_RuntimePanelCreationIndex, offset: 0x160, size: 0x4, def value: None
  int32_t ___m_RuntimePanelCreationIndex;

  /// @brief Field m_SortingPriority, offset: 0x164, size: 0x4, def value: None
  float_t ___m_SortingPriority;

  /// @brief Field destroyed, offset: 0x168, size: 0x8, def value: None
  ::System::Action* ___destroyed;

  /// @brief Field m_StandardWorldSpaceShader, offset: 0x170, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_StandardWorldSpaceShader;

  /// @brief Field m_DrawToCameras, offset: 0x178, size: 0x1, def value: None
  bool ___m_DrawToCameras;

  /// @brief Field targetTexture, offset: 0x180, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ___targetTexture;

  /// @brief Field panelToWorld, offset: 0x188, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___panelToWorld;

  /// @brief Field <targetDisplay>k__BackingField, offset: 0x1c8, size: 0x4, def value: None
  int32_t ____targetDisplay_k__BackingField;

  /// @brief Field m_ScreenToPanelSpace, offset: 0x1d0, size: 0x8, def value: None
  ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* ___m_ScreenToPanelSpace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseRuntimePanel, 0x1d8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___m_SelectableGameObject) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___m_RuntimePanelCreationIndex) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___m_SortingPriority) == 0x164, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___destroyed) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___m_StandardWorldSpaceShader) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___m_DrawToCameras) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___targetTexture) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___panelToWorld) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ____targetDisplay_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseRuntimePanel, ___m_ScreenToPanelSpace) == 0x1d0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BaseRuntimePanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseRuntimePanel*, "UnityEngine.UIElements", "BaseRuntimePanel");
NEED_NO_BOX(::UnityEngine::UIElements::__BaseRuntimePanel____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__BaseRuntimePanel____c*, "UnityEngine.UIElements", "BaseRuntimePanel/<>c");
