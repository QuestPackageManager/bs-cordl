#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ScaleVector2Processor)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class ScaleVector2Processor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Processors::ScaleVector2Processor);
// Type: UnityEngine.InputSystem.Processors::ScaleVector2Processor
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6236)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6236), inst: 411 }),
// TypeDefinitionIndex(TypeDefinitionIndex(10243))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6591)) CS Name: ::UnityEngine.InputSystem.Processors::ScaleVector2Processor*
class CORDL_TYPE ScaleVector2Processor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2> {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x4
  __declspec(property(get = __get_x, put = __set_x)) float_t x;

  /// @brief Field y, offset 0x14, size 0x4
  __declspec(property(get = __get_y, put = __set_y)) float_t y;

  constexpr float_t& __get_x();

  constexpr float_t const& __get_x() const;

  constexpr void __set_x(float_t value);

  constexpr float_t& __get_y();

  constexpr float_t const& __get_y() const;

  constexpr void __set_y(float_t value);

  /// @brief Method Process, addr 0x2af9bec, size 0x10, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 Process(::UnityEngine::Vector2 value, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ToString, addr 0x2af9bfc, size 0xa0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  static inline ::UnityEngine::InputSystem::Processors::ScaleVector2Processor* New_ctor();

  /// @brief Method .ctor, addr 0x2af9c9c, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ScaleVector2Processor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScaleVector2Processor(ScaleVector2Processor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScaleVector2Processor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScaleVector2Processor(ScaleVector2Processor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScaleVector2Processor();

public:
  /// @brief Field x, offset: 0x10, size: 0x4, def value: None
  float_t ___x;

  /// @brief Field y, offset: 0x14, size: 0x4, def value: None
  float_t ___y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Processors::ScaleVector2Processor, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Processors::ScaleVector2Processor, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Processors::ScaleVector2Processor, ___y) == 0x14, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Processors
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::ScaleVector2Processor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::ScaleVector2Processor*, "UnityEngine.InputSystem.Processors", "ScaleVector2Processor");
