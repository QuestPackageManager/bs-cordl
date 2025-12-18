#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/IEventMerger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEventMerger)
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class IEventMerger;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::IEventMerger);
// Dependencies
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.IEventMerger
class CORDL_TYPE IEventMerger {
public:
  // Declarations
  /// @brief Method MergeForward, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr);

  // Ctor Parameters [CppParam { name: "", ty: "IEventMerger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEventMerger(IEventMerger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8968 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::IEventMerger);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::IEventMerger*, "UnityEngine.InputSystem.LowLevel", "IEventMerger");
