#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IEventDispatchingStrategy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEventDispatchingStrategy)
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IEventDispatchingStrategy;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IEventDispatchingStrategy);
// Type: UnityEngine.UIElements::IEventDispatchingStrategy
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::IEventDispatchingStrategy*
class CORDL_TYPE IEventDispatchingStrategy {
public:
  // Declarations
  /// @brief Method CanDispatchEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool CanDispatchEvent(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method DispatchEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void DispatchEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::IPanel* panel);

  // Ctor Parameters [CppParam { name: "", ty: "IEventDispatchingStrategy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IEventDispatchingStrategy(IEventDispatchingStrategy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IEventDispatchingStrategy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEventDispatchingStrategy(IEventDispatchingStrategy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5807 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IEventDispatchingStrategy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IEventDispatchingStrategy*, "UnityEngine.UIElements", "IEventDispatchingStrategy");
