#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ComputeQueueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ComputeQueueType)
// Forward declare root types
namespace UnityEngine::Rendering {
struct ComputeQueueType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ComputeQueueType);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ComputeQueueType
struct CORDL_TYPE ComputeQueueType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ComputeQueueType_Unwrapped
  enum struct __ComputeQueueType_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_Background = static_cast<int32_t>(0x1),
    __E_Urgent = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ComputeQueueType_Unwrapped() const noexcept {
    return static_cast<__ComputeQueueType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ComputeQueueType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ComputeQueueType(int32_t value__) noexcept;

  /// @brief Field Background value: I32(1)
  static ::UnityEngine::Rendering::ComputeQueueType const Background;

  /// @brief Field Default value: I32(0)
  static ::UnityEngine::Rendering::ComputeQueueType const Default;

  /// @brief Field Urgent value: I32(2)
  static ::UnityEngine::Rendering::ComputeQueueType const Urgent;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11210 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ComputeQueueType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ComputeQueueType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ComputeQueueType, "UnityEngine.Rendering", "ComputeQueueType");
