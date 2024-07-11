#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IMGUIEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
CORDL_MODULE_EXPORT(IMGUIEvent)
namespace UnityEngine {
class Event;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IMGUIEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IMGUIEvent);
// Type: UnityEngine.UIElements::IMGUIEvent
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 124, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::IMGUIEvent*
class CORDL_TYPE IMGUIEvent : public ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::IMGUIEvent*> {
public:
  // Declarations
  /// @brief Method GetPooled, addr 0x35dfc94, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::IMGUIEvent* GetPooled(::UnityEngine::Event* systemEvent);

  /// @brief Method Init, addr 0x35dfdcc, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x35dfe20, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::IMGUIEvent* New_ctor();

  /// @brief Method .ctor, addr 0x35dfe2c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IMGUIEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IMGUIEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMGUIEvent(IMGUIEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMGUIEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMGUIEvent(IMGUIEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::IMGUIEvent, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IMGUIEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IMGUIEvent*, "UnityEngine.UIElements", "IMGUIEvent");
