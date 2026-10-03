#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ProcessorFunction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProcessorFunction)
// Forward declare root types
namespace UnityEngine::Audio {
struct ProcessorFunction;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::ProcessorFunction);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ProcessorFunction, "UnityEngine.Audio", "ProcessorFunction");
// Dependencies
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.ProcessorFunction
struct CORDL_TYPE ProcessorFunction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __ProcessorFunction_Unwrapped
  enum struct __ProcessorFunction_Unwrapped : uint32_t {
    __E_Process = static_cast<uint32_t>(0x1u),
    __E_Update = static_cast<uint32_t>(0x2u),
    __E_OutputProcessEarly = static_cast<uint32_t>(0x3u),
    __E_OutputProcess = static_cast<uint32_t>(0x4u),
    __E_OutputProcessEnd = static_cast<uint32_t>(0x5u),
    __E_OutputRemoved = static_cast<uint32_t>(0x6u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProcessorFunction_Unwrapped() const noexcept {
    return static_cast<__ProcessorFunction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessorFunction();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
  constexpr ProcessorFunction(uint32_t value__) noexcept;

  /// @brief Field OutputProcess value: U32(4)
  static ::UnityEngine::Audio::ProcessorFunction const OutputProcess;

  /// @brief Field OutputProcessEarly value: U32(3)
  static ::UnityEngine::Audio::ProcessorFunction const OutputProcessEarly;

  /// @brief Field OutputProcessEnd value: U32(5)
  static ::UnityEngine::Audio::ProcessorFunction const OutputProcessEnd;

  /// @brief Field OutputRemoved value: U32(6)
  static ::UnityEngine::Audio::ProcessorFunction const OutputRemoved;

  /// @brief Field Process value: U32(1)
  static ::UnityEngine::Audio::ProcessorFunction const Process;

  /// @brief Field Update value: U32(2)
  static ::UnityEngine::Audio::ProcessorFunction const Update;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20397 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::ProcessorFunction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::ProcessorFunction) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Audio
