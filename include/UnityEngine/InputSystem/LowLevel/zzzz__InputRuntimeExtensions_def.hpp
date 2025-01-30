#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputRuntimeExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InputRuntimeExtensions)
namespace UnityEngine::InputSystem::LowLevel {
class IInputRuntime;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class InputRuntimeExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::InputRuntimeExtensions);
// Dependencies System.Object
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.InputRuntimeExtensions
class CORDL_TYPE InputRuntimeExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method DeviceCommand, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TCommand> static inline int64_t DeviceCommand(::UnityEngine::InputSystem::LowLevel::IInputRuntime* runtime, int32_t deviceId, ::ByRef<TCommand> command);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputRuntimeExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputRuntimeExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputRuntimeExtensions(InputRuntimeExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputRuntimeExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputRuntimeExtensions(InputRuntimeExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6959 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputRuntimeExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputRuntimeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputRuntimeExtensions*, "UnityEngine.InputSystem.LowLevel", "InputRuntimeExtensions");
