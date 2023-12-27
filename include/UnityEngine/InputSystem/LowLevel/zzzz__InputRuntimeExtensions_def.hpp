#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Type: UnityEngine.InputSystem.LowLevel::InputRuntimeExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6551))
// CS Name: ::UnityEngine.InputSystem.LowLevel::InputRuntimeExtensions*
class CORDL_TYPE InputRuntimeExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method DeviceCommand addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TCommand> static inline int64_t DeviceCommand(::UnityEngine::InputSystem::LowLevel::IInputRuntime* runtime, int32_t deviceId, ByRef<TCommand> command);

  // Ctor Parameters [CppParam { name: "", ty: "InputRuntimeExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputRuntimeExtensions(InputRuntimeExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputRuntimeExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputRuntimeExtensions(InputRuntimeExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputRuntimeExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputRuntimeExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputRuntimeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputRuntimeExtensions*, "UnityEngine.InputSystem.LowLevel", "InputRuntimeExtensions");
