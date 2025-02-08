#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Processors/InvertVector3Processor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvertVector3Processor)
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class InvertVector3Processor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Processors::InvertVector3Processor);
// Dependencies UnityEngine.InputSystem.InputProcessor`1<TValue>, UnityEngine.Vector3
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Processors.InvertVector3Processor
class CORDL_TYPE InvertVector3Processor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector3> {
public:
  // Declarations
  /// @brief Field invertX, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_invertX, put = __cordl_internal_set_invertX)) bool invertX;

  /// @brief Field invertY, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_invertY, put = __cordl_internal_set_invertY)) bool invertY;

  /// @brief Field invertZ, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_invertZ, put = __cordl_internal_set_invertZ)) bool invertZ;

  static inline ::UnityEngine::InputSystem::Processors::InvertVector3Processor* New_ctor();

  /// @brief Method Process, addr 0x461d3f4, size 0x34, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 Process(::UnityEngine::Vector3 value, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ToString, addr 0x461d428, size 0xc4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr bool const& __cordl_internal_get_invertX() const;

  constexpr bool& __cordl_internal_get_invertX();

  constexpr bool const& __cordl_internal_get_invertY() const;

  constexpr bool& __cordl_internal_get_invertY();

  constexpr bool const& __cordl_internal_get_invertZ() const;

  constexpr bool& __cordl_internal_get_invertZ();

  constexpr void __cordl_internal_set_invertX(bool value);

  constexpr void __cordl_internal_set_invertY(bool value);

  constexpr void __cordl_internal_set_invertZ(bool value);

  /// @brief Method .ctor, addr 0x461d4ec, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvertVector3Processor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvertVector3Processor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvertVector3Processor(InvertVector3Processor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvertVector3Processor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvertVector3Processor(InvertVector3Processor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6995 };

  /// @brief Field invertX, offset: 0x10, size: 0x1, def value: None
  bool ___invertX;

  /// @brief Field invertY, offset: 0x11, size: 0x1, def value: None
  bool ___invertY;

  /// @brief Field invertZ, offset: 0x12, size: 0x1, def value: None
  bool ___invertZ;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Processors::InvertVector3Processor, ___invertX) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Processors::InvertVector3Processor, ___invertY) == 0x11, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Processors::InvertVector3Processor, ___invertZ) == 0x12, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Processors::InvertVector3Processor, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Processors
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::InvertVector3Processor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::InvertVector3Processor*, "UnityEngine.InputSystem.Processors", "InvertVector3Processor");
