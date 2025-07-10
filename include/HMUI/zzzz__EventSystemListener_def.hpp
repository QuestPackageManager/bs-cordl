#pragma once
// IWYU pragma private; include "HMUI/EventSystemListener.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EventSystemListener)
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace HMUI {
class EventSystemListener;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::EventSystemListener);
// Dependencies UnityEngine.EventSystems.IEventSystemHandler, UnityEngine.EventSystems.IPointerEnterHandler, UnityEngine.EventSystems.IPointerExitHandler, UnityEngine.MonoBehaviour
namespace HMUI {
// Is value type: false
// CS Name: HMUI.EventSystemListener
class CORDL_TYPE EventSystemListener : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field pointerDidEnterEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_pointerDidEnterEvent,
                      put = __cordl_internal_set_pointerDidEnterEvent)) ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* pointerDidEnterEvent;

  /// @brief Field pointerDidExitEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_pointerDidExitEvent,
                      put = __cordl_internal_set_pointerDidExitEvent)) ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* pointerDidExitEvent;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

  static inline ::HMUI::EventSystemListener* New_ctor();

  /// @brief Method OnPointerEnter, addr 0x39ecf70, size 0x1c, virtual true, abstract: false, final true
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerExit, addr 0x39ecf8c, size 0x1c, virtual true, abstract: false, final true
  inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);

  constexpr ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* const& __cordl_internal_get_pointerDidEnterEvent() const;

  constexpr ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_pointerDidEnterEvent();

  constexpr ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* const& __cordl_internal_get_pointerDidExitEvent() const;

  constexpr ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_pointerDidExitEvent();

  constexpr void __cordl_internal_set_pointerDidEnterEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value);

  constexpr void __cordl_internal_set_pointerDidExitEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method .ctor, addr 0x39ecfa8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_pointerDidEnterEvent, addr 0x39eccb0, size 0xb0, virtual false, abstract: false, final false
  inline void add_pointerDidEnterEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method add_pointerDidExitEvent, addr 0x39ece10, size 0xb0, virtual false, abstract: false, final false
  inline void add_pointerDidExitEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr ::UnityEngine::EventSystems::IPointerExitHandler* i___UnityEngine__EventSystems__IPointerExitHandler() noexcept;

  /// @brief Method remove_pointerDidEnterEvent, addr 0x39ecd60, size 0xb0, virtual false, abstract: false, final false
  inline void remove_pointerDidEnterEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method remove_pointerDidExitEvent, addr 0x39ecec0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_pointerDidExitEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventSystemListener();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventSystemListener", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventSystemListener(EventSystemListener&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventSystemListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventSystemListener(EventSystemListener const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16040 };

  /// @brief Field pointerDidEnterEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* ___pointerDidEnterEvent;

  /// @brief Field pointerDidExitEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* ___pointerDidExitEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::EventSystemListener, ___pointerDidEnterEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::EventSystemListener, ___pointerDidExitEvent) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::EventSystemListener, 0x30>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::EventSystemListener);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::EventSystemListener*, "HMUI", "EventSystemListener");
