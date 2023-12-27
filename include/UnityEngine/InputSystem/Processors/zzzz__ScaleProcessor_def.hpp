#pragma once
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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6236), inst: 391 }), TypeDefinitionIndex(TypeDefinitionIndex(6236))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6590))
// CS Name: ::UnityEngine.InputSystem.Processors::ScaleProcessor*
class CORDL_TYPE ScaleProcessor : public ::UnityEngine::InputSystem::InputProcessor_1<float_t> {
public:
  // Declarations
  /// @brief Field factor, offset 0x10, size 0x4
  __declspec(property(get = __get_factor, put = __set_factor)) float_t factor;

  constexpr float_t& __get_factor();

  constexpr float_t const& __get_factor() const;

  constexpr void __set_factor(float_t value);

  /// @brief Method Process addr 0x2af9b0c size 0xc virtual true final false
  inline float_t Process(float_t value, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ToString addr 0x2af9b18 size 0x84 virtual true final false
  inline ::StringW ToString();

  static inline ::UnityEngine::InputSystem::Processors::ScaleProcessor* New_ctor();

  /// @brief Method .ctor addr 0x2af9b9c size 0x50 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ScaleProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScaleProcessor(ScaleProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScaleProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScaleProcessor(ScaleProcessor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScaleProcessor();

public:
  /// @brief Field factor, offset: 0x10, size: 0x4, def value: None
  float_t ___factor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Processors::ScaleProcessor, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Processors
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::ScaleProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::ScaleProcessor*, "UnityEngine.InputSystem.Processors", "ScaleProcessor");
