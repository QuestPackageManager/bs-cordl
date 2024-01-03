#pragma once
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
// Type: UnityEngine.InputSystem.Processors::StickDeadzoneProcessor
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10243)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6236), inst: 411 }),
// TypeDefinitionIndex(TypeDefinitionIndex(6236))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6593)) CS Name: ::UnityEngine.InputSystem.Processors::StickDeadzoneProcessor*
class CORDL_TYPE StickDeadzoneProcessor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2> {
public:
  // Declarations
  /// @brief Field min, offset 0x10, size 0x4
  __declspec(property(get = __get_min, put = __set_min)) float_t min;

  /// @brief Field max, offset 0x14, size 0x4
  __declspec(property(get = __get_max, put = __set_max)) float_t max;

  __declspec(property(get = get_minOrDefault)) float_t minOrDefault;

  __declspec(property(get = get_maxOrDefault)) float_t maxOrDefault;

  constexpr float_t& __get_min();

  constexpr float_t const& __get_min() const;

  constexpr void __set_min(float_t value);

  constexpr float_t& __get_max();

  constexpr float_t const& __get_max() const;

  constexpr void __set_max(float_t value);

  /// @brief Method get_minOrDefault, addr 0x2af9e20, size 0x70, virtual false, abstract: false, final false
  inline float_t get_minOrDefault();

  /// @brief Method get_maxOrDefault, addr 0x2af9e90, size 0x70, virtual false, abstract: false, final false
  inline float_t get_maxOrDefault();

  /// @brief Method Process, addr 0x2af9f00, size 0xd0, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 Process(::UnityEngine::Vector2 value, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method GetDeadZoneAdjustedValue, addr 0x2af9fd0, size 0x68, virtual false, abstract: false, final false
  inline float_t GetDeadZoneAdjustedValue(float_t value);

  /// @brief Method ToString, addr 0x2afa038, size 0xa8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  static inline ::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor* New_ctor();

  /// @brief Method .ctor, addr 0x2afa0e0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StickDeadzoneProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StickDeadzoneProcessor(StickDeadzoneProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StickDeadzoneProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StickDeadzoneProcessor(StickDeadzoneProcessor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StickDeadzoneProcessor();

public:
  /// @brief Field min, offset: 0x10, size: 0x4, def value: None
  float_t ___min;

  /// @brief Field max, offset: 0x14, size: 0x4, def value: None
  float_t ___max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor, ___min) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor, ___max) == 0x14, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Processors
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor*, "UnityEngine.InputSystem.Processors", "StickDeadzoneProcessor");
