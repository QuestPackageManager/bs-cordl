#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(PointerEventDispatchingStrategy)
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
class PointerEventDispatchingStrategy;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerEventDispatchingStrategy);
// Type: UnityEngine.UIElements::PointerEventDispatchingStrategy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::PointerEventDispatchingStrategy*
class CORDL_TYPE PointerEventDispatchingStrategy : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::UIElements::IEventDispatchingStrategy"
  constexpr operator ::UnityEngine::UIElements::IEventDispatchingStrategy*() noexcept;

  /// @brief Method CanDispatchEvent, addr 0x339a22c, size 0x54, virtual true, abstract: false, final true
  inline bool CanDispatchEvent(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method DispatchEvent, addr 0x339a280, size 0x38, virtual true, abstract: false, final false
  inline void DispatchEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::IPanel* panel);

  static inline ::UnityEngine::UIElements::PointerEventDispatchingStrategy* New_ctor();

  /// @brief Method SendEventToTarget, addr 0x339a4f4, size 0x24, virtual false, abstract: false, final false
  static inline void SendEventToTarget(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method SetBestTargetForEvent, addr 0x339a2b8, size 0x23c, virtual false, abstract: false, final false
  static inline void SetBestTargetForEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method UpdateElementUnderPointer, addr 0x339a518, size 0x2ac, virtual false, abstract: false, final false
  static inline void UpdateElementUnderPointer(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::IPanel* panel,
                                               ByRef<::UnityEngine::UIElements::VisualElement*> elementUnderPointer);

  /// @brief Method .ctor, addr 0x339a7c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::UIElements::IEventDispatchingStrategy"
  constexpr ::UnityEngine::UIElements::IEventDispatchingStrategy* i___UnityEngine__UIElements__IEventDispatchingStrategy() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerEventDispatchingStrategy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerEventDispatchingStrategy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerEventDispatchingStrategy(PointerEventDispatchingStrategy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerEventDispatchingStrategy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerEventDispatchingStrategy(PointerEventDispatchingStrategy const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerEventDispatchingStrategy, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerEventDispatchingStrategy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerEventDispatchingStrategy*, "UnityEngine.UIElements", "PointerEventDispatchingStrategy");
