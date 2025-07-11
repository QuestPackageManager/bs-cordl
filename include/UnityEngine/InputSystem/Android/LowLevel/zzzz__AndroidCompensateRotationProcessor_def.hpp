#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/LowLevel/AndroidCompensateRotationProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Processors/zzzz__CompensateRotationProcessor_def.hpp"
CORDL_MODULE_EXPORT(AndroidCompensateRotationProcessor)
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
class AndroidCompensateRotationProcessor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor);
// Dependencies UnityEngine.InputSystem.Processors.CompensateRotationProcessor
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidCompensateRotationProcessor
class CORDL_TYPE AndroidCompensateRotationProcessor : public ::UnityEngine::InputSystem::Processors::CompensateRotationProcessor {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor* New_ctor();

  /// @brief Method Process, addr 0x460702c, size 0x34, virtual true, abstract: false, final false
  inline ::UnityEngine::Quaternion Process(::UnityEngine::Quaternion value, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method .ctor, addr 0x4607060, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidCompensateRotationProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidCompensateRotationProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidCompensateRotationProcessor(AndroidCompensateRotationProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidCompensateRotationProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidCompensateRotationProcessor(AndroidCompensateRotationProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6869 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor*, "UnityEngine.InputSystem.Android.LowLevel", "AndroidCompensateRotationProcessor");
