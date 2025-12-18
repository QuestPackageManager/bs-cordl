#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Processors/ScaleVector3Processor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ScaleVector3Processor)
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class ScaleVector3Processor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Processors::ScaleVector3Processor);
// Dependencies UnityEngine.InputSystem.InputProcessor`1<TValue>, UnityEngine.Vector3
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Processors.ScaleVector3Processor
class CORDL_TYPE ScaleVector3Processor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector3> {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) float_t x;

  /// @brief Field y, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) float_t y;

  /// @brief Field z, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_z, put = __cordl_internal_set_z)) float_t z;

  static inline ::UnityEngine::InputSystem::Processors::ScaleVector3Processor* New_ctor();

  /// @brief Method Process, addr 0x6408a98, size 0x18, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 Process(::UnityEngine::Vector3 value, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ToString, addr 0x6408ab0, size 0xd8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr float_t const& __cordl_internal_get_x() const;

  constexpr float_t& __cordl_internal_get_x();

  constexpr float_t const& __cordl_internal_get_y() const;

  constexpr float_t& __cordl_internal_get_y();

  constexpr float_t const& __cordl_internal_get_z() const;

  constexpr float_t& __cordl_internal_get_z();

  constexpr void __cordl_internal_set_x(float_t value);

  constexpr void __cordl_internal_set_y(float_t value);

  constexpr void __cordl_internal_set_z(float_t value);

  /// @brief Method .ctor, addr 0x6408b88, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScaleVector3Processor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScaleVector3Processor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScaleVector3Processor(ScaleVector3Processor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScaleVector3Processor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScaleVector3Processor(ScaleVector3Processor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9064 };

  /// @brief Field x, offset: 0x10, size: 0x4, def value: None
  float_t ___x;

  /// @brief Field y, offset: 0x14, size: 0x4, def value: None
  float_t ___y;

  /// @brief Field z, offset: 0x18, size: 0x4, def value: None
  float_t ___z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Processors::ScaleVector3Processor, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Processors::ScaleVector3Processor, ___y) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Processors::ScaleVector3Processor, ___z) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Processors::ScaleVector3Processor, 0x20>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Processors
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::ScaleVector3Processor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::ScaleVector3Processor*, "UnityEngine.InputSystem.Processors", "ScaleVector3Processor");
