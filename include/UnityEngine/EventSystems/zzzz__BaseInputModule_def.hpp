#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseInputModule)
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine::EventSystems {
class BaseInput;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::EventSystems {
class AxisEventData;
}
namespace UnityEngine::EventSystems {
struct MoveDirection;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class BaseInputModule;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::BaseInputModule);
// Type: UnityEngine.EventSystems::BaseInputModule
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13219))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13204))
// CS Name: ::UnityEngine.EventSystems::BaseInputModule*
class CORDL_TYPE BaseInputModule : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  /// @brief Field m_RaycastResultCache, offset 0x18, size 0x8
  __declspec(property(get = __get_m_RaycastResultCache, put = __set_m_RaycastResultCache))::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* m_RaycastResultCache;

  /// @brief Field m_SendPointerHoverToParent, offset 0x20, size 0x1
  __declspec(property(get = __get_m_SendPointerHoverToParent, put = __set_m_SendPointerHoverToParent)) bool m_SendPointerHoverToParent;

  /// @brief Field m_AxisEventData, offset 0x28, size 0x8
  __declspec(property(get = __get_m_AxisEventData, put = __set_m_AxisEventData))::UnityEngine::EventSystems::AxisEventData* m_AxisEventData;

  /// @brief Field m_EventSystem, offset 0x30, size 0x8
  __declspec(property(get = __get_m_EventSystem, put = __set_m_EventSystem))::UnityEngine::EventSystems::EventSystem* m_EventSystem;

  /// @brief Field m_BaseEventData, offset 0x38, size 0x8
  __declspec(property(get = __get_m_BaseEventData, put = __set_m_BaseEventData))::UnityEngine::EventSystems::BaseEventData* m_BaseEventData;

  /// @brief Field m_InputOverride, offset 0x40, size 0x8
  __declspec(property(get = __get_m_InputOverride, put = __set_m_InputOverride))::UnityEngine::EventSystems::BaseInput* m_InputOverride;

  /// @brief Field m_DefaultInput, offset 0x48, size 0x8
  __declspec(property(get = __get_m_DefaultInput, put = __set_m_DefaultInput))::UnityEngine::EventSystems::BaseInput* m_DefaultInput;

  __declspec(property(get = get_sendPointerHoverToParent, put = set_sendPointerHoverToParent)) bool sendPointerHoverToParent;

  __declspec(property(get = get_input))::UnityEngine::EventSystems::BaseInput* input;

  __declspec(property(get = get_inputOverride, put = set_inputOverride))::UnityEngine::EventSystems::BaseInput* inputOverride;

  __declspec(property(get = get_eventSystem))::UnityEngine::EventSystems::EventSystem* eventSystem;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*& __get_m_RaycastResultCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*> const& __get_m_RaycastResultCache() const;

  constexpr void __set_m_RaycastResultCache(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* value);

  constexpr bool& __get_m_SendPointerHoverToParent();

  constexpr bool const& __get_m_SendPointerHoverToParent() const;

  constexpr void __set_m_SendPointerHoverToParent(bool value);

  constexpr ::UnityEngine::EventSystems::AxisEventData*& __get_m_AxisEventData();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::AxisEventData*> const& __get_m_AxisEventData() const;

  constexpr void __set_m_AxisEventData(::UnityEngine::EventSystems::AxisEventData* value);

  constexpr ::UnityEngine::EventSystems::EventSystem*& __get_m_EventSystem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::EventSystem*> const& __get_m_EventSystem() const;

  constexpr void __set_m_EventSystem(::UnityEngine::EventSystems::EventSystem* value);

  constexpr ::UnityEngine::EventSystems::BaseEventData*& __get_m_BaseEventData();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::BaseEventData*> const& __get_m_BaseEventData() const;

  constexpr void __set_m_BaseEventData(::UnityEngine::EventSystems::BaseEventData* value);

  constexpr ::UnityEngine::EventSystems::BaseInput*& __get_m_InputOverride();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::BaseInput*> const& __get_m_InputOverride() const;

  constexpr void __set_m_InputOverride(::UnityEngine::EventSystems::BaseInput* value);

  constexpr ::UnityEngine::EventSystems::BaseInput*& __get_m_DefaultInput();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::BaseInput*> const& __get_m_DefaultInput() const;

  constexpr void __set_m_DefaultInput(::UnityEngine::EventSystems::BaseInput* value);

  /// @brief Method get_sendPointerHoverToParent addr 0x2c324ac size 0x8 virtual false final false
  inline bool get_sendPointerHoverToParent();

  /// @brief Method set_sendPointerHoverToParent addr 0x2c324b4 size 0xc virtual false final false
  inline void set_sendPointerHoverToParent(bool value);

  /// @brief Method get_input addr 0x2c324c0 size 0x218 virtual false final false
  inline ::UnityEngine::EventSystems::BaseInput* get_input();

  /// @brief Method get_inputOverride addr 0x2c326d8 size 0x8 virtual false final false
  inline ::UnityEngine::EventSystems::BaseInput* get_inputOverride();

  /// @brief Method set_inputOverride addr 0x2c326e0 size 0x8 virtual false final false
  inline void set_inputOverride(::UnityEngine::EventSystems::BaseInput* value);

  /// @brief Method get_eventSystem addr 0x2c326e8 size 0x8 virtual false final false
  inline ::UnityEngine::EventSystems::EventSystem* get_eventSystem();

  /// @brief Method OnEnable addr 0x2c326f0 size 0x58 virtual true final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x2c32748 size 0x18 virtual true final false
  inline void OnDisable();

  /// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Process();

  /// @brief Method FindFirstRaycast addr 0x2c32760 size 0x114 virtual false final false
  static inline ::UnityEngine::EventSystems::RaycastResult FindFirstRaycast(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* candidates);

  /// @brief Method DetermineMoveDirection addr 0x2c32874 size 0x54 virtual false final false
  static inline ::UnityEngine::EventSystems::MoveDirection DetermineMoveDirection(float_t x, float_t y);

  /// @brief Method DetermineMoveDirection addr 0x2c328c8 size 0x50 virtual false final false
  static inline ::UnityEngine::EventSystems::MoveDirection DetermineMoveDirection(float_t x, float_t y, float_t deadZone);

  /// @brief Method FindCommonRoot addr 0x2c32918 size 0x174 virtual false final false
  static inline ::UnityEngine::GameObject* FindCommonRoot(::UnityEngine::GameObject* g1, ::UnityEngine::GameObject* g2);

  /// @brief Method HandlePointerExitAndEnter addr 0x2c32a8c size 0xa48 virtual false final false
  inline void HandlePointerExitAndEnter(::UnityEngine::EventSystems::PointerEventData* currentPointerData, ::UnityEngine::GameObject* newEnterTarget);

  /// @brief Method GetAxisEventData addr 0x2c334d4 size 0x100 virtual true final false
  inline ::UnityEngine::EventSystems::AxisEventData* GetAxisEventData(float_t x, float_t y, float_t moveDeadZone);

  /// @brief Method GetBaseEventData addr 0x2c335d4 size 0x84 virtual true final false
  inline ::UnityEngine::EventSystems::BaseEventData* GetBaseEventData();

  /// @brief Method IsPointerOverGameObject addr 0x2c33658 size 0x8 virtual true final false
  inline bool IsPointerOverGameObject(int32_t pointerId);

  /// @brief Method ShouldActivateModule addr 0x2c33660 size 0x40 virtual true final false
  inline bool ShouldActivateModule();

  /// @brief Method DeactivateModule addr 0x2c336a0 size 0x4 virtual true final false
  inline void DeactivateModule();

  /// @brief Method ActivateModule addr 0x2c336a4 size 0x4 virtual true final false
  inline void ActivateModule();

  /// @brief Method UpdateModule addr 0x2c336a8 size 0x4 virtual true final false
  inline void UpdateModule();

  /// @brief Method IsModuleSupported addr 0x2c336ac size 0x8 virtual true final false
  inline bool IsModuleSupported();

  /// @brief Method ConvertUIToolkitPointerId addr 0x2c336b4 size 0x7c virtual true final false
  inline int32_t ConvertUIToolkitPointerId(::UnityEngine::EventSystems::PointerEventData* sourcePointerData);

  static inline ::UnityEngine::EventSystems::BaseInputModule* New_ctor();

  /// @brief Method .ctor addr 0x2c33730 size 0x84 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BaseInputModule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseInputModule(BaseInputModule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseInputModule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseInputModule(BaseInputModule const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseInputModule();

