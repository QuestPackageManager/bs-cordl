#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Processors/AxisDeadzoneProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AxisDeadzoneProcessor)
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class AxisDeadzoneProcessor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor);
// Type: UnityEngine.InputSystem.Processors::AxisDeadzoneProcessor
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Processors::AxisDeadzoneProcessor*
class CORDL_TYPE AxisDeadzoneProcessor : public ::UnityEngine::InputSystem::InputProcessor_1<float_t> {
public:
  // Declarations
  /// @brief Field max, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_max, put = __cordl_internal_set_max)) float_t max;

  __declspec(property(get = get_maxOrDefault)) float_t maxOrDefault;

  /// @brief Field min, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_min, put = __cordl_internal_set_min)) float_t min;

  __declspec(property(get = get_minOrDefault)) float_t minOrDefault;

  static inline ::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor* New_ctor();

  /// @brief Method Process, addr 0x316729c, size 0x68, virtual true, abstract: false, final false
  inline float_t Process(float_t value, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ToString, addr 0x3167304, size 0xa8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr float_t const& __cordl_internal_get_max() const;

  constexpr float_t& __cordl_internal_get_max();

  constexpr float_t const& __cordl_internal_get_min() const;

  constexpr float_t& __cordl_internal_get_min();

  constexpr void __cordl_internal_set_max(float_t value);

  constexpr void __cordl_internal_set_min(float_t value);

  /// @brief Method .ctor, addr 0x31673ac, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_maxOrDefault, addr 0x316722c, size 0x70, virtual false, abstract: false, final false
  inline float_t get_maxOrDefault();

  /// @brief Method get_minOrDefault, addr 0x31671bc, size 0x70, virtual false, abstract: false, final false
  inline float_t get_minOrDefault();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AxisDeadzoneProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AxisDeadzoneProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AxisDeadzoneProcessor(AxisDeadzoneProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AxisDeadzoneProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AxisDeadzoneProcessor(AxisDeadzoneProcessor const&) = delete;

  /// @brief Field min, offset: 0x10, size: 0x4, def value: None
  float_t ___min;

  /// @brief Field max, offset: 0x14, size: 0x4, def value: None
  float_t ___max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor, ___min) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor, ___max) == 0x14, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Processors
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor*, "UnityEngine.InputSystem.Processors", "AxisDeadzoneProcessor");
