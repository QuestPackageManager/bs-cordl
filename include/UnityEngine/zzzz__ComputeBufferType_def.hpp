#pragma once
// IWYU pragma private; include "UnityEngine/ComputeBufferType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ComputeBufferType)
// Forward declare root types
namespace UnityEngine {
struct ComputeBufferType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ComputeBufferType);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ComputeBufferType
struct CORDL_TYPE ComputeBufferType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ComputeBufferType_Unwrapped
  enum struct __ComputeBufferType_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_Raw = static_cast<int32_t>(0x1),
    __E_Append = static_cast<int32_t>(0x2),
    __E_Counter = static_cast<int32_t>(0x4),
    __E_Constant = static_cast<int32_t>(0x8),
    __E_Structured = static_cast<int32_t>(0x10),
    __E_DrawIndirect = static_cast<int32_t>(0x100),
    __E_IndirectArguments = static_cast<int32_t>(0x100),
    __E_GPUMemory = static_cast<int32_t>(0x200),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ComputeBufferType_Unwrapped() const noexcept {
    return static_cast<__ComputeBufferType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ComputeBufferType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ComputeBufferType(int32_t value__) noexcept;

  /// @brief Field Append value: I32(2)
  static ::UnityEngine::ComputeBufferType const Append;

  /// @brief Field Constant value: I32(8)
  static ::UnityEngine::ComputeBufferType const Constant;

  /// @brief Field Counter value: I32(4)
  static ::UnityEngine::ComputeBufferType const Counter;

  /// @brief Field Default value: I32(0)
  static ::UnityEngine::ComputeBufferType const Default;

  /// @brief Field DrawIndirect value: I32(256)
  static ::UnityEngine::ComputeBufferType const DrawIndirect;

  /// @brief Field GPUMemory value: I32(512)
  static ::UnityEngine::ComputeBufferType const GPUMemory;

  /// @brief Field IndirectArguments value: I32(256)
  static ::UnityEngine::ComputeBufferType const IndirectArguments;

  /// @brief Field Raw value: I32(1)
  static ::UnityEngine::ComputeBufferType const Raw;

  /// @brief Field Structured value: I32(16)
  static ::UnityEngine::ComputeBufferType const Structured;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10149 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ComputeBufferType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ComputeBufferType, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ComputeBufferType, "UnityEngine", "ComputeBufferType");
