#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/CommandEventDispatchingStrategy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventDispatchingStrategy_def.hpp"
CORDL_MODULE_EXPORT(CommandEventDispatchingStrategy)
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class CommandEventDispatchingStrategy;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::CommandEventDispatchingStrategy);
// Dependencies System.Object, UnityEngine.UIElements.IEventDispatchingStrategy
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.CommandEventDispatchingStrategy
class CORDL_TYPE CommandEventDispatchingStrategy : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::UIElements::IEventDispatchingStrategy"
  constexpr operator ::UnityEngine::UIElements::IEventDispatchingStrategy*() noexcept;

  /// @brief Method CanDispatchEvent, addr 0x4a30d9c, size 0x54, virtual true, abstract: false, final true
  inline bool CanDispatchEvent(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method DispatchEvent, addr 0x4a30df0, size 0x2ec, virtual true, abstract: false, final true
  inline void DispatchEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::IPanel* panel);

  static inline ::UnityEngine::UIElements::CommandEventDispatchingStrategy* New_ctor();

  /// @brief Method .ctor, addr 0x4a30538, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::UIElements::IEventDispatchingStrategy"
  constexpr ::UnityEngine::UIElements::IEventDispatchingStrategy* i___UnityEngine__UIElements__IEventDispatchingStrategy() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandEventDispatchingStrategy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandEventDispatchingStrategy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandEventDispatchingStrategy(CommandEventDispatchingStrategy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandEventDispatchingStrategy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandEventDispatchingStrategy(CommandEventDispatchingStrategy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5796 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::CommandEventDispatchingStrategy, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::CommandEventDispatchingStrategy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CommandEventDispatchingStrategy*, "UnityEngine.UIElements", "CommandEventDispatchingStrategy");
