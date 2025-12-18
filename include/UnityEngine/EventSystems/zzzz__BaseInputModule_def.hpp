#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/BaseInputModule.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseInputModule)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::EventSystems {
class AxisEventData;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class BaseInput;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine::EventSystems {
struct MoveDirection;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class BaseInputModule;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::BaseInputModule);
// Dependencies UnityEngine.EventSystems.UIBehaviour
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: UnityEngine.EventSystems.BaseInputModule
class CORDL_TYPE BaseInputModule : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  __declspec(property(get = get_eventSystem)) ::UnityW<::UnityEngine::EventSystems::EventSystem> eventSystem;

  __declspec(property(get = get_input)) ::UnityW<::UnityEngine::EventSystems::BaseInput> input;

  __declspec(property(get = get_inputOverride, put = set_inputOverride)) ::UnityW<::UnityEngine::EventSystems::BaseInput> inputOverride;

  /// @brief Field m_AxisEventData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AxisEventData, put = __cordl_internal_set_m_AxisEventData)) ::UnityEngine::EventSystems::AxisEventData* m_AxisEventData;

  /// @brief Field m_BaseEventData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BaseEventData, put = __cordl_internal_set_m_BaseEventData)) ::UnityEngine::EventSystems::BaseEventData* m_BaseEventData;

  /// @brief Field m_DefaultInput, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultInput, put = __cordl_internal_set_m_DefaultInput)) ::UnityW<::UnityEngine::EventSystems::BaseInput> m_DefaultInput;

  /// @brief Field m_EventSystem, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EventSystem, put = __cordl_internal_set_m_EventSystem)) ::UnityW<::UnityEngine::EventSystems::EventSystem> m_EventSystem;

  /// @brief Field m_InputOverride, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InputOverride, put = __cordl_internal_set_m_InputOverride)) ::UnityW<::UnityEngine::EventSystems::BaseInput> m_InputOverride;

  /// @brief Field m_RaycastResultCache, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RaycastResultCache,
                      put = __cordl_internal_set_m_RaycastResultCache)) ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* m_RaycastResultCache;

  /// @brief Field m_SendPointerHoverToParent, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SendPointerHoverToParent, put = __cordl_internal_set_m_SendPointerHoverToParent)) bool m_SendPointerHoverToParent;

  __declspec(property(get = get_sendPointerHoverToParent, put = set_sendPointerHoverToParent)) bool sendPointerHoverToParent;

  /// @brief Method ActivateModule, addr 0x6c5305c, size 0x4, virtual true, abstract: false, final false
  inline void ActivateModule();

  /// @brief Method ConvertPointerEventScrollDeltaToTicks, addr 0x6c530fc, size 0x44, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 ConvertPointerEventScrollDeltaToTicks(::UnityEngine::Vector2 scrollDelta);

  /// @brief Method ConvertUIToolkitPointerId, addr 0x6c5306c, size 0x90, virtual true, abstract: false, final false
  inline int32_t ConvertUIToolkitPointerId(::UnityEngine::EventSystems::PointerEventData* sourcePointerData);

  /// @brief Method DeactivateModule, addr 0x6c53058, size 0x4, virtual true, abstract: false, final false
  inline void DeactivateModule();

  /// @brief Method DetermineMoveDirection, addr 0x6c52188, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::EventSystems::MoveDirection DetermineMoveDirection(float_t x, float_t y);

  /// @brief Method DetermineMoveDirection, addr 0x6c521dc, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::EventSystems::MoveDirection DetermineMoveDirection(float_t x, float_t y, float_t deadZone);

  /// @brief Method FindCommonRoot, addr 0x6c5222c, size 0x170, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> FindCommonRoot(::UnityEngine::GameObject* g1, ::UnityEngine::GameObject* g2);

  /// @brief Method FindFirstRaycast, addr 0x6c52064, size 0x124, virtual false, abstract: false, final false
  static inline ::UnityEngine::EventSystems::RaycastResult FindFirstRaycast(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* candidates);

  /// @brief Method GetAxisEventData, addr 0x6c52ea0, size 0x100, virtual true, abstract: false, final false
  inline ::UnityEngine::EventSystems::AxisEventData* GetAxisEventData(float_t x, float_t y, float_t moveDeadZone);

  /// @brief Method GetBaseEventData, addr 0x6c52fa0, size 0x70, virtual true, abstract: false, final false
  inline ::UnityEngine::EventSystems::BaseEventData* GetBaseEventData();

  /// @brief Method HandlePointerExitAndEnter, addr 0x6c5239c, size 0xb04, virtual false, abstract: false, final false
  inline void HandlePointerExitAndEnter(::UnityEngine::EventSystems::PointerEventData* currentPointerData, ::UnityEngine::GameObject* newEnterTarget);

  /// @brief Method IsModuleSupported, addr 0x6c53064, size 0x8, virtual true, abstract: false, final false
  inline bool IsModuleSupported();

  /// @brief Method IsPointerOverGameObject, addr 0x6c53010, size 0x8, virtual true, abstract: false, final false
  inline bool IsPointerOverGameObject(int32_t pointerId);

  static inline ::UnityEngine::EventSystems::BaseInputModule* New_ctor();

  /// @brief Method OnDisable, addr 0x6c52050, size 0x14, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x6c51ff4, size 0x5c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Process, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Process();

  /// @brief Method ShouldActivateModule, addr 0x6c53018, size 0x40, virtual true, abstract: false, final false
  inline bool ShouldActivateModule();

  /// @brief Method UpdateModule, addr 0x6c53060, size 0x4, virtual true, abstract: false, final false
  inline void UpdateModule();

  constexpr ::UnityEngine::EventSystems::AxisEventData* const& __cordl_internal_get_m_AxisEventData() const;

  constexpr ::UnityEngine::EventSystems::AxisEventData*& __cordl_internal_get_m_AxisEventData();

  constexpr ::UnityEngine::EventSystems::BaseEventData* const& __cordl_internal_get_m_BaseEventData() const;

  constexpr ::UnityEngine::EventSystems::BaseEventData*& __cordl_internal_get_m_BaseEventData();

  constexpr ::UnityW<::UnityEngine::EventSystems::BaseInput> const& __cordl_internal_get_m_DefaultInput() const;

  constexpr ::UnityW<::UnityEngine::EventSystems::BaseInput>& __cordl_internal_get_m_DefaultInput();

  constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem> const& __cordl_internal_get_m_EventSystem() const;

  constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem>& __cordl_internal_get_m_EventSystem();

  constexpr ::UnityW<::UnityEngine::EventSystems::BaseInput> const& __cordl_internal_get_m_InputOverride() const;

  constexpr ::UnityW<::UnityEngine::EventSystems::BaseInput>& __cordl_internal_get_m_InputOverride();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* const& __cordl_internal_get_m_RaycastResultCache() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*& __cordl_internal_get_m_RaycastResultCache();

  constexpr bool const& __cordl_internal_get_m_SendPointerHoverToParent() const;

  constexpr bool& __cordl_internal_get_m_SendPointerHoverToParent();

  constexpr void __cordl_internal_set_m_AxisEventData(::UnityEngine::EventSystems::AxisEventData* value);

  constexpr void __cordl_internal_set_m_BaseEventData(::UnityEngine::EventSystems::BaseEventData* value);

  constexpr void __cordl_internal_set_m_DefaultInput(::UnityW<::UnityEngine::EventSystems::BaseInput> value);

  constexpr void __cordl_internal_set_m_EventSystem(::UnityW<::UnityEngine::EventSystems::EventSystem> value);

  constexpr void __cordl_internal_set_m_InputOverride(::UnityW<::UnityEngine::EventSystems::BaseInput> value);

  constexpr void __cordl_internal_set_m_RaycastResultCache(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* value);

  constexpr void __cordl_internal_set_m_SendPointerHoverToParent(bool value);

  /// @brief Method .ctor, addr 0x6c53140, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_eventSystem, addr 0x6c51fec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::EventSystems::EventSystem> get_eventSystem();

  /// @brief Method get_input, addr 0x6c51dd0, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::EventSystems::BaseInput> get_input();

  /// @brief Method get_inputOverride, addr 0x6c51fdc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::EventSystems::BaseInput> get_inputOverride();

  /// @brief Method get_sendPointerHoverToParent, addr 0x6c51dc0, size 0x8, virtual false, abstract: false, final false
  inline bool get_sendPointerHoverToParent();

  /// @brief Method set_inputOverride, addr 0x6c51fe4, size 0x8, virtual false, abstract: false, final false
  inline void set_inputOverride(::UnityEngine::EventSystems::BaseInput* value);

  /// @brief Method set_sendPointerHoverToParent, addr 0x6c51dc8, size 0x8, virtual false, abstract: false, final false
  inline void set_sendPointerHoverToParent(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseInputModule();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseInputModule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseInputModule(BaseInputModule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseInputModule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseInputModule(BaseInputModule const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17536 };

  /// @brief Field m_RaycastResultCache, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* ___m_RaycastResultCache;

  /// @brief Field m_SendPointerHoverToParent, offset: 0x28, size: 0x1, def value: None
  bool ___m_SendPointerHoverToParent;

  /// @brief Field m_AxisEventData, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::EventSystems::AxisEventData* ___m_AxisEventData;

  /// @brief Field m_EventSystem, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::EventSystem> ___m_EventSystem;

  /// @brief Field m_BaseEventData, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::EventSystems::BaseEventData* ___m_BaseEventData;

  /// @brief Field m_InputOverride, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::BaseInput> ___m_InputOverride;

  /// @brief Field m_DefaultInput, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::BaseInput> ___m_DefaultInput;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::EventSystems::BaseInputModule, ___m_RaycastResultCache) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::BaseInputModule, ___m_SendPointerHoverToParent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::BaseInputModule, ___m_AxisEventData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::BaseInputModule, ___m_EventSystem) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::BaseInputModule, ___m_BaseEventData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::BaseInputModule, ___m_InputOverride) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::BaseInputModule, ___m_DefaultInput) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::BaseInputModule, 0x58>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::BaseInputModule);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::BaseInputModule*, "UnityEngine.EventSystems", "BaseInputModule");
