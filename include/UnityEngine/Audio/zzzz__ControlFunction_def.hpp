#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ControlFunction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ControlFunction)
// Forward declare root types
namespace UnityEngine::Audio {
struct ControlFunction;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::ControlFunction);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ControlFunction, "UnityEngine.Audio", "ControlFunction");
// Dependencies
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.ControlFunction
struct CORDL_TYPE ControlFunction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __ControlFunction_Unwrapped
  enum struct __ControlFunction_Unwrapped : uint32_t {
    __E_Dispose = static_cast<uint32_t>(0x100u),
    __E_Configure = static_cast<uint32_t>(0x101u),
    __E_Update = static_cast<uint32_t>(0x102u),
    __E_Message = static_cast<uint32_t>(0x103u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ControlFunction_Unwrapped() const noexcept {
    return static_cast<__ControlFunction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ControlFunction();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
  constexpr ControlFunction(uint32_t value__) noexcept;

  /// @brief Field Configure value: U32(257)
  static ::UnityEngine::Audio::ControlFunction const Configure;

  /// @brief Field Dispose value: U32(256)
  static ::UnityEngine::Audio::ControlFunction const Dispose;

  /// @brief Field Message value: U32(259)
  static ::UnityEngine::Audio::ControlFunction const Message;

  /// @brief Field Update value: U32(258)
  static ::UnityEngine::Audio::ControlFunction const Update;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20398 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::ControlFunction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::ControlFunction) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Audio
