#pragma once
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
// Type: UnityEngine.InputSystem.Processors::NormalizeProcessor
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6236)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6236), inst: 391 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6587))
// CS Name: ::UnityEngine.InputSystem.Processors::NormalizeProcessor*
class CORDL_TYPE NormalizeProcessor : public ::UnityEngine::InputSystem::InputProcessor_1<float_t> {
public:
  // Declarations
  /// @brief Field min, offset 0x10, size 0x4
  __declspec(property(get = __get_min, put = __set_min)) float_t min;

  /// @brief Field max, offset 0x14, size 0x4
  __declspec(property(get = __get_max, put = __set_max)) float_t max;

  /// @brief Field zero, offset 0x18, size 0x4
  __declspec(property(get = __get_zero, put = __set_zero)) float_t zero;

  constexpr float_t& __get_min();

  constexpr float_t const& __get_min() const;

  constexpr void __set_min(float_t value);

  constexpr float_t& __get_max();

  constexpr float_t const& __get_max() const;

  constexpr void __set_max(float_t value);

  constexpr float_t& __get_zero();

  constexpr float_t const& __get_zero() const;

  constexpr void __set_zero(float_t value);

  /// @brief Method Process, addr 0x2af9648, size 0xc, virtual true, abstract: false, final false
  inline float_t Process(float_t value, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method Normalize, addr 0x2af9654, size 0xd0, virtual false, abstract: false, final false
  static inline float_t Normalize(float_t value, float_t min, float_t max, float_t zero);

  /// @brief Method Denormalize, addr 0x2af9724, size 0x48, virtual false, abstract: false, final false
  static inline float_t Denormalize(float_t value, float_t min, float_t max, float_t zero);

  /// @brief Method ToString, addr 0x2af976c, size 0xc4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  static inline ::UnityEngine::InputSystem::Processors::NormalizeProcessor* New_ctor();

  /// @brief Method .ctor, addr 0x2af9830, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NormalizeProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NormalizeProcessor(NormalizeProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NormalizeProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NormalizeProcessor(NormalizeProcessor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NormalizeProcessor();

public:
  /// @brief Field min, offset: 0x10, size: 0x4, def value: None
  float_t ___min;

  /// @brief Field max, offset: 0x14, size: 0x4, def value: None
  float_t ___max;

  /// @brief Field zero, offset: 0x18, size: 0x4, def value: None
  float_t ___zero;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Processors::NormalizeProcessor, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Processors::NormalizeProcessor, ___min) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Processors::NormalizeProcessor, ___max) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Processors::NormalizeProcessor, ___zero) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Processors
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::NormalizeProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::NormalizeProcessor*, "UnityEngine.InputSystem.Processors", "NormalizeProcessor");
