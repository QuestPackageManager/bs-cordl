#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CompensateDirectionProcessor)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class CompensateDirectionProcessor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor);
// Type: UnityEngine.InputSystem.Processors::CompensateDirectionProcessor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(6236)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6236), inst: 412
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(6582)) CS Name: ::UnityEngine.InputSystem.Processors::CompensateDirectionProcessor*
class CORDL_TYPE CompensateDirectionProcessor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector3> {
public:
  // Declarations
  /// @brief Method Process addr 0x2af8e44 size 0x1f0 virtual true final false
  inline ::UnityEngine::Vector3 Process(::UnityEngine::Vector3 value, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ToString addr 0x2af9034 size 0x40 virtual true final false
  inline ::StringW ToString();

  static inline ::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor* New_ctor();

  /// @brief Method .ctor addr 0x2af9074 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CompensateDirectionProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompensateDirectionProcessor(CompensateDirectionProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompensateDirectionProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompensateDirectionProcessor(CompensateDirectionProcessor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompensateDirectionProcessor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Processors
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor*, "UnityEngine.InputSystem.Processors", "CompensateDirectionProcessor");
