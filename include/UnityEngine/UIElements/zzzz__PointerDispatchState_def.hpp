#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: UnityEngine.UIElements::PointerDispatchState
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6775))
// CS Name: ::UnityEngine.UIElements::PointerDispatchState*
class CORDL_TYPE PointerDispatchState : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_PendingPointerCapture, offset 0x10, size 0x8
  __declspec(property(get = __get_m_PendingPointerCapture,
                      put = __set_m_PendingPointerCapture))::ArrayW<::UnityEngine::UIElements::IEventHandler*, ::Array<::UnityEngine::UIElements::IEventHandler*>*> m_PendingPointerCapture;

  /// @brief Field m_PointerCapture, offset 0x18, size 0x8
  __declspec(property(get = __get_m_PointerCapture,
                      put = __set_m_PointerCapture))::ArrayW<::UnityEngine::UIElements::IEventHandler*, ::Array<::UnityEngine::UIElements::IEventHandler*>*> m_PointerCapture;

  /// @brief Field m_ShouldSendCompatibilityMouseEvents, offset 0x20, size 0x8
  __declspec(property(get = __get_m_ShouldSendCompatibilityMouseEvents, put = __set_m_ShouldSendCompatibilityMouseEvents))::ArrayW<bool, ::Array<bool>*> m_ShouldSendCompatibilityMouseEvents;

  constexpr ::ArrayW<::UnityEngine::UIElements::IEventHandler*, ::Array<::UnityEngine::UIElements::IEventHandler*>*>& __get_m_PendingPointerCapture();

  constexpr ::ArrayW<::UnityEngine::UIElements::IEventHandler*, ::Array<::UnityEngine::UIElements::IEventHandler*>*> const& __get_m_PendingPointerCapture() const;

  constexpr void __set_m_PendingPointerCapture(::ArrayW<::UnityEngine::UIElements::IEventHandler*, ::Array<::UnityEngine::UIElements::IEventHandler*>*> value);

  constexpr ::ArrayW<::UnityEngine::UIElements::IEventHandler*, ::Array<::UnityEngine::UIElements::IEventHandler*>*>& __get_m_PointerCapture();

  constexpr ::ArrayW<::UnityEngine::UIElements::IEventHandler*, ::Array<::UnityEngine::UIElements::IEventHandler*>*> const& __get_m_PointerCapture() const;

  constexpr void __set_m_PointerCapture(::ArrayW<::UnityEngine::UIElements::IEventHandler*, ::Array<::UnityEngine::UIElements::IEventHandler*>*> value);

  constexpr ::ArrayW<bool, ::Array<bool>*>& __get_m_ShouldSendCompatibilityMouseEvents();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __get_m_ShouldSendCompatibilityMouseEvents() const;

  constexpr void __set_m_ShouldSendCompatibilityMouseEvents(::ArrayW<bool, ::Array<bool>*> value);

  static inline ::UnityEngine::UIElements::PointerDispatchState* New_ctor();

  /// @brief Method .ctor addr 0x2db8eac size 0xd8 virtual false final false
  inline void _ctor();

  /// @brief Method Reset addr 0x2db8f84 size 0x90 virtual false final false
  inline void Reset();

  /// @brief Method GetCapturingElement addr 0x2db7f28 size 0x30 virtual false final false
  inline ::UnityEngine::UIElements::IEventHandler* GetCapturingElement(int32_t pointerId);

  /// @brief Method HasPointerCapture addr 0x2db7c40 size 0x38 virtual false final false
  inline bool HasPointerCapture(::UnityEngine::UIElements::IEventHandler* handler, int32_t pointerId);

  /// @brief Method CapturePointer addr 0x2db7cb0 size 0x13c virtual false final false
  inline void CapturePointer(::UnityEngine::UIElements::IEventHandler* handler, int32_t pointerId);

  /// @brief Method ReleasePointer addr 0x2db801c size 0x30 virtual false final false
  inline void ReleasePointer(int32_t pointerId);

  /// @brief Method ReleasePointer addr 0x2db7e24 size 0x3c virtual false final false
  inline void ReleasePointer(::UnityEngine::UIElements::IEventHandler* handler, int32_t pointerId);

  /// @brief Method ProcessPointerCapture addr 0x2db8554 size 0x958 virtual false final false
  inline void ProcessPointerCapture(int32_t pointerId);

  /// @brief Method ActivateCompatibilityMouseEvents addr 0x2db8110 size 0x34 virtual false final false
  inline void ActivateCompatibilityMouseEvents(int32_t pointerId);

  /// @brief Method PreventCompatibilityMouseEvents addr 0x2db8208 size 0x30 virtual false final false
  inline void PreventCompatibilityMouseEvents(int32_t pointerId);

  /// @brief Method ShouldSendCompatibilityMouseEvents addr 0x2db835c size 0x134 virtual false final false
  inline bool ShouldSendCompatibilityMouseEvents(::UnityEngine::UIElements::IPointerEvent* evt);

  // Ctor Parameters [CppParam { name: "", ty: "PointerDispatchState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerDispatchState(PointerDispatchState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerDispatchState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerDispatchState(PointerDispatchState const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerDispatchState();

public:
  /// @brief Field m_PendingPointerCapture, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::IEventHandler*, ::Array<::UnityEngine::UIElements::IEventHandler*>*> ___m_PendingPointerCapture;

  /// @brief Field m_PointerCapture, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::IEventHandler*, ::Array<::UnityEngine::UIElements::IEventHandler*>*> ___m_PointerCapture;

  /// @brief Field m_ShouldSendCompatibilityMouseEvents, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___m_ShouldSendCompatibilityMouseEvents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerDispatchState, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerDispatchState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerDispatchState*, "UnityEngine.UIElements", "PointerDispatchState");
