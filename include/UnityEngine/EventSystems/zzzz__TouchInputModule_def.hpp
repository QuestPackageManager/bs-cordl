#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/TouchInputModule.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__PointerInputModule_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TouchInputModule)
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class TouchInputModule;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::TouchInputModule);
// Dependencies UnityEngine.EventSystems.PointerInputModule, UnityEngine.Vector2
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: UnityEngine.EventSystems.TouchInputModule
class CORDL_TYPE TouchInputModule : public ::UnityEngine::EventSystems::PointerInputModule {
public:
  // Declarations
  __declspec(property(get = get_allowActivationOnStandalone, put = set_allowActivationOnStandalone)) bool allowActivationOnStandalone;

  __declspec(property(get = get_forceModuleActive, put = set_forceModuleActive)) bool forceModuleActive;

  /// @brief Field m_ForceModuleActive, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ForceModuleActive, put = __cordl_internal_set_m_ForceModuleActive)) bool m_ForceModuleActive;

  /// @brief Field m_InputPointerEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InputPointerEvent, put = __cordl_internal_set_m_InputPointerEvent)) ::UnityEngine::EventSystems::PointerEventData* m_InputPointerEvent;

  /// @brief Field m_LastMousePosition, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastMousePosition, put = __cordl_internal_set_m_LastMousePosition)) ::UnityEngine::Vector2 m_LastMousePosition;

  /// @brief Field m_MousePosition, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MousePosition, put = __cordl_internal_set_m_MousePosition)) ::UnityEngine::Vector2 m_MousePosition;

  /// @brief Method DeactivateModule, addr 0x6c574d4, size 0x4, virtual true, abstract: false, final false
  inline void DeactivateModule();

  /// @brief Method FakeTouches, addr 0x6c56b40, size 0x12c, virtual false, abstract: false, final false
  inline void FakeTouches();

  /// @brief Method IsModuleSupported, addr 0x6c56a04, size 0x38, virtual true, abstract: false, final false
  inline bool IsModuleSupported();

  static inline ::UnityEngine::EventSystems::TouchInputModule* New_ctor();

  /// @brief Method Process, addr 0x6c56b18, size 0x28, virtual true, abstract: false, final false
  inline void Process();

  /// @brief Method ProcessTouchEvents, addr 0x6c56c6c, size 0x164, virtual false, abstract: false, final false
  inline void ProcessTouchEvents();

  /// @brief Method ProcessTouchPress, addr 0x6c56dd0, size 0x704, virtual false, abstract: false, final false
  inline void ProcessTouchPress(::UnityEngine::EventSystems::PointerEventData* pointerEvent, bool pressed, bool released);

  /// @brief Method ShouldActivateModule, addr 0x6c56a3c, size 0xac, virtual true, abstract: false, final false
  inline bool ShouldActivateModule();

  /// @brief Method ToString, addr 0x6c574d8, size 0x21c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UpdateModule, addr 0x6c56898, size 0x16c, virtual true, abstract: false, final false
  inline void UpdateModule();

  /// @brief Method UseFakeInput, addr 0x6c56ae8, size 0x30, virtual false, abstract: false, final false
  inline bool UseFakeInput();

  constexpr bool const& __cordl_internal_get_m_ForceModuleActive() const;

  constexpr bool& __cordl_internal_get_m_ForceModuleActive();

  constexpr ::UnityEngine::EventSystems::PointerEventData* const& __cordl_internal_get_m_InputPointerEvent() const;

  constexpr ::UnityEngine::EventSystems::PointerEventData*& __cordl_internal_get_m_InputPointerEvent();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_LastMousePosition() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_LastMousePosition();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_MousePosition() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_MousePosition();

  constexpr void __cordl_internal_set_m_ForceModuleActive(bool value);

  constexpr void __cordl_internal_set_m_InputPointerEvent(::UnityEngine::EventSystems::PointerEventData* value);

  constexpr void __cordl_internal_set_m_LastMousePosition(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_MousePosition(::UnityEngine::Vector2 value);

  /// @brief Method .ctor, addr 0x6c56874, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allowActivationOnStandalone, addr 0x6c56878, size 0x8, virtual false, abstract: false, final false
  inline bool get_allowActivationOnStandalone();

  /// @brief Method get_forceModuleActive, addr 0x6c56888, size 0x8, virtual false, abstract: false, final false
  inline bool get_forceModuleActive();

  /// @brief Method set_allowActivationOnStandalone, addr 0x6c56880, size 0x8, virtual false, abstract: false, final false
  inline void set_allowActivationOnStandalone(bool value);

  /// @brief Method set_forceModuleActive, addr 0x6c56890, size 0x8, virtual false, abstract: false, final false
  inline void set_forceModuleActive(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TouchInputModule();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TouchInputModule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TouchInputModule(TouchInputModule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TouchInputModule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TouchInputModule(TouchInputModule const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17543 };

  /// @brief Field m_LastMousePosition, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_LastMousePosition;

  /// @brief Field m_MousePosition, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_MousePosition;

  /// @brief Field m_InputPointerEvent, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::EventSystems::PointerEventData* ___m_InputPointerEvent;

  /// @brief Field m_ForceModuleActive, offset: 0x80, size: 0x1, def value: None
  bool ___m_ForceModuleActive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::EventSystems::TouchInputModule, ___m_LastMousePosition) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::TouchInputModule, ___m_MousePosition) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::TouchInputModule, ___m_InputPointerEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::TouchInputModule, ___m_ForceModuleActive) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::TouchInputModule, 0x88>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::TouchInputModule);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::TouchInputModule*, "UnityEngine.EventSystems", "TouchInputModule");
