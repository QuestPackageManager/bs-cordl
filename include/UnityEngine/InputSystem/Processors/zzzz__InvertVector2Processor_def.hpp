#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvertVector2Processor)
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class InvertVector2Processor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Processors::InvertVector2Processor);
// Type: UnityEngine.InputSystem.Processors::InvertVector2Processor
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 18, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6236)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6236), inst: 411 }),
// TypeDefinitionIndex(TypeDefinitionIndex(10243))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6585)) CS Name: ::UnityEngine.InputSystem.Processors::InvertVector2Processor*
class CORDL_TYPE InvertVector2Processor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2> {
public:
  // Declarations
  /// @brief Field invertX, offset 0x10, size 0x1
  __declspec(property(get = __get_invertX, put = __set_invertX)) bool invertX;

  /// @brief Field invertY, offset 0x11, size 0x1
  __declspec(property(get = __get_invertY, put = __set_invertY)) bool invertY;

  constexpr bool& __get_invertX();

  constexpr bool const& __get_invertX() const;

  constexpr void __set_invertX(bool value);

  constexpr bool& __get_invertY();

  constexpr bool const& __get_invertY() const;

  constexpr void __set_invertY(bool value);

  /// @brief Method Process, addr 0x2af93e4, size 0x24, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 Process(::UnityEngine::Vector2 value, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ToString, addr 0x2af9408, size 0xa0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  static inline ::UnityEngine::InputSystem::Processors::InvertVector2Processor* New_ctor();

  /// @brief Method .ctor, addr 0x2af94a8, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "InvertVector2Processor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvertVector2Processor(InvertVector2Processor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvertVector2Processor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvertVector2Processor(InvertVector2Processor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvertVector2Processor();

public:
  /// @brief Field invertX, offset: 0x10, size: 0x1, def value: None
  bool ___invertX;

  /// @brief Field invertY, offset: 0x11, size: 0x1, def value: None
  bool ___invertY;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Processors::InvertVector2Processor, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Processors::InvertVector2Processor, ___invertX) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Processors::InvertVector2Processor, ___invertY) == 0x11, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Processors
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::InvertVector2Processor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::InvertVector2Processor*, "UnityEngine.InputSystem.Processors", "InvertVector2Processor");
