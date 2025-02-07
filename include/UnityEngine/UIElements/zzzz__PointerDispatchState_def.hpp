#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerDispatchState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PointerDispatchState)
namespace UnityEngine::UIElements {
class IEventHandler;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerDispatchState;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerDispatchState);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerDispatchState
class CORDL_TYPE PointerDispatchState : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_PendingPointerCapture, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PendingPointerCapture,
                      put = __cordl_internal_set_m_PendingPointerCapture)) ::ArrayW<::UnityEngine::UIElements::IEventHandler*, ::Array<::UnityEngine::UIElements::IEventHandler*>*>
      m_PendingPointerCapture;

  /// @brief Field m_PointerCapture, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PointerCapture,
                      put = __cordl_internal_set_m_PointerCapture)) ::ArrayW<::UnityEngine::UIElements::IEventHandler*, ::Array<::UnityEngine::UIElements::IEventHandler*>*>
      m_PointerCapture;

  /// @brief Field m_ShouldSendCompatibilityMouseEvents, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShouldSendCompatibilityMouseEvents, put = __cordl_internal_set_m_ShouldSendCompatibilityMouseEvents)) ::ArrayW<bool, ::Array<bool>*>
      m_ShouldSendCompatibilityMouseEvents;

  /// @brief Method ActivateCompatibilityMouseEvents, addr 0x4a4a0ac, size 0x34, virtual false, abstract: false, final false
  inline void ActivateCompatibilityMouseEvents(int32_t pointerId);

  /// @brief Method CapturePointer, addr 0x4a49cc4, size 0x12c, virtual false, abstract: false, final false
  inline void CapturePointer(::UnityEngine::UIElements::IEventHandler* handler, int32_t pointerId);

  /// @brief Method GetCapturingElement, addr 0x4a4394c, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IEventHandler* GetCapturingElement(int32_t pointerId);

  /// @brief Method HasPointerCapture, addr 0x4a49c8c, size 0x38, virtual false, abstract: false, final false
  inline bool HasPointerCapture(::UnityEngine::UIElements::IEventHandler* handler, int32_t pointerId);

  static inline ::UnityEngine::UIElements::PointerDispatchState* New_ctor();

  /// @brief Method PreventCompatibilityMouseEvents, addr 0x4a4a1a4, size 0x30, virtual false, abstract: false, final false
  inline void PreventCompatibilityMouseEvents(int32_t pointerId);

  /// @brief Method ProcessPointerCapture, addr 0x4a4a42c, size 0x998, virtual false, abstract: false, final false
  inline void ProcessPointerCapture(int32_t pointerId);

  /// @brief Method ReleasePointer, addr 0x4a49df0, size 0x3c, virtual false, abstract: false, final false
  inline void ReleasePointer(::UnityEngine::UIElements::IEventHandler* handler, int32_t pointerId);

  /// @brief Method ReleasePointer, addr 0x4a49fb8, size 0x30, virtual false, abstract: false, final false
  inline void ReleasePointer(int32_t pointerId);

  /// @brief Method Reset, addr 0x4a4ae9c, size 0x90, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method ShouldSendCompatibilityMouseEvents, addr 0x4a4a2f8, size 0x134, virtual false, abstract: false, final false
  inline bool ShouldSendCompatibilityMouseEvents(::UnityEngine::UIElements::IPointerEvent* evt);

  constexpr ::ArrayW<::UnityEngine::UIElements::IEventHandler*, ::Array<::UnityEngine::UIElements::IEventHandler*>*> const& __cordl_internal_get_m_PendingPointerCapture() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::IEventHandler*, ::Array<::UnityEngine::UIElements::IEventHandler*>*>& __cordl_internal_get_m_PendingPointerCapture();

  constexpr ::ArrayW<::UnityEngine::UIElements::IEventHandler*, ::Array<::UnityEngine::UIElements::IEventHandler*>*> const& __cordl_internal_get_m_PointerCapture() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::IEventHandler*, ::Array<::UnityEngine::UIElements::IEventHandler*>*>& __cordl_internal_get_m_PointerCapture();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_m_ShouldSendCompatibilityMouseEvents() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_m_ShouldSendCompatibilityMouseEvents();

  constexpr void __cordl_internal_set_m_PendingPointerCapture(::ArrayW<::UnityEngine::UIElements::IEventHandler*, ::Array<::UnityEngine::UIElements::IEventHandler*>*> value);

  constexpr void __cordl_internal_set_m_PointerCapture(::ArrayW<::UnityEngine::UIElements::IEventHandler*, ::Array<::UnityEngine::UIElements::IEventHandler*>*> value);

  constexpr void __cordl_internal_set_m_ShouldSendCompatibilityMouseEvents(::ArrayW<bool, ::Array<bool>*> value);

  /// @brief Method .ctor, addr 0x4a4adc4, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerDispatchState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerDispatchState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerDispatchState(PointerDispatchState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerDispatchState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerDispatchState(PointerDispatchState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6020 };

  /// @brief Field m_PendingPointerCapture, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::IEventHandler*, ::Array<::UnityEngine::UIElements::IEventHandler*>*> ___m_PendingPointerCapture;

  /// @brief Field m_PointerCapture, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::IEventHandler*, ::Array<::UnityEngine::UIElements::IEventHandler*>*> ___m_PointerCapture;

  /// @brief Field m_ShouldSendCompatibilityMouseEvents, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___m_ShouldSendCompatibilityMouseEvents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PointerDispatchState, ___m_PendingPointerCapture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PointerDispatchState, ___m_PointerCapture) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PointerDispatchState, ___m_ShouldSendCompatibilityMouseEvents) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerDispatchState, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerDispatchState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerDispatchState*, "UnityEngine.UIElements", "PointerDispatchState");
