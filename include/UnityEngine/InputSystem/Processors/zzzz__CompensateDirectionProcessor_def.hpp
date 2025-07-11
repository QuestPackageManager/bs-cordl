#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Processors/CompensateDirectionProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CompensateDirectionProcessor)
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
struct InputProcessor_CachingPolicy;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class CompensateDirectionProcessor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor);
// Dependencies UnityEngine.InputSystem.InputProcessor`1<TValue>, UnityEngine.Vector3
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Processors.CompensateDirectionProcessor
class CORDL_TYPE CompensateDirectionProcessor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector3> {
public:
  // Declarations
  __declspec(property(get = get_cachingPolicy)) ::UnityEngine::InputSystem::InputProcessor_CachingPolicy cachingPolicy;

  static inline ::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor* New_ctor();

  /// @brief Method Process, addr 0x46184d4, size 0x1f0, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 Process(::UnityEngine::Vector3 value, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ToString, addr 0x46186c4, size 0x40, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x461870c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_cachingPolicy, addr 0x4618704, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputProcessor_CachingPolicy get_cachingPolicy();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompensateDirectionProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompensateDirectionProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompensateDirectionProcessor(CompensateDirectionProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompensateDirectionProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompensateDirectionProcessor(CompensateDirectionProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6992 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Processors
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor*, "UnityEngine.InputSystem.Processors", "CompensateDirectionProcessor");
