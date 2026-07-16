#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerEventsHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PointerEventsHelper)
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerEventsHelper;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::PointerEventsHelper*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PointerEventsHelper*, "UnityEngine.UIElements", "PointerEventsHelper");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerEventsHelper
class CORDL_TYPE PointerEventsHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method SendEnterLeave, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TLeaveEvent, typename TEnterEvent>
  static inline void SendEnterLeave(::UnityEngine::UIElements::VisualElement* previousTopElementUnderPointer, ::UnityEngine::UIElements::VisualElement* currentTopElementUnderPointer,
                                    ::UnityEngine::UIElements::IPointerEvent* triggerEvent, ::UnityEngine::Vector2 position, int32_t pointerId);

  /// @brief Method SendOverOut, addr 0x6d94700, size 0x2c8, virtual false, abstract: false, final false
  static inline void SendOverOut(::UnityEngine::UIElements::VisualElement* previousTopElementUnderPointer, ::UnityEngine::UIElements::VisualElement* currentTopElementUnderPointer,
                                 ::UnityEngine::UIElements::IPointerEvent* triggerEvent, ::UnityEngine::Vector2 position, int32_t pointerId);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerEventsHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerEventsHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerEventsHelper(PointerEventsHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerEventsHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerEventsHelper(PointerEventsHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4514 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::PointerEventsHelper) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
