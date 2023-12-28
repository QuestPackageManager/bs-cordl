#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CompensateRotationProcessor)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class CompensateRotationProcessor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Processors::CompensateRotationProcessor);
// Type: UnityEngine.InputSystem.Processors::CompensateRotationProcessor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6236)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6236), inst: 3342 }),
// TypeDefinitionIndex(TypeDefinitionIndex(10252))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6583)) CS Name: ::UnityEngine.InputSystem.Processors::CompensateRotationProcessor*
class CORDL_TYPE CompensateRotationProcessor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Quaternion> {
public:
  // Declarations
  /// @brief Method Process addr 0x2af90bc size 0x210 virtual true final false
  inline ::UnityEngine::Quaternion Process(::UnityEngine::Quaternion value, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ToString addr 0x2af92cc size 0x40 virtual true final false
  inline ::StringW ToString();

  static inline ::UnityEngine::InputSystem::Processors::CompensateRotationProcessor* New_ctor();

  /// @brief Method .ctor addr 0x2af930c size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CompensateRotationProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompensateRotationProcessor(CompensateRotationProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompensateRotationProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompensateRotationProcessor(CompensateRotationProcessor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompensateRotationProcessor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Processors::CompensateRotationProcessor, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Processors
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::CompensateRotationProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::CompensateRotationProcessor*, "UnityEngine.InputSystem.Processors", "CompensateRotationProcessor");
