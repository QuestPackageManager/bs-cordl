#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Processors/ClampProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ClampProcessor)
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class ClampProcessor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Processors::ClampProcessor);
// Dependencies UnityEngine.InputSystem.InputProcessor`1<TValue>
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Processors.ClampProcessor
class CORDL_TYPE ClampProcessor : public ::UnityEngine::InputSystem::InputProcessor_1<float_t> {
public:
  // Declarations
  /// @brief Field max, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_max, put = __cordl_internal_set_max)) float_t max;

  /// @brief Field min, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_min, put = __cordl_internal_set_min)) float_t min;

  static inline ::UnityEngine::InputSystem::Processors::ClampProcessor* New_ctor();

  /// @brief Method Process, addr 0x46183d4, size 0x18, virtual true, abstract: false, final false
  inline float_t Process(float_t value, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ToString, addr 0x46183ec, size 0xa0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr float_t const& __cordl_internal_get_max() const;

  constexpr float_t& __cordl_internal_get_max();

  constexpr float_t const& __cordl_internal_get_min() const;

  constexpr float_t& __cordl_internal_get_min();

  constexpr void __cordl_internal_set_max(float_t value);

  constexpr void __cordl_internal_set_min(float_t value);

  /// @brief Method .ctor, addr 0x461848c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClampProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClampProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClampProcessor(ClampProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClampProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClampProcessor(ClampProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6991 };

  /// @brief Field min, offset: 0x10, size: 0x4, def value: None
  float_t ___min;

  /// @brief Field max, offset: 0x14, size: 0x4, def value: None
  float_t ___max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Processors::ClampProcessor, ___min) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Processors::ClampProcessor, ___max) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Processors::ClampProcessor, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Processors
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::ClampProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::ClampProcessor*, "UnityEngine.InputSystem.Processors", "ClampProcessor");
