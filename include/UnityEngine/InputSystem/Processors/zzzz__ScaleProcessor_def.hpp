#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Processors/ScaleProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ScaleProcessor)
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class ScaleProcessor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Processors::ScaleProcessor);
// Type: UnityEngine.InputSystem.Processors::ScaleProcessor
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Processors::ScaleProcessor*
class CORDL_TYPE ScaleProcessor : public ::UnityEngine::InputSystem::InputProcessor_1<float_t> {
public:
  // Declarations
  /// @brief Field factor, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_factor, put = __cordl_internal_set_factor)) float_t factor;

  static inline ::UnityEngine::InputSystem::Processors::ScaleProcessor* New_ctor();

  /// @brief Method Process, addr 0x45a2120, size 0xc, virtual true, abstract: false, final false
  inline float_t Process(float_t value, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ToString, addr 0x45a212c, size 0x84, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr float_t const& __cordl_internal_get_factor() const;

  constexpr float_t& __cordl_internal_get_factor();

  constexpr void __cordl_internal_set_factor(float_t value);

  /// @brief Method .ctor, addr 0x45a21b0, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScaleProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScaleProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScaleProcessor(ScaleProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScaleProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScaleProcessor(ScaleProcessor const&) = delete;

  /// @brief Field factor, offset: 0x10, size: 0x4, def value: None
  float_t ___factor;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6965 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Processors::ScaleProcessor, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Processors::ScaleProcessor, ___factor) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Processors
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::ScaleProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::ScaleProcessor*, "UnityEngine.InputSystem.Processors", "ScaleProcessor");
