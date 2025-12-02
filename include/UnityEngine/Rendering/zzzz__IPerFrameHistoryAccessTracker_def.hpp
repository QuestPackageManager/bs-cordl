#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IPerFrameHistoryAccessTracker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPerFrameHistoryAccessTracker)
// Forward declare root types
namespace UnityEngine::Rendering {
class IPerFrameHistoryAccessTracker;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::IPerFrameHistoryAccessTracker);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.IPerFrameHistoryAccessTracker
class CORDL_TYPE IPerFrameHistoryAccessTracker {
public:
  // Declarations
  /// @brief Method RequestAccess, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename Type> inline void RequestAccess();

  // Ctor Parameters [CppParam { name: "", ty: "IPerFrameHistoryAccessTracker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPerFrameHistoryAccessTracker(IPerFrameHistoryAccessTracker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11834 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::IPerFrameHistoryAccessTracker);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IPerFrameHistoryAccessTracker*, "UnityEngine.Rendering", "IPerFrameHistoryAccessTracker");
