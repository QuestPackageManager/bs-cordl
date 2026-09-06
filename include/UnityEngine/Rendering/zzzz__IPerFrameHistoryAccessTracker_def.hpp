#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IPerFrameHistoryAccessTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ContextItem_def.hpp"
CORDL_MODULE_EXPORT(IPerFrameHistoryAccessTracker)
// Forward declare root types
namespace UnityEngine::Rendering {
class IPerFrameHistoryAccessTracker;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::IPerFrameHistoryAccessTracker*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::IPerFrameHistoryAccessTracker*, "UnityEngine.Rendering", "IPerFrameHistoryAccessTracker");
// Dependencies UnityEngine.Rendering.ContextItem
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.IPerFrameHistoryAccessTracker
class CORDL_TYPE IPerFrameHistoryAccessTracker {
public:
  // Declarations
  /// @brief Method RequestAccess, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename Type>
    requires(::cordl_internals::type_constraint<Type, ::UnityEngine::Rendering::ContextItem*>)
  inline void RequestAccess();

  // Ctor Parameters [CppParam { name: "", ty: "IPerFrameHistoryAccessTracker", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPerFrameHistoryAccessTracker(IPerFrameHistoryAccessTrackerconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11863 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