public:
  /// @brief Field m_RaycastResultCache, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* ___m_RaycastResultCache;

  /// @brief Field m_SendPointerHoverToParent, offset: 0x20, size: 0x1, def value: None
  bool ___m_SendPointerHoverToParent;

  /// @brief Field m_AxisEventData, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::EventSystems::AxisEventData* ___m_AxisEventData;

  /// @brief Field m_EventSystem, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::EventSystems::EventSystem* ___m_EventSystem;

  /// @brief Field m_BaseEventData, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::EventSystems::BaseEventData* ___m_BaseEventData;

  /// @brief Field m_InputOverride, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::EventSystems::BaseInput* ___m_InputOverride;

  /// @brief Field m_DefaultInput, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::EventSystems::BaseInput* ___m_DefaultInput;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::BaseInputModule, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::BaseInputModule, ___m_RaycastResultCache) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::BaseInputModule, ___m_SendPointerHoverToParent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::BaseInputModule, ___m_AxisEventData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::BaseInputModule, ___m_EventSystem) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::BaseInputModule, ___m_BaseEventData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::BaseInputModule, ___m_InputOverride) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::BaseInputModule, ___m_DefaultInput) == 0x48, "Offset mismatch!");

} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::BaseInputModule);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::BaseInputModule*, "UnityEngine.EventSystems", "BaseInputModule");
