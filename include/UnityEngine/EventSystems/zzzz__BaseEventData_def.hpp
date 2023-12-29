#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__AbstractEventData_def.hpp"
CORDL_MODULE_EXPORT(BaseEventData)
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine::EventSystems {
class BaseInputModule;
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
// Type: UnityEngine.EventSystems::BaseEventData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13169))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13170))
// CS Name: ::UnityEngine.EventSystems::BaseEventData*
class CORDL_TYPE BaseEventData : public ::UnityEngine::EventSystems::AbstractEventData {
public:
  // Declarations
  /// @brief Field m_EventSystem, offset 0x18, size 0x8
  __declspec(property(get = __get_m_EventSystem, put = __set_m_EventSystem))::UnityEngine::EventSystems::EventSystem* m_EventSystem;

  __declspec(property(get = get_currentInputModule))::UnityEngine::EventSystems::BaseInputModule* currentInputModule;

  __declspec(property(get = get_selectedObject, put = set_selectedObject))::UnityEngine::GameObject* selectedObject;

  constexpr ::UnityEngine::EventSystems::EventSystem*& __get_m_EventSystem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::EventSystem*> const& __get_m_EventSystem() const;

  constexpr void __set_m_EventSystem(::UnityEngine::EventSystems::EventSystem* value);

  static inline ::UnityEngine::EventSystems::BaseEventData* New_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem);

  /// @brief Method .ctor addr 0x2c2d050 size 0x28 virtual false final false
  inline void _ctor(::UnityEngine::EventSystems::EventSystem* eventSystem);

  /// @brief Method get_currentInputModule addr 0x2c2d09c size 0x1c virtual false final false
  inline ::UnityEngine::EventSystems::BaseInputModule* get_currentInputModule();

  /// @brief Method get_selectedObject addr 0x2c2d0b8 size 0x1c virtual false final false
  inline ::UnityEngine::GameObject* get_selectedObject();

  /// @brief Method set_selectedObject addr 0x2c2d0d4 size 0x1c virtual false final false
  inline void set_selectedObject(::UnityEngine::GameObject* value);

  // Ctor Parameters [CppParam { name: "", ty: "BaseEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseEventData(BaseEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseEventData(BaseEventData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseEventData();

public:
  /// @brief Field m_EventSystem, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::EventSystems::EventSystem* ___m_EventSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::BaseEventData, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::BaseEventData, ___m_EventSystem) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::BaseEventData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::BaseEventData*, "UnityEngine.EventSystems", "BaseEventData");
