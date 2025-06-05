#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Processors/CompensateRotationProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CompensateRotationProcessor)
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
struct InputProcessor_CachingPolicy;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class CompensateRotationProcessor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Processors::CompensateRotationProcessor);
// Dependencies UnityEngine.InputSystem.InputProcessor`1<TValue>, UnityEngine.Quaternion
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Processors.CompensateRotationProcessor
class CORDL_TYPE CompensateRotationProcessor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Quaternion> {
public:
  // Declarations
  __declspec(property(get = get_cachingPolicy)) ::UnityEngine::InputSystem::InputProcessor_CachingPolicy cachingPolicy;

  static inline ::UnityEngine::InputSystem::Processors::CompensateRotationProcessor* New_ctor();

  /// @brief Method Process, addr 0x4618abc, size 0x210, virtual true, abstract: false, final false
  inline ::UnityEngine::Quaternion Process(::UnityEngine::Quaternion value, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ToString, addr 0x4618ccc, size 0x40, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x4618d14, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_cachingPolicy, addr 0x4618d0c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputProcessor_CachingPolicy get_cachingPolicy();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompensateRotationProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompensateRotationProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompensateRotationProcessor(CompensateRotationProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompensateRotationProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompensateRotationProcessor(CompensateRotationProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6993 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Processors::CompensateRotationProcessor, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Processors
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::CompensateRotationProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::CompensateRotationProcessor*, "UnityEngine.InputSystem.Processors", "CompensateRotationProcessor");
