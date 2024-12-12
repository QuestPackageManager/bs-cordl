#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PanelRaycaster.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
#include "UnityEngine/UIElements/zzzz__IRuntimePanelComponent_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PanelRaycaster)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::UIElements {
class BaseRuntimePanel;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PanelRaycaster;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PanelRaycaster);
// Dependencies UnityEngine.EventSystems.BaseRaycaster, UnityEngine.UIElements.IRuntimePanelComponent
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PanelRaycaster
class CORDL_TYPE PanelRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster {
public:
  // Declarations
  __declspec(property(get = get_eventCamera)) ::UnityW<::UnityEngine::Camera> eventCamera;

  /// @brief Field m_Panel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Panel, put = __cordl_internal_set_m_Panel)) ::UnityEngine::UIElements::BaseRuntimePanel* m_Panel;

  __declspec(property(get = get_panel, put = set_panel)) ::UnityEngine::UIElements::IPanel* panel;

  __declspec(property(get = get_renderOrderPriority)) int32_t renderOrderPriority;

  __declspec(property(get = get_selectableGameObject)) ::UnityW<::UnityEngine::GameObject> selectableGameObject;

  __declspec(property(get = get_sortOrderPriority)) int32_t sortOrderPriority;

  /// @brief Convert operator to "::UnityEngine::UIElements::IRuntimePanelComponent"
  constexpr operator ::UnityEngine::UIElements::IRuntimePanelComponent*() noexcept;

  static inline ::UnityEngine::UIElements::PanelRaycaster* New_ctor();

  /// @brief Method OnPanelDestroyed, addr 0x4ad41a4, size 0x8, virtual false, abstract: false, final false
  inline void OnPanelDestroyed();

  /// @brief Method Raycast, addr 0x4ad42b4, size 0x498, virtual true, abstract: false, final false
  inline void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  /// @brief Method RegisterCallbacks, addr 0x4ad4114, size 0x90, virtual false, abstract: false, final false
  inline void RegisterCallbacks();

  /// @brief Method UnregisterCallbacks, addr 0x4ad4084, size 0x90, virtual false, abstract: false, final false
  inline void UnregisterCallbacks();

  constexpr ::UnityEngine::UIElements::BaseRuntimePanel* const& __cordl_internal_get_m_Panel() const;

  constexpr ::UnityEngine::UIElements::BaseRuntimePanel*& __cordl_internal_get_m_Panel();

  constexpr void __cordl_internal_set_m_Panel(::UnityEngine::UIElements::BaseRuntimePanel* value);

  /// @brief Method .ctor, addr 0x4ad4754, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_eventCamera, addr 0x4ad474c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_eventCamera();

  /// @brief Method get_panel, addr 0x4ad3fd8, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::IPanel* get_panel();

  /// @brief Method get_renderOrderPriority, addr 0x4ad4240, size 0x74, virtual true, abstract: false, final false
  inline int32_t get_renderOrderPriority();

  /// @brief Method get_selectableGameObject, addr 0x4ad41ac, size 0x18, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_selectableGameObject();

  /// @brief Method get_sortOrderPriority, addr 0x4ad41c4, size 0x7c, virtual true, abstract: false, final false
  inline int32_t get_sortOrderPriority();

  /// @brief Convert to "::UnityEngine::UIElements::IRuntimePanelComponent"
  constexpr ::UnityEngine::UIElements::IRuntimePanelComponent* i___UnityEngine__UIElements__IRuntimePanelComponent() noexcept;

  /// @brief Method set_panel, addr 0x4ad3fe0, size 0xa4, virtual true, abstract: false, final true
  inline void set_panel(::UnityEngine::UIElements::IPanel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelRaycaster();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PanelRaycaster", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PanelRaycaster(PanelRaycaster&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PanelRaycaster", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PanelRaycaster(PanelRaycaster const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15172 };

  /// @brief Field m_Panel, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseRuntimePanel* ___m_Panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PanelRaycaster, ___m_Panel) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PanelRaycaster, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PanelRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PanelRaycaster*, "UnityEngine.UIElements", "PanelRaycaster");
