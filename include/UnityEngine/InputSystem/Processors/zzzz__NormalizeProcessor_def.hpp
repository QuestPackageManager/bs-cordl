#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Processors/NormalizeProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NormalizeProcessor)
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class NormalizeProcessor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Processors::NormalizeProcessor);
// Dependencies UnityEngine.InputSystem.InputProcessor`1<TValue>
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Processors.NormalizeProcessor
class CORDL_TYPE NormalizeProcessor : public ::UnityEngine::InputSystem::InputProcessor_1<float_t> {
public:
  // Declarations
  /// @brief Field max, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_max, put = __cordl_internal_set_max)) float_t max;

  /// @brief Field min, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_min, put = __cordl_internal_set_min)) float_t min;

  /// @brief Field zero, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_zero, put = __cordl_internal_set_zero)) float_t zero;

  /// @brief Method Denormalize, addr 0x4617764, size 0x48, virtual false, abstract: false, final false
  static inline float_t Denormalize(float_t value, float_t min, float_t max, float_t zero);

  static inline ::UnityEngine::InputSystem::Processors::NormalizeProcessor* New_ctor();

  /// @brief Method Normalize, addr 0x4617694, size 0xd0, virtual false, abstract: false, final false
  static inline float_t Normalize(float_t value, float_t min, float_t max, float_t zero);

  /// @brief Method Process, addr 0x4617688, size 0xc, virtual true, abstract: false, final false
  inline float_t Process(float_t value, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ToString, addr 0x46177ac, size 0xc4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr float_t const& __cordl_internal_get_max() const;

  constexpr float_t& __cordl_internal_get_max();

  constexpr float_t const& __cordl_internal_get_min() const;

  constexpr float_t& __cordl_internal_get_min();

  constexpr float_t const& __cordl_internal_get_zero() const;

  constexpr float_t& __cordl_internal_get_zero();

  constexpr void __cordl_internal_set_max(float_t value);

  constexpr void __cordl_internal_set_min(float_t value);

  constexpr void __cordl_internal_set_zero(float_t value);

  /// @brief Method .ctor, addr 0x4617870, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NormalizeProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NormalizeProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NormalizeProcessor(NormalizeProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NormalizeProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NormalizeProcessor(NormalizeProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6992 };

  /// @brief Field min, offset: 0x10, size: 0x4, def value: None
  float_t ___min;

  /// @brief Field max, offset: 0x14, size: 0x4, def value: None
  float_t ___max;

  /// @brief Field zero, offset: 0x18, size: 0x4, def value: None
  float_t ___zero;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Processors::NormalizeProcessor, ___min) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Processors::NormalizeProcessor, ___max) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Processors::NormalizeProcessor, ___zero) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Processors::NormalizeProcessor, 0x20>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Processors
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::NormalizeProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::NormalizeProcessor*, "UnityEngine.InputSystem.Processors", "NormalizeProcessor");
