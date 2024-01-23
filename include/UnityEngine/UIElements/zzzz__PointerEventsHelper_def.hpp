#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerEventsHelper);
// Type: UnityEngine.UIElements::PointerEventsHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7170))
// CS Name: ::UnityEngine.UIElements::PointerEventsHelper*
class CORDL_TYPE PointerEventsHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method SendEnterLeave, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TLeaveEvent, typename TEnterEvent>
  static inline void SendEnterLeave(::UnityEngine::UIElements::VisualElement* previousTopElementUnderPointer, ::UnityEngine::UIElements::VisualElement* currentTopElementUnderPointer,
                                    ::UnityEngine::UIElements::IPointerEvent* triggerEvent, ::UnityEngine::Vector2 position, int32_t pointerId);

  /// @brief Method SendOverOut, addr 0x2e49228, size 0x380, virtual false, abstract: false, final false
  static inline void SendOverOut(::UnityEngine::UIElements::VisualElement* previousTopElementUnderPointer, ::UnityEngine::UIElements::VisualElement* currentTopElementUnderPointer,
                                 ::UnityEngine::UIElements::IPointerEvent* triggerEvent, ::UnityEngine::Vector2 position, int32_t pointerId);

  // Ctor Parameters [CppParam { name: "", ty: "PointerEventsHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerEventsHelper(PointerEventsHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerEventsHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerEventsHelper(PointerEventsHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerEventsHelper();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerEventsHelper, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerEventsHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerEventsHelper*, "UnityEngine.UIElements", "PointerEventsHelper");
