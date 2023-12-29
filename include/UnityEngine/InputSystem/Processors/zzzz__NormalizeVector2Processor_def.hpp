#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NormalizeVector2Processor)
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class NormalizeVector2Processor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Processors::NormalizeVector2Processor);
// Type: UnityEngine.InputSystem.Processors::NormalizeVector2Processor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6322)), TypeDefinitionIndex(TypeDefinitionIndex(10170)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6322), inst: 406
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(6674)) CS Name: ::UnityEngine.InputSystem.Processors::NormalizeVector2Processor*
class CORDL_TYPE NormalizeVector2Processor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2> {
public:
  // Declarations
  /// @brief Method Process addr 0x2978b24 size 0xb4 virtual true final false
  inline ::UnityEngine::Vector2 Process(::UnityEngine::Vector2 value, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ToString addr 0x2978bd8 size 0x40 virtual true final false
  inline ::StringW ToString();

  static inline ::UnityEngine::InputSystem::Processors::NormalizeVector2Processor* New_ctor();

  /// @brief Method .ctor addr 0x2978c18 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NormalizeVector2Processor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NormalizeVector2Processor(NormalizeVector2Processor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NormalizeVector2Processor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NormalizeVector2Processor(NormalizeVector2Processor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NormalizeVector2Processor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Processors::NormalizeVector2Processor, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Processors
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::NormalizeVector2Processor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::NormalizeVector2Processor*, "UnityEngine.InputSystem.Processors", "NormalizeVector2Processor");
