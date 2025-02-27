#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/IEventPreProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEventPreProcessor)
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class IEventPreProcessor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::IEventPreProcessor);
// Dependencies
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.IEventPreProcessor
class CORDL_TYPE IEventPreProcessor {
public:
  // Declarations
  /// @brief Method PreProcessEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool PreProcessEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr);

  // Ctor Parameters [CppParam { name: "", ty: "IEventPreProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEventPreProcessor(IEventPreProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6907 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::IEventPreProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::IEventPreProcessor*, "UnityEngine.InputSystem.LowLevel", "IEventPreProcessor");
