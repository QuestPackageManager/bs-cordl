#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/BaseEventData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__AbstractEventData_def.hpp"
CORDL_MODULE_EXPORT(BaseEventData)
namespace UnityEngine::EventSystems {
class BaseInputModule;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class BaseEventData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::BaseEventData);
// Dependencies UnityEngine.EventSystems.AbstractEventData
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: UnityEngine.EventSystems.BaseEventData
class CORDL_TYPE BaseEventData : public ::UnityEngine::EventSystems::AbstractEventData {
public:
  // Declarations
  __declspec(property(get = get_currentInputModule)) ::UnityW<::UnityEngine::EventSystems::BaseInputModule> currentInputModule;

  /// @brief Field m_EventSystem, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EventSystem, put = __cordl_internal_set_m_EventSystem)) ::UnityW<::UnityEngine::EventSystems::EventSystem> m_EventSystem;

  __declspec(property(get = get_selectedObject, put = set_selectedObject)) ::UnityW<::UnityEngine::GameObject> selectedObject;

  static inline ::UnityEngine::EventSystems::BaseEventData* New_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem);

  constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem> const& __cordl_internal_get_m_EventSystem() const;

  constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem>& __cordl_internal_get_m_EventSystem();

  constexpr void __cordl_internal_set_m_EventSystem(::UnityW<::UnityEngine::EventSystems::EventSystem> value);

  /// @brief Method .ctor, addr 0x4ada6a8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::EventSystems::EventSystem* eventSystem);

  /// @brief Method get_currentInputModule, addr 0x4ada6f4, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::EventSystems::BaseInputModule> get_currentInputModule();

  /// @brief Method get_selectedObject, addr 0x4ada710, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_selectedObject();

  /// @brief Method set_selectedObject, addr 0x4ada72c, size 0x1c, virtual false, abstract: false, final false
  inline void set_selectedObject(::UnityEngine::GameObject* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseEventData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseEventData(BaseEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseEventData(BaseEventData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15179 };

  /// @brief Field m_EventSystem, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::EventSystem> ___m_EventSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::EventSystems::BaseEventData, ___m_EventSystem) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::BaseEventData, 0x20>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::BaseEventData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::BaseEventData*, "UnityEngine.EventSystems", "BaseEventData");
