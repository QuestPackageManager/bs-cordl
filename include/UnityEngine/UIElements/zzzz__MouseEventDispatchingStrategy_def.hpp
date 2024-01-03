#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(MouseEventDispatchingStrategy)
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IEventDispatchingStrategy;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseEventDispatchingStrategy;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseEventDispatchingStrategy);
// Type: UnityEngine.UIElements::MouseEventDispatchingStrategy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7237))
// CS Name: ::UnityEngine.UIElements::MouseEventDispatchingStrategy*
class CORDL_TYPE MouseEventDispatchingStrategy : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::UIElements::IEventDispatchingStrategy"
  constexpr operator ::UnityEngine::UIElements::IEventDispatchingStrategy*() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IEventDispatchingStrategy"
  constexpr ::UnityEngine::UIElements::IEventDispatchingStrategy* i___UnityEngine__UIElements__IEventDispatchingStrategy() noexcept;

  /// @brief Method CanDispatchEvent, addr 0x2e52288, size 0x54, virtual true, abstract: false, final true
  inline bool CanDispatchEvent(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method DispatchEvent, addr 0x2e522dc, size 0x108, virtual true, abstract: false, final true
  inline void DispatchEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::IPanel* iPanel);

  /// @brief Method SendEventToTarget, addr 0x2e52484, size 0x3c, virtual false, abstract: false, final false
  static inline bool SendEventToTarget(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method SendEventToRegularTarget, addr 0x2e524c0, size 0x38, virtual false, abstract: false, final false
  static inline bool SendEventToRegularTarget(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method SendEventToIMGUIContainer, addr 0x2e524f8, size 0x1d8, virtual false, abstract: false, final false
  static inline bool SendEventToIMGUIContainer(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method SetBestTargetForEvent, addr 0x2e523e4, size 0xa0, virtual false, abstract: false, final false
  static inline void SetBestTargetForEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method UpdateElementUnderMouse, addr 0x2e52718, size 0x2fc, virtual false, abstract: false, final false
  static inline void UpdateElementUnderMouse(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                             ByRef<::UnityEngine::UIElements::VisualElement*> elementUnderMouse);

  /// @brief Method IsDone, addr 0x2e526d0, size 0x48, virtual false, abstract: false, final false
  static inline bool IsDone(::UnityEngine::UIElements::EventBase* evt);

  static inline ::UnityEngine::UIElements::MouseEventDispatchingStrategy* New_ctor();

  /// @brief Method .ctor, addr 0x2e52a14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MouseEventDispatchingStrategy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseEventDispatchingStrategy(MouseEventDispatchingStrategy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseEventDispatchingStrategy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseEventDispatchingStrategy(MouseEventDispatchingStrategy const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseEventDispatchingStrategy();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseEventDispatchingStrategy, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseEventDispatchingStrategy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseEventDispatchingStrategy*, "UnityEngine.UIElements", "MouseEventDispatchingStrategy");
