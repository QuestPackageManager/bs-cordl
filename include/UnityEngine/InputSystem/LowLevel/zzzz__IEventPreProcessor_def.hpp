#pragma once
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
// Type: UnityEngine.InputSystem.LowLevel::IEventPreProcessor
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6497))
// CS Name: ::UnityEngine.InputSystem.LowLevel::IEventPreProcessor*
class CORDL_TYPE IEventPreProcessor {
public:
  // Declarations
  /// @brief Method PreProcessEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool PreProcessEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr);

  // Ctor Parameters [CppParam { name: "", ty: "IEventPreProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IEventPreProcessor(IEventPreProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IEventPreProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEventPreProcessor(IEventPreProcessor const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::IEventPreProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::IEventPreProcessor*, "UnityEngine.InputSystem.LowLevel", "IEventPreProcessor");
