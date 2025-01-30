#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Processors/StickDeadzoneProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(StickDeadzoneProcessor)
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class StickDeadzoneProcessor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor);
// Dependencies UnityEngine.InputSystem.InputProcessor`1<TValue>, UnityEngine.Vector2
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Processors.StickDeadzoneProcessor
class CORDL_TYPE StickDeadzoneProcessor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2> {
public:
  // Declarations
  /// @brief Field max, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_max, put = __cordl_internal_set_max)) float_t max;

  __declspec(property(get = get_maxOrDefault)) float_t maxOrDefault;

  /// @brief Field min, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_min, put = __cordl_internal_set_min)) float_t min;

  __declspec(property(get = get_minOrDefault)) float_t minOrDefault;

  /// @brief Method GetDeadZoneAdjustedValue, addr 0x461b274, size 0x68, virtual false, abstract: false, final false
  inline float_t GetDeadZoneAdjustedValue(float_t value);

  static inline ::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor* New_ctor();

  /// @brief Method Process, addr 0x461b1a4, size 0xd0, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 Process(::UnityEngine::Vector2 value, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ToString, addr 0x461b2dc, size 0xa8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr float_t const& __cordl_internal_get_max() const;

  constexpr float_t& __cordl_internal_get_max();

  constexpr float_t const& __cordl_internal_get_min() const;

  constexpr float_t& __cordl_internal_get_min();

  constexpr void __cordl_internal_set_max(float_t value);

  constexpr void __cordl_internal_set_min(float_t value);

  /// @brief Method .ctor, addr 0x461b384, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_maxOrDefault, addr 0x461b134, size 0x70, virtual false, abstract: false, final false
  inline float_t get_maxOrDefault();

  /// @brief Method get_minOrDefault, addr 0x461b0c4, size 0x70, virtual false, abstract: false, final false
  inline float_t get_minOrDefault();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StickDeadzoneProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StickDeadzoneProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StickDeadzoneProcessor(StickDeadzoneProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StickDeadzoneProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StickDeadzoneProcessor(StickDeadzoneProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7001 };

  /// @brief Field min, offset: 0x10, size: 0x4, def value: None
  float_t ___min;

  /// @brief Field max, offset: 0x14, size: 0x4, def value: None
  float_t ___max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor, ___min) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor, ___max) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Processors
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor*, "UnityEngine.InputSystem.Processors", "StickDeadzoneProcessor");
