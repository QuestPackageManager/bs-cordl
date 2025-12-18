#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderQueueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderQueueType)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct RenderQueueType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::RenderQueueType);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.RenderQueueType
struct CORDL_TYPE RenderQueueType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderQueueType_Unwrapped
  enum struct __RenderQueueType_Unwrapped : int32_t {
    __E_Opaque = static_cast<int32_t>(0x0),
    __E_Transparent = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderQueueType_Unwrapped() const noexcept {
    return static_cast<__RenderQueueType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderQueueType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderQueueType(int32_t value__) noexcept;

  /// @brief Field Opaque value: I32(0)
  static ::UnityEngine::Rendering::Universal::RenderQueueType const Opaque;

  /// @brief Field Transparent value: I32(1)
  static ::UnityEngine::Rendering::Universal::RenderQueueType const Transparent;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12887 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderQueueType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RenderQueueType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RenderQueueType, "UnityEngine.Rendering.Universal", "RenderQueueType");
