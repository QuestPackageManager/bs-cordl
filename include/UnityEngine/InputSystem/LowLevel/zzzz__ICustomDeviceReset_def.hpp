#pragma once
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
// Type: UnityEngine.InputSystem.LowLevel::ICustomDeviceReset
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5754))
// CS Name: ::UnityEngine.InputSystem.LowLevel::ICustomDeviceReset*
class CORDL_TYPE ICustomDeviceReset {
public:
  // Declarations
  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "ICustomDeviceReset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICustomDeviceReset(ICustomDeviceReset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICustomDeviceReset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICustomDeviceReset(ICustomDeviceReset const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset*, "UnityEngine.InputSystem.LowLevel", "ICustomDeviceReset");
