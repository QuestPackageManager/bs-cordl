#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InvertProcessor)
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class InvertProcessor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Processors::InvertProcessor);
// Type: UnityEngine.InputSystem.Processors::InvertProcessor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Processors::InvertProcessor*
class CORDL_TYPE InvertProcessor : public ::UnityEngine::InputSystem::InputProcessor_1<float_t> {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Processors::InvertProcessor* New_ctor();

  /// @brief Method Process, addr 0x2c407cc, size 0x8, virtual true, abstract: false, final false
  inline float_t Process(float_t value, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ToString, addr 0x2c407d4, size 0x40, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x2c40814, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvertProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvertProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvertProcessor(InvertProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvertProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvertProcessor(InvertProcessor const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Processors::InvertProcessor, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Processors
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::InvertProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::InvertProcessor*, "UnityEngine.InputSystem.Processors", "InvertProcessor");
