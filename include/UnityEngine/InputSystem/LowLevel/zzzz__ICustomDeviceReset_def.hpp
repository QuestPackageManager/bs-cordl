#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/ICustomDeviceReset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICustomDeviceReset)
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class ICustomDeviceReset;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset);
// Dependencies
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.ICustomDeviceReset
class CORDL_TYPE ICustomDeviceReset {
public:
  // Declarations
  /// @brief Method Reset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "ICustomDeviceReset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICustomDeviceReset(ICustomDeviceReset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8963 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset*, "UnityEngine.InputSystem.LowLevel", "ICustomDeviceReset");
